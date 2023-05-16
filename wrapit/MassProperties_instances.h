#include "SimTKcommon/internal/MassProperties.h"

#ifndef jlosimCommon_EXPORTS
    typedef double P;
    extern template class SimTK::Inertia_<double>;
    extern template class SimTK::MassProperties_<double>;
#endif
