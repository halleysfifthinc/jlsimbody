#include "simbody/internal/SimbodyMatterSubsystem.h"

namespace jlcxx {
  template<> struct IsMirroredType<SimTK::Subsystem> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::Subsystem> : std::false_type { };
  template<> struct IsMirroredType<SimTK::MobilizedBody> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::MobilizedBody> : std::false_type { };
  template<> struct IsMirroredType<SimTK::MobilizedBodyIndex> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::MobilizedBodyIndex> : std::false_type { };
  template<> struct IsMirroredType<SimTK::ConstraintIndex> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::ConstraintIndex> : std::false_type { };
  template<> struct IsMirroredType<SimTK::UnilateralContactIndex> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::UnilateralContactIndex> : std::false_type { };
  template<> struct IsMirroredType<SimTK::StateLimitedFrictionIndex> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::StateLimitedFrictionIndex> : std::false_type { };
  template<> struct IsMirroredType<SimTK::QuaternionPoolIndex> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::QuaternionPoolIndex> : std::false_type { };
  template<> struct IsMirroredType<SimTK::MobilizerUIndex> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::MobilizerUIndex> : std::false_type { };
  template<> struct IsMirroredType<SimTK::ParticleIndex> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::ParticleIndex> : std::false_type { };
  template<> struct IsMirroredType<SimTK::SimbodyMatterSubsystem> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::SimbodyMatterSubsystem> : std::false_type { };
  template<> struct SuperType<SimTK::SimbodyMatterSubsystem> { typedef SimTK::Subsystem type; };
}

namespace jlsimbody{
  void define_simbody_SimbodyMatterSubsystem(jlcxx::Module& types);
}
