#include "SimTKcommon/internal/DecorativeGeometry.h"
#include "SimTKcommon/internal/Transform.h"
#include "SimTKcommon/internal/Vec.h"
#include "SimTKcommon/internal/UnitVec.h"
#include "SimTKcommon/internal/State.h"
#include "simmath/internal/Geodesic.h"
#include "SimTKcommon/internal/DecorationGenerator.h"
#include "simmath/internal/ContactGeometry.h"

namespace jlcxx {
  template<> struct IsMirroredType<SimTK::DecorationGenerator> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::DecorationGenerator> : std::false_type { };
  template<> struct IsMirroredType<SimTK::GeodesicDecorator> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::GeodesicDecorator> : std::false_type { };
  template<> struct IsMirroredType<SimTK::PathDecorator> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::PathDecorator> : std::false_type { };
  template<> struct SuperType<SimTK::GeodesicDecorator> { typedef SimTK::DecorationGenerator type; };
  template<> struct SuperType<SimTK::PathDecorator> { typedef SimTK::DecorationGenerator type; };
}

namespace jlsimbody {
  void define_SimTKcommon_DecorationGenerator(jlcxx::Module& types);
}
