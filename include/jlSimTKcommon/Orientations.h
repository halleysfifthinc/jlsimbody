#ifndef _JLSIMTKCOMMON_ORIENTATIONS_H
#define _JLSIMTKCOMMON_ORIENTATIONS_H

#include "SimTKcommon/internal/CompositeNumericalTypes.h"
#include "SimTKcommon/internal/ResultType.h"
#include "SimTKcommon/Scalar.h"
#include "SimTKcommon/internal/NTraits.h"
#include "SimTKcommon/internal/Quaternion.h"
#include "SimTKcommon/internal/Rotation.h"
#include "SimTKcommon/internal/Vec.h"
#include "SimTKcommon/internal/UnitVec.h"
#include "jlSimTKcommon/Array.h"

namespace jlcxx {

  template<typename P>
  struct BuildParameterList<SimTK::Quaternion_<P>>
  {
    typedef ParameterList<P> type;
  };

  template<typename P> struct IsMirroredType<SimTK::Quaternion_<P>> : std::false_type { };
  template<typename P> struct DefaultConstructible<SimTK::Quaternion_<P>> : std::false_type { };
  template<typename P> struct SuperType<SimTK::Quaternion_<P>> { typedef SimTK::Vec<4,P> type; };

  template<typename P>
  struct BuildParameterList<SimTK::Rotation_<P>>
  {
    typedef ParameterList<P> type;
  };

  template<typename P> struct IsMirroredType<SimTK::Rotation_<P>> : std::false_type { };
  template<typename P> struct DefaultConstructible<SimTK::Rotation_<P>> : std::false_type { };
  template<typename P> struct SuperType<SimTK::Rotation_<P>> { typedef SimTK::Mat<3,3,P> type; };

  template<typename P>
  struct BuildParameterList<SimTK::InverseRotation_<P>>
  {
    typedef ParameterList<P> type;
  };

  template<typename P> struct IsMirroredType<SimTK::InverseRotation_<P>> : std::false_type { };
  template<typename P> struct DefaultConstructible<SimTK::InverseRotation_<P>> : std::false_type { };
  template<typename P> struct SuperType<SimTK::InverseRotation_<P>> { typedef typename SimTK::Mat<3,3,double>::TransposeType type; };
}

namespace jlsimbody {
  typedef jlcxx::TypeWrapper<jlcxx::Parametric<jlcxx::TypeVar<1>, jlcxx::TypeVar<2>, jlcxx::TypeVar<3>>> WrappedVec;

  JLSIMBODY_NO_EXPORT void define_SimTKcommon_Orientations(jlcxx::Module& types, WrappedVec& vec, const ArrayWrapper& array_wrapper);
}

#endif // _JLSIMTKCOMMON_ORIENTATIONS_H
