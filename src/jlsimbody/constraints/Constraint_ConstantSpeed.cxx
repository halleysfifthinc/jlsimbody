// this file was auto-generated by wrapit v1.3.3
#include "jlsimbody/common.h"

#include "jlsimbody/Constraints.h"

namespace jlcxx {
  template<> struct IsMirroredType<SimTK::Constraint::ConstantSpeed> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::Constraint::ConstantSpeed> : std::false_type { };
	template<> struct SuperType<SimTK::Constraint::ConstantSpeed> { typedef SimTK::Constraint type; };
}

namespace jlsimbody {

// Class generating the wrapper for type SimTK::Constraint::ConstantSpeed
struct JlSimTK_Constraint_ConstantSpeed: public Wrapper {

  JlSimTK_Constraint_ConstantSpeed(jlcxx::Module& module): Wrapper(module){
    DEBUG_MSG("type SimTK::Constraint::ConstantSpeed (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint.h:959:40
    auto t = module.add_type<SimTK::Constraint::ConstantSpeed>(
      "ConstantSpeedConstraint",
      jlcxx::julia_base_type<SimTK::Constraint>());
    CLEAR_DEBUG_MSG();

    type_ = std::unique_ptr<jlcxx::TypeWrapper<SimTK::Constraint::ConstantSpeed>>(new jlcxx::TypeWrapper<SimTK::Constraint::ConstantSpeed>(module, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>();

    #ifdef JLSIMBODY_USE_SIMTK_UNIQUEINDEX_TYPES
    DEBUG_MSG("void SimTK::Constraint::ConstantSpeed::ConstantSpeed(SimTK::MobilizedBody &, SimTK::MobilizerUIndex, SimTK::Real) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint.h:963:5
    t.constructor<SimTK::MobilizedBody &, SimTK::MobilizerUIndex, SimTK::Real>();
    CLEAR_DEBUG_MSG();
    #else
    DEBUG_MSG("void SimTK::Constraint::ConstantSpeed::ConstantSpeed(SimTK::MobilizedBody &, SimTK::MobilizerUIndex, SimTK::Real) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint.h:963:5
    t.constructor([] (
        SimTK::MobilizedBody & body,
        int whichU,
        SimTK::Real defaultSpeed) -> SimTK::Constraint::ConstantSpeed* {
      return new SimTK::Constraint::ConstantSpeed(body, SimTK::MobilizerUIndex(whichU), defaultSpeed);
    });
    CLEAR_DEBUG_MSG();
    #endif

    DEBUG_MSG("void SimTK::Constraint::ConstantSpeed::ConstantSpeed(SimTK::MobilizedBody &, SimTK::Real) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint.h:967:5
    t.constructor<SimTK::MobilizedBody &, SimTK::Real>();
    CLEAR_DEBUG_MSG();

    #ifdef JLSIMBODY_USE_SIMTK_UNIQUEINDEX_TYPES
    DEBUG_MSG("SimTK::MobilizedBodyIndex SimTK::Constraint::ConstantSpeed::getMobilizedBodyIndex() (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint.h:976:24
    t.method("getMobilizedBodyIndex", static_cast<SimTK::MobilizedBodyIndex (SimTK::Constraint::ConstantSpeed::*)()  const>(&SimTK::Constraint::ConstantSpeed::getMobilizedBodyIndex));
    CLEAR_DEBUG_MSG();
    #else
    DEBUG_MSG("int SimTK::Constraint::ConstantSpeed::getMobilizedBodyIndex() (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint.h:976:24
    t.method("getMobilizedBodyIndex", reinterpret_cast<int (SimTK::Constraint::ConstantSpeed::*)()  const>(&SimTK::Constraint::ConstantSpeed::getMobilizedBodyIndex));
    CLEAR_DEBUG_MSG();
    #endif

    #ifdef JLSIMBODY_USE_SIMTK_UNIQUEINDEX_TYPES
    DEBUG_MSG("SimTK::MobilizerUIndex SimTK::Constraint::ConstantSpeed::getWhichU() (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint.h:980:24
    t.method("getWhichU", static_cast<SimTK::MobilizerUIndex (SimTK::Constraint::ConstantSpeed::*)()  const>(&SimTK::Constraint::ConstantSpeed::getWhichU));
    CLEAR_DEBUG_MSG();
    #else
    DEBUG_MSG("int SimTK::Constraint::ConstantSpeed::getWhichU() (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint.h:980:24
    t.method("getWhichU", reinterpret_cast<int (SimTK::Constraint::ConstantSpeed::*)()  const>(&SimTK::Constraint::ConstantSpeed::getWhichU));
    CLEAR_DEBUG_MSG();
    #endif

    DEBUG_MSG("SimTK::Real SimTK::Constraint::ConstantSpeed::getDefaultSpeed() (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint.h:986:24
    t.method("getDefaultSpeed", static_cast<SimTK::Real (SimTK::Constraint::ConstantSpeed::*)()  const>(&SimTK::Constraint::ConstantSpeed::getDefaultSpeed));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Constraint::ConstantSpeed & SimTK::Constraint::ConstantSpeed::setDefaultSpeed(SimTK::Real) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint.h:993:24
    t.method("setDefaultSpeed", static_cast<SimTK::Constraint::ConstantSpeed & (SimTK::Constraint::ConstantSpeed::*)(SimTK::Real) >(&SimTK::Constraint::ConstantSpeed::setDefaultSpeed));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("void SimTK::Constraint::ConstantSpeed::setSpeed(SimTK::State &, SimTK::Real) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint.h:999:10
    t.method("setSpeed", static_cast<void (SimTK::Constraint::ConstantSpeed::*)(SimTK::State &, SimTK::Real)  const>(&SimTK::Constraint::ConstantSpeed::setSpeed));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Real SimTK::Constraint::ConstantSpeed::getSpeed(const SimTK::State &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint.h:1004:10
    t.method("getSpeed", static_cast<SimTK::Real (SimTK::Constraint::ConstantSpeed::*)(const SimTK::State &)  const>(&SimTK::Constraint::ConstantSpeed::getSpeed));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Real SimTK::Constraint::ConstantSpeed::getVelocityError(const SimTK::State &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint.h:1011:10
    t.method("getVelocityError", static_cast<SimTK::Real (SimTK::Constraint::ConstantSpeed::*)(const SimTK::State &)  const>(&SimTK::Constraint::ConstantSpeed::getVelocityError));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Real SimTK::Constraint::ConstantSpeed::getAccelerationError(const SimTK::State &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint.h:1016:10
    t.method("getAccelerationError", static_cast<SimTK::Real (SimTK::Constraint::ConstantSpeed::*)(const SimTK::State &)  const>(&SimTK::Constraint::ConstantSpeed::getAccelerationError));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Real SimTK::Constraint::ConstantSpeed::getMultiplier(const SimTK::State &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint.h:1023:10
    t.method("getMultiplier", static_cast<SimTK::Real (SimTK::Constraint::ConstantSpeed::*)(const SimTK::State &)  const>(&SimTK::Constraint::ConstantSpeed::getMultiplier));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("const SimTK::Constraint & SimTK::Constraint::ConstantSpeed::upcast() (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint.h:1026:5
    t.method("upcast", static_cast<const SimTK::Constraint & (SimTK::Constraint::ConstantSpeed::*)()  const>(&SimTK::Constraint::ConstantSpeed::upcast));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Constraint & SimTK::Constraint::ConstantSpeed::updUpcast() (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint.h:1026:5
    t.method("updUpcast", static_cast<SimTK::Constraint & (SimTK::Constraint::ConstantSpeed::*)() >(&SimTK::Constraint::ConstantSpeed::updUpcast));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("bool SimTK::Constraint::ConstantSpeed::isInstanceOf(const SimTK::Constraint &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint.h:1026:5
    module_.method("Constraint!ConstantSpeed!isInstanceOf", static_cast<bool (*)(const SimTK::Constraint &) >(&SimTK::Constraint::ConstantSpeed::isInstanceOf));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("const SimTK::Constraint::ConstantSpeed & SimTK::Constraint::ConstantSpeed::downcast(const SimTK::Constraint &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint.h:1026:5
    module_.method("Constraint!ConstantSpeed!downcast", static_cast<const SimTK::Constraint::ConstantSpeed & (*)(const SimTK::Constraint &) >(&SimTK::Constraint::ConstantSpeed::downcast));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Constraint::ConstantSpeed & SimTK::Constraint::ConstantSpeed::updDowncast(SimTK::Constraint &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint.h:1026:5
    module_.method("Constraint!ConstantSpeed!updDowncast", static_cast<SimTK::Constraint::ConstantSpeed & (*)(SimTK::Constraint &) >(&SimTK::Constraint::ConstantSpeed::updDowncast));
    CLEAR_DEBUG_MSG();
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<SimTK::Constraint::ConstantSpeed>> type_;
};
std::shared_ptr<Wrapper> newJlSimTK_Constraint_ConstantSpeed(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlSimTK_Constraint_ConstantSpeed(module));
}

}
