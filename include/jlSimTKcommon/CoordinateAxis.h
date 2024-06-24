#include "SimTKcommon/internal/CoordinateAxis.h"

namespace jlcxx {
  template<> struct IsMirroredType<SimTK::CoordinateAxis> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::CoordinateAxis> : std::false_type { };
  template<> struct IsMirroredType<SimTK::CoordinateAxis::XCoordinateAxis> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::CoordinateAxis::XCoordinateAxis> : std::false_type { };
  template<> struct IsMirroredType<SimTK::CoordinateAxis::YCoordinateAxis> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::CoordinateAxis::YCoordinateAxis> : std::false_type { };
  template<> struct IsMirroredType<SimTK::CoordinateAxis::ZCoordinateAxis> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::CoordinateAxis::ZCoordinateAxis> : std::false_type { };
  template<> struct IsMirroredType<SimTK::CoordinateDirection> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::CoordinateDirection> : std::false_type { };
  template<> struct IsMirroredType<SimTK::CoordinateDirection::Negative> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::CoordinateDirection::Negative> : std::false_type { };
  template<> struct IsMirroredType<SimTK::CoordinateDirection::NegXDirection> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::CoordinateDirection::NegXDirection> : std::false_type { };
  template<> struct IsMirroredType<SimTK::CoordinateDirection::NegYDirection> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::CoordinateDirection::NegYDirection> : std::false_type { };
  template<> struct IsMirroredType<SimTK::CoordinateDirection::NegZDirection> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::CoordinateDirection::NegZDirection> : std::false_type { };
  template<> struct SuperType<SimTK::CoordinateAxis::XCoordinateAxis> { typedef SimTK::CoordinateAxis type; };
  template<> struct SuperType<SimTK::CoordinateAxis::YCoordinateAxis> { typedef SimTK::CoordinateAxis type; };
  template<> struct SuperType<SimTK::CoordinateAxis::ZCoordinateAxis> { typedef SimTK::CoordinateAxis type; };
  template<> struct SuperType<SimTK::CoordinateDirection::NegXDirection> { typedef SimTK::CoordinateDirection type; };
  template<> struct SuperType<SimTK::CoordinateDirection::NegYDirection> { typedef SimTK::CoordinateDirection type; };
  template<> struct SuperType<SimTK::CoordinateDirection::NegZDirection> { typedef SimTK::CoordinateDirection type; };
}

namespace jlsimbody {
  JLSIMBODY_NO_EXPORT void define_SimTKcommon_CoordinateAxis(jlcxx::Module& types);
}
