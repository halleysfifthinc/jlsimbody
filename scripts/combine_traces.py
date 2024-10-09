#!/usr/bin/env python3
# From https://www.snsystems.com/technology/tech-blog/clang-time-trace-feature
"""Combine JSON from multiple -ftime-traces into one.
Run with (e.g.): python combine_traces.py foo.json bar.json."""

import json
import sys

if __name__ == '__main__':
    start_time = 0
    combined_data = []
    for filename in sys.argv[2:]:
        with open(filename, 'r') as f:
            file_time = 0
            for event in json.load(f)['traceEvents']:
                # Skip metadata events
                # Skip total events
                # Filter out shorter events to reduce data size
                if event['ph'] == 'M' or event['name'].startswith('Total') or event['dur'] < 5000:
                    continue

                if event['name'] == 'Total ExecuteCompiler':
                    # Find how long this compilation takes
                    file_time = event['dur']
                    # Set the file name in ExecuteCompiler
                    event['args']['detail'] = filename

                # Offset start time to make compiles sequential
                event['ts'] += start_time

                # Add data to combined
                combined_data.append(event)

            # Increase the start time for the next file
            # Add 1 to avoid issues with simultaneous events
            start_time += file_time + 1

    with open(sys.argv[1], 'w') as f:
        json.dump({'traceEvents': sorted(combined_data, key=lambda k: k['ts'])}, f)
