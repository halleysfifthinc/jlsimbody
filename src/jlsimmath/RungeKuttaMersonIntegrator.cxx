// this file was auto-generated by wrapit v1.3.3
#include "jlsimbody/common.h"

#include "jlsimmath/Timestepper_and_Integrators.h"

namespace jlcxx {
  template<> struct IsMirroredType<SimTK::RungeKuttaMersonIntegrator> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::RungeKuttaMersonIntegrator> : std::false_type { };
  template<> struct SuperType<SimTK::RungeKuttaMersonIntegrator> { typedef SimTK::Integrator type; };
}

namespace jlsimbody {

// Class generating the wrapper for type SimTK::RungeKuttaMersonIntegrator
struct JLSIMBODY_NO_EXPORT JlSimTK_RungeKuttaMersonIntegrator : public Wrapper {

  JlSimTK_RungeKuttaMersonIntegrator(jlcxx::Module& module): Wrapper(module){
    DEBUG_MSG("type SimTK::RungeKuttaMersonIntegrator (" __HERE__ ")");
    // defined in simbody/simmath/RungeKuttaMersonIntegrator.h:40:28
    jlcxx::TypeWrapper<SimTK::RungeKuttaMersonIntegrator>  t = module.add_type<SimTK::RungeKuttaMersonIntegrator>("RungeKuttaMersonIntegrator",
      jlcxx::julia_base_type<SimTK::Integrator>());
    CLEAR_DEBUG_MSG();

    type_ = std::unique_ptr<jlcxx::TypeWrapper<SimTK::RungeKuttaMersonIntegrator>>(new jlcxx::TypeWrapper<SimTK::RungeKuttaMersonIntegrator>(module, t));
  }

  void add_methods() const{
    auto& t = *type_;


    DEBUG_MSG("void SimTK::RungeKuttaMersonIntegrator::RungeKuttaMersonIntegrator(const SimTK::System &) (" __HERE__ ")");
    // defined in simbody/simmath/RungeKuttaMersonIntegrator.h:42:14
    t.constructor<const SimTK::System &>();
    CLEAR_DEBUG_MSG();
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<SimTK::RungeKuttaMersonIntegrator>> type_;
};
std::shared_ptr<Wrapper> newJlSimTK_RungeKuttaMersonIntegrator(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlSimTK_RungeKuttaMersonIntegrator(module));
}

}
