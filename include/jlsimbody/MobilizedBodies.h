#include "simbody/internal/MobilizedBody.h"
#include "simbody/internal/Body.h"
#include "SimTKcommon/internal/Transform.h"
#include "SimTKcommon/internal/Rotation.h"
#include "SimTKcommon/internal/Quaternion.h"
#include "SimTKcommon/internal/Vec.h"
#include "SimTKcommon/internal/State.h"
#include "SimTKcommon/internal/Vector_.h"
#include "SimTKcommon/internal/DecorativeGeometry.h"
#include "simbody/internal/MobilizedBody_Ball.h"
#include "simbody/internal/MobilizedBody_BendStretch.h"
#include "simbody/internal/MobilizedBody_BuiltIns.h"
#include "simbody/internal/MobilizedBody_Bushing.h"
#include "simbody/internal/MobilizedBody_Custom.h"
#include "simbody/internal/MobilizedBody_Cylinder.h"
#include "simbody/internal/MobilizedBody_Ellipsoid.h"
#include "simbody/internal/MobilizedBody_Free.h"
#include "simbody/internal/MobilizedBody_FreeLine.h"
#include "simbody/internal/MobilizedBody_FunctionBased.h"
#include "simbody/internal/MobilizedBody_Gimbal.h"
#include "simbody/internal/MobilizedBody_LineOrientation.h"
#include "simbody/internal/MobilizedBody_Pin.h"
#include "simbody/internal/MobilizedBody_Planar.h"
#include "simbody/internal/MobilizedBody_Screw.h"
#include "simbody/internal/MobilizedBody_Slider.h"
#include "simbody/internal/MobilizedBody_SphericalCoords.h"
#include "simbody/internal/MobilizedBody_Translation.h"
#include "simbody/internal/MobilizedBody_Universal.h"
#include "simbody/internal/MobilizedBody_Weld.h"

namespace jlcxx {
  template<> struct IsMirroredType<SimTK::MobilizedBody::Ball> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::MobilizedBody::Ball> : std::false_type { };
  template<> struct IsMirroredType<SimTK::MobilizedBody::BendStretch> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::MobilizedBody::BendStretch> : std::false_type { };
  template<> struct IsMirroredType<SimTK::MobilizedBody::Bushing> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::MobilizedBody::Bushing> : std::false_type { };
  template<> struct IsMirroredType<SimTK::MobilizedBody::Cylinder> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::MobilizedBody::Cylinder> : std::false_type { };
  template<> struct IsMirroredType<SimTK::MobilizedBody::Ellipsoid> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::MobilizedBody::Ellipsoid> : std::false_type { };
  template<> struct IsMirroredType<SimTK::MobilizedBody::Free> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::MobilizedBody::Free> : std::false_type { };
  template<> struct IsMirroredType<SimTK::MobilizedBody::FreeLine> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::MobilizedBody::FreeLine> : std::false_type { };
  template<> struct IsMirroredType<SimTK::MobilizedBody::FunctionBased> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::MobilizedBody::FunctionBased> : std::false_type { };
  template<> struct IsMirroredType<SimTK::MobilizedBody::Gimbal> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::MobilizedBody::Gimbal> : std::false_type { };
  template<> struct IsMirroredType<SimTK::MobilizedBody::LineOrientation> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::MobilizedBody::LineOrientation> : std::false_type { };
  template<> struct IsMirroredType<SimTK::MobilizedBody::Pin> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::MobilizedBody::Pin> : std::false_type { };
  template<> struct IsMirroredType<SimTK::MobilizedBody::Planar> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::MobilizedBody::Planar> : std::false_type { };
  template<> struct IsMirroredType<SimTK::MobilizedBody::Screw> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::MobilizedBody::Screw> : std::false_type { };
  template<> struct IsMirroredType<SimTK::MobilizedBody::Slider> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::MobilizedBody::Slider> : std::false_type { };
  template<> struct IsMirroredType<SimTK::MobilizedBody::SphericalCoords> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::MobilizedBody::SphericalCoords> : std::false_type { };
  template<> struct IsMirroredType<SimTK::MobilizedBody::Translation> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::MobilizedBody::Translation> : std::false_type { };
  template<> struct IsMirroredType<SimTK::MobilizedBody::Universal> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::MobilizedBody::Universal> : std::false_type { };
  template<> struct IsMirroredType<SimTK::MobilizedBody::Weld> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::MobilizedBody::Weld> : std::false_type { };
  template<> struct SuperType<SimTK::MobilizedBody::Ball> { typedef SimTK::MobilizedBody type; };
  template<> struct SuperType<SimTK::MobilizedBody::BendStretch> { typedef SimTK::MobilizedBody type; };
  template<> struct SuperType<SimTK::MobilizedBody::Bushing> { typedef SimTK::MobilizedBody type; };
  template<> struct SuperType<SimTK::MobilizedBody::Cylinder> { typedef SimTK::MobilizedBody type; };
  template<> struct SuperType<SimTK::MobilizedBody::Ellipsoid> { typedef SimTK::MobilizedBody type; };
  template<> struct SuperType<SimTK::MobilizedBody::Free> { typedef SimTK::MobilizedBody type; };
  template<> struct SuperType<SimTK::MobilizedBody::FreeLine> { typedef SimTK::MobilizedBody type; };
  template<> struct SuperType<SimTK::MobilizedBody::Gimbal> { typedef SimTK::MobilizedBody type; };
  template<> struct SuperType<SimTK::MobilizedBody::LineOrientation> { typedef SimTK::MobilizedBody type; };
  template<> struct SuperType<SimTK::MobilizedBody::Pin> { typedef SimTK::MobilizedBody type; };
  template<> struct SuperType<SimTK::MobilizedBody::Planar> { typedef SimTK::MobilizedBody type; };
  template<> struct SuperType<SimTK::MobilizedBody::Screw> { typedef SimTK::MobilizedBody type; };
  template<> struct SuperType<SimTK::MobilizedBody::Slider> { typedef SimTK::MobilizedBody type; };
  template<> struct SuperType<SimTK::MobilizedBody::SphericalCoords> { typedef SimTK::MobilizedBody type; };
  template<> struct SuperType<SimTK::MobilizedBody::Translation> { typedef SimTK::MobilizedBody type; };
  template<> struct SuperType<SimTK::MobilizedBody::Universal> { typedef SimTK::MobilizedBody type; };
  template<> struct SuperType<SimTK::MobilizedBody::Weld> { typedef SimTK::MobilizedBody type; };
}

namespace jlsimbody {
  JLSIMBODY_NO_EXPORT void define_simbody_MobilizedBodies(jlcxx::Module& types);
}
