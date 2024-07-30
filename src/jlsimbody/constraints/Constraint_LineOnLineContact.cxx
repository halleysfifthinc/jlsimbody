// this file was auto-generated by wrapit v1.3.3
#include "jlsimbody/common.h"

#include "jlsimbody/Constraints.h"

namespace jlcxx {
  template<> struct IsMirroredType<SimTK::Constraint::LineOnLineContact> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::Constraint::LineOnLineContact> : std::false_type { };
	template<> struct SuperType<SimTK::Constraint::LineOnLineContact> { typedef SimTK::Constraint type; };
}

namespace jlsimbody {

// Class generating the wrapper for type SimTK::Constraint::LineOnLineContact
struct JlSimTK_Constraint_LineOnLineContact: public Wrapper {

  JlSimTK_Constraint_LineOnLineContact(jlcxx::Module& module): Wrapper(module){
    DEBUG_MSG("type SimTK::Constraint::LineOnLineContact (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_LineOnLineContact.h:142:40
    auto t = module.add_type<SimTK::Constraint::LineOnLineContact>(
      "LineOnLineContactConstraint",
      jlcxx::julia_base_type<SimTK::Constraint>());
    CLEAR_DEBUG_MSG();

    type_ = std::unique_ptr<jlcxx::TypeWrapper<SimTK::Constraint::LineOnLineContact>>(new jlcxx::TypeWrapper<SimTK::Constraint::LineOnLineContact>(module, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>();

    DEBUG_MSG("void SimTK::Constraint::LineOnLineContact::LineOnLineContact(SimTK::MobilizedBody &, const SimTK::Transform &, SimTK::Real, SimTK::MobilizedBody &, const SimTK::Transform &, SimTK::Real, bool) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_LineOnLineContact.h:206:1
    t.constructor<SimTK::MobilizedBody &, const SimTK::Transform &, SimTK::Real, SimTK::MobilizedBody &, const SimTK::Transform &, SimTK::Real, bool>();
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("const SimTK::MobilizedBody & SimTK::Constraint::LineOnLineContact::getMobilizedBodyF() (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_LineOnLineContact.h:221:22
    t.method("getMobilizedBodyF", static_cast<const SimTK::MobilizedBody & (SimTK::Constraint::LineOnLineContact::*)()  const>(&SimTK::Constraint::LineOnLineContact::getMobilizedBodyF));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("const SimTK::MobilizedBody & SimTK::Constraint::LineOnLineContact::getMobilizedBodyB() (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_LineOnLineContact.h:226:22
    t.method("getMobilizedBodyB", static_cast<const SimTK::MobilizedBody & (SimTK::Constraint::LineOnLineContact::*)()  const>(&SimTK::Constraint::LineOnLineContact::getMobilizedBodyB));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("bool SimTK::Constraint::LineOnLineContact::isEnforcingRolling() (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_LineOnLineContact.h:231:6
    t.method("isEnforcingRolling", static_cast<bool (SimTK::Constraint::LineOnLineContact::*)()  const>(&SimTK::Constraint::LineOnLineContact::isEnforcingRolling));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Constraint::LineOnLineContact & SimTK::Constraint::LineOnLineContact::setDefaultEdgeFrameF(const SimTK::Transform &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_LineOnLineContact.h:238:1
    t.method("setDefaultEdgeFrameF", static_cast<SimTK::Constraint::LineOnLineContact & (SimTK::Constraint::LineOnLineContact::*)(const SimTK::Transform &) >(&SimTK::Constraint::LineOnLineContact::setDefaultEdgeFrameF));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Constraint::LineOnLineContact & SimTK::Constraint::LineOnLineContact::setDefaultHalfLengthF(SimTK::Real) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_LineOnLineContact.h:244:1
    t.method("setDefaultHalfLengthF", static_cast<SimTK::Constraint::LineOnLineContact & (SimTK::Constraint::LineOnLineContact::*)(SimTK::Real) >(&SimTK::Constraint::LineOnLineContact::setDefaultHalfLengthF));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Constraint::LineOnLineContact & SimTK::Constraint::LineOnLineContact::setDefaultEdgeFrameB(const SimTK::Transform &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_LineOnLineContact.h:250:1
    t.method("setDefaultEdgeFrameB", static_cast<SimTK::Constraint::LineOnLineContact & (SimTK::Constraint::LineOnLineContact::*)(const SimTK::Transform &) >(&SimTK::Constraint::LineOnLineContact::setDefaultEdgeFrameB));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Constraint::LineOnLineContact & SimTK::Constraint::LineOnLineContact::setDefaultHalfLengthB(SimTK::Real) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_LineOnLineContact.h:256:1
    t.method("setDefaultHalfLengthB", static_cast<SimTK::Constraint::LineOnLineContact & (SimTK::Constraint::LineOnLineContact::*)(SimTK::Real) >(&SimTK::Constraint::LineOnLineContact::setDefaultHalfLengthB));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("const SimTK::Transform & SimTK::Constraint::LineOnLineContact::getDefaultEdgeFrameF() (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_LineOnLineContact.h:262:18
    t.method("getDefaultEdgeFrameF", static_cast<const SimTK::Transform & (SimTK::Constraint::LineOnLineContact::*)()  const>(&SimTK::Constraint::LineOnLineContact::getDefaultEdgeFrameF));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Real SimTK::Constraint::LineOnLineContact::getDefaultHalfLengthF() (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_LineOnLineContact.h:267:6
    t.method("getDefaultHalfLengthF", static_cast<SimTK::Real (SimTK::Constraint::LineOnLineContact::*)()  const>(&SimTK::Constraint::LineOnLineContact::getDefaultHalfLengthF));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("const SimTK::Transform & SimTK::Constraint::LineOnLineContact::getDefaultEdgeFrameB() (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_LineOnLineContact.h:273:18
    t.method("getDefaultEdgeFrameB", static_cast<const SimTK::Transform & (SimTK::Constraint::LineOnLineContact::*)()  const>(&SimTK::Constraint::LineOnLineContact::getDefaultEdgeFrameB));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Real SimTK::Constraint::LineOnLineContact::getDefaultHalfLengthB() (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_LineOnLineContact.h:278:6
    t.method("getDefaultHalfLengthB", static_cast<SimTK::Real (SimTK::Constraint::LineOnLineContact::*)()  const>(&SimTK::Constraint::LineOnLineContact::getDefaultHalfLengthB));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("const SimTK::Constraint::LineOnLineContact & SimTK::Constraint::LineOnLineContact::setEdgeFrameF(SimTK::State &, const SimTK::Transform &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_LineOnLineContact.h:319:1
    t.method("setEdgeFrameF", static_cast<const SimTK::Constraint::LineOnLineContact & (SimTK::Constraint::LineOnLineContact::*)(SimTK::State &, const SimTK::Transform &)  const>(&SimTK::Constraint::LineOnLineContact::setEdgeFrameF));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("const SimTK::Constraint::LineOnLineContact & SimTK::Constraint::LineOnLineContact::setHalfLengthF(SimTK::State &, SimTK::Real) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_LineOnLineContact.h:325:1
    t.method("setHalfLengthF", static_cast<const SimTK::Constraint::LineOnLineContact & (SimTK::Constraint::LineOnLineContact::*)(SimTK::State &, SimTK::Real)  const>(&SimTK::Constraint::LineOnLineContact::setHalfLengthF));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("const SimTK::Constraint::LineOnLineContact & SimTK::Constraint::LineOnLineContact::setEdgeFrameB(SimTK::State &, const SimTK::Transform &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_LineOnLineContact.h:334:1
    t.method("setEdgeFrameB", static_cast<const SimTK::Constraint::LineOnLineContact & (SimTK::Constraint::LineOnLineContact::*)(SimTK::State &, const SimTK::Transform &)  const>(&SimTK::Constraint::LineOnLineContact::setEdgeFrameB));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("const SimTK::Constraint::LineOnLineContact & SimTK::Constraint::LineOnLineContact::setHalfLengthB(SimTK::State &, SimTK::Real) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_LineOnLineContact.h:340:1
    t.method("setHalfLengthB", static_cast<const SimTK::Constraint::LineOnLineContact & (SimTK::Constraint::LineOnLineContact::*)(SimTK::State &, SimTK::Real)  const>(&SimTK::Constraint::LineOnLineContact::setHalfLengthB));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("const SimTK::Transform & SimTK::Constraint::LineOnLineContact::getEdgeFrameF(const SimTK::State &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_LineOnLineContact.h:345:18
    t.method("getEdgeFrameF", static_cast<const SimTK::Transform & (SimTK::Constraint::LineOnLineContact::*)(const SimTK::State &)  const>(&SimTK::Constraint::LineOnLineContact::getEdgeFrameF));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Real SimTK::Constraint::LineOnLineContact::getHalfLengthF(const SimTK::State &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_LineOnLineContact.h:349:6
    t.method("getHalfLengthF", static_cast<SimTK::Real (SimTK::Constraint::LineOnLineContact::*)(const SimTK::State &)  const>(&SimTK::Constraint::LineOnLineContact::getHalfLengthF));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("const SimTK::Transform & SimTK::Constraint::LineOnLineContact::getEdgeFrameB(const SimTK::State &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_LineOnLineContact.h:354:18
    t.method("getEdgeFrameB", static_cast<const SimTK::Transform & (SimTK::Constraint::LineOnLineContact::*)(const SimTK::State &)  const>(&SimTK::Constraint::LineOnLineContact::getEdgeFrameB));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Real SimTK::Constraint::LineOnLineContact::getHalfLengthB(const SimTK::State &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_LineOnLineContact.h:358:6
    t.method("getHalfLengthB", static_cast<SimTK::Real (SimTK::Constraint::LineOnLineContact::*)(const SimTK::State &)  const>(&SimTK::Constraint::LineOnLineContact::getHalfLengthB));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Real SimTK::Constraint::LineOnLineContact::getPositionError(const SimTK::State &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_LineOnLineContact.h:371:6
    t.method("getPositionError", static_cast<SimTK::Real (SimTK::Constraint::LineOnLineContact::*)(const SimTK::State &)  const>(&SimTK::Constraint::LineOnLineContact::getPositionError));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Vec3 SimTK::Constraint::LineOnLineContact::getVelocityErrors(const SimTK::State &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_LineOnLineContact.h:382:6
    t.method("getVelocityErrors", static_cast<SimTK::Vec3 (SimTK::Constraint::LineOnLineContact::*)(const SimTK::State &)  const>(&SimTK::Constraint::LineOnLineContact::getVelocityErrors));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Vec3 SimTK::Constraint::LineOnLineContact::getAccelerationErrors(const SimTK::State &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_LineOnLineContact.h:389:6
    t.method("getAccelerationErrors", static_cast<SimTK::Vec3 (SimTK::Constraint::LineOnLineContact::*)(const SimTK::State &)  const>(&SimTK::Constraint::LineOnLineContact::getAccelerationErrors));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Vec3 SimTK::Constraint::LineOnLineContact::getMultipliers(const SimTK::State &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_LineOnLineContact.h:401:6
    t.method("getMultipliers", static_cast<SimTK::Vec3 (SimTK::Constraint::LineOnLineContact::*)(const SimTK::State &)  const>(&SimTK::Constraint::LineOnLineContact::getMultipliers));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Vec3 SimTK::Constraint::LineOnLineContact::findForceOnBodyBInG(const SimTK::State &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_LineOnLineContact.h:410:6
    t.method("findForceOnBodyBInG", static_cast<SimTK::Vec3 (SimTK::Constraint::LineOnLineContact::*)(const SimTK::State &)  const>(&SimTK::Constraint::LineOnLineContact::findForceOnBodyBInG));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Transform SimTK::Constraint::LineOnLineContact::findContactFrameInG(const SimTK::State &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_LineOnLineContact.h:422:11
    t.method("findContactFrameInG", static_cast<SimTK::Transform (SimTK::Constraint::LineOnLineContact::*)(const SimTK::State &)  const>(&SimTK::Constraint::LineOnLineContact::findContactFrameInG));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("void SimTK::Constraint::LineOnLineContact::findClosestPointsInG(const SimTK::State &, SimTK::Vec3 &, SimTK::Vec3 &, bool &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_LineOnLineContact.h:432:6
    t.method("findClosestPointsInG", static_cast<void (SimTK::Constraint::LineOnLineContact::*)(const SimTK::State &, SimTK::Vec3 &, SimTK::Vec3 &, bool &)  const>(&SimTK::Constraint::LineOnLineContact::findClosestPointsInG));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Real SimTK::Constraint::LineOnLineContact::findSeparation(const SimTK::State &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_LineOnLineContact.h:442:6
    t.method("findSeparation", static_cast<SimTK::Real (SimTK::Constraint::LineOnLineContact::*)(const SimTK::State &)  const>(&SimTK::Constraint::LineOnLineContact::findSeparation));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("const SimTK::Constraint & SimTK::Constraint::LineOnLineContact::upcast() (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_LineOnLineContact.h:446:1
    t.method("upcast", static_cast<const SimTK::Constraint & (SimTK::Constraint::LineOnLineContact::*)()  const>(&SimTK::Constraint::LineOnLineContact::upcast));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Constraint & SimTK::Constraint::LineOnLineContact::updUpcast() (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_LineOnLineContact.h:446:1
    t.method("updUpcast", static_cast<SimTK::Constraint & (SimTK::Constraint::LineOnLineContact::*)() >(&SimTK::Constraint::LineOnLineContact::updUpcast));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("bool SimTK::Constraint::LineOnLineContact::isInstanceOf(const SimTK::Constraint &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_LineOnLineContact.h:446:1
    module_.method("Constraint!LineOnLineContact!isInstanceOf", static_cast<bool (*)(const SimTK::Constraint &) >(&SimTK::Constraint::LineOnLineContact::isInstanceOf));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("const SimTK::Constraint::LineOnLineContact & SimTK::Constraint::LineOnLineContact::downcast(const SimTK::Constraint &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_LineOnLineContact.h:446:1
    module_.method("Constraint!LineOnLineContact!downcast", static_cast<const SimTK::Constraint::LineOnLineContact & (*)(const SimTK::Constraint &) >(&SimTK::Constraint::LineOnLineContact::downcast));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Constraint::LineOnLineContact & SimTK::Constraint::LineOnLineContact::updDowncast(SimTK::Constraint &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint_LineOnLineContact.h:446:1
    module_.method("Constraint!LineOnLineContact!updDowncast", static_cast<SimTK::Constraint::LineOnLineContact & (*)(SimTK::Constraint &) >(&SimTK::Constraint::LineOnLineContact::updDowncast));
    CLEAR_DEBUG_MSG();
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<SimTK::Constraint::LineOnLineContact>> type_;
};
std::shared_ptr<Wrapper> newJlSimTK_Constraint_LineOnLineContact(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlSimTK_Constraint_LineOnLineContact(module));
}

}