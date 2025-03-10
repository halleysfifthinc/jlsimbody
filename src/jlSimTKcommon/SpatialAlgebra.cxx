// this file was auto-generated by wrapit v0.1.0-61-g71d8603-dirty
#include "jlsimbody/common.h"

#include "jlSimTKcommon/SpatialAlgebra.h"

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
