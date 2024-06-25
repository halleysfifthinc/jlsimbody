#ifndef _JLSIMMATH_GEO_H
#define _JLSIMMATH_GEO_H

#include "SimTKcommon/SmallMatrix.h"
#include "SimTKcommon/internal/UnitVec.h"
#include "SimTKcommon/internal/Transform.h"
#include "SimTKcommon/internal/CoordinateAxis.h"
#include "SimTKcommon/internal/Rotation.h"
#include "simmath/internal/Geodesic.h"
#include "simmath/internal/Geo.h"
#include "simmath/internal/Geo_BicubicBezierPatch.h"
#include "simmath/internal/Geo_BicubicHermitePatch.h"
#include "simmath/internal/Geo_Box.h"
#include "simmath/internal/Geo_CubicBezierCurve.h"
#include "simmath/internal/Geo_CubicHermiteCurve.h"
#include "simmath/internal/Geo_LineSeg.h"
#include "simmath/internal/Geo_Point.h"
#include "simmath/internal/Geo_Sphere.h"
#include "simmath/internal/Geo_Triangle.h"

namespace jlcxx {
  template<> struct IsMirroredType<SimTK::Geo> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::Geo> : std::false_type { };

  template<typename P>
  struct BuildParameterList<SimTK::Geo::Point_<P>>
  {
    typedef ParameterList<P> type;
  };

  template<typename P> struct IsMirroredType<SimTK::Geo::Point_<P>> : std::false_type { };
  template<typename P> struct DefaultConstructible<SimTK::Geo::Point_<P>> : std::false_type { };

  template<typename P>
  struct BuildParameterList<SimTK::Geo::Sphere_<P>>
  {
    typedef ParameterList<P> type;
  };

  template<typename P> struct IsMirroredType<SimTK::Geo::Sphere_<P>> : std::false_type { };
  template<typename P> struct DefaultConstructible<SimTK::Geo::Sphere_<P>> : std::false_type { };

  template<typename P>
  struct BuildParameterList<SimTK::Geo::LineSeg_<P>>
  {
    typedef ParameterList<P> type;
  };

  template<typename P> struct IsMirroredType<SimTK::Geo::LineSeg_<P>> : std::false_type { };
  template<typename P> struct DefaultConstructible<SimTK::Geo::LineSeg_<P>> : std::false_type { };

  template<typename P>
  struct BuildParameterList<SimTK::Geo::Box_<P>>
  {
    typedef ParameterList<P> type;
  };

  template<typename P> struct IsMirroredType<SimTK::Geo::Box_<P>> : std::false_type { };
  template<typename P> struct DefaultConstructible<SimTK::Geo::Box_<P>> : std::false_type { };

  template<typename P>
  struct BuildParameterList<SimTK::Geo::AlignedBox_<P>>
  {
    typedef ParameterList<P> type;
  };

  template<typename P> struct IsMirroredType<SimTK::Geo::AlignedBox_<P>> : std::false_type { };
  template<typename P> struct DefaultConstructible<SimTK::Geo::AlignedBox_<P>> : std::false_type { };

  template<typename P>
  struct BuildParameterList<SimTK::Geo::OrientedBox_<P>>
  {
    typedef ParameterList<P> type;
  };

  template<typename P> struct IsMirroredType<SimTK::Geo::OrientedBox_<P>> : std::false_type { };
  template<typename P> struct DefaultConstructible<SimTK::Geo::OrientedBox_<P>> : std::false_type { };

  template<typename P>
  struct BuildParameterList<SimTK::Geo::Triangle_<P>>
  {
    typedef ParameterList<P> type;
  };

  template<typename P> struct IsMirroredType<SimTK::Geo::Triangle_<P>> : std::false_type { };
  template<typename P> struct DefaultConstructible<SimTK::Geo::Triangle_<P>> : std::false_type { };

  template<typename P>
  struct BuildParameterList<SimTK::Geo::CubicHermiteCurve_<P>>
  {
    typedef ParameterList<P> type;
  };

  template<typename P> struct IsMirroredType<SimTK::Geo::CubicHermiteCurve_<P>> : std::false_type { };
  template<typename P> struct DefaultConstructible<SimTK::Geo::CubicHermiteCurve_<P>> : std::false_type { };

  template<typename P>
  struct BuildParameterList<SimTK::Geo::BicubicHermitePatch_<P>>
  {
    typedef ParameterList<P> type;
  };

  template<typename P> struct IsMirroredType<SimTK::Geo::BicubicHermitePatch_<P>> : std::false_type { };
  template<typename P> struct DefaultConstructible<SimTK::Geo::BicubicHermitePatch_<P>> : std::false_type { };

  template<typename P>
  struct BuildParameterList<SimTK::Geo::CubicBezierCurve_<P>>
  {
    typedef ParameterList<P> type;
  };

  template<typename P> struct IsMirroredType<SimTK::Geo::CubicBezierCurve_<P>> : std::false_type { };
  template<typename P> struct DefaultConstructible<SimTK::Geo::CubicBezierCurve_<P>> : std::false_type { };

  template<typename P>
  struct BuildParameterList<SimTK::Geo::BicubicBezierPatch_<P>>
  {
    typedef ParameterList<P> type;
  };

  template<typename P> struct IsMirroredType<SimTK::Geo::BicubicBezierPatch_<P>> : std::false_type { };
  template<typename P> struct DefaultConstructible<SimTK::Geo::BicubicBezierPatch_<P>> : std::false_type { };

  template<> struct IsMirroredType<SimTK::Geodesic> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::Geodesic> : std::false_type { };
  template<> struct IsMirroredType<SimTK::GeodesicOptions> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::GeodesicOptions> : std::false_type { };
}

namespace jlsimbody{
  JLSIMBODY_NO_EXPORT void define_simmath_Geo(jlcxx::Module& types);
}

#endif // _JLSIMMATH_GEO_H
