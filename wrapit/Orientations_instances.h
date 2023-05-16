#include "SimTKcommon/internal/Quaternion.h"
#include "SimTKcommon/internal/Rotation.h"

#ifndef jlosimCommon_EXPORTS
    extern template class SimTK::Rotation_<double>;
    extern template class SimTK::InverseRotation_<double>;
    extern template class SimTK::Quaternion_<double>::Vec3P;
    extern template class SimTK::Quaternion_<double>::Vec4P;
    extern template class SimTK::Quaternion_<double>;
#endif
