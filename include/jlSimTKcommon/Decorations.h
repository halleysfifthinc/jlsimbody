#include "SimTKcommon/internal/DecorativeGeometry.h"
#include "SimTKcommon/internal/PolygonalMesh.h"
#include "jlSimTKcommon/Array.h"

namespace jlcxx {
  template<> struct IsMirroredType<SimTK::PolygonalMesh> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::PolygonalMesh> : std::false_type { };
  template<> struct IsMirroredType<SimTK::DecorativeGeometry> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::DecorativeGeometry> : std::false_type { };
  template<> struct IsMirroredType<SimTK::DecorativeGeometryImplementation> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::DecorativeGeometryImplementation> : std::false_type { };
  template<> struct IsMirroredType<SimTK::DecorativePoint> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::DecorativePoint> : std::false_type { };
  template<> struct IsMirroredType<SimTK::DecorativeLine> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::DecorativeLine> : std::false_type { };
  template<> struct IsMirroredType<SimTK::DecorativeCircle> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::DecorativeCircle> : std::false_type { };
  template<> struct IsMirroredType<SimTK::DecorativeSphere> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::DecorativeSphere> : std::false_type { };
  template<> struct IsMirroredType<SimTK::DecorativeEllipsoid> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::DecorativeEllipsoid> : std::false_type { };
  template<> struct IsMirroredType<SimTK::DecorativeBrick> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::DecorativeBrick> : std::false_type { };
  template<> struct IsMirroredType<SimTK::DecorativeCylinder> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::DecorativeCylinder> : std::false_type { };
  template<> struct IsMirroredType<SimTK::DecorativeFrame> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::DecorativeFrame> : std::false_type { };
  template<> struct IsMirroredType<SimTK::DecorativeText> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::DecorativeText> : std::false_type { };
  template<> struct IsMirroredType<SimTK::DecorativeMesh> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::DecorativeMesh> : std::false_type { };
  template<> struct IsMirroredType<SimTK::DecorativeMeshFile> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::DecorativeMeshFile> : std::false_type { };
  template<> struct IsMirroredType<SimTK::DecorativeTorus> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::DecorativeTorus> : std::false_type { };
  template<> struct IsMirroredType<SimTK::DecorativeArrow> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::DecorativeArrow> : std::false_type { };
  template<> struct IsMirroredType<SimTK::DecorativeCone> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::DecorativeCone> : std::false_type { };
  template<> struct IsMirroredType<SimTK::Decorations> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::Decorations> : std::false_type { };
  template<> struct SuperType<SimTK::DecorativePoint> { typedef SimTK::DecorativeGeometry type; };
  template<> struct SuperType<SimTK::DecorativeLine> { typedef SimTK::DecorativeGeometry type; };
  template<> struct SuperType<SimTK::DecorativeCircle> { typedef SimTK::DecorativeGeometry type; };
  template<> struct SuperType<SimTK::DecorativeSphere> { typedef SimTK::DecorativeGeometry type; };
  template<> struct SuperType<SimTK::DecorativeEllipsoid> { typedef SimTK::DecorativeGeometry type; };
  template<> struct SuperType<SimTK::DecorativeBrick> { typedef SimTK::DecorativeGeometry type; };
  template<> struct SuperType<SimTK::DecorativeCylinder> { typedef SimTK::DecorativeGeometry type; };
  template<> struct SuperType<SimTK::DecorativeFrame> { typedef SimTK::DecorativeGeometry type; };
  template<> struct SuperType<SimTK::DecorativeText> { typedef SimTK::DecorativeGeometry type; };
  template<> struct SuperType<SimTK::DecorativeMesh> { typedef SimTK::DecorativeGeometry type; };
  template<> struct SuperType<SimTK::DecorativeMeshFile> { typedef SimTK::DecorativeGeometry type; };
  template<> struct SuperType<SimTK::DecorativeTorus> { typedef SimTK::DecorativeGeometry type; };
  template<> struct SuperType<SimTK::DecorativeArrow> { typedef SimTK::DecorativeGeometry type; };
  template<> struct SuperType<SimTK::DecorativeCone> { typedef SimTK::DecorativeGeometry type; };
  template<> struct SuperType<SimTK::Decorations> { typedef SimTK::DecorativeGeometry type; };
}

namespace jlsimbody {
  void define_SimTKcommon_Decorations(jlcxx::Module& types, const ArrayWrapper& wrap);
}
