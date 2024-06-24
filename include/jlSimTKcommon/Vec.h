#include "SimTKcommon/internal/CompositeNumericalTypes.h"
#include "SimTKcommon/internal/ResultType.h"
#include "SimTKcommon/Scalar.h"
#include "SimTKcommon/internal/negator.h"
#include "SimTKcommon/internal/conjugate.h"
#include "SimTKcommon/internal/NTraits.h"
#include "SimTKcommon/internal/common.h"
#include "SimTKcommon/internal/Vec.h"

#include "jlSimTKcommon/Array.h"
#include "jlSimTKcommon/Row.h"

#ifndef _JLSIMTKCOMMON_VEC_H_
#define _JLSIMTKCOMMON_VEC_H_

namespace jlcxx {

  template<int M, typename ELT, int STRIDE>
  struct BuildParameterList<SimTK::Vec<M, ELT, STRIDE>>
  {
    typedef ParameterList<std::integral_constant<int, M>, ELT, std::integral_constant<int, STRIDE>> type;
  };

  template<int M, typename ELT, int STRIDE> struct IsMirroredType<SimTK::Vec<M, ELT, STRIDE>> : std::false_type { };
  template<int M, typename ELT, int STRIDE> struct DefaultConstructible<SimTK::Vec<M, ELT, STRIDE>> : std::false_type { };
}

namespace jlsimbody {
  JLSIMBODY_NO_EXPORT void define_SimTKcommon_Vec(jlcxx::Module& types, const ArrayWrapper& array_wrapper);
}

#endif // _JLSIMTKCOMMON_VEC_H_
