#include "SimTKcommon/internal/EventHandler.h"
#include "SimTKcommon/internal/EventReporter.h"
#include "jlSimTKcommon/Array.h"

namespace jlcxx {
  template<> struct IsMirroredType<SimTK::EventHandler> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::EventHandler> : std::false_type { };
  template<> struct IsMirroredType<SimTK::ScheduledEventHandler> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::ScheduledEventHandler> : std::false_type { };
  template<> struct IsMirroredType<SimTK::TriggeredEventHandler> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::TriggeredEventHandler> : std::false_type { };
  template<> struct IsMirroredType<SimTK::PeriodicEventHandler> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::PeriodicEventHandler> : std::false_type { };
  template<> struct IsMirroredType<SimTK::EventReporter> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::EventReporter> : std::false_type { };
  template<> struct IsMirroredType<SimTK::ScheduledEventReporter> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::ScheduledEventReporter> : std::false_type { };
  template<> struct IsMirroredType<SimTK::TriggeredEventReporter> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::TriggeredEventReporter> : std::false_type { };
  template<> struct IsMirroredType<SimTK::PeriodicEventReporter> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::PeriodicEventReporter> : std::false_type { };
  template<> struct SuperType<SimTK::ScheduledEventHandler> { typedef SimTK::EventHandler type; };
  template<> struct SuperType<SimTK::TriggeredEventHandler> { typedef SimTK::EventHandler type; };
  template<> struct SuperType<SimTK::PeriodicEventHandler> { typedef SimTK::ScheduledEventHandler type; };
  template<> struct SuperType<SimTK::ScheduledEventReporter> { typedef SimTK::EventReporter type; };
  template<> struct SuperType<SimTK::TriggeredEventReporter> { typedef SimTK::EventReporter type; };
  template<> struct SuperType<SimTK::PeriodicEventReporter> { typedef SimTK::ScheduledEventReporter type; };
}

namespace jlsimbody {
  JLSIMBODY_NO_EXPORT void define_SimTKcommon_Events(jlcxx::Module& types, const ArrayWrapper& array_wrapper);
}
