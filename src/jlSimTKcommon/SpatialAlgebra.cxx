// this file was auto-generated by wrapit v0.1.0-61-g71d8603-dirty
#include "jlsimbody/common.h"

#include "jlSimTKcommon/SpatialAlgebra.h"

#ifdef VERBOSE_IMPORT
#  define DEBUG_MSG(a) std::cerr << a << "\n"
#  define CLEAR_DEBUG_MSG() std::cerr << "\33[2K\33[1F\33[0K\r"
#else
#  define DEBUG_MSG(a)
#  define CLEAR_DEBUG_MSG()
#endif
#define __HERE__  __FILE__ ":" QUOTE2(__LINE__)
#define QUOTE(arg) #arg
#define QUOTE2(arg) QUOTE(arg)

namespace jlsimbody {

void define_SimTKcommon_SpatialAlgebra(jlcxx::Module& types){
  types.method("findRelativeVelocity", &SimTK::findRelativeVelocity);
  types.method("findRelativeVelocityInF", &SimTK::findRelativeVelocityInF);
  types.method("findRelativeAcceleration", &SimTK::findRelativeAcceleration);
  types.method("findRelativeAccelerationInF", &SimTK::findRelativeAccelerationInF);

  types.method("reverseRelativeVelocity", &SimTK::reverseRelativeVelocity);
  types.method("reverseRelativeVelocityInA", &SimTK::reverseRelativeVelocityInA);

  types.method("shiftVelocityBy", &SimTK::shiftVelocityBy);
  types.method("shiftVelocityFromTo", &SimTK::shiftVelocityFromTo);
  types.method("shiftForceBy", &SimTK::shiftForceBy);
  types.method("shiftForceFromTo", &SimTK::shiftForceFromTo);
  types.method("shiftAccelerationBy", &SimTK::shiftAccelerationBy);
  types.method("shiftAccelerationFromTo", &SimTK::shiftAccelerationFromTo);
}
}
