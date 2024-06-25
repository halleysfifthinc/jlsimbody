#ifndef _JLSIMTKCOMMON_TRANSFORM_H
#define _JLSIMTKCOMMON_TRANSFORM_H

#include "SimTKcommon/internal/CompositeNumericalTypes.h"
#include "SimTKcommon/internal/ResultType.h"
#include "SimTKcommon/Scalar.h"
#include "SimTKcommon/internal/NTraits.h"
#include "SimTKcommon/internal/Rotation.h"
#include "SimTKcommon/internal/Vec.h"
#include "SimTKcommon/internal/Transform.h"

#include "jlSimTKcommon/Array.h"

namespace jlcxx {

  template<typename P>
  struct BuildParameterList<SimTK::Transform_<P>>
  {
    typedef ParameterList<P> type;
  };

  template<typename P> struct IsMirroredType<SimTK::Transform_<P>> : std::false_type { };
  template<typename P> struct DefaultConstructible<SimTK::Transform_<P>> : std::false_type { };

  template<typename P>
  struct BuildParameterList<SimTK::InverseTransform_<P>>
  {
    typedef ParameterList<P> type;
  };

  template<typename P> struct IsMirroredType<SimTK::InverseTransform_<P>> : std::false_type { };
  template<typename P> struct DefaultConstructible<SimTK::InverseTransform_<P>> : std::false_type { };

}

namespace jlsimbody {
  JLSIMBODY_NO_EXPORT void define_SimTKcommon_Transform(jlcxx::Module& types, const ArrayWrapper& array_wrapper);
}

#endif // _JLSIMTKCOMMON_TRANSFORM_H
