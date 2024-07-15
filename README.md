# jlSimbody

This is the C++ library that wraps [Simbody](https://github.com/simbody/simbody) for use in Julia by [Simbody.jl](https://github.com/halleysfifthinc/Simbody.jl).

## Building

Build dependencies are GCC, CMake (>=3.24), and Julia (>=1.10). (Optional build deps: Ninja, ccache, Mold)

```bash
git clone https://github.com/halleysfifthinc/jlsimbody.git
cmake --preset=default
cmake --build --preset=default
```

(Note: The default build preset uses Ninja; if you don't want to use Ninja or don't have it, add `-G "Unix Makefiles"` to the cmake configure command.)

During the CMake configuration, an override for `"jlsimbody"` is added to `~/.julia/artifacts/Overrides.toml`. This looks like
```toml
[41345730-a986-5d5b-a415-889198d08c6f]
jlsimbody = "/home/user/jlsimbody/out/build/${presetName}"
```

When you no longer wish to use a locally built jlsimbody in Julia, run `cmake --build --preset=${presetName} --target unoverride` to remove those lines from `~/.julia/artifacts/Overrides.toml`.

