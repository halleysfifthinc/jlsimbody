// this file was auto-generated by wrapit v0.1.0-61-g71d8603-dirty
#include "jlsimbody/common.h"

#include "jlsimbody/MultibodySystem.h"

namespace jlsimbody {

void define_simbody_MultibodySystem(jlcxx::Module& types, jlcxx::TypeWrapper<SimTK::MultibodySystem> multibod){

  /**********************************************************************/
  /* Wrappers for the methods of class SimTK::MultibodySystem
   */

  DEBUG_MSG("void SimTK::MultibodySystem::MultibodySystem(SimTK::SimbodyMatterSubsystem &) (" __HERE__ ")");
  // defined in simbody/internal/MultibodySystem.h:51:14
  multibod.constructor<SimTK::SimbodyMatterSubsystem &>();
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("int SimTK::MultibodySystem::addForceSubsystem(SimTK::ForceSubsystem &) (" __HERE__ ")");
  // signature to use in the veto list: int SimTK::MultibodySystem::addForceSubsystem(SimTK::ForceSubsystem &)
  // defined in simbody/internal/MultibodySystem.h:54:9
  multibod.method("addForceSubsystem", static_cast<int (SimTK::MultibodySystem::*)(SimTK::ForceSubsystem &) >(&SimTK::MultibodySystem::addForceSubsystem));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("int SimTK::MultibodySystem::setMatterSubsystem(SimTK::SimbodyMatterSubsystem &) (" __HERE__ ")");
  // signature to use in the veto list: int SimTK::MultibodySystem::setMatterSubsystem(SimTK::SimbodyMatterSubsystem &)
  // defined in simbody/internal/MultibodySystem.h:56:9
  multibod.method("setMatterSubsystem", static_cast<int (SimTK::MultibodySystem::*)(SimTK::SimbodyMatterSubsystem &) >(&SimTK::MultibodySystem::setMatterSubsystem));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("const SimTK::SimbodyMatterSubsystem & SimTK::MultibodySystem::getMatterSubsystem() (" __HERE__ ")");
  // signature to use in the veto list: const SimTK::SimbodyMatterSubsystem & SimTK::MultibodySystem::getMatterSubsystem()
  // defined in simbody/internal/MultibodySystem.h:57:35
  multibod.method("getMatterSubsystem", static_cast<const SimTK::SimbodyMatterSubsystem & (SimTK::MultibodySystem::*)()  const>(&SimTK::MultibodySystem::getMatterSubsystem));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("SimTK::SimbodyMatterSubsystem & SimTK::MultibodySystem::updMatterSubsystem() (" __HERE__ ")");
  // signature to use in the veto list: SimTK::SimbodyMatterSubsystem & SimTK::MultibodySystem::updMatterSubsystem()
  // defined in simbody/internal/MultibodySystem.h:58:35
  multibod.method("updMatterSubsystem", static_cast<SimTK::SimbodyMatterSubsystem & (SimTK::MultibodySystem::*)() >(&SimTK::MultibodySystem::updMatterSubsystem));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("bool SimTK::MultibodySystem::hasMatterSubsystem() (" __HERE__ ")");
  // signature to use in the veto list: bool SimTK::MultibodySystem::hasMatterSubsystem()
  // defined in simbody/internal/MultibodySystem.h:59:10
  multibod.method("hasMatterSubsystem", static_cast<bool (SimTK::MultibodySystem::*)()  const>(&SimTK::MultibodySystem::hasMatterSubsystem));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("int SimTK::MultibodySystem::setDecorationSubsystem(SimTK::DecorationSubsystem &) (" __HERE__ ")");
  // signature to use in the veto list: int SimTK::MultibodySystem::setDecorationSubsystem(SimTK::DecorationSubsystem &)
  // defined in simbody/internal/MultibodySystem.h:61:9
  multibod.method("setDecorationSubsystem", static_cast<int (SimTK::MultibodySystem::*)(SimTK::DecorationSubsystem &) >(&SimTK::MultibodySystem::setDecorationSubsystem));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("const SimTK::DecorationSubsystem & SimTK::MultibodySystem::getDecorationSubsystem() (" __HERE__ ")");
  // signature to use in the veto list: const SimTK::DecorationSubsystem & SimTK::MultibodySystem::getDecorationSubsystem()
  // defined in simbody/internal/MultibodySystem.h:62:32
  multibod.method("getDecorationSubsystem", static_cast<const SimTK::DecorationSubsystem & (SimTK::MultibodySystem::*)()  const>(&SimTK::MultibodySystem::getDecorationSubsystem));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("SimTK::DecorationSubsystem & SimTK::MultibodySystem::updDecorationSubsystem() (" __HERE__ ")");
  // signature to use in the veto list: SimTK::DecorationSubsystem & SimTK::MultibodySystem::updDecorationSubsystem()
  // defined in simbody/internal/MultibodySystem.h:63:32
  multibod.method("updDecorationSubsystem", static_cast<SimTK::DecorationSubsystem & (SimTK::MultibodySystem::*)() >(&SimTK::MultibodySystem::updDecorationSubsystem));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("bool SimTK::MultibodySystem::hasDecorationSubsystem() (" __HERE__ ")");
  // signature to use in the veto list: bool SimTK::MultibodySystem::hasDecorationSubsystem()
  // defined in simbody/internal/MultibodySystem.h:64:10
  multibod.method("hasDecorationSubsystem", static_cast<bool (SimTK::MultibodySystem::*)()  const>(&SimTK::MultibodySystem::hasDecorationSubsystem));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("int SimTK::MultibodySystem::setContactSubsystem(SimTK::GeneralContactSubsystem &) (" __HERE__ ")");
  // signature to use in the veto list: int SimTK::MultibodySystem::setContactSubsystem(SimTK::GeneralContactSubsystem &)
  // defined in simbody/internal/MultibodySystem.h:66:9
  multibod.method("setContactSubsystem", static_cast<int (SimTK::MultibodySystem::*)(SimTK::GeneralContactSubsystem &) >(&SimTK::MultibodySystem::setContactSubsystem));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("const SimTK::GeneralContactSubsystem & SimTK::MultibodySystem::getContactSubsystem() (" __HERE__ ")");
  // signature to use in the veto list: const SimTK::GeneralContactSubsystem & SimTK::MultibodySystem::getContactSubsystem()
  // defined in simbody/internal/MultibodySystem.h:67:36
  multibod.method("getContactSubsystem", static_cast<const SimTK::GeneralContactSubsystem & (SimTK::MultibodySystem::*)()  const>(&SimTK::MultibodySystem::getContactSubsystem));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("SimTK::GeneralContactSubsystem & SimTK::MultibodySystem::updContactSubsystem() (" __HERE__ ")");
  // signature to use in the veto list: SimTK::GeneralContactSubsystem & SimTK::MultibodySystem::updContactSubsystem()
  // defined in simbody/internal/MultibodySystem.h:68:36
  multibod.method("updContactSubsystem", static_cast<SimTK::GeneralContactSubsystem & (SimTK::MultibodySystem::*)() >(&SimTK::MultibodySystem::updContactSubsystem));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("bool SimTK::MultibodySystem::hasContactSubsystem() (" __HERE__ ")");
  // signature to use in the veto list: bool SimTK::MultibodySystem::hasContactSubsystem()
  // defined in simbody/internal/MultibodySystem.h:69:10
  multibod.method("hasContactSubsystem", static_cast<bool (SimTK::MultibodySystem::*)()  const>(&SimTK::MultibodySystem::hasContactSubsystem));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("const SimTK::Real SimTK::MultibodySystem::calcPotentialEnergy(const SimTK::State &) (" __HERE__ ")");
  // signature to use in the veto list: const SimTK::Real SimTK::MultibodySystem::calcPotentialEnergy(const SimTK::State &)
  // defined in simbody/internal/MultibodySystem.h:74:16
  multibod.method("calcPotentialEnergy", static_cast<const SimTK::Real (SimTK::MultibodySystem::*)(const SimTK::State &)  const>(&SimTK::MultibodySystem::calcPotentialEnergy));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("const SimTK::Real SimTK::MultibodySystem::calcKineticEnergy(const SimTK::State &) (" __HERE__ ")");
  // signature to use in the veto list: const SimTK::Real SimTK::MultibodySystem::calcKineticEnergy(const SimTK::State &)
  // defined in simbody/internal/MultibodySystem.h:77:16
  multibod.method("calcKineticEnergy", static_cast<const SimTK::Real (SimTK::MultibodySystem::*)(const SimTK::State &)  const>(&SimTK::MultibodySystem::calcKineticEnergy));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("SimTK::Real SimTK::MultibodySystem::calcEnergy(const SimTK::State &) (" __HERE__ ")");
  // signature to use in the veto list: SimTK::Real SimTK::MultibodySystem::calcEnergy(const SimTK::State &)
  // defined in simbody/internal/MultibodySystem.h:80:10
  multibod.method("calcEnergy", static_cast<SimTK::Real (SimTK::MultibodySystem::*)(const SimTK::State &)  const>(&SimTK::MultibodySystem::calcEnergy));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("const SimTK::Vector_<SimTK::SpatialVec> & SimTK::MultibodySystem::getRigidBodyForces(const SimTK::State &, SimTK::Stage) (" __HERE__ ")");
  // signature to use in the veto list: const SimTK::Vector_<SimTK::SpatialVec> & SimTK::MultibodySystem::getRigidBodyForces(const SimTK::State &, SimTK::Stage)
  // defined in simbody/internal/MultibodySystem.h:93:32
  multibod.method("getRigidBodyForces", static_cast<const SimTK::Vector_<SimTK::SpatialVec> & (SimTK::MultibodySystem::*)(const SimTK::State &, SimTK::Stage)  const>(&SimTK::MultibodySystem::getRigidBodyForces));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("const SimTK::Vector_<SimTK::Vec3> & SimTK::MultibodySystem::getParticleForces(const SimTK::State &, SimTK::Stage) (" __HERE__ ")");
  // signature to use in the veto list: const SimTK::Vector_<SimTK::Vec3> & SimTK::MultibodySystem::getParticleForces(const SimTK::State &, SimTK::Stage)
  // defined in simbody/internal/MultibodySystem.h:94:32
  multibod.method("getParticleForces", static_cast<const SimTK::Vector_<SimTK::Vec3> & (SimTK::MultibodySystem::*)(const SimTK::State &, SimTK::Stage)  const>(&SimTK::MultibodySystem::getParticleForces));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("const SimTK::Vector & SimTK::MultibodySystem::getMobilityForces(const SimTK::State &, SimTK::Stage) (" __HERE__ ")");
  // signature to use in the veto list: const SimTK::Vector & SimTK::MultibodySystem::getMobilityForces(const SimTK::State &, SimTK::Stage)
  // defined in simbody/internal/MultibodySystem.h:95:32
  multibod.method("getMobilityForces", static_cast<const SimTK::Vector & (SimTK::MultibodySystem::*)(const SimTK::State &, SimTK::Stage)  const>(&SimTK::MultibodySystem::getMobilityForces));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("SimTK::Vector_<SimTK::SpatialVec> & SimTK::MultibodySystem::updRigidBodyForces(const SimTK::State &, SimTK::Stage) (" __HERE__ ")");
  // signature to use in the veto list: SimTK::Vector_<SimTK::SpatialVec> & SimTK::MultibodySystem::updRigidBodyForces(const SimTK::State &, SimTK::Stage)
  // defined in simbody/internal/MultibodySystem.h:98:26
  multibod.method("updRigidBodyForces", static_cast<SimTK::Vector_<SimTK::SpatialVec> & (SimTK::MultibodySystem::*)(const SimTK::State &, SimTK::Stage)  const>(&SimTK::MultibodySystem::updRigidBodyForces));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("SimTK::Vector_<SimTK::Vec3> & SimTK::MultibodySystem::updParticleForces(const SimTK::State &, SimTK::Stage) (" __HERE__ ")");
  // signature to use in the veto list: SimTK::Vector_<SimTK::Vec3> & SimTK::MultibodySystem::updParticleForces(const SimTK::State &, SimTK::Stage)
  // defined in simbody/internal/MultibodySystem.h:99:26
  multibod.method("updParticleForces", static_cast<SimTK::Vector_<SimTK::Vec3> & (SimTK::MultibodySystem::*)(const SimTK::State &, SimTK::Stage)  const>(&SimTK::MultibodySystem::updParticleForces));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("SimTK::Vector & SimTK::MultibodySystem::updMobilityForces(const SimTK::State &, SimTK::Stage) (" __HERE__ ")");
  // signature to use in the veto list: SimTK::Vector & SimTK::MultibodySystem::updMobilityForces(const SimTK::State &, SimTK::Stage)
  // defined in simbody/internal/MultibodySystem.h:100:26
  multibod.method("updMobilityForces", static_cast<SimTK::Vector & (SimTK::MultibodySystem::*)(const SimTK::State &, SimTK::Stage)  const>(&SimTK::MultibodySystem::updMobilityForces));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("bool SimTK::MultibodySystem::isInstanceOf(const SimTK::System &) (" __HERE__ ")");
  // signature to use in the veto list: bool SimTK::MultibodySystem::isInstanceOf(const SimTK::System &)
  // defined in simbody/internal/MultibodySystem.h:103:5
  types.method("MultibodySystem!isInstanceOf", static_cast<bool (*)(const SimTK::System &) >(&SimTK::MultibodySystem::isInstanceOf));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("const SimTK::MultibodySystem & SimTK::MultibodySystem::downcast(const SimTK::System &) (" __HERE__ ")");
  // signature to use in the veto list: const SimTK::MultibodySystem & SimTK::MultibodySystem::downcast(const SimTK::System &)
  // defined in simbody/internal/MultibodySystem.h:103:5
  types.method("MultibodySystem!downcast", static_cast<const SimTK::MultibodySystem & (*)(const SimTK::System &) >(&SimTK::MultibodySystem::downcast));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("SimTK::MultibodySystem & SimTK::MultibodySystem::updDowncast(SimTK::System &) (" __HERE__ ")");
  // signature to use in the veto list: SimTK::MultibodySystem & SimTK::MultibodySystem::updDowncast(SimTK::System &)
  // defined in simbody/internal/MultibodySystem.h:103:5
  types.method("MultibodySystem!updDowncast", static_cast<SimTK::MultibodySystem & (*)(SimTK::System &) >(&SimTK::MultibodySystem::updDowncast));
  CLEAR_DEBUG_MSG();

  /* End of SimTK::MultibodySystem class method wrappers
   **********************************************************************/

}

}
