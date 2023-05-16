#include "SimTKcommon/internal/common.h"

#ifndef jlosimCommon_EXPORTS
    extern template class SimTK::Mat<6, 6, double, 6, 1>;
    extern template class SimTK::Mat<6, 3, double, 6, 1>;
    extern template class SimTK::Mat<6, 2, SimTK::Row<3, double, 1>, 1, 2>;
    extern template class SimTK::Mat<5, 5, std::complex<double>, 5, 1>;
    extern template class SimTK::Mat<5, 5, double, 5, 1>;
    extern template class SimTK::Mat<5, 2, SimTK::Row<3, double, 1>, 1, 2>;
    extern template class SimTK::Mat<4, 4, std::complex<double>, 4, 1>;
    extern template class SimTK::Mat<4, 4, SimTK::Vec<3, double, 1>, 4, 1>;
    extern template class SimTK::Mat<4, 4, double, 4, 1>;
    extern template class SimTK::Mat<4, 2, SimTK::Row<3, double, 1>, 1, 2>;
    extern template class SimTK::Mat<3, 4, double, 3, 1>;
    extern template class SimTK::Mat<2, 2, SimTK::Mat<3, 3, double, 3, 1>, 2, 1>;
    extern template class SimTK::Mat<3, 3, std::complex<double>, 3, 1>;
    extern template class SimTK::Mat<3, 3, double, 3, 1>;
    extern template class SimTK::Mat<3, 3, double, 3, 1>;
    extern template class SimTK::Mat<3, 2, SimTK::Row<3, double, 1>, 1, 2>;
    extern template class SimTK::Mat<2, 6, SimTK::Vec<3, double, 1>, 2, 1>;
    extern template class SimTK::Mat<2, 5, SimTK::Vec<3, double, 1>, 2, 1>;
    extern template class SimTK::Mat<2, 4, SimTK::Vec<3, double, 1>, 2, 1>;
    extern template class SimTK::Mat<2, 3, SimTK::Vec<3, double, 1>, 2, 1>;
    extern template class SimTK::Mat<2, 2, std::complex<double>, 2, 1>;
    extern template class SimTK::Mat<2, 2, SimTK::Vec<3, double, 1>, 2, 1>;
    extern template class SimTK::Mat<2, 2, SimTK::Row<3, double, 1>, 1, 2>;
    extern template class SimTK::Mat<2, 2, double, 2, 1>;
    extern template class SimTK::Mat<2, 1, SimTK::Vec<3, double, 1>, 2, 1>;
    extern template class SimTK::Mat<1, 2, SimTK::Row<3, double, 1>, 1, 2>;
    extern template class SimTK::Mat<1, 1, double, 1, 1>;
#endif
