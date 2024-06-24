#include "SimTKcommon/Scalar.h"
#include "SimTKcommon/SmallMatrix.h"
#include "SimTKcommon/Orientation.h"
#include "SimTKcommon/internal/MassProperties.h"

#include "jlSimTKcommon/Array.h"

namespace jlcxx {

  template<typename P> struct IsMirroredType<SimTK::Inertia_<P>> : std::false_type { };
  template<typename P> struct DefaultConstructible<SimTK::Inertia_<P>> : std::false_type { };
  template<typename P> struct IsMirroredType<SimTK::UnitInertia_<P>> : std::false_type { };
  template<typename P> struct DefaultConstructible<SimTK::UnitInertia_<P>> : std::false_type { };
  template<typename P> struct IsMirroredType<SimTK::SpatialInertia_<P>> : std::false_type { };
  template<typename P> struct DefaultConstructible<SimTK::SpatialInertia_<P>> : std::false_type { };
  template<typename P> struct IsMirroredType<SimTK::ArticulatedInertia_<P>> : std::false_type { };
  template<typename P> struct DefaultConstructible<SimTK::ArticulatedInertia_<P>> : std::false_type { };
  template<typename P> struct IsMirroredType<SimTK::MassProperties_<P>> : std::false_type { };
  template<typename P> struct DefaultConstructible<SimTK::MassProperties_<P>> : std::false_type { };

  template<typename P> struct SuperType<SimTK::UnitInertia_<P>> { typedef SimTK::Inertia_<P> type; };
}

namespace jlsimbody {
  JLSIMBODY_NO_EXPORT void define_SimTKcommon_MassProperties(jlcxx::Module& types, const ArrayWrapper& array_wrapper);
}
