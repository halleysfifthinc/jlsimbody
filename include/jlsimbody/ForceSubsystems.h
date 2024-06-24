#include "SimTKcommon/internal/Subsystem.h"
#include "SimTKcommon/internal/State.h"
#include "SimTKcommon/internal/Vec.h"
#include "SimTKcommon/internal/Vector_.h"
#include "simmath/internal/Contact.h"
#include "simbody/internal/MobilizedBody.h"
#include "simbody/internal/CompliantContactSubsystem.h"
#include "simbody/internal/CablePath.h"
#include "simbody/internal/HuntCrossleyContact.h"

#include "jlSimTKcommon/Array.h"

namespace jlcxx {
  template<> struct IsMirroredType<SimTK::ContactForce> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::ContactForce> : std::false_type { };
  template<> struct IsMirroredType<SimTK::ContactPatch> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::ContactPatch> : std::false_type { };
  template<> struct IsMirroredType<SimTK::ContactForceGenerator> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::ContactForceGenerator> : std::false_type { };
  template<> struct IsMirroredType<SimTK::CompliantContactSubsystem> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::CompliantContactSubsystem> : std::false_type { };
  template<> struct IsMirroredType<SimTK::ContactDetail> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::ContactDetail> : std::false_type { };
  template<> struct IsMirroredType<SimTK::ContactForceGenerator::HertzCircular> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::ContactForceGenerator::HertzCircular> : std::false_type { };
  template<> struct IsMirroredType<SimTK::ContactForceGenerator::HertzElliptical> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::ContactForceGenerator::HertzElliptical> : std::false_type { };
  template<> struct IsMirroredType<SimTK::ContactForceGenerator::BrickHalfSpacePenalty> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::ContactForceGenerator::BrickHalfSpacePenalty> : std::false_type { };
  template<> struct IsMirroredType<SimTK::ContactForceGenerator::ElasticFoundation> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::ContactForceGenerator::ElasticFoundation> : std::false_type { };
  template<> struct IsMirroredType<SimTK::ContactForceGenerator::DoNothing> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::ContactForceGenerator::DoNothing> : std::false_type { };
  template<> struct IsMirroredType<SimTK::ContactForceGenerator::ThrowError> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::ContactForceGenerator::ThrowError> : std::false_type { };
  template<> struct IsMirroredType<SimTK::HuntCrossleyContact> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::HuntCrossleyContact> : std::false_type { };
  template<> struct SuperType<SimTK::CompliantContactSubsystem> { typedef SimTK::ForceSubsystem type; };
  template<> struct SuperType<SimTK::ContactForceGenerator::HertzCircular> { typedef SimTK::ContactForceGenerator type; };
  template<> struct SuperType<SimTK::ContactForceGenerator::HertzElliptical> { typedef SimTK::ContactForceGenerator type; };
  template<> struct SuperType<SimTK::ContactForceGenerator::BrickHalfSpacePenalty> { typedef SimTK::ContactForceGenerator type; };
  template<> struct SuperType<SimTK::ContactForceGenerator::ElasticFoundation> { typedef SimTK::ContactForceGenerator type; };
  template<> struct SuperType<SimTK::ContactForceGenerator::DoNothing> { typedef SimTK::ContactForceGenerator type; };
  template<> struct SuperType<SimTK::ContactForceGenerator::ThrowError> { typedef SimTK::ContactForceGenerator type; };
  template<> struct SuperType<SimTK::HuntCrossleyContact> { typedef SimTK::ForceSubsystem type; };
}

namespace jlsimbody {
  JLSIMBODY_NO_EXPORT void define_simbody_ForceSubsystems(jlcxx::Module& types, const ArrayWrapper& array_wrapper);
}
