#ifndef _JLSIMMATH_OPTIMIZERS_H_
#define _JLSIMMATH_OPTIMIZERS_H_

#include "simmath/Optimizer.h"

namespace jlcxx {
  template<> struct IsMirroredType<SimTK::OptimizerSystem> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::OptimizerSystem> : std::false_type { };
  template<> struct IsMirroredType<SimTK::Optimizer> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::Optimizer> : std::false_type { };

}

namespace jlsimbody {
  JLSIMBODY_NO_EXPORT void define_simmath_Optimizers(jlcxx::Module&);
}

#endif // _JLSIMMATH_OPTIMIZERS_H_
