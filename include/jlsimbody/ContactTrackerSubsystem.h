#include "SimTKcommon/internal/Subsystem.h"
#include "simmath/internal/Contact.h"
#include "simmath/internal/ContactGeometry.h"
#include "simbody/internal/ContactSurface.h"
#include "simmath/internal/ContactTracker.h"
#include "simbody/internal/MobilizedBody.h"
#include "simbody/internal/ContactTrackerSubsystem.h"
#include "simbody/internal/GeneralContactSubsystem.h"

#ifndef JLSIMBODY_CONTACTTRACKERSUBSYSTEM_H
#define JLSIMBODY_CONTACTTRACKERSUBSYSTEM_H

namespace jlcxx {
  template<> struct IsMirroredType<SimTK::ContactSnapshot> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::ContactSnapshot> : std::false_type { };
  template<> struct IsMirroredType<SimTK::ContactTrackerSubsystem> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::ContactTrackerSubsystem> : std::false_type { };
  template<> struct IsMirroredType<SimTK::GeneralContactSubsystem> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::GeneralContactSubsystem> : std::false_type { };
  template<> struct IsMirroredType<SimTK::ContactSetIndex> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::ContactSetIndex> : std::false_type { };
  template<> struct SuperType<SimTK::ContactTrackerSubsystem> { typedef SimTK::Subsystem type; };
  template<> struct SuperType<SimTK::GeneralContactSubsystem> { typedef SimTK::Subsystem type; };
}

namespace jlsimbody {
  void define_simbody_ContactTrackerSubsystem(jlcxx::Module& types);
}

#endif