// this file was auto-generated by wrapit v1.3.3
#include "jlsimbody/common.h"

#include "jlsimbody/Constraints.h"

namespace jlcxx {
  template<> struct IsMirroredType<SimTK::Constraint::SphereOnSphereContact> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::Constraint::SphereOnSphereContact> : std::false_type { };
  template<> struct SuperType<SimTK::Constraint::SphereOnSphereContact> { typedef SimTK::Constraint type; };
}

namespace jlsimbody {

// Class generating the wrapper for type SimTK::Constraint::SphereOnSphereContact
struct JlSimTK_Constraint_SphereOnSphereContact: public Wrapper {

  JlSimTK_Constraint_SphereOnSphereContact(jlcxx::Module& module): Wrapper(module){
    DEBUG_MSG("type SimTK::Constraint::SphereOnSphereContact (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_SphereOnSphereContact.h:102:40
    auto t = module.add_type<SimTK::Constraint::SphereOnSphereContact>(
      "SphereOnSphereContactConstraint",
      jlcxx::julia_base_type<SimTK::Constraint>());
    CLEAR_DEBUG_MSG();

    type_ = std::unique_ptr<jlcxx::TypeWrapper<SimTK::Constraint::SphereOnSphereContact>>(new jlcxx::TypeWrapper<SimTK::Constraint::SphereOnSphereContact>(module, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>();

    DEBUG_MSG("void SimTK::Constraint::SphereOnSphereContact::SphereOnSphereContact(SimTK::MobilizedBody &, const SimTK::Vec3 &, SimTK::Real, SimTK::MobilizedBody &, const SimTK::Vec3 &, SimTK::Real, bool) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_SphereOnSphereContact.h:156:1
    t.constructor<SimTK::MobilizedBody &, const SimTK::Vec3 &, SimTK::Real, SimTK::MobilizedBody &, const SimTK::Vec3 &, SimTK::Real, bool>();
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("const SimTK::MobilizedBody & SimTK::Constraint::SphereOnSphereContact::getMobilizedBodyF() (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_SphereOnSphereContact.h:171:22
    t.method("getMobilizedBodyF", static_cast<const SimTK::MobilizedBody & (SimTK::Constraint::SphereOnSphereContact::*)()  const>(&SimTK::Constraint::SphereOnSphereContact::getMobilizedBodyF));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("const SimTK::MobilizedBody & SimTK::Constraint::SphereOnSphereContact::getMobilizedBodyB() (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_SphereOnSphereContact.h:176:22
    t.method("getMobilizedBodyB", static_cast<const SimTK::MobilizedBody & (SimTK::Constraint::SphereOnSphereContact::*)()  const>(&SimTK::Constraint::SphereOnSphereContact::getMobilizedBodyB));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("bool SimTK::Constraint::SphereOnSphereContact::isEnforcingRolling() (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_SphereOnSphereContact.h:181:6
    t.method("isEnforcingRolling", static_cast<bool (SimTK::Constraint::SphereOnSphereContact::*)()  const>(&SimTK::Constraint::SphereOnSphereContact::isEnforcingRolling));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Constraint::SphereOnSphereContact & SimTK::Constraint::SphereOnSphereContact::setDefaultCenterOnF(const SimTK::Vec3 &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_SphereOnSphereContact.h:188:1
    t.method("setDefaultCenterOnF", static_cast<SimTK::Constraint::SphereOnSphereContact & (SimTK::Constraint::SphereOnSphereContact::*)(const SimTK::Vec3 &) >(&SimTK::Constraint::SphereOnSphereContact::setDefaultCenterOnF));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Constraint::SphereOnSphereContact & SimTK::Constraint::SphereOnSphereContact::setDefaultRadiusOnF(SimTK::Real) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_SphereOnSphereContact.h:194:1
    t.method("setDefaultRadiusOnF", static_cast<SimTK::Constraint::SphereOnSphereContact & (SimTK::Constraint::SphereOnSphereContact::*)(SimTK::Real) >(&SimTK::Constraint::SphereOnSphereContact::setDefaultRadiusOnF));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Constraint::SphereOnSphereContact & SimTK::Constraint::SphereOnSphereContact::setDefaultCenterOnB(const SimTK::Vec3 &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_SphereOnSphereContact.h:200:1
    t.method("setDefaultCenterOnB", static_cast<SimTK::Constraint::SphereOnSphereContact & (SimTK::Constraint::SphereOnSphereContact::*)(const SimTK::Vec3 &) >(&SimTK::Constraint::SphereOnSphereContact::setDefaultCenterOnB));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Constraint::SphereOnSphereContact & SimTK::Constraint::SphereOnSphereContact::setDefaultRadiusOnB(SimTK::Real) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_SphereOnSphereContact.h:206:1
    t.method("setDefaultRadiusOnB", static_cast<SimTK::Constraint::SphereOnSphereContact & (SimTK::Constraint::SphereOnSphereContact::*)(SimTK::Real) >(&SimTK::Constraint::SphereOnSphereContact::setDefaultRadiusOnB));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("const SimTK::Vec3 & SimTK::Constraint::SphereOnSphereContact::getDefaultCenterOnF() (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_SphereOnSphereContact.h:212:13
    t.method("getDefaultCenterOnF", static_cast<const SimTK::Vec3 & (SimTK::Constraint::SphereOnSphereContact::*)()  const>(&SimTK::Constraint::SphereOnSphereContact::getDefaultCenterOnF));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Real SimTK::Constraint::SphereOnSphereContact::getDefaultRadiusOnF() (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_SphereOnSphereContact.h:217:6
    t.method("getDefaultRadiusOnF", static_cast<SimTK::Real (SimTK::Constraint::SphereOnSphereContact::*)()  const>(&SimTK::Constraint::SphereOnSphereContact::getDefaultRadiusOnF));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("const SimTK::Vec3 & SimTK::Constraint::SphereOnSphereContact::getDefaultCenterOnB() (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_SphereOnSphereContact.h:222:13
    t.method("getDefaultCenterOnB", static_cast<const SimTK::Vec3 & (SimTK::Constraint::SphereOnSphereContact::*)()  const>(&SimTK::Constraint::SphereOnSphereContact::getDefaultCenterOnB));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Real SimTK::Constraint::SphereOnSphereContact::getDefaultRadiusOnB() (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_SphereOnSphereContact.h:227:6
    t.method("getDefaultRadiusOnB", static_cast<SimTK::Real (SimTK::Constraint::SphereOnSphereContact::*)()  const>(&SimTK::Constraint::SphereOnSphereContact::getDefaultRadiusOnB));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("const SimTK::Constraint::SphereOnSphereContact & SimTK::Constraint::SphereOnSphereContact::setCenterOnF(SimTK::State &, const SimTK::Vec3 &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_SphereOnSphereContact.h:267:1
    t.method("setCenterOnF", static_cast<const SimTK::Constraint::SphereOnSphereContact & (SimTK::Constraint::SphereOnSphereContact::*)(SimTK::State &, const SimTK::Vec3 &)  const>(&SimTK::Constraint::SphereOnSphereContact::setCenterOnF));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("const SimTK::Constraint::SphereOnSphereContact & SimTK::Constraint::SphereOnSphereContact::setRadiusOnF(SimTK::State &, SimTK::Real) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_SphereOnSphereContact.h:273:1
    t.method("setRadiusOnF", static_cast<const SimTK::Constraint::SphereOnSphereContact & (SimTK::Constraint::SphereOnSphereContact::*)(SimTK::State &, SimTK::Real)  const>(&SimTK::Constraint::SphereOnSphereContact::setRadiusOnF));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("const SimTK::Constraint::SphereOnSphereContact & SimTK::Constraint::SphereOnSphereContact::setCenterOnB(SimTK::State &, const SimTK::Vec3 &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_SphereOnSphereContact.h:281:1
    t.method("setCenterOnB", static_cast<const SimTK::Constraint::SphereOnSphereContact & (SimTK::Constraint::SphereOnSphereContact::*)(SimTK::State &, const SimTK::Vec3 &)  const>(&SimTK::Constraint::SphereOnSphereContact::setCenterOnB));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("const SimTK::Constraint::SphereOnSphereContact & SimTK::Constraint::SphereOnSphereContact::setRadiusOnB(SimTK::State &, SimTK::Real) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_SphereOnSphereContact.h:287:1
    t.method("setRadiusOnB", static_cast<const SimTK::Constraint::SphereOnSphereContact & (SimTK::Constraint::SphereOnSphereContact::*)(SimTK::State &, SimTK::Real)  const>(&SimTK::Constraint::SphereOnSphereContact::setRadiusOnB));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("const SimTK::Vec3 & SimTK::Constraint::SphereOnSphereContact::getCenterOnF(const SimTK::State &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_SphereOnSphereContact.h:293:13
    t.method("getCenterOnF", static_cast<const SimTK::Vec3 & (SimTK::Constraint::SphereOnSphereContact::*)(const SimTK::State &)  const>(&SimTK::Constraint::SphereOnSphereContact::getCenterOnF));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Real SimTK::Constraint::SphereOnSphereContact::getRadiusOnF(const SimTK::State &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_SphereOnSphereContact.h:296:6
    t.method("getRadiusOnF", static_cast<SimTK::Real (SimTK::Constraint::SphereOnSphereContact::*)(const SimTK::State &)  const>(&SimTK::Constraint::SphereOnSphereContact::getRadiusOnF));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("const SimTK::Vec3 & SimTK::Constraint::SphereOnSphereContact::getCenterOnB(const SimTK::State &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_SphereOnSphereContact.h:302:13
    t.method("getCenterOnB", static_cast<const SimTK::Vec3 & (SimTK::Constraint::SphereOnSphereContact::*)(const SimTK::State &)  const>(&SimTK::Constraint::SphereOnSphereContact::getCenterOnB));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Real SimTK::Constraint::SphereOnSphereContact::getRadiusOnB(const SimTK::State &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_SphereOnSphereContact.h:305:6
    t.method("getRadiusOnB", static_cast<SimTK::Real (SimTK::Constraint::SphereOnSphereContact::*)(const SimTK::State &)  const>(&SimTK::Constraint::SphereOnSphereContact::getRadiusOnB));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Real SimTK::Constraint::SphereOnSphereContact::getPositionError(const SimTK::State &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_SphereOnSphereContact.h:318:6
    t.method("getPositionError", static_cast<SimTK::Real (SimTK::Constraint::SphereOnSphereContact::*)(const SimTK::State &)  const>(&SimTK::Constraint::SphereOnSphereContact::getPositionError));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Vec3 SimTK::Constraint::SphereOnSphereContact::getVelocityErrors(const SimTK::State &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_SphereOnSphereContact.h:329:6
    t.method("getVelocityErrors", static_cast<SimTK::Vec3 (SimTK::Constraint::SphereOnSphereContact::*)(const SimTK::State &)  const>(&SimTK::Constraint::SphereOnSphereContact::getVelocityErrors));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Vec3 SimTK::Constraint::SphereOnSphereContact::getAccelerationErrors(const SimTK::State &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_SphereOnSphereContact.h:336:6
    t.method("getAccelerationErrors", static_cast<SimTK::Vec3 (SimTK::Constraint::SphereOnSphereContact::*)(const SimTK::State &)  const>(&SimTK::Constraint::SphereOnSphereContact::getAccelerationErrors));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Vec3 SimTK::Constraint::SphereOnSphereContact::getMultipliers(const SimTK::State &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_SphereOnSphereContact.h:348:6
    t.method("getMultipliers", static_cast<SimTK::Vec3 (SimTK::Constraint::SphereOnSphereContact::*)(const SimTK::State &)  const>(&SimTK::Constraint::SphereOnSphereContact::getMultipliers));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Vec3 SimTK::Constraint::SphereOnSphereContact::findForceOnSphereBInG(const SimTK::State &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_SphereOnSphereContact.h:359:6
    t.method("findForceOnSphereBInG", static_cast<SimTK::Vec3 (SimTK::Constraint::SphereOnSphereContact::*)(const SimTK::State &)  const>(&SimTK::Constraint::SphereOnSphereContact::findForceOnSphereBInG));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Transform SimTK::Constraint::SphereOnSphereContact::findContactFrameInG(const SimTK::State &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_SphereOnSphereContact.h:373:11
    t.method("findContactFrameInG", static_cast<SimTK::Transform (SimTK::Constraint::SphereOnSphereContact::*)(const SimTK::State &)  const>(&SimTK::Constraint::SphereOnSphereContact::findContactFrameInG));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Real SimTK::Constraint::SphereOnSphereContact::findSeparation(const SimTK::State &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_SphereOnSphereContact.h:381:6
    t.method("findSeparation", static_cast<SimTK::Real (SimTK::Constraint::SphereOnSphereContact::*)(const SimTK::State &)  const>(&SimTK::Constraint::SphereOnSphereContact::findSeparation));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("const SimTK::Constraint & SimTK::Constraint::SphereOnSphereContact::upcast() (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_SphereOnSphereContact.h:385:1
    t.method("upcast", static_cast<const SimTK::Constraint & (SimTK::Constraint::SphereOnSphereContact::*)()  const>(&SimTK::Constraint::SphereOnSphereContact::upcast));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Constraint & SimTK::Constraint::SphereOnSphereContact::updUpcast() (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_SphereOnSphereContact.h:385:1
    t.method("updUpcast", static_cast<SimTK::Constraint & (SimTK::Constraint::SphereOnSphereContact::*)() >(&SimTK::Constraint::SphereOnSphereContact::updUpcast));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("bool SimTK::Constraint::SphereOnSphereContact::isInstanceOf(const SimTK::Constraint &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_SphereOnSphereContact.h:385:1
    module_.method("Constraint!SphereOnSphereContact!isInstanceOf", static_cast<bool (*)(const SimTK::Constraint &) >(&SimTK::Constraint::SphereOnSphereContact::isInstanceOf));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("const SimTK::Constraint::SphereOnSphereContact & SimTK::Constraint::SphereOnSphereContact::downcast(const SimTK::Constraint &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_SphereOnSphereContact.h:385:1
    module_.method("Constraint!SphereOnSphereContact!downcast", static_cast<const SimTK::Constraint::SphereOnSphereContact & (*)(const SimTK::Constraint &) >(&SimTK::Constraint::SphereOnSphereContact::downcast));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Constraint::SphereOnSphereContact & SimTK::Constraint::SphereOnSphereContact::updDowncast(SimTK::Constraint &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_SphereOnSphereContact.h:385:1
    module_.method("Constraint!SphereOnSphereContact!updDowncast", static_cast<SimTK::Constraint::SphereOnSphereContact & (*)(SimTK::Constraint &) >(&SimTK::Constraint::SphereOnSphereContact::updDowncast));
    CLEAR_DEBUG_MSG();
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<SimTK::Constraint::SphereOnSphereContact>> type_;
};
std::shared_ptr<Wrapper> newJlSimTK_Constraint_SphereOnSphereContact(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlSimTK_Constraint_SphereOnSphereContact(module));
}

}
