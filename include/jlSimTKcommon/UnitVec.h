#ifndef _JLSIMTKCOMMON_UNITVEC_H
#define _JLSIMTKCOMMON_UNITVEC_H

#include "SimTKcommon/SmallMatrix.h"
#include "SimTKcommon/internal/UnitVec.h"
#include "SimTKcommon/internal/CoordinateAxis.h"

namespace jlcxx {

  template<typename P, int S>
  struct BuildParameterList<SimTK::UnitVec<P, S>>
  {
    typedef ParameterList<P, std::integral_constant<long, S>> type;
  };

  template<typename P, int S> struct IsMirroredType<SimTK::UnitVec<P, S>> : std::false_type { };
  template<typename P, int S> struct DefaultConstructible<SimTK::UnitVec<P, S>> : std::false_type { };
  template<typename P, int S> struct SuperType<SimTK::UnitVec<P, S>> { typedef SimTK::Vec<3,P,S> type; };
}

namespace jlsimbody {
  JLSIMBODY_NO_EXPORT void define_SimTKcommon_UnitVec(jlcxx::Module& types, jlcxx::TypeWrapper<jlcxx::Parametric<jlcxx::TypeVar<1>, jlcxx::TypeVar<2>, jlcxx::TypeVar<3>>>&);
}

#endif // _JLSIMTKCOMMON_UNITVEC_H
