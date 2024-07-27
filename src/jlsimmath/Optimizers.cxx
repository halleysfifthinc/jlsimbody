#include "jlsimbody/common.h"

#include "jlsimmath/Optimizers.h"

namespace jlsimbody {

void define_simmath_Optimizers(jlcxx::Module& module) {

  DEBUG_MSG("enum SimTK::OptimizerAlgorithm (" __HERE__ ")");
  module.add_bits<SimTK::OptimizerAlgorithm>("OptimizerAlgorithm", jlcxx::julia_type("CppEnum"));
  module.set_const("OptimizerAlgorithm_BestAvailable", SimTK::OptimizerAlgorithm::BestAvailable);
  module.set_const("OptimizerAlgorithm_InteriorPoint", SimTK::OptimizerAlgorithm::InteriorPoint);
  module.set_const("OptimizerAlgorithm_LBFGS", SimTK::OptimizerAlgorithm::LBFGS);
  module.set_const("OptimizerAlgorithm_LBFGSB", SimTK::OptimizerAlgorithm::LBFGSB);
  module.set_const("OptimizerAlgorithm_CFSQP", SimTK::OptimizerAlgorithm::CFSQP);
  module.set_const("OptimizerAlgorithm_CMAES", SimTK::OptimizerAlgorithm::CMAES);
  module.set_const("OptimizerAlgorithm_UnknownOptimizerAlgorithm", SimTK::OptimizerAlgorithm::UnknownOptimizerAlgorithm);
  module.set_const("OptimizerAlgorithm_UserSuppliedOptimizerAlgorithm", SimTK::OptimizerAlgorithm::UserSuppliedOptimizerAlgorithm);
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("enum SimTK::Differentiator::Method (" __HERE__ ")");
  module.add_bits<SimTK::Differentiator::Method>("DifferentiatorMethod", jlcxx::julia_type("CppEnum"));
  module.set_const("DifferentiatorMethod_UnspecifiedMethod", SimTK::Differentiator::Method::UnspecifiedMethod);
  module.set_const("DifferentiatorMethod_ForwardDifference", SimTK::Differentiator::Method::ForwardDifference);
  module.set_const("DifferentiatorMethod_CentralDifference", SimTK::Differentiator::Method::CentralDifference);
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("type SimTK::Optimizer (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simmath/Optimizer.h:421:28
  auto opt = module.add_type<SimTK::Optimizer>("Optimizer");
  opt.template constructor<>();
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("type SimTK::OptimizerSystem (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simmath/Optimizer.h:71:28
  auto optsys = module.add_type<SimTK::OptimizerSystem>("OptimizerSystem");
  optsys.template constructor<>();
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("void SimTK::Optimizer::Optimizer(const SimTK::OptimizerSystem &) (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simmath/Optimizer.h:424:5
  opt.constructor<const SimTK::OptimizerSystem &>();
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("void SimTK::Optimizer::Optimizer(const SimTK::OptimizerSystem &, SimTK::OptimizerAlgorithm) (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simmath/Optimizer.h:425:5
  opt.constructor<const SimTK::OptimizerSystem &, SimTK::OptimizerAlgorithm>();
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("void SimTK::Optimizer::setConvergenceTolerance(SimTK::Real) (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simmath/Optimizer.h:433:10
  opt.method("setConvergenceTolerance", static_cast<void (SimTK::Optimizer::*)(SimTK::Real) >(&SimTK::Optimizer::setConvergenceTolerance));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("void SimTK::Optimizer::setConstraintTolerance(SimTK::Real) (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simmath/Optimizer.h:436:10
  opt.method("setConstraintTolerance", static_cast<void (SimTK::Optimizer::*)(SimTK::Real) >(&SimTK::Optimizer::setConstraintTolerance));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("void SimTK::Optimizer::setMaxIterations(int) (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simmath/Optimizer.h:444:10
  opt.method("setMaxIterations", static_cast<void (SimTK::Optimizer::*)(int) >(&SimTK::Optimizer::setMaxIterations));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("void SimTK::Optimizer::setLimitedMemoryHistory(int) (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simmath/Optimizer.h:447:10
  opt.method("setLimitedMemoryHistory", static_cast<void (SimTK::Optimizer::*)(int) >(&SimTK::Optimizer::setLimitedMemoryHistory));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("void SimTK::Optimizer::setDiagnosticsLevel(int) (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simmath/Optimizer.h:449:10
  opt.method("setDiagnosticsLevel", static_cast<void (SimTK::Optimizer::*)(int) >(&SimTK::Optimizer::setDiagnosticsLevel));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("void SimTK::Optimizer::setOptimizerSystem(const SimTK::OptimizerSystem &) (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simmath/Optimizer.h:451:10
  opt.method("setOptimizerSystem", static_cast<void (SimTK::Optimizer::*)(const SimTK::OptimizerSystem &) >(&SimTK::Optimizer::setOptimizerSystem));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("void SimTK::Optimizer::setOptimizerSystem(const SimTK::OptimizerSystem &, SimTK::OptimizerAlgorithm) (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simmath/Optimizer.h:452:10
  opt.method("setOptimizerSystem", static_cast<void (SimTK::Optimizer::*)(const SimTK::OptimizerSystem &, SimTK::OptimizerAlgorithm) >(&SimTK::Optimizer::setOptimizerSystem));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("bool SimTK::Optimizer::setAdvancedStrOption(const char *, const char *) (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simmath/Optimizer.h:455:10
  opt.method("setAdvancedStrOption", static_cast<bool (SimTK::Optimizer::*)(const char *, const char *) >(&SimTK::Optimizer::setAdvancedStrOption));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("bool SimTK::Optimizer::setAdvancedRealOption(const char *, const SimTK::Real) (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simmath/Optimizer.h:457:10
  opt.method("setAdvancedRealOption", static_cast<bool (SimTK::Optimizer::*)(const char *, const SimTK::Real) >(&SimTK::Optimizer::setAdvancedRealOption));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("bool SimTK::Optimizer::setAdvancedIntOption(const char *, const int) (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simmath/Optimizer.h:459:10
  opt.method("setAdvancedIntOption", static_cast<bool (SimTK::Optimizer::*)(const char *, const int) >(&SimTK::Optimizer::setAdvancedIntOption));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("bool SimTK::Optimizer::setAdvancedBoolOption(const char *, const bool) (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simmath/Optimizer.h:461:10
  opt.method("setAdvancedBoolOption", static_cast<bool (SimTK::Optimizer::*)(const char *, const bool) >(&SimTK::Optimizer::setAdvancedBoolOption));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("bool SimTK::Optimizer::setAdvancedVectorOption(const char *, const SimTK::Vector) (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simmath/Optimizer.h:463:10
  opt.method("setAdvancedVectorOption", static_cast<bool (SimTK::Optimizer::*)(const char *, const SimTK::Vector) >(&SimTK::Optimizer::setAdvancedVectorOption));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("void SimTK::Optimizer::setDifferentiatorMethod(SimTK::Differentiator::Method) (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simmath/Optimizer.h:475:10
  opt.method("setDifferentiatorMethod", static_cast<void (SimTK::Optimizer::*)(SimTK::Differentiator::Method) >(&SimTK::Optimizer::setDifferentiatorMethod));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("SimTK::Differentiator::Method SimTK::Optimizer::getDifferentiatorMethod() (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simmath/Optimizer.h:480:28
  opt.method("getDifferentiatorMethod", static_cast<SimTK::Differentiator::Method (SimTK::Optimizer::*)()  const>(&SimTK::Optimizer::getDifferentiatorMethod));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("SimTK::OptimizerAlgorithm SimTK::Optimizer::getAlgorithm() (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simmath/Optimizer.h:486:24
  opt.method("getAlgorithm", static_cast<SimTK::OptimizerAlgorithm (SimTK::Optimizer::*)()  const>(&SimTK::Optimizer::getAlgorithm));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("void SimTK::Optimizer::useNumericalGradient(bool, SimTK::Real) (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simmath/Optimizer.h:499:10
  opt.method("useNumericalGradient", static_cast<void (SimTK::Optimizer::*)(bool, SimTK::Real) >(&SimTK::Optimizer::useNumericalGradient));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("void SimTK::Optimizer::useNumericalJacobian(bool, SimTK::Real) (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simmath/Optimizer.h:513:10
  opt.method("useNumericalJacobian", static_cast<void (SimTK::Optimizer::*)(bool, SimTK::Real) >(&SimTK::Optimizer::useNumericalJacobian));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("SimTK::Real SimTK::Optimizer::optimize(SimTK::Vector &) (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simmath/Optimizer.h:517:10
  opt.method("optimize", static_cast<SimTK::Real (SimTK::Optimizer::*)(SimTK::Vector &) >(&SimTK::Optimizer::optimize));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("const SimTK::OptimizerSystem & SimTK::Optimizer::getOptimizerSystem() (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simmath/Optimizer.h:520:28
  opt.method("getOptimizerSystem", static_cast<const SimTK::OptimizerSystem & (SimTK::Optimizer::*)()  const>(&SimTK::Optimizer::getOptimizerSystem));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("bool SimTK::Optimizer::isUsingNumericalGradient() (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simmath/Optimizer.h:523:10
  opt.method("isUsingNumericalGradient", static_cast<bool (SimTK::Optimizer::*)()  const>(&SimTK::Optimizer::isUsingNumericalGradient));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("bool SimTK::Optimizer::isUsingNumericalJacobian() (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simmath/Optimizer.h:525:10
  opt.method("isUsingNumericalJacobian", static_cast<bool (SimTK::Optimizer::*)()  const>(&SimTK::Optimizer::isUsingNumericalJacobian));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("SimTK::Real SimTK::Optimizer::getEstimatedAccuracyOfObjective() (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simmath/Optimizer.h:527:10
  opt.method("getEstimatedAccuracyOfObjective", static_cast<SimTK::Real (SimTK::Optimizer::*)()  const>(&SimTK::Optimizer::getEstimatedAccuracyOfObjective));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("SimTK::Real SimTK::Optimizer::getEstimatedAccuracyOfConstraints() (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simmath/Optimizer.h:529:10
  opt.method("getEstimatedAccuracyOfConstraints", static_cast<SimTK::Real (SimTK::Optimizer::*)()  const>(&SimTK::Optimizer::getEstimatedAccuracyOfConstraints));
  CLEAR_DEBUG_MSG();



  DEBUG_MSG("void SimTK::OptimizerSystem::OptimizerSystem(int) (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simmath/Optimizer.h:83:14
  optsys.constructor<int>();
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("int SimTK::OptimizerSystem::objectiveFunc(const SimTK::Vector &, bool, SimTK::Real &) (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simmath/Optimizer.h:98:17
  optsys.method("objectiveFunc", static_cast<int (SimTK::OptimizerSystem::*)(const SimTK::Vector &, bool, SimTK::Real &)  const>(&SimTK::OptimizerSystem::objectiveFunc));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("int SimTK::OptimizerSystem::gradientFunc(const SimTK::Vector &, bool, SimTK::Vector &) (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simmath/Optimizer.h:105:17
  optsys.method("gradientFunc", static_cast<int (SimTK::OptimizerSystem::*)(const SimTK::Vector &, bool, SimTK::Vector &)  const>(&SimTK::OptimizerSystem::gradientFunc));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("int SimTK::OptimizerSystem::constraintFunc(const SimTK::Vector &, bool, SimTK::Vector &) (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simmath/Optimizer.h:111:17
  optsys.method("constraintFunc", static_cast<int (SimTK::OptimizerSystem::*)(const SimTK::Vector &, bool, SimTK::Vector &)  const>(&SimTK::OptimizerSystem::constraintFunc));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("int SimTK::OptimizerSystem::constraintJacobian(const SimTK::Vector &, bool, SimTK::Matrix &) (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simmath/Optimizer.h:117:17
  optsys.method("constraintJacobian", static_cast<int (SimTK::OptimizerSystem::*)(const SimTK::Vector &, bool, SimTK::Matrix &)  const>(&SimTK::OptimizerSystem::constraintJacobian));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("int SimTK::OptimizerSystem::hessian(const SimTK::Vector &, bool, SimTK::Vector &) (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simmath/Optimizer.h:123:17
  optsys.method("hessian", static_cast<int (SimTK::OptimizerSystem::*)(const SimTK::Vector &, bool, SimTK::Vector &)  const>(&SimTK::OptimizerSystem::hessian));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("void SimTK::OptimizerSystem::setNumParameters(const int) (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simmath/Optimizer.h:129:9
  optsys.method("setNumParameters", static_cast<void (SimTK::OptimizerSystem::*)(const int) >(&SimTK::OptimizerSystem::setNumParameters));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("void SimTK::OptimizerSystem::setNumEqualityConstraints(const int) (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simmath/Optimizer.h:139:9
  optsys.method("setNumEqualityConstraints", static_cast<void (SimTK::OptimizerSystem::*)(const int) >(&SimTK::OptimizerSystem::setNumEqualityConstraints));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("void SimTK::OptimizerSystem::setNumInequalityConstraints(const int) (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simmath/Optimizer.h:149:9
  optsys.method("setNumInequalityConstraints", static_cast<void (SimTK::OptimizerSystem::*)(const int) >(&SimTK::OptimizerSystem::setNumInequalityConstraints));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("void SimTK::OptimizerSystem::setNumLinearEqualityConstraints(const int) (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simmath/Optimizer.h:159:9
  optsys.method("setNumLinearEqualityConstraints", static_cast<void (SimTK::OptimizerSystem::*)(const int) >(&SimTK::OptimizerSystem::setNumLinearEqualityConstraints));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("void SimTK::OptimizerSystem::setNumLinearInequalityConstraints(const int) (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simmath/Optimizer.h:169:9
  optsys.method("setNumLinearInequalityConstraints", static_cast<void (SimTK::OptimizerSystem::*)(const int) >(&SimTK::OptimizerSystem::setNumLinearInequalityConstraints));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("void SimTK::OptimizerSystem::setParameterLimits(const SimTK::Vector &, const SimTK::Vector &) (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simmath/Optimizer.h:179:9
  optsys.method("setParameterLimits", static_cast<void (SimTK::OptimizerSystem::*)(const SimTK::Vector &, const SimTK::Vector &) >(&SimTK::OptimizerSystem::setParameterLimits));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("int SimTK::OptimizerSystem::getNumParameters() (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simmath/Optimizer.h:208:8
  optsys.method("getNumParameters", static_cast<int (SimTK::OptimizerSystem::*)()  const>(&SimTK::OptimizerSystem::getNumParameters));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("int SimTK::OptimizerSystem::getNumConstraints() (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simmath/Optimizer.h:210:8
  optsys.method("getNumConstraints", static_cast<int (SimTK::OptimizerSystem::*)()  const>(&SimTK::OptimizerSystem::getNumConstraints));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("int SimTK::OptimizerSystem::getNumEqualityConstraints() (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simmath/Optimizer.h:212:8
  optsys.method("getNumEqualityConstraints", static_cast<int (SimTK::OptimizerSystem::*)()  const>(&SimTK::OptimizerSystem::getNumEqualityConstraints));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("int SimTK::OptimizerSystem::getNumInequalityConstraints() (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simmath/Optimizer.h:214:8
  optsys.method("getNumInequalityConstraints", static_cast<int (SimTK::OptimizerSystem::*)()  const>(&SimTK::OptimizerSystem::getNumInequalityConstraints));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("int SimTK::OptimizerSystem::getNumLinearEqualityConstraints() (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simmath/Optimizer.h:216:8
  optsys.method("getNumLinearEqualityConstraints", static_cast<int (SimTK::OptimizerSystem::*)()  const>(&SimTK::OptimizerSystem::getNumLinearEqualityConstraints));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("int SimTK::OptimizerSystem::getNumNonlinearEqualityConstraints() (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simmath/Optimizer.h:218:8
  optsys.method("getNumNonlinearEqualityConstraints", static_cast<int (SimTK::OptimizerSystem::*)()  const>(&SimTK::OptimizerSystem::getNumNonlinearEqualityConstraints));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("int SimTK::OptimizerSystem::getNumLinearInequalityConstraints() (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simmath/Optimizer.h:220:8
  optsys.method("getNumLinearInequalityConstraints", static_cast<int (SimTK::OptimizerSystem::*)()  const>(&SimTK::OptimizerSystem::getNumLinearInequalityConstraints));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("int SimTK::OptimizerSystem::getNumNonlinearInequalityConstraints() (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simmath/Optimizer.h:222:8
  optsys.method("getNumNonlinearInequalityConstraints", static_cast<int (SimTK::OptimizerSystem::*)()  const>(&SimTK::OptimizerSystem::getNumNonlinearInequalityConstraints));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("bool SimTK::OptimizerSystem::getHasLimits() (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simmath/Optimizer.h:225:9
  optsys.method("getHasLimits", static_cast<bool (SimTK::OptimizerSystem::*)()  const>(&SimTK::OptimizerSystem::getHasLimits));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("void SimTK::OptimizerSystem::getParameterLimits(SimTK::Real **, SimTK::Real **) (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simmath/Optimizer.h:229:9
  optsys.method("getParameterLimits", static_cast<void (SimTK::OptimizerSystem::*)(SimTK::Real **, SimTK::Real **)  const>(&SimTK::OptimizerSystem::getParameterLimits));
  CLEAR_DEBUG_MSG();


}

}
