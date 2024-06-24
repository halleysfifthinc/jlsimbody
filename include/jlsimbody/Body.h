#include "SimTKcommon/internal/DecorativeGeometry.h"
#include "SimTKcommon/internal/Transform.h"
#include "SimTKcommon/internal/MassProperties.h"
#include "simmath/internal/ContactGeometry.h"
#include "simbody/internal/ContactSurface.h"
#include "simbody/internal/Body.h"

namespace jlcxx {
  template<> struct IsMirroredType<SimTK::Body> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::Body> : std::false_type { };
  template<> struct IsMirroredType<SimTK::Body::Rigid> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::Body::Rigid> : std::false_type { };
  template<> struct IsMirroredType<SimTK::Body::Linear> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::Body::Linear> : std::false_type { };
  template<> struct IsMirroredType<SimTK::Body::Particle> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::Body::Particle> : std::false_type { };
  template<> struct IsMirroredType<SimTK::Body::Massless> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::Body::Massless> : std::false_type { };
  template<> struct IsMirroredType<SimTK::Body::Ground> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::Body::Ground> : std::false_type { };
  template<> struct SuperType<SimTK::Body::Rigid> { typedef SimTK::Body type; };
  template<> struct SuperType<SimTK::Body::Linear> { typedef SimTK::Body type; };
  template<> struct SuperType<SimTK::Body::Particle> { typedef SimTK::Body type; };
  template<> struct SuperType<SimTK::Body::Massless> { typedef SimTK::Body type; };
  template<> struct SuperType<SimTK::Body::Ground> { typedef SimTK::Body type; };
}

namespace jlsimbody{
  JLSIMBODY_NO_EXPORT void define_simbody_Body(jlcxx::Module& types);
}
