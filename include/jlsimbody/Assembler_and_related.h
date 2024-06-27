#ifndef _JLSIMBODY_ASSEMBLER_AND_RELATED_H
#define _JLSIMBODY_ASSEMBLER_AND_RELATED_H

#include "simbody/internal/MultibodySystem.h"
#include "simbody/internal/SimbodyMatterSubsystem.h"
#include "SimTKcommon/internal/State.h"
#include "SimTKcommon/internal/Matrix_.h"
#include "SimTKcommon/internal/Vector_.h"
#include "SimTKcommon/internal/Vec.h"
#include "SimTKcommon/internal/Rotation.h"
#include "SimTKcommon/internal/String.h"
#include "simbody/internal/Assembler.h"
#include "simbody/internal/AssemblyCondition_Markers.h"
#include "simbody/internal/AssemblyCondition_OrientationSensors.h"
#include "simbody/internal/AssemblyCondition_QValue.h"
#include "simbody/internal/AssemblyCondition.h"

#include "jlSimTKcommon/Array.h"

namespace jlcxx {
  template<> struct IsMirroredType<SimTK::Assembler> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::Assembler> : std::false_type { };
  template<> struct IsMirroredType<SimTK::AssemblyCondition> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::AssemblyCondition> : std::false_type { };
  template<> struct IsMirroredType<SimTK::Markers> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::Markers> : std::false_type { };
  template<> struct IsMirroredType<SimTK::OrientationSensors> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::OrientationSensors> : std::false_type { };
  template<> struct IsMirroredType<SimTK::QValue> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::QValue> : std::false_type { };
  template<> struct SuperType<SimTK::Markers> { typedef SimTK::AssemblyCondition type; };
  template<> struct SuperType<SimTK::OrientationSensors> { typedef SimTK::AssemblyCondition type; };
  template<> struct SuperType<SimTK::QValue> { typedef SimTK::AssemblyCondition type; };

  #ifdef JLSIMBODY_USE_SIMTK_UNIQUEINDEX_TYPES
  template<> struct IsMirroredType<SimTK::AssemblyConditionIndex> : std::false_type { };
  template<> struct IsMirroredType<SimTK::Assembler::FreeQIndex> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::Assembler::FreeQIndex> : std::false_type { };
  template<> struct IsMirroredType<SimTK::Markers::MarkerIx> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::Markers::MarkerIx> : std::false_type { };
  template<> struct IsMirroredType<SimTK::Markers::ObservationIx> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::Markers::ObservationIx> : std::false_type { };
  template<> struct IsMirroredType<SimTK::OrientationSensors::OSensorIx> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::OrientationSensors::OSensorIx> : std::false_type { };
  template<> struct IsMirroredType<SimTK::OrientationSensors::ObservationIx> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::OrientationSensors::ObservationIx> : std::false_type { };
  #endif
}

namespace jlsimbody {
  JLSIMBODY_NO_EXPORT void define_simbody_Assembler_and_related(jlcxx::Module& types, const ArrayWrapper& array_wrapper);
}

#endif // _JLSIMBODY_ASSEMBLER_AND_RELATED_H
