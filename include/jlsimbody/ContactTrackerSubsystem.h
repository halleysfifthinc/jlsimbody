#ifndef _JLSIMBODY_CONTACTTRACKERSUBSYSTEM_H
#define _JLSIMBODY_CONTACTTRACKERSUBSYSTEM_H

#include "SimTKcommon/internal/Subsystem.h"
#include "simmath/internal/Contact.h"
#include "simmath/internal/ContactGeometry.h"
#include "simbody/internal/ContactSurface.h"
#include "simmath/internal/ContactTracker.h"
#include "simbody/internal/MobilizedBody.h"
#include "simbody/internal/ContactTrackerSubsystem.h"
#include "simbody/internal/GeneralContactSubsystem.h"

namespace jlcxx {
  template<> struct IsMirroredType<SimTK::ContactSnapshot> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::ContactSnapshot> : std::false_type { };
  template<> struct IsMirroredType<SimTK::ContactTrackerSubsystem> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::ContactTrackerSubsystem> : std::false_type { };
  template<> struct IsMirroredType<SimTK::GeneralContactSubsystem> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::GeneralContactSubsystem> : std::false_type { };
  template<> struct SuperType<SimTK::ContactTrackerSubsystem> { typedef SimTK::Subsystem type; };
  template<> struct SuperType<SimTK::GeneralContactSubsystem> { typedef SimTK::Subsystem type; };

  #ifdef JLSIMBODY_USE_SIMTK_UNIQUEINDEX_TYPES
  template<> struct IsMirroredType<SimTK::ContactSetIndex> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::ContactSetIndex> : std::false_type { };
  #endif
}

namespace jlsimbody {
  JLSIMBODY_NO_EXPORT void define_simbody_ContactTrackerSubsystem(jlcxx::Module& types);
}

#endif // _JLSIMBODY_CONTACTTRACKERSUBSYSTEM_H
