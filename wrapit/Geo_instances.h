#include "SimTKcommon/internal/Function.h"

#ifndef jlosimCommon_EXPORTS
    // extern template class SimTK::Geo_<double>;
    extern template class SimTK::Geo::Point_<double>;
    extern template class SimTK::Geo::Sphere_<double>;
    extern template class SimTK::Geo::LineSeg_<double>;
    extern template class SimTK::Geo::Line_<double>;
    extern template class SimTK::Geo::Plane_<double>;
    extern template class SimTK::Geo::Circle_<double>;
    extern template class SimTK::Geo::Box_<double>;
    extern template class SimTK::Geo::AlignedBox_<double>;
    extern template class SimTK::Geo::OrientedBox_<double>;
    extern template class SimTK::Geo::Triangle_<double>;
    extern template class SimTK::Geo::_<double>;
    extern template class SimTK::Geo::CubicHermiteCurve_<double>;
    extern template class SimTK::Geo::BicubicHermitePatch_<double>;
    extern template class SimTK::Geo::CubicBezierCurve_<double>;
    extern template class SimTK::Geo::BicubicBezierPatch_<double>;
#endif
