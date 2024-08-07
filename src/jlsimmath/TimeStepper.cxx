// this file was auto-generated by wrapit v1.3.3
#include "jlsimbody/common.h"

#include "jlsimmath/Timestepper_and_Integrators.h"

namespace jlcxx {
  template<> struct IsMirroredType<SimTK::TimeStepper> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::TimeStepper> : std::false_type { };
}

namespace jlsimbody {

// Class generating the wrapper for type SimTK::TimeStepper
struct JLSIMBODY_NO_EXPORT JlSimTK_TimeStepper : public Wrapper {

  JlSimTK_TimeStepper(jlcxx::Module& module): Wrapper(module){
    DEBUG_MSG("type SimTK::TimeStepper (" __HERE__ ")");
    // defined in simbody/simmath/TimeStepper.h:46:28
    jlcxx::TypeWrapper<SimTK::TimeStepper>  t = module.add_type<SimTK::TimeStepper>("TimeStepper");
    CLEAR_DEBUG_MSG();

    type_ = std::unique_ptr<jlcxx::TypeWrapper<SimTK::TimeStepper>>(new jlcxx::TypeWrapper<SimTK::TimeStepper>(module, t));
  }

  void add_methods() const{
    auto& t = *type_;


    DEBUG_MSG("void SimTK::TimeStepper::TimeStepper(const SimTK::System &) (" __HERE__ ")");
    // defined in simbody/simmath/TimeStepper.h:54:14
    t.constructor<const SimTK::System &>();
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("void SimTK::TimeStepper::TimeStepper(const SimTK::System &, SimTK::Integrator &) (" __HERE__ ")");
    // defined in simbody/simmath/TimeStepper.h:58:5
    t.constructor<const SimTK::System &, SimTK::Integrator &>();
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("void SimTK::TimeStepper::setIntegrator(SimTK::Integrator &) (" __HERE__ ")");
    // defined in simbody/simmath/TimeStepper.h:63:10
    t.method("setIntegrator", static_cast<void (SimTK::TimeStepper::*)(SimTK::Integrator &) >(&SimTK::TimeStepper::setIntegrator));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("const SimTK::Integrator & SimTK::TimeStepper::getIntegrator() (" __HERE__ ")");
    // defined in simbody/simmath/TimeStepper.h:67:23
    t.method("getIntegrator", static_cast<const SimTK::Integrator & (SimTK::TimeStepper::*)()  const>(&SimTK::TimeStepper::getIntegrator));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Integrator & SimTK::TimeStepper::updIntegrator() (" __HERE__ ")");
    // defined in simbody/simmath/TimeStepper.h:71:17
    t.method("updIntegrator", static_cast<SimTK::Integrator & (SimTK::TimeStepper::*)() >(&SimTK::TimeStepper::updIntegrator));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("bool SimTK::TimeStepper::getReportAllSignificantStates() (" __HERE__ ")");
    // defined in simbody/simmath/TimeStepper.h:79:10
    t.method("getReportAllSignificantStates", static_cast<bool (SimTK::TimeStepper::*)()  const>(&SimTK::TimeStepper::getReportAllSignificantStates));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("void SimTK::TimeStepper::setReportAllSignificantStates(bool) (" __HERE__ ")");
    // defined in simbody/simmath/TimeStepper.h:87:10
    t.method("setReportAllSignificantStates", static_cast<void (SimTK::TimeStepper::*)(bool) >(&SimTK::TimeStepper::setReportAllSignificantStates));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("void SimTK::TimeStepper::initialize(const SimTK::State &) (" __HERE__ ")");
    // defined in simbody/simmath/TimeStepper.h:95:10
    t.method("initialize", static_cast<void (SimTK::TimeStepper::*)(const SimTK::State &) >(&SimTK::TimeStepper::initialize));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("const SimTK::State & SimTK::TimeStepper::getState() (" __HERE__ ")");
    // defined in simbody/simmath/TimeStepper.h:101:18
    t.method("getState", static_cast<const SimTK::State & (SimTK::TimeStepper::*)()  const>(&SimTK::TimeStepper::getState));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Real SimTK::TimeStepper::getTime() (" __HERE__ ")");
    // defined in simbody/simmath/TimeStepper.h:105:10
    t.method("getTime", static_cast<SimTK::Real (SimTK::TimeStepper::*)()  const>(&SimTK::TimeStepper::getTime));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Integrator::SuccessfulStepStatus SimTK::TimeStepper::stepTo(SimTK::Real) (" __HERE__ ")");
    // defined in simbody/simmath/TimeStepper.h:117:38
    t.method("stepTo", static_cast<SimTK::Integrator::SuccessfulStepStatus (SimTK::TimeStepper::*)(SimTK::Real) >(&SimTK::TimeStepper::stepTo));
    CLEAR_DEBUG_MSG();
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<SimTK::TimeStepper>> type_;
};
std::shared_ptr<Wrapper> newJlSimTK_TimeStepper(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlSimTK_TimeStepper(module));
}

}
