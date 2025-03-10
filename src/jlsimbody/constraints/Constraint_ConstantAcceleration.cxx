// this file was auto-generated by wrapit v1.3.3
#include "jlsimbody/common.h"

#include "jlsimbody/Constraints.h"

namespace jlcxx {
  template<> struct IsMirroredType<SimTK::Constraint::ConstantAcceleration> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::Constraint::ConstantAcceleration> : std::false_type { };
	template<> struct SuperType<SimTK::Constraint::ConstantAcceleration> { typedef SimTK::Constraint type; };
}

namespace jlsimbody {

// Class generating the wrapper for type SimTK::Constraint::ConstantAcceleration
struct JlSimTK_Constraint_ConstantAcceleration: public Wrapper {

  JlSimTK_Constraint_ConstantAcceleration(jlcxx::Module& module): Wrapper(module){
    DEBUG_MSG("type SimTK::Constraint::ConstantAcceleration (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint.h:1047:40
    auto t = module.add_type<SimTK::Constraint::ConstantAcceleration>(
      "ConstantAccelerationConstraint",
      jlcxx::julia_base_type<SimTK::Constraint>());
    CLEAR_DEBUG_MSG();

    type_ = std::unique_ptr<jlcxx::TypeWrapper<SimTK::Constraint::ConstantAcceleration>>(new jlcxx::TypeWrapper<SimTK::Constraint::ConstantAcceleration>(module, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>();

    #ifdef JLSIMBODY_USE_SIMTK_UNIQUEINDEX_TYPES
    DEBUG_MSG("void SimTK::Constraint::ConstantAcceleration::ConstantAcceleration(SimTK::MobilizedBody &, SimTK::MobilizerUIndex, SimTK::Real) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint.h:1052:5
    t.constructor<SimTK::MobilizedBody &, SimTK::MobilizerUIndex, SimTK::Real>();
    CLEAR_DEBUG_MSG();
    #else
    DEBUG_MSG("void SimTK::Constraint::ConstantAcceleration::ConstantAcceleration(SimTK::MobilizedBody &, SimTK::MobilizerUIndex, SimTK::Real) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint.h:1052:5
    t.constructor([] (
        SimTK::MobilizedBody & body,
        int whichU,
        SimTK::Real defaultAcceleration) -> SimTK::Constraint::ConstantAcceleration* {
      return new SimTK::Constraint::ConstantAcceleration(body, SimTK::MobilizerUIndex(whichU), defaultAcceleration);
    });
    CLEAR_DEBUG_MSG();
    #endif

    DEBUG_MSG("void SimTK::Constraint::ConstantAcceleration::ConstantAcceleration(SimTK::MobilizedBody &, SimTK::Real) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint.h:1057:5
    t.constructor<SimTK::MobilizedBody &, SimTK::Real>();
    CLEAR_DEBUG_MSG();

    #ifdef JLSIMBODY_USE_SIMTK_UNIQUEINDEX_TYPES
    DEBUG_MSG("SimTK::MobilizedBodyIndex SimTK::Constraint::ConstantAcceleration::getMobilizedBodyIndex() (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint.h:1067:24
    t.method("getMobilizedBodyIndex", static_cast<SimTK::MobilizedBodyIndex (SimTK::Constraint::ConstantAcceleration::*)()  const>(&SimTK::Constraint::ConstantAcceleration::getMobilizedBodyIndex));
    CLEAR_DEBUG_MSG();
    #else
    DEBUG_MSG("int SimTK::Constraint::ConstantAcceleration::getMobilizedBodyIndex() (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint.h:1067:24
    t.method("getMobilizedBodyIndex", reinterpret_cast<int (SimTK::Constraint::ConstantAcceleration::*)()  const>(&SimTK::Constraint::ConstantAcceleration::getMobilizedBodyIndex));
    CLEAR_DEBUG_MSG();
    #endif

    #ifdef JLSIMBODY_USE_SIMTK_UNIQUEINDEX_TYPES
    DEBUG_MSG("SimTK::MobilizerUIndex SimTK::Constraint::ConstantAcceleration::getWhichU() (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint.h:1072:24
    t.method("getWhichU", static_cast<SimTK::MobilizerUIndex (SimTK::Constraint::ConstantAcceleration::*)()  const>(&SimTK::Constraint::ConstantAcceleration::getWhichU));
    CLEAR_DEBUG_MSG();
    #else
    DEBUG_MSG("int SimTK::Constraint::ConstantAcceleration::getWhichU() (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint.h:1072:24
    t.method("getWhichU", reinterpret_cast<int (SimTK::Constraint::ConstantAcceleration::*)()  const>(&SimTK::Constraint::ConstantAcceleration::getWhichU));
    CLEAR_DEBUG_MSG();
    #endif

    DEBUG_MSG("SimTK::Real SimTK::Constraint::ConstantAcceleration::getDefaultAcceleration() (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint.h:1078:24
    t.method("getDefaultAcceleration", static_cast<SimTK::Real (SimTK::Constraint::ConstantAcceleration::*)()  const>(&SimTK::Constraint::ConstantAcceleration::getDefaultAcceleration));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Constraint::ConstantAcceleration & SimTK::Constraint::ConstantAcceleration::setDefaultAcceleration(SimTK::Real) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint.h:1085:27
    t.method("setDefaultAcceleration", static_cast<SimTK::Constraint::ConstantAcceleration & (SimTK::Constraint::ConstantAcceleration::*)(SimTK::Real) >(&SimTK::Constraint::ConstantAcceleration::setDefaultAcceleration));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("void SimTK::Constraint::ConstantAcceleration::setAcceleration(SimTK::State &, SimTK::Real) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint.h:1091:10
    t.method("setAcceleration", static_cast<void (SimTK::Constraint::ConstantAcceleration::*)(SimTK::State &, SimTK::Real)  const>(&SimTK::Constraint::ConstantAcceleration::setAcceleration));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Real SimTK::Constraint::ConstantAcceleration::getAcceleration(const SimTK::State &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint.h:1096:10
    t.method("getAcceleration", static_cast<SimTK::Real (SimTK::Constraint::ConstantAcceleration::*)(const SimTK::State &)  const>(&SimTK::Constraint::ConstantAcceleration::getAcceleration));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Real SimTK::Constraint::ConstantAcceleration::getAccelerationError(const SimTK::State &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint.h:1103:10
    t.method("getAccelerationError", static_cast<SimTK::Real (SimTK::Constraint::ConstantAcceleration::*)(const SimTK::State &)  const>(&SimTK::Constraint::ConstantAcceleration::getAccelerationError));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Real SimTK::Constraint::ConstantAcceleration::getMultiplier(const SimTK::State &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint.h:1110:10
    t.method("getMultiplier", static_cast<SimTK::Real (SimTK::Constraint::ConstantAcceleration::*)(const SimTK::State &)  const>(&SimTK::Constraint::ConstantAcceleration::getMultiplier));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("const SimTK::Constraint & SimTK::Constraint::ConstantAcceleration::upcast() (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint.h:1113:5
    t.method("upcast", static_cast<const SimTK::Constraint & (SimTK::Constraint::ConstantAcceleration::*)()  const>(&SimTK::Constraint::ConstantAcceleration::upcast));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Constraint & SimTK::Constraint::ConstantAcceleration::updUpcast() (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint.h:1113:5
    t.method("updUpcast", static_cast<SimTK::Constraint & (SimTK::Constraint::ConstantAcceleration::*)() >(&SimTK::Constraint::ConstantAcceleration::updUpcast));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("bool SimTK::Constraint::ConstantAcceleration::isInstanceOf(const SimTK::Constraint &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint.h:1113:5
    module_.method("Constraint!ConstantAcceleration!isInstanceOf", static_cast<bool (*)(const SimTK::Constraint &) >(&SimTK::Constraint::ConstantAcceleration::isInstanceOf));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("const SimTK::Constraint::ConstantAcceleration & SimTK::Constraint::ConstantAcceleration::downcast(const SimTK::Constraint &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint.h:1113:5
    module_.method("Constraint!ConstantAcceleration!downcast", static_cast<const SimTK::Constraint::ConstantAcceleration & (*)(const SimTK::Constraint &) >(&SimTK::Constraint::ConstantAcceleration::downcast));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Constraint::ConstantAcceleration & SimTK::Constraint::ConstantAcceleration::updDowncast(SimTK::Constraint &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint.h:1113:5
    module_.method("Constraint!ConstantAcceleration!updDowncast", static_cast<SimTK::Constraint::ConstantAcceleration & (*)(SimTK::Constraint &) >(&SimTK::Constraint::ConstantAcceleration::updDowncast));
    CLEAR_DEBUG_MSG();
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<SimTK::Constraint::ConstantAcceleration>> type_;
};
std::shared_ptr<Wrapper> newJlSimTK_Constraint_ConstantAcceleration(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlSimTK_Constraint_ConstantAcceleration(module));
}

}
