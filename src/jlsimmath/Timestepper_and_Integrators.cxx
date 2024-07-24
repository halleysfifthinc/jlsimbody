#include "jlsimbody/common.h"

#include "jlsimmath/Timestepper_and_Integrators.h"

namespace jlsimbody {

class JlSimTK_Integrator;
class JlSimTK_TimeStepper;
class JlSimTK_CPodesIntegrator;
class JlSimTK_ExplicitEulerIntegrator;
class JlSimTK_RungeKutta2Integrator;
class JlSimTK_RungeKutta3Integrator;
class JlSimTK_RungeKuttaFeldbergIntegrator;
class JlSimTK_RungeKuttaMersonIntegrator;
class JlSimTK_SemiExplicitEuler2Integrator;
class JlSimTK_SemiExplicitEulerIntegrator;
class JlSimTK_VerletIntegrator;

std::shared_ptr<Wrapper> newJlSimTK_Integrator(jlcxx::Module&);
std::shared_ptr<Wrapper> newJlSimTK_TimeStepper(jlcxx::Module&);
std::shared_ptr<Wrapper> newJlSimTK_CPodesIntegrator(jlcxx::Module&);
std::shared_ptr<Wrapper> newJlSimTK_ExplicitEulerIntegrator(jlcxx::Module&);
std::shared_ptr<Wrapper> newJlSimTK_RungeKutta2Integrator(jlcxx::Module&);
std::shared_ptr<Wrapper> newJlSimTK_RungeKutta3Integrator(jlcxx::Module&);
std::shared_ptr<Wrapper> newJlSimTK_RungeKuttaFeldbergIntegrator(jlcxx::Module&);
std::shared_ptr<Wrapper> newJlSimTK_RungeKuttaMersonIntegrator(jlcxx::Module&);
std::shared_ptr<Wrapper> newJlSimTK_SemiExplicitEuler2Integrator(jlcxx::Module&);
std::shared_ptr<Wrapper> newJlSimTK_SemiExplicitEulerIntegrator(jlcxx::Module&);
std::shared_ptr<Wrapper> newJlSimTK_VerletIntegrator(jlcxx::Module&);

void define_simmath_Timestepper_and_Integrators(jlcxx::Module& module) {

  std::vector<std::shared_ptr<Wrapper>> wrappers = {
    std::shared_ptr<Wrapper>(newJlSimTK_Integrator(module)),
    std::shared_ptr<Wrapper>(newJlSimTK_TimeStepper(module)),
    std::shared_ptr<Wrapper>(newJlSimTK_CPodesIntegrator(module)),
    std::shared_ptr<Wrapper>(newJlSimTK_ExplicitEulerIntegrator(module)),
    std::shared_ptr<Wrapper>(newJlSimTK_RungeKutta2Integrator(module)),
    std::shared_ptr<Wrapper>(newJlSimTK_RungeKutta3Integrator(module)),
    std::shared_ptr<Wrapper>(newJlSimTK_RungeKuttaFeldbergIntegrator(module)),
    std::shared_ptr<Wrapper>(newJlSimTK_RungeKuttaMersonIntegrator(module)),
    std::shared_ptr<Wrapper>(newJlSimTK_SemiExplicitEuler2Integrator(module)),
    std::shared_ptr<Wrapper>(newJlSimTK_SemiExplicitEulerIntegrator(module)),
    std::shared_ptr<Wrapper>(newJlSimTK_VerletIntegrator(module))
  };

  DEBUG_MSG("enum SimTK::Integrator::SuccessfulStepStatus (" __HERE__ ")");
  // defined in simbody/simmath/Integrator.h:202:10
  module.add_bits<SimTK::Integrator::SuccessfulStepStatus>("IntegratorSuccessfulStepStatus", jlcxx::julia_type("CppEnum"));
  module.set_const("Integrator_ReachedReportTime", SimTK::Integrator::ReachedReportTime);
  module.set_const("Integrator_ReachedEventTrigger", SimTK::Integrator::ReachedEventTrigger);
  module.set_const("Integrator_ReachedScheduledEvent", SimTK::Integrator::ReachedScheduledEvent);
  module.set_const("Integrator_TimeHasAdvanced", SimTK::Integrator::TimeHasAdvanced);
  module.set_const("Integrator_ReachedStepLimit", SimTK::Integrator::ReachedStepLimit);
  module.set_const("Integrator_EndOfSimulation", SimTK::Integrator::EndOfSimulation);
  module.set_const("Integrator_StartOfContinuousInterval", SimTK::Integrator::StartOfContinuousInterval);
  module.set_const("Integrator_InvalidSuccessfulStepStatus", SimTK::Integrator::InvalidSuccessfulStepStatus);
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("enum SimTK::Integrator::TerminationReason (" __HERE__ ")");
  // defined in simbody/simmath/Integrator.h:250:10
  module.add_bits<SimTK::Integrator::TerminationReason>("IntegratorTerminationReason", jlcxx::julia_type("CppEnum"));
  module.set_const("Integrator_ReachedFinalTime", SimTK::Integrator::ReachedFinalTime);
  module.set_const("Integrator_AnUnrecoverableErrorOccurred", SimTK::Integrator::AnUnrecoverableErrorOccurred);
  module.set_const("Integrator_EventHandlerRequestedTermination", SimTK::Integrator::EventHandlerRequestedTermination);
  module.set_const("Integrator_InvalidTerminationReason", SimTK::Integrator::InvalidTerminationReason);
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("enum SimTK::CPodes::LinearMultistepMethod (" __HERE__ ")");
  // defined in simbody/simmath/internal/SimTKcpodes.h:133:10
  module.add_bits<SimTK::CPodes::LinearMultistepMethod>("CPodesLinearMultistepMethod", jlcxx::julia_type("CppEnum"));
  module.set_const("CPodes_UnspecifiedLinearMultistepMethod", SimTK::CPodes::UnspecifiedLinearMultistepMethod);
  module.set_const("CPodes_BDF", SimTK::CPodes::BDF);
  module.set_const("CPodes_Adams", SimTK::CPodes::Adams);
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("enum SimTK::CPodes::NonlinearSystemIterationType (" __HERE__ ")");
  // defined in simbody/simmath/internal/SimTKcpodes.h:139:10
  module.add_bits<SimTK::CPodes::NonlinearSystemIterationType>("CPodesNonlinearSystemIterationType", jlcxx::julia_type("CppEnum"));
  module.set_const("CPodes_UnspecifiedNonlinearSystemIterationType", SimTK::CPodes::UnspecifiedNonlinearSystemIterationType);
  module.set_const("CPodes_Newton", SimTK::CPodes::Newton);
  module.set_const("CPodes_Functional", SimTK::CPodes::Functional);
  CLEAR_DEBUG_MSG();

  for(const auto& w: wrappers) w->add_methods();

}

}
