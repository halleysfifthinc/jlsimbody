#ifndef _JLSIMBODY_CABLETRACKERSUBSYSTEM_H
#define _JLSIMBODY_CABLETRACKERSUBSYSTEM_H

#include "SimTKcommon/internal/Subsystem.h"
#include "SimTKcommon/internal/State.h"
#include "SimTKcommon/internal/Vec.h"
#include "SimTKcommon/internal/Vector_.h"
#include "simbody/internal/MobilizedBody.h"
#include "simbody/internal/CableTrackerSubsystem.h"
#include "simbody/internal/CablePath.h"

namespace jlcxx {
  template<> struct IsMirroredType<SimTK::CablePathIndex> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::CablePathIndex> : std::false_type { };
  template<> struct IsMirroredType<SimTK::CablePath> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::CablePath> : std::false_type { };
  template<> struct IsMirroredType<SimTK::CableTrackerSubsystem> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::CableTrackerSubsystem> : std::false_type { };
  template<> struct IsMirroredType<SimTK::CableObstacleIndex> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::CableObstacleIndex> : std::false_type { };
  template<> struct IsMirroredType<SimTK::CableObstacle> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::CableObstacle> : std::false_type { };
  template<> struct IsMirroredType<SimTK::CableObstacle::ViaPoint> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::CableObstacle::ViaPoint> : std::false_type { };
  template<> struct IsMirroredType<SimTK::CableObstacle::Surface> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::CableObstacle::Surface> : std::false_type { };
  template<> struct SuperType<SimTK::CableTrackerSubsystem> { typedef SimTK::Subsystem type; };
  template<> struct SuperType<SimTK::CableObstacle::ViaPoint> { typedef SimTK::CableObstacle type; };
  template<> struct SuperType<SimTK::CableObstacle::Surface> { typedef SimTK::CableObstacle type; };
}

namespace jlsimbody{
  JLSIMBODY_NO_EXPORT void define_simbody_CableTrackerSubsystem(jlcxx::Module& types);
}

#endif // _JLSIMBODY_CABLETRACKERSUBSYSTEM_H
