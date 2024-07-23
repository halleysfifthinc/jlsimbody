#ifndef _JLSIMBODY_FORCE_H
#define _JLSIMBODY_FORCE_H

#include "SimTKcommon/internal/State.h"
#include "SimTKcommon/internal/Subsystem.h"
#include "SimTKcommon/internal/Vec.h"
#include "SimTKcommon/internal/Vector_.h"
#include "simbody/internal/CableSpring.h"
#include "simbody/internal/ElasticFoundationForce.h"
#include "simbody/internal/Force.h"
#include "simbody/internal/ForceSubsystem.h"
#include "simbody/internal/Force_Custom.h"
#include "simbody/internal/Force_DiscreteForces.h"
#include "simbody/internal/Force_Gravity.h"
#include "simbody/internal/Force_LinearBushing.h"
#include "simbody/internal/Force_MobilityConstantForce.h"
#include "simbody/internal/Force_MobilityDiscreteForce.h"
#include "simbody/internal/Force_MobilityLinearDamper.h"
#include "simbody/internal/Force_MobilityLinearSpring.h"
#include "simbody/internal/Force_MobilityLinearStop.h"
#include "simbody/internal/Force_Thermostat.h"
#include "simbody/internal/GeneralContactSubsystem.h"
#include "simbody/internal/GeneralForceSubsystem.h"
#include "simbody/internal/HuntCrossleyForce.h"
#include "simbody/internal/MultibodySystem.h"
#include "simbody/internal/SimbodyMatterSubsystem.h"

namespace jlcxx {
  template<> struct IsMirroredType<SimTK::ForceSubsystem> : std::false_type { };
  template<> struct IsMirroredType<SimTK::GeneralForceSubsystem> : std::false_type { };
  template<> struct IsMirroredType<SimTK::Force> : std::false_type { };
  template<> struct IsMirroredType<SimTK::Force::TwoPointLinearSpring> : std::false_type { };
  template<> struct IsMirroredType<SimTK::Force::TwoPointLinearDamper> : std::false_type { };
  template<> struct IsMirroredType<SimTK::Force::TwoPointConstantForce> : std::false_type { };
  template<> struct IsMirroredType<SimTK::Force::ConstantForce> : std::false_type { };
  template<> struct IsMirroredType<SimTK::Force::ConstantTorque> : std::false_type { };
  template<> struct IsMirroredType<SimTK::Force::GlobalDamper> : std::false_type { };
  template<> struct IsMirroredType<SimTK::Force::UniformGravity> : std::false_type { };
  template<> struct IsMirroredType<SimTK::Force::DiscreteForces> : std::false_type { };
  template<> struct IsMirroredType<SimTK::Force::Gravity> : std::false_type { };
  template<> struct IsMirroredType<SimTK::Force::LinearBushing> : std::false_type { };
  template<> struct IsMirroredType<SimTK::Force::MobilityConstantForce> : std::false_type { };
  template<> struct IsMirroredType<SimTK::Force::MobilityDiscreteForce> : std::false_type { };
  template<> struct IsMirroredType<SimTK::Force::MobilityLinearDamper> : std::false_type { };
  template<> struct IsMirroredType<SimTK::Force::MobilityLinearSpring> : std::false_type { };
  template<> struct IsMirroredType<SimTK::Force::MobilityLinearStop> : std::false_type { };
  template<> struct IsMirroredType<SimTK::Force::Thermostat> : std::false_type { };
  template<> struct IsMirroredType<SimTK::HuntCrossleyForce> : std::false_type { };
  template<> struct IsMirroredType<SimTK::CableSpring> : std::false_type { };
  template<> struct IsMirroredType<SimTK::ElasticFoundationForce> : std::false_type { };

  template<> struct DefaultConstructible<SimTK::ForceSubsystem> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::GeneralForceSubsystem> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::Force> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::Force::TwoPointLinearSpring> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::Force::TwoPointLinearDamper> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::Force::TwoPointConstantForce> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::Force::ConstantForce> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::Force::ConstantTorque> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::Force::GlobalDamper> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::Force::UniformGravity> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::Force::DiscreteForces> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::Force::Gravity> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::Force::LinearBushing> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::Force::MobilityConstantForce> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::Force::MobilityDiscreteForce> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::Force::MobilityLinearDamper> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::Force::MobilityLinearSpring> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::Force::MobilityLinearStop> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::Force::Thermostat> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::HuntCrossleyForce> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::CableSpring> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::ElasticFoundationForce> : std::false_type { };

  template<> struct SuperType<SimTK::GeneralForceSubsystem> { typedef SimTK::ForceSubsystem type; };
  template<> struct SuperType<SimTK::Force::TwoPointLinearSpring> { typedef SimTK::Force type; };
  template<> struct SuperType<SimTK::Force::TwoPointLinearDamper> { typedef SimTK::Force type; };
  template<> struct SuperType<SimTK::Force::TwoPointConstantForce> { typedef SimTK::Force type; };
  template<> struct SuperType<SimTK::Force::ConstantForce> { typedef SimTK::Force type; };
  template<> struct SuperType<SimTK::Force::ConstantTorque> { typedef SimTK::Force type; };
  template<> struct SuperType<SimTK::Force::GlobalDamper> { typedef SimTK::Force type; };
  template<> struct SuperType<SimTK::Force::UniformGravity> { typedef SimTK::Force type; };
  template<> struct SuperType<SimTK::Force::DiscreteForces> { typedef SimTK::Force type; };
  template<> struct SuperType<SimTK::Force::Gravity> { typedef SimTK::Force type; };
  template<> struct SuperType<SimTK::Force::LinearBushing> { typedef SimTK::Force type; };
  template<> struct SuperType<SimTK::Force::MobilityConstantForce> { typedef SimTK::Force type; };
  template<> struct SuperType<SimTK::Force::MobilityDiscreteForce> { typedef SimTK::Force type; };
  template<> struct SuperType<SimTK::Force::MobilityLinearDamper> { typedef SimTK::Force type; };
  template<> struct SuperType<SimTK::Force::MobilityLinearSpring> { typedef SimTK::Force type; };
  template<> struct SuperType<SimTK::Force::MobilityLinearStop> { typedef SimTK::Force type; };
  template<> struct SuperType<SimTK::Force::Thermostat> { typedef SimTK::Force type; };
  template<> struct SuperType<SimTK::HuntCrossleyForce> { typedef SimTK::Force type; };
  template<> struct SuperType<SimTK::CableSpring> { typedef SimTK::Force type; };
  template<> struct SuperType<SimTK::ElasticFoundationForce> { typedef SimTK::Force type; };

  #ifdef JLSIMBODY_USE_SIMTK_UNIQUEINDEX_TYPES
  template<> struct IsMirroredType<SimTK::ForceIndex> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::ForceIndex> : std::false_type { };
  #endif

}

namespace jlsimbody {
  JLSIMBODY_NO_EXPORT void define_simbody_Force(jlcxx::Module& types);
}

#endif // _JLSIMBODY_FORCE_H
