#include "SimTKcommon/internal/Transform.h"
#include "SimTKcommon/internal/Vec.h"
#include "SimTKcommon/internal/UnitVec.h"
#include "SimTKcommon/internal/State.h"
#include "SimTKcommon/internal/DecorativeGeometry.h"
#include "simmath/internal/Geodesic.h"

namespace jlcxx {
  template<> struct IsMirroredType<SimTK::GeodesicDecorator> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::GeodesicDecorator> : std::false_type { };
  template<> struct SuperType<SimTK::GeodesicDecorator> { typedef SimTK::DecorationGenerator type; };
}

namespace jlsimbody{
  JLSIMBODY_NO_EXPORT void define_simmath_GeodesicDecorator(jlcxx::Module& types);
}
