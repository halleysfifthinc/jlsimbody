// this file was auto-generated by wrapit v1.3.3
#include "jlsimbody/common.h"

#include "jlsimbody/Constraints.h"

namespace jlcxx {
  template<> struct IsMirroredType<SimTK::Constraint::PointInPlane> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::Constraint::PointInPlane> : std::false_type { };
	template<> struct SuperType<SimTK::Constraint::PointInPlane> { typedef SimTK::Constraint type; };
}

namespace jlsimbody {

// Class generating the wrapper for type SimTK::Constraint::PointInPlane
struct JlSimTK_Constraint_PointInPlane: public Wrapper {

  JlSimTK_Constraint_PointInPlane(jlcxx::Module& module): Wrapper(module){
    DEBUG_MSG("type SimTK::Constraint::PointInPlane (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_PointInPlane.h:47:40
    auto t = module.add_type<SimTK::Constraint::PointInPlane>(
      "PointInPlaneConstraint",
      jlcxx::julia_base_type<SimTK::Constraint>());
    CLEAR_DEBUG_MSG();

    type_ = std::unique_ptr<jlcxx::TypeWrapper<SimTK::Constraint::PointInPlane>>(new jlcxx::TypeWrapper<SimTK::Constraint::PointInPlane>(module, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>();

    DEBUG_MSG("void SimTK::Constraint::PointInPlane::PointInPlane(SimTK::MobilizedBody &, const SimTK::UnitVec3 &, SimTK::Real, SimTK::MobilizedBody &, const SimTK::Vec3 &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_PointInPlane.h:50:1
    t.constructor<SimTK::MobilizedBody &, const SimTK::UnitVec3 &, SimTK::Real, SimTK::MobilizedBody &, const SimTK::Vec3 &>();
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Constraint::PointInPlane & SimTK::Constraint::PointInPlane::setPlaneDisplayHalfWidth(SimTK::Real) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_PointInPlane.h:60:15
    t.method("setPlaneDisplayHalfWidth", static_cast<SimTK::Constraint::PointInPlane & (SimTK::Constraint::PointInPlane::*)(SimTK::Real) >(&SimTK::Constraint::PointInPlane::setPlaneDisplayHalfWidth));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Constraint::PointInPlane & SimTK::Constraint::PointInPlane::setPointDisplayRadius(SimTK::Real) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_PointInPlane.h:61:15
    t.method("setPointDisplayRadius", static_cast<SimTK::Constraint::PointInPlane & (SimTK::Constraint::PointInPlane::*)(SimTK::Real) >(&SimTK::Constraint::PointInPlane::setPointDisplayRadius));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Real SimTK::Constraint::PointInPlane::getPlaneDisplayHalfWidth() (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_PointInPlane.h:62:6
    t.method("getPlaneDisplayHalfWidth", static_cast<SimTK::Real (SimTK::Constraint::PointInPlane::*)()  const>(&SimTK::Constraint::PointInPlane::getPlaneDisplayHalfWidth));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Real SimTK::Constraint::PointInPlane::getPointDisplayRadius() (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_PointInPlane.h:63:6
    t.method("getPointDisplayRadius", static_cast<SimTK::Real (SimTK::Constraint::PointInPlane::*)()  const>(&SimTK::Constraint::PointInPlane::getPointDisplayRadius));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Constraint::PointInPlane & SimTK::Constraint::PointInPlane::setDefaultPlaneNormal(const SimTK::UnitVec3 &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_PointInPlane.h:66:15
    t.method("setDefaultPlaneNormal", static_cast<SimTK::Constraint::PointInPlane & (SimTK::Constraint::PointInPlane::*)(const SimTK::UnitVec3 &) >(&SimTK::Constraint::PointInPlane::setDefaultPlaneNormal));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Constraint::PointInPlane & SimTK::Constraint::PointInPlane::setDefaultPlaneHeight(SimTK::Real) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_PointInPlane.h:67:15
    t.method("setDefaultPlaneHeight", static_cast<SimTK::Constraint::PointInPlane & (SimTK::Constraint::PointInPlane::*)(SimTK::Real) >(&SimTK::Constraint::PointInPlane::setDefaultPlaneHeight));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Constraint::PointInPlane & SimTK::Constraint::PointInPlane::setDefaultFollowerPoint(const SimTK::Vec3 &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_PointInPlane.h:68:15
    t.method("setDefaultFollowerPoint", static_cast<SimTK::Constraint::PointInPlane & (SimTK::Constraint::PointInPlane::*)(const SimTK::Vec3 &) >(&SimTK::Constraint::PointInPlane::setDefaultFollowerPoint));
    CLEAR_DEBUG_MSG();

    #ifdef JLSIMBODY_USE_SIMTK_UNIQUEINDEX_TYPES
    DEBUG_MSG("SimTK::MobilizedBodyIndex SimTK::Constraint::PointInPlane::getPlaneMobilizedBodyIndex() (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_PointInPlane.h:71:20
    t.method("getPlaneMobilizedBodyIndex", static_cast<SimTK::MobilizedBodyIndex (SimTK::Constraint::PointInPlane::*)()  const>(&SimTK::Constraint::PointInPlane::getPlaneMobilizedBodyIndex));
    CLEAR_DEBUG_MSG();
    #else
    DEBUG_MSG("int SimTK::Constraint::PointInPlane::getPlaneMobilizedBodyIndex() (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_PointInPlane.h:71:20
    t.method("getPlaneMobilizedBodyIndex", reinterpret_cast<int (SimTK::Constraint::PointInPlane::*)()  const>(&SimTK::Constraint::PointInPlane::getPlaneMobilizedBodyIndex));
    CLEAR_DEBUG_MSG();
    #endif

    #ifdef JLSIMBODY_USE_SIMTK_UNIQUEINDEX_TYPES
    DEBUG_MSG("SimTK::MobilizedBodyIndex SimTK::Constraint::PointInPlane::getFollowerMobilizedBodyIndex() (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_PointInPlane.h:72:20
    t.method("getFollowerMobilizedBodyIndex", static_cast<SimTK::MobilizedBodyIndex (SimTK::Constraint::PointInPlane::*)()  const>(&SimTK::Constraint::PointInPlane::getFollowerMobilizedBodyIndex));
    CLEAR_DEBUG_MSG();
    #else
    DEBUG_MSG("int SimTK::Constraint::PointInPlane::getFollowerMobilizedBodyIndex() (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_PointInPlane.h:72:20
    t.method("getFollowerMobilizedBodyIndex", reinterpret_cast<int (SimTK::Constraint::PointInPlane::*)()  const>(&SimTK::Constraint::PointInPlane::getFollowerMobilizedBodyIndex));
    CLEAR_DEBUG_MSG();
    #endif

    DEBUG_MSG("const SimTK::UnitVec3 & SimTK::Constraint::PointInPlane::getDefaultPlaneNormal() (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_PointInPlane.h:74:17
    t.method("getDefaultPlaneNormal", static_cast<const SimTK::UnitVec3 & (SimTK::Constraint::PointInPlane::*)()  const>(&SimTK::Constraint::PointInPlane::getDefaultPlaneNormal));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Real SimTK::Constraint::PointInPlane::getDefaultPlaneHeight() (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_PointInPlane.h:75:17
    t.method("getDefaultPlaneHeight", static_cast<SimTK::Real (SimTK::Constraint::PointInPlane::*)()  const>(&SimTK::Constraint::PointInPlane::getDefaultPlaneHeight));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("const SimTK::Vec3 & SimTK::Constraint::PointInPlane::getDefaultFollowerPoint() (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_PointInPlane.h:76:17
    t.method("getDefaultFollowerPoint", static_cast<const SimTK::Vec3 & (SimTK::Constraint::PointInPlane::*)()  const>(&SimTK::Constraint::PointInPlane::getDefaultFollowerPoint));
    CLEAR_DEBUG_MSG();

    // DEBUG_MSG("const SimTK::UnitVec3 & SimTK::Constraint::PointInPlane::getPlaneNormal(const SimTK::State &) (" __HERE__ ")");
    // // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_PointInPlane.h:79:17
    // t.method("getPlaneNormal", static_cast<const SimTK::UnitVec3 & (SimTK::Constraint::PointInPlane::*)(const SimTK::State &)  const>(&SimTK::Constraint::PointInPlane::getPlaneNormal));
    // CLEAR_DEBUG_MSG();

    // DEBUG_MSG("SimTK::Real SimTK::Constraint::PointInPlane::getPlaneHeight(const SimTK::State &) (" __HERE__ ")");
    // // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_PointInPlane.h:80:17
    // t.method("getPlaneHeight", static_cast<SimTK::Real (SimTK::Constraint::PointInPlane::*)(const SimTK::State &)  const>(&SimTK::Constraint::PointInPlane::getPlaneHeight));
    // CLEAR_DEBUG_MSG();

    // DEBUG_MSG("const SimTK::Vec3 & SimTK::Constraint::PointInPlane::getFollowerPoint(const SimTK::State &) (" __HERE__ ")");
    // // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_PointInPlane.h:81:17
    // t.method("getFollowerPoint", static_cast<const SimTK::Vec3 & (SimTK::Constraint::PointInPlane::*)(const SimTK::State &)  const>(&SimTK::Constraint::PointInPlane::getFollowerPoint));
    // CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Real SimTK::Constraint::PointInPlane::getPositionError(const SimTK::State &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_PointInPlane.h:84:6
    t.method("getPositionError", static_cast<SimTK::Real (SimTK::Constraint::PointInPlane::*)(const SimTK::State &)  const>(&SimTK::Constraint::PointInPlane::getPositionError));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Real SimTK::Constraint::PointInPlane::getVelocityError(const SimTK::State &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_PointInPlane.h:85:6
    t.method("getVelocityError", static_cast<SimTK::Real (SimTK::Constraint::PointInPlane::*)(const SimTK::State &)  const>(&SimTK::Constraint::PointInPlane::getVelocityError));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Real SimTK::Constraint::PointInPlane::getAccelerationError(const SimTK::State &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_PointInPlane.h:88:6
    t.method("getAccelerationError", static_cast<SimTK::Real (SimTK::Constraint::PointInPlane::*)(const SimTK::State &)  const>(&SimTK::Constraint::PointInPlane::getAccelerationError));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Real SimTK::Constraint::PointInPlane::getMultiplier(const SimTK::State &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_PointInPlane.h:89:6
    t.method("getMultiplier", static_cast<SimTK::Real (SimTK::Constraint::PointInPlane::*)(const SimTK::State &)  const>(&SimTK::Constraint::PointInPlane::getMultiplier));
    CLEAR_DEBUG_MSG();

    // DEBUG_MSG("SimTK::Real SimTK::Constraint::PointInPlane::getForceOnFollowerPoint(const SimTK::State &) (" __HERE__ ")");
    // // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_PointInPlane.h:90:6
    // t.method("getForceOnFollowerPoint", static_cast<SimTK::Real (SimTK::Constraint::PointInPlane::*)(const SimTK::State &)  const>(&SimTK::Constraint::PointInPlane::getForceOnFollowerPoint));
    // CLEAR_DEBUG_MSG();

    DEBUG_MSG("const SimTK::Constraint & SimTK::Constraint::PointInPlane::upcast() (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_PointInPlane.h:93:1
    t.method("upcast", static_cast<const SimTK::Constraint & (SimTK::Constraint::PointInPlane::*)()  const>(&SimTK::Constraint::PointInPlane::upcast));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Constraint & SimTK::Constraint::PointInPlane::updUpcast() (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_PointInPlane.h:93:1
    t.method("updUpcast", static_cast<SimTK::Constraint & (SimTK::Constraint::PointInPlane::*)() >(&SimTK::Constraint::PointInPlane::updUpcast));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("bool SimTK::Constraint::PointInPlane::isInstanceOf(const SimTK::Constraint &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_PointInPlane.h:93:1
    module_.method("Constraint!PointInPlane!isInstanceOf", static_cast<bool (*)(const SimTK::Constraint &) >(&SimTK::Constraint::PointInPlane::isInstanceOf));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("const SimTK::Constraint::PointInPlane & SimTK::Constraint::PointInPlane::downcast(const SimTK::Constraint &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_PointInPlane.h:93:1
    module_.method("Constraint!PointInPlane!downcast", static_cast<const SimTK::Constraint::PointInPlane & (*)(const SimTK::Constraint &) >(&SimTK::Constraint::PointInPlane::downcast));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Constraint::PointInPlane & SimTK::Constraint::PointInPlane::updDowncast(SimTK::Constraint &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_PointInPlane.h:93:1
    module_.method("Constraint!PointInPlane!updDowncast", static_cast<SimTK::Constraint::PointInPlane & (*)(SimTK::Constraint &) >(&SimTK::Constraint::PointInPlane::updDowncast));
    CLEAR_DEBUG_MSG();
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<SimTK::Constraint::PointInPlane>> type_;
};
std::shared_ptr<Wrapper> newJlSimTK_Constraint_PointInPlane(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlSimTK_Constraint_PointInPlane(module));
}

}