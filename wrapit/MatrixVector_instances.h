#include "SimTKcommon/internal/BigMatrix.h"

#ifndef jlosimCommon_EXPORTS
    // nm -C build/libosim* | rg --only-matching '(Row)?(Vector|Matrix)_<((SimTK::)?\w+(<[^>]*>)?([^>]*)?>)' | sort | uniq
    extern template class SimTK::Matrix_<typename SimTK::Vec<2, typename SimTK::Vec<3, double, 1>>>;
    extern template class SimTK::Matrix_<typename SimTK::Vec<3, double, 1>>;
    extern template class SimTK::Matrix_<double>;
    extern template class SimTK::Vector_<typename SimTK::Rotation_<double>>;
    extern template class SimTK::Vector_<typename SimTK::Quaternion_<double>>;
    extern template class SimTK::Vector_<typename SimTK::Mat<3,3,double>>;
    extern template class SimTK::Vector_<typename SimTK::UnitVec<double, 1>>;
    extern template class SimTK::Vector_<typename SimTK::Vec<2, typename SimTK::Vec<3, double, 1>>>;
    extern template class SimTK::Vector_<typename SimTK::Vec<6, double, 1>>;
    extern template class SimTK::Vector_<typename SimTK::Vec<3, double, 1>>;
    extern template class SimTK::Vector_<typename SimTK::Vec<1, double, 1>>;
    extern template class SimTK::Vector_<double>;
#endif
