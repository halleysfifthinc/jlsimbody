#include "SimTKcommon/internal/Transform.h"
#include "SimTKcommon/internal/Rotation.h"
#include "SimTKcommon/internal/DecorativeGeometry.h"
#include "SimTKcommon/internal/Vec.h"
#include "SimTKcommon/internal/UnitVec.h"
#include "SimTKcommon/internal/Mat.h"
#include "simmath/internal/Contact.h"
#include "simmath/internal/ContactGeometry.h"
#include "simmath/internal/Geodesic.h"
#include "simbody/internal/ContactSurface.h"
#include "simmath/internal/ContactTracker.h"
#include "simmath/internal/OBBTree.h"

#include "jlSimTKcommon/Array.h"
namespace jlcxx {
  template<> struct IsMirroredType<SimTK::ContactSurfaceIndex> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::ContactSurfaceIndex> : std::false_type { };
  template<> struct IsMirroredType<SimTK::ContactId> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::ContactId> : std::false_type { };
  template<> struct IsMirroredType<SimTK::ContactTypeId> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::ContactTypeId> : std::false_type { };
  template<> struct IsMirroredType<SimTK::Contact> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::Contact> : std::false_type { };
  template<> struct IsMirroredType<SimTK::UntrackedContact> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::UntrackedContact> : std::false_type { };
  template<> struct IsMirroredType<SimTK::BrokenContact> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::BrokenContact> : std::false_type { };
  template<> struct IsMirroredType<SimTK::CircularPointContact> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::CircularPointContact> : std::false_type { };
  template<> struct IsMirroredType<SimTK::EllipticalPointContact> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::EllipticalPointContact> : std::false_type { };
  template<> struct IsMirroredType<SimTK::BrickHalfSpaceContact> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::BrickHalfSpaceContact> : std::false_type { };
  template<> struct IsMirroredType<SimTK::TriangleMeshContact> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::TriangleMeshContact> : std::false_type { };
  template<> struct IsMirroredType<SimTK::PointContact> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::PointContact> : std::false_type { };
  template<> struct IsMirroredType<SimTK::Geodesic> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::Geodesic> : std::false_type { };
  template<> struct IsMirroredType<SimTK::GeodesicDecorator> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::GeodesicDecorator> : std::false_type { };
  template<> struct IsMirroredType<SimTK::GeodesicOptions> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::GeodesicOptions> : std::false_type { };
  template<> struct IsMirroredType<SimTK::ContactGeometryTypeId> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::ContactGeometryTypeId> : std::false_type { };
  template<> struct IsMirroredType<SimTK::ContactGeometry> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::ContactGeometry> : std::false_type { };
  template<> struct IsMirroredType<SimTK::Plane> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::Plane> : std::false_type { };
  template<> struct IsMirroredType<SimTK::ContactGeometry::HalfSpace> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::ContactGeometry::HalfSpace> : std::false_type { };
  template<> struct IsMirroredType<SimTK::ContactGeometry::Cylinder> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::ContactGeometry::Cylinder> : std::false_type { };
  template<> struct IsMirroredType<SimTK::ContactGeometry::Sphere> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::ContactGeometry::Sphere> : std::false_type { };
  template<> struct IsMirroredType<SimTK::ContactGeometry::Ellipsoid> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::ContactGeometry::Ellipsoid> : std::false_type { };
  template<> struct IsMirroredType<SimTK::ContactGeometry::SmoothHeightMap> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::ContactGeometry::SmoothHeightMap> : std::false_type { };
  template<> struct IsMirroredType<SimTK::OBBTree> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::OBBTree> : std::false_type { };
  template<> struct IsMirroredType<SimTK::OBBNode> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::OBBNode> : std::false_type { };
  template<> struct IsMirroredType<SimTK::BicubicSurface> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::BicubicSurface> : std::false_type { };
  template<> struct IsMirroredType<SimTK::ContactGeometry::Brick> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::ContactGeometry::Brick> : std::false_type { };
  template<> struct IsMirroredType<SimTK::ContactGeometry::TriangleMesh> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::ContactGeometry::TriangleMesh> : std::false_type { };
  template<> struct IsMirroredType<SimTK::ContactGeometry::TriangleMesh::OBBTreeNode> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::ContactGeometry::TriangleMesh::OBBTreeNode> : std::false_type { };
  template<> struct IsMirroredType<SimTK::OrientedBoundingBox> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::OrientedBoundingBox> : std::false_type { };
  template<> struct IsMirroredType<SimTK::ContactGeometry::Torus> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::ContactGeometry::Torus> : std::false_type { };
  template<> struct IsMirroredType<SimTK::GeodHitPlaneEvent> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::GeodHitPlaneEvent> : std::false_type { };
  template<> struct IsMirroredType<SimTK::PathDecorator> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::PathDecorator> : std::false_type { };
  template<> struct IsMirroredType<SimTK::PlaneDecorator> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::PlaneDecorator> : std::false_type { };
  template<> struct IsMirroredType<SimTK::ContactTracker> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::ContactTracker> : std::false_type { };
  template<> struct IsMirroredType<SimTK::ContactTracker::HalfSpaceSphere> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::ContactTracker::HalfSpaceSphere> : std::false_type { };
  template<> struct IsMirroredType<SimTK::ContactTracker::HalfSpaceEllipsoid> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::ContactTracker::HalfSpaceEllipsoid> : std::false_type { };
  template<> struct IsMirroredType<SimTK::ContactTracker::HalfSpaceBrick> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::ContactTracker::HalfSpaceBrick> : std::false_type { };
  template<> struct IsMirroredType<SimTK::ContactTracker::SphereSphere> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::ContactTracker::SphereSphere> : std::false_type { };
  template<> struct IsMirroredType<SimTK::ContactTracker::HalfSpaceTriangleMesh> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::ContactTracker::HalfSpaceTriangleMesh> : std::false_type { };
  template<> struct IsMirroredType<SimTK::ContactTracker::SphereTriangleMesh> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::ContactTracker::SphereTriangleMesh> : std::false_type { };
  template<> struct IsMirroredType<SimTK::ContactTracker::TriangleMeshTriangleMesh> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::ContactTracker::TriangleMeshTriangleMesh> : std::false_type { };
  template<> struct IsMirroredType<SimTK::ContactTracker::HalfSpaceConvexImplicit> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::ContactTracker::HalfSpaceConvexImplicit> : std::false_type { };
  template<> struct IsMirroredType<SimTK::ContactTracker::ConvexImplicitPair> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::ContactTracker::ConvexImplicitPair> : std::false_type { };
  template<> struct IsMirroredType<SimTK::ContactTracker::GeneralImplicitPair> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::ContactTracker::GeneralImplicitPair> : std::false_type { };
  template<> struct IsMirroredType<SimTK::ContactCliqueId> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::ContactCliqueId> : std::false_type { };
  template<> struct IsMirroredType<SimTK::ContactMaterial> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::ContactMaterial> : std::false_type { };
  template<> struct IsMirroredType<SimTK::ContactSurface> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::ContactSurface> : std::false_type { };
  template<> struct SuperType<SimTK::UntrackedContact> { typedef SimTK::Contact type; };
  template<> struct SuperType<SimTK::BrokenContact> { typedef SimTK::Contact type; };
  template<> struct SuperType<SimTK::CircularPointContact> { typedef SimTK::Contact type; };
  template<> struct SuperType<SimTK::EllipticalPointContact> { typedef SimTK::Contact type; };
  template<> struct SuperType<SimTK::BrickHalfSpaceContact> { typedef SimTK::Contact type; };
  template<> struct SuperType<SimTK::TriangleMeshContact> { typedef SimTK::Contact type; };
  template<> struct SuperType<SimTK::PointContact> { typedef SimTK::Contact type; };
  template<> struct SuperType<SimTK::ContactGeometry::HalfSpace> { typedef SimTK::ContactGeometry type; };
  template<> struct SuperType<SimTK::ContactGeometry::Cylinder> { typedef SimTK::ContactGeometry type; };
  template<> struct SuperType<SimTK::ContactGeometry::Sphere> { typedef SimTK::ContactGeometry type; };
  template<> struct SuperType<SimTK::ContactGeometry::Ellipsoid> { typedef SimTK::ContactGeometry type; };
  template<> struct SuperType<SimTK::ContactGeometry::SmoothHeightMap> { typedef SimTK::ContactGeometry type; };
  template<> struct SuperType<SimTK::ContactGeometry::Brick> { typedef SimTK::ContactGeometry type; };
  template<> struct SuperType<SimTK::ContactGeometry::TriangleMesh> { typedef SimTK::ContactGeometry type; };
  template<> struct SuperType<SimTK::ContactGeometry::Torus> { typedef SimTK::ContactGeometry type; };
  template<> struct SuperType<SimTK::ContactTracker::HalfSpaceSphere> { typedef SimTK::ContactTracker type; };
  template<> struct SuperType<SimTK::ContactTracker::HalfSpaceEllipsoid> { typedef SimTK::ContactTracker type; };
  template<> struct SuperType<SimTK::ContactTracker::HalfSpaceBrick> { typedef SimTK::ContactTracker type; };
  template<> struct SuperType<SimTK::ContactTracker::SphereSphere> { typedef SimTK::ContactTracker type; };
  template<> struct SuperType<SimTK::ContactTracker::HalfSpaceTriangleMesh> { typedef SimTK::ContactTracker type; };
  template<> struct SuperType<SimTK::ContactTracker::SphereTriangleMesh> { typedef SimTK::ContactTracker type; };
  template<> struct SuperType<SimTK::ContactTracker::TriangleMeshTriangleMesh> { typedef SimTK::ContactTracker type; };
  template<> struct SuperType<SimTK::ContactTracker::HalfSpaceConvexImplicit> { typedef SimTK::ContactTracker type; };
  template<> struct SuperType<SimTK::ContactTracker::ConvexImplicitPair> { typedef SimTK::ContactTracker type; };
  template<> struct SuperType<SimTK::ContactTracker::GeneralImplicitPair> { typedef SimTK::ContactTracker type; };
}

namespace jlsimbody{
  void define_simmath_Contact_related(jlcxx::Module& types, const ArrayWrapper& array_wrapper);
}
