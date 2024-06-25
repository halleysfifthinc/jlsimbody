#ifndef _JLSIMTKCOMMON_UNITVEC_H
#define _JLSIMTKCOMMON_UNITVEC_H

#include "SimTKcommon/SmallMatrix.h"
#include "SimTKcommon/internal/UnitVec.h"
#include "SimTKcommon/internal/CoordinateAxis.h"

namespace jlcxx {

  template<typename P, int S>
  struct BuildParameterList<SimTK::UnitVec<P, S>>
  {
    typedef ParameterList<P, std::integral_constant<int, S>> type;
  };

  template<typename P, int S> struct IsMirroredType<SimTK::UnitVec<P, S>> : std::false_type { };
  template<typename P, int S> struct DefaultConstructible<SimTK::UnitVec<P, S>> : std::false_type { };

// Not tested
//   template<typename P, int S> struct SuperType<SimTK::UnitVec<P, S>> { typedef SimTK::Vec<3,P,S> type };
}

namespace jlsimbody {
  JLSIMBODY_NO_EXPORT void define_SimTKcommon_UnitVec(jlcxx::Module& types);
}

#endif // _JLSIMTKCOMMON_UNITVEC_H
