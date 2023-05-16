#include "SimTKcommon/internal/EventHandler.h"
#include "SimTKcommon/internal/EventReporter.h"
#include "SimTKcommon/internal/Measure.h"
#include "SimTKcommon/internal/System.h"
#include "SimTKcommon/internal/Subsystem.h"

namespace jlcxx {
  template<> struct IsMirroredType<SimTK::Subsystem> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::Subsystem> : std::false_type { };
  template<> struct IsMirroredType<SimTK::System> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::System> : std::false_type { };
  template<> struct IsMirroredType<SimTK::Subsystem::Guts> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::Subsystem::Guts> : std::false_type { };
  template<> struct IsMirroredType<SimTK::ProjectOptions> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::ProjectOptions> : std::false_type { };
  template<> struct IsMirroredType<SimTK::ProjectResults> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::ProjectResults> : std::false_type { };
  template<> struct IsMirroredType<SimTK::DefaultSystemSubsystem> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::DefaultSystemSubsystem> : std::false_type { };
  template<> struct IsMirroredType<SimTK::RealizeOptions> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::RealizeOptions> : std::false_type { };
  template<> struct IsMirroredType<SimTK::RealizeResults> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::RealizeResults> : std::false_type { };
  template<> struct IsMirroredType<SimTK::CacheEntryInfo> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::CacheEntryInfo> : std::false_type { };
  template<> struct SuperType<SimTK::DefaultSystemSubsystem> { typedef SimTK::Subsystem type; };
}

namespace jlsimbody {
  void define_SimTKcommon_SystemSubsystem(jlcxx::Module& types);
}
