#ifndef _JLSIMBODY_SIMBODYMATTERSUBSYSTEM_H
#define _JLSIMBODY_SIMBODYMATTERSUBSYSTEM_H

#include "simbody/internal/SimbodyMatterSubsystem.h"
#include "simbody/internal/SimbodyMatterSubtree.h"
#include "simbody/internal/MobilizedBody.h"
#include "simbody/internal/MobilizedBody_Ground.h"
#include "simbody/internal/Motion.h"
#include "simbody/internal/Constraint.h"
#include "simbody/internal/ConditionalConstraint.h"

#include "jlSimTKcommon/Array.h"

namespace jlcxx {
  template<> struct IsMirroredType<SimTK::Motion> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::Motion> : std::false_type { };
  template<> struct IsMirroredType<SimTK::MobilizedBody> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::MobilizedBody> : std::false_type { };
  template<> struct IsMirroredType<SimTK::MobilizedBody::Ground> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::MobilizedBody::Ground> : std::false_type { };
  template<> struct IsMirroredType<SimTK::Motion::Sinusoid> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::Motion::Sinusoid> : std::false_type { };
  template<> struct IsMirroredType<SimTK::Motion::Steady> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::Motion::Steady> : std::false_type { };
  template<> struct IsMirroredType<SimTK::MobilizerUIndex> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::MobilizerUIndex> : std::false_type { };
  template<> struct IsMirroredType<SimTK::Motion::Custom> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::Motion::Custom> : std::false_type { };
  template<> struct IsMirroredType<SimTK::Constraint> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::Constraint> : std::false_type { };
  template<> struct IsMirroredType<SimTK::ConstraintIndex> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::ConstraintIndex> : std::false_type { };
  template<> struct IsMirroredType<SimTK::UnilateralContactIndex> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::UnilateralContactIndex> : std::false_type { };
  template<> struct IsMirroredType<SimTK::UnilateralContact> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::UnilateralContact> : std::false_type { };
  template<> struct IsMirroredType<SimTK::StateLimitedFrictionIndex> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::StateLimitedFrictionIndex> : std::false_type { };
  template<> struct IsMirroredType<SimTK::QuaternionPoolIndex> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::QuaternionPoolIndex> : std::false_type { };
  template<> struct IsMirroredType<SimTK::ParticleIndex> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::ParticleIndex> : std::false_type { };
  template<> struct IsMirroredType<SimTK::SimbodyMatterSubsystem> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::SimbodyMatterSubsystem> : std::false_type { };
  template<> struct IsMirroredType<SimTK::SubtreeBodyIndex> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::SubtreeBodyIndex> : std::false_type { };
  template<> struct IsMirroredType<SimTK::SimbodyMatterSubtree> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::SimbodyMatterSubtree> : std::false_type { };
  template<> struct IsMirroredType<SimTK::SimbodyMatterSubtreeResults> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::SimbodyMatterSubtreeResults> : std::false_type { };
  template<> struct IsMirroredType<SimTK::SubtreeQIndex> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::SubtreeQIndex> : std::false_type { };
  template<> struct IsMirroredType<SimTK::SubtreeUIndex> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::SubtreeUIndex> : std::false_type { };
  template<> struct IsMirroredType<SimTK::ConstrainedBodyIndex> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::ConstrainedBodyIndex> : std::false_type { };
  template<> struct IsMirroredType<SimTK::ConstrainedMobilizerIndex> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::ConstrainedMobilizerIndex> : std::false_type { };
  template<> struct IsMirroredType<SimTK::ConstrainedUIndex> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::ConstrainedUIndex> : std::false_type { };
  template<> struct IsMirroredType<SimTK::ConstrainedQIndex> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::ConstrainedQIndex> : std::false_type { };
  template<> struct IsMirroredType<SimTK::MobilizerQIndex> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::MobilizerQIndex> : std::false_type { };
}

namespace jlsimbody{
  JLSIMBODY_NO_EXPORT void define_simbody_SimbodyMatterSubsystem(jlcxx::Module& types, const ArrayWrapper & array_wrapper);
}

#endif // _JLSIMBODY_SIMBODYMATTERSUBSYSTEM_H
