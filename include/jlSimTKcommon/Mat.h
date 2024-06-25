#ifndef _JLSIMTKCOMMON_MAT_H_
#define _JLSIMTKCOMMON_MAT_H_

#include "SimTKcommon/internal/CompositeNumericalTypes.h"
#include "SimTKcommon/internal/ResultType.h"
#include "SimTKcommon/Scalar.h"
#include "SimTKcommon/internal/negator.h"
#include "SimTKcommon/internal/conjugate.h"
#include "SimTKcommon/internal/NTraits.h"
#include "SimTKcommon/internal/Mat.h"
#include "SimTKcommon/internal/SymMat.h"
#include "jlSimTKcommon/Vec.h"
#include "jlSimTKcommon/Row.h"

namespace jlcxx {

  template<int M, int N, typename ELT, int CS, int RS>
  struct BuildParameterList<SimTK::Mat<M, N, ELT, CS, RS>>
  {
    typedef ParameterList<std::integral_constant<int, M>, std::integral_constant<int, N>, ELT, std::integral_constant<int, CS>, std::integral_constant<int, RS>> type;
  };

  template<int M, int N, typename ELT, int CS, int RS> struct IsMirroredType<SimTK::Mat<M, N, ELT, CS, RS>> : std::false_type { };
  template<int M, int N, typename ELT, int CS, int RS> struct DefaultConstructible<SimTK::Mat<M, N, ELT, CS, RS>> : std::false_type { };

  template<int M, typename ELT, int RS>
  struct BuildParameterList<SimTK::SymMat<M, ELT, RS>>
  {
    typedef ParameterList<std::integral_constant<int, M>, ELT, std::integral_constant<int, RS>> type;
  };

  template<int M, typename ELT, int RS> struct IsMirroredType<SimTK::SymMat<M, ELT, RS>> : std::false_type { };
  template<int M, typename ELT, int RS> struct DefaultConstructible<SimTK::SymMat<M, ELT, RS>> : std::false_type { };
}

namespace jlsimbody {
  JLSIMBODY_NO_EXPORT void define_SimTKcommon_Mat(jlcxx::Module& types);
}

#endif // _JLSIMTKCOMMON_MAT_H_
