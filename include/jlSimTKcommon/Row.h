#ifndef _JLSIMTKCOMMON_ROW_H_
#define _JLSIMTKCOMMON_ROW_H_

#include "SimTKcommon/internal/CompositeNumericalTypes.h"
#include "SimTKcommon/internal/ResultType.h"
#include "SimTKcommon/Scalar.h"
#include "SimTKcommon/internal/negator.h"
#include "SimTKcommon/internal/conjugate.h"
#include "SimTKcommon/internal/NTraits.h"
#include "SimTKcommon/internal/Row.h"

namespace jlcxx {

  template<int N, typename ELT, int STRIDE>
  struct BuildParameterList<SimTK::Row<N, ELT, STRIDE>>
  {
    typedef ParameterList<std::integral_constant<int, N>, ELT, std::integral_constant<int, STRIDE>> type;
  };

  template<int N, typename ELT, int STRIDE> struct IsMirroredType<SimTK::Row<N, ELT, STRIDE>> : std::false_type { };
  template<int N, typename ELT, int STRIDE> struct DefaultConstructible<SimTK::Row<N, ELT, STRIDE>> : std::false_type { };
}

namespace jlsimbody {
  JLSIMBODY_NO_EXPORT void define_SimTKcommon_Row(jlcxx::Module& types);
}

#endif // _JLSIMTKCOMMON_ROW_H_
