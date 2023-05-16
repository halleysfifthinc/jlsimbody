#include "SimTKcommon/internal/common.h"
#include "SimTKcommon/internal/UnitVec.h"


#ifndef jlosimCommon_EXPORTS
    extern template class SimTK::UnitVec<double, 1>;
    // extern template class SimTK::Quaternion_<double>;
    extern template class SimTK::Vec<16, double, 1>;
    extern template class SimTK::Vec<12, double, 1>;
    extern template class SimTK::Vec<11, double, 1>;
    extern template class SimTK::Vec<10, std::complex<double>, 1>;
    extern template class SimTK::Vec<10, double, 1>;
    extern template class SimTK::Vec<9, double, 1>;
    extern template class SimTK::Vec<8, double, 1>;
    extern template class SimTK::Vec<7, double, 1>;
    extern template class SimTK::Vec<6, std::complex<double>, 1>;
    extern template class SimTK::Vec<6, double, 1>;
    extern template class SimTK::Vec<5, SimTK::Row<3, double, 1>, 1>;
    extern template class SimTK::Vec<5, SimTK::Vec<3, double, 1>, 1>;
    extern template class SimTK::Vec<5, double, 1>;
    extern template class SimTK::Vec<4, std::complex<double>, 1>;
    extern template class SimTK::Vec<4, std::complex<double>, 1>;
    extern template class SimTK::Vec<4, SimTK::Row<3, double, 1>, 1>;
    extern template class SimTK::Vec<4, SimTK::Vec<3, double, 1>, 1>;
    extern template class SimTK::Vec<4, double, 1>;
    extern template class SimTK::Vec<3, std::complex<double>, 1>;
    extern template class SimTK::Vec<2, std::complex<double>, 1>;
    extern template class SimTK::Vec<2, SimTK::Vec<3, double, 1>, 1>;
    extern template class SimTK::Vec<3, double, 1>;
    extern template class SimTK::Vec<2, double, 1>;
    extern template class SimTK::Vec<1, double, 1>;
#endif
