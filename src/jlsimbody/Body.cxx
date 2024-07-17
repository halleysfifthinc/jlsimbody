// this file was auto-generated by wrapit v0.1.0-61-g71d8603-dirty
#include "jlsimbody/common.h"

#include "jlsimbody/Body.h"

namespace jlsimbody{

void define_simbody_Body(jlcxx::Module& types){

  DEBUG_MSG("type SimTK::Body (" __HERE__ ")");
  // defined in simbody/internal/Body.h:55:28
  auto t0 = types.add_type<SimTK::Body>("SimTK!Body");
  t0.template constructor<>();
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("type SimTK::Body::Rigid (" __HERE__ ")");
  // defined in simbody/internal/Body.h:180:34
  auto t3 = types.add_type<SimTK::Body::Rigid>("SimTK!Body!Rigid", jlcxx::julia_base_type<SimTK::Body>());
  t3.template constructor<>();
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("type SimTK::Body::Linear (" __HERE__ ")");
  // defined in simbody/internal/Body.h:210:34
  auto t4 = types.add_type<SimTK::Body::Linear>("SimTK!Body!Linear", jlcxx::julia_base_type<SimTK::Body>());
  t4.template constructor<>();
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("type SimTK::Body::Particle (" __HERE__ ")");
  // defined in simbody/internal/Body.h:236:34
  auto t5 = types.add_type<SimTK::Body::Particle>("SimTK!Body!Particle", jlcxx::julia_base_type<SimTK::Body>());
  t5.template constructor<>();
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("type SimTK::Body::Massless (" __HERE__ ")");
  // defined in simbody/internal/Body.h:261:34
  auto t6 = types.add_type<SimTK::Body::Massless>("SimTK!Body!Massless", jlcxx::julia_base_type<SimTK::Body>());
  t6.template constructor<>();
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("type SimTK::Body::Ground (" __HERE__ ")");
  // defined in simbody/internal/Body.h:279:34
  auto t7 = types.add_type<SimTK::Body::Ground>("SimTK!Body!Ground", jlcxx::julia_base_type<SimTK::Body>());
  t7.template constructor<>();
  CLEAR_DEBUG_MSG();

  /**********************************************************************/
  /* Wrappers for the methods of class SimTK::Body
   */


  DEBUG_MSG("void SimTK::Body::Body(const SimTK::Body &) (" __HERE__ ")");
  // defined in simbody/internal/Body.h:63:1
  t0.constructor<const SimTK::Body &>();
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("SimTK::Body & SimTK::Body::operator=(const SimTK::Body &) (" __HERE__ ")");
  // signature to use in the veto list: SimTK::Body & SimTK::Body::operator=(const SimTK::Body &)
  // defined in simbody/internal/Body.h:66:7
  t0.method("set!", static_cast<SimTK::Body & (SimTK::Body::*)(const SimTK::Body &) >(&SimTK::Body::operator=));
  CLEAR_DEBUG_MSG();


  DEBUG_MSG("void SimTK::Body::Body(const SimTK::MassProperties &) (" __HERE__ ")");
  // defined in simbody/internal/Body.h:72:1
  t0.constructor<const SimTK::MassProperties &>();
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("SimTK::Body & SimTK::Body::setDefaultRigidBodyMassProperties(const SimTK::MassProperties &) (" __HERE__ ")");
  // signature to use in the veto list: SimTK::Body & SimTK::Body::setDefaultRigidBodyMassProperties(const SimTK::MassProperties &)
  // defined in simbody/internal/Body.h:78:7
  t0.method("setDefaultRigidBodyMassProperties", static_cast<SimTK::Body & (SimTK::Body::*)(const SimTK::MassProperties &) >(&SimTK::Body::setDefaultRigidBodyMassProperties));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("const SimTK::MassProperties & SimTK::Body::getDefaultRigidBodyMassProperties() (" __HERE__ ")");
  // signature to use in the veto list: const SimTK::MassProperties & SimTK::Body::getDefaultRigidBodyMassProperties()
  // defined in simbody/internal/Body.h:83:23
  t0.method("getDefaultRigidBodyMassProperties", static_cast<const SimTK::MassProperties & (SimTK::Body::*)()  const>(&SimTK::Body::getDefaultRigidBodyMassProperties));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("int SimTK::Body::addDecoration(const SimTK::Transform &, const SimTK::DecorativeGeometry &) (" __HERE__ ")");
  // signature to use in the veto list: int SimTK::Body::addDecoration(const SimTK::Transform &, const SimTK::DecorativeGeometry &)
  // defined in simbody/internal/Body.h:93:5
  t0.method("addDecoration", static_cast<int (SimTK::Body::*)(const SimTK::Transform &, const SimTK::DecorativeGeometry &) >(&SimTK::Body::addDecoration));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("int SimTK::Body::addDecoration(const SimTK::DecorativeGeometry &) (" __HERE__ ")");
  // signature to use in the veto list: int SimTK::Body::addDecoration(const SimTK::DecorativeGeometry &)
  // defined in simbody/internal/Body.h:97:5
  t0.method("addDecoration", static_cast<int (SimTK::Body::*)(const SimTK::DecorativeGeometry &) >(&SimTK::Body::addDecoration));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("int SimTK::Body::getNumDecorations() (" __HERE__ ")");
  // signature to use in the veto list: int SimTK::Body::getNumDecorations()
  // defined in simbody/internal/Body.h:103:5
  t0.method("getNumDecorations", static_cast<int (SimTK::Body::*)()  const>(&SimTK::Body::getNumDecorations));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("const SimTK::DecorativeGeometry & SimTK::Body::getDecoration(int) (" __HERE__ ")");
  // signature to use in the veto list: const SimTK::DecorativeGeometry & SimTK::Body::getDecoration(int)
  // defined in simbody/internal/Body.h:108:27
  t0.method("getDecoration", static_cast<const SimTK::DecorativeGeometry & (SimTK::Body::*)(int)  const>(&SimTK::Body::getDecoration));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("SimTK::DecorativeGeometry & SimTK::Body::updDecoration(int) (" __HERE__ ")");
  // signature to use in the veto list: SimTK::DecorativeGeometry & SimTK::Body::updDecoration(int)
  // defined in simbody/internal/Body.h:115:21
  t0.method("updDecoration", static_cast<SimTK::DecorativeGeometry & (SimTK::Body::*)(int)  const>(&SimTK::Body::updDecoration));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("int SimTK::Body::addContactSurface(const SimTK::Transform &, const SimTK::ContactSurface &) (" __HERE__ ")");
  // signature to use in the veto list: int SimTK::Body::addContactSurface(const SimTK::Transform &, const SimTK::ContactSurface &)
  // defined in simbody/internal/Body.h:124:5
  t0.method("addContactSurface", static_cast<int (SimTK::Body::*)(const SimTK::Transform &, const SimTK::ContactSurface &) >(&SimTK::Body::addContactSurface));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("int SimTK::Body::addContactSurface(const SimTK::ContactSurface &) (" __HERE__ ")");
  // signature to use in the veto list: int SimTK::Body::addContactSurface(const SimTK::ContactSurface &)
  // defined in simbody/internal/Body.h:129:5
  t0.method("addContactSurface", static_cast<int (SimTK::Body::*)(const SimTK::ContactSurface &) >(&SimTK::Body::addContactSurface));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("int SimTK::Body::getNumContactSurfaces() (" __HERE__ ")");
  // signature to use in the veto list: int SimTK::Body::getNumContactSurfaces()
  // defined in simbody/internal/Body.h:134:5
  t0.method("getNumContactSurfaces", static_cast<int (SimTK::Body::*)()  const>(&SimTK::Body::getNumContactSurfaces));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("const SimTK::ContactSurface & SimTK::Body::getContactSurface(int) (" __HERE__ ")");
  // signature to use in the veto list: const SimTK::ContactSurface & SimTK::Body::getContactSurface(int)
  // defined in simbody/internal/Body.h:137:23
  t0.method("getContactSurface", static_cast<const SimTK::ContactSurface & (SimTK::Body::*)(int)  const>(&SimTK::Body::getContactSurface));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("const SimTK::Transform & SimTK::Body::getContactSurfaceTransform(int) (" __HERE__ ")");
  // signature to use in the veto list: const SimTK::Transform & SimTK::Body::getContactSurfaceTransform(int)
  // defined in simbody/internal/Body.h:140:18
  t0.method("getContactSurfaceTransform", static_cast<const SimTK::Transform & (SimTK::Body::*)(int)  const>(&SimTK::Body::getContactSurfaceTransform));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("SimTK::ContactSurface & SimTK::Body::updContactSurface(int) (" __HERE__ ")");
  // signature to use in the veto list: SimTK::ContactSurface & SimTK::Body::updContactSurface(int)
  // defined in simbody/internal/Body.h:144:17
  t0.method("updContactSurface", static_cast<SimTK::ContactSurface & (SimTK::Body::*)(int) >(&SimTK::Body::updContactSurface));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("SimTK::Transform & SimTK::Body::updContactSurfaceTransform(int) (" __HERE__ ")");
  // signature to use in the veto list: SimTK::Transform & SimTK::Body::updContactSurfaceTransform(int)
  // defined in simbody/internal/Body.h:148:12
  t0.method("updContactSurfaceTransform", static_cast<SimTK::Transform & (SimTK::Body::*)(int) >(&SimTK::Body::updContactSurfaceTransform));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("bool SimTK::Body::isOwnerHandle() (" __HERE__ ")");
  // signature to use in the veto list: bool SimTK::Body::isOwnerHandle()
  // defined in simbody/internal/Body.h:158:6
  t0.method("isOwnerHandle", static_cast<bool (SimTK::Body::*)()  const>(&SimTK::Body::isOwnerHandle));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("bool SimTK::Body::isEmptyHandle() (" __HERE__ ")");
  // signature to use in the veto list: bool SimTK::Body::isEmptyHandle()
  // defined in simbody/internal/Body.h:159:6
  t0.method("isEmptyHandle", static_cast<bool (SimTK::Body::*)()  const>(&SimTK::Body::isEmptyHandle));
  CLEAR_DEBUG_MSG();

  /* End of SimTK::Body class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class SimTK::Body::Rigid
   */


  DEBUG_MSG("void SimTK::Body::Rigid::Rigid(const SimTK::MassProperties &) (" __HERE__ ")");
  // defined in simbody/internal/Body.h:187:14
  t3.constructor<const SimTK::MassProperties &>();
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("SimTK::Body::Rigid & SimTK::Body::Rigid::setDefaultRigidBodyMassProperties(const SimTK::MassProperties &) (" __HERE__ ")");
  // signature to use in the veto list: SimTK::Body::Rigid & SimTK::Body::Rigid::setDefaultRigidBodyMassProperties(const SimTK::MassProperties &)
  // defined in simbody/internal/Body.h:189:12
  t3.method("setDefaultRigidBodyMassProperties", static_cast<SimTK::Body::Rigid & (SimTK::Body::Rigid::*)(const SimTK::MassProperties &) >(&SimTK::Body::Rigid::setDefaultRigidBodyMassProperties));
  CLEAR_DEBUG_MSG();

  // DEBUG_MSG("bool SimTK::Body::Rigid::isInstanceOf(const SimTK::Body &) (" __HERE__ ")");
  // // signature to use in the veto list: bool SimTK::Body::Rigid::isInstanceOf(const SimTK::Body &)
  // // defined in simbody/internal/Body.h:195:5
  // t3.method("SimTK!Body!Rigid!isInstanceOf", static_cast<bool (*)(const SimTK::Body &) >(&SimTK::Body::Rigid::isInstanceOf));

  // DEBUG_MSG("const SimTK::Body::Rigid & SimTK::Body::Rigid::downcast(const SimTK::Body &) (" __HERE__ ")");
  // // signature to use in the veto list: const SimTK::Body::Rigid & SimTK::Body::Rigid::downcast(const SimTK::Body &)
  // // defined in simbody/internal/Body.h:195:5
  // t3.method("SimTK!Body!Rigid!downcast", static_cast<const SimTK::Body::Rigid & (*)(const SimTK::Body &) >(&SimTK::Body::Rigid::downcast));

  // DEBUG_MSG("SimTK::Body::Rigid & SimTK::Body::Rigid::updDowncast(SimTK::Body &) (" __HERE__ ")");
  // // signature to use in the veto list: SimTK::Body::Rigid & SimTK::Body::Rigid::updDowncast(SimTK::Body &)
  // // defined in simbody/internal/Body.h:195:5
  // t3.method("SimTK!Body!Rigid!updDowncast", static_cast<SimTK::Body::Rigid & (*)(SimTK::Body &) >(&SimTK::Body::Rigid::updDowncast));

  /* End of SimTK::Body::Rigid class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class SimTK::Body::Linear
   */


  DEBUG_MSG("void SimTK::Body::Linear::Linear(const SimTK::MassProperties &) (" __HERE__ ")");
  // defined in simbody/internal/Body.h:213:14
  t4.constructor<const SimTK::MassProperties &>();
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("SimTK::Body::Linear & SimTK::Body::Linear::setDefaultRigidBodyMassProperties(const SimTK::MassProperties &) (" __HERE__ ")");
  // signature to use in the veto list: SimTK::Body::Linear & SimTK::Body::Linear::setDefaultRigidBodyMassProperties(const SimTK::MassProperties &)
  // defined in simbody/internal/Body.h:215:13
  t4.method("setDefaultRigidBodyMassProperties", static_cast<SimTK::Body::Linear & (SimTK::Body::Linear::*)(const SimTK::MassProperties &) >(&SimTK::Body::Linear::setDefaultRigidBodyMassProperties));
  CLEAR_DEBUG_MSG();

  // DEBUG_MSG("bool SimTK::Body::Linear::isInstanceOf(const SimTK::Body &) (" __HERE__ ")");
  // // signature to use in the veto list: bool SimTK::Body::Linear::isInstanceOf(const SimTK::Body &)
  // // defined in simbody/internal/Body.h:221:5
  // t4.method("SimTK!Body!Linear!isInstanceOf", static_cast<bool (*)(const SimTK::Body &) >(&SimTK::Body::Linear::isInstanceOf));

  // DEBUG_MSG("const SimTK::Body::Linear & SimTK::Body::Linear::downcast(const SimTK::Body &) (" __HERE__ ")");
  // // signature to use in the veto list: const SimTK::Body::Linear & SimTK::Body::Linear::downcast(const SimTK::Body &)
  // // defined in simbody/internal/Body.h:221:5
  // t4.method("SimTK!Body!Linear!downcast", static_cast<const SimTK::Body::Linear & (*)(const SimTK::Body &) >(&SimTK::Body::Linear::downcast));

  // DEBUG_MSG("SimTK::Body::Linear & SimTK::Body::Linear::updDowncast(SimTK::Body &) (" __HERE__ ")");
  // // signature to use in the veto list: SimTK::Body::Linear & SimTK::Body::Linear::updDowncast(SimTK::Body &)
  // // defined in simbody/internal/Body.h:221:5
  // t4.method("SimTK!Body!Linear!updDowncast", static_cast<SimTK::Body::Linear & (*)(SimTK::Body &) >(&SimTK::Body::Linear::updDowncast));

  /* End of SimTK::Body::Linear class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class SimTK::Body::Particle
   */


  DEBUG_MSG("void SimTK::Body::Particle::Particle(const SimTK::Real &) (" __HERE__ ")");
  // defined in simbody/internal/Body.h:239:14
  t5.constructor<const SimTK::Real &>();
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("SimTK::Body::Particle & SimTK::Body::Particle::setDefaultRigidBodyMassProperties(const SimTK::MassProperties &) (" __HERE__ ")");
  // signature to use in the veto list: SimTK::Body::Particle & SimTK::Body::Particle::setDefaultRigidBodyMassProperties(const SimTK::MassProperties &)
  // defined in simbody/internal/Body.h:241:15
  t5.method("setDefaultRigidBodyMassProperties", static_cast<SimTK::Body::Particle & (SimTK::Body::Particle::*)(const SimTK::MassProperties &) >(&SimTK::Body::Particle::setDefaultRigidBodyMassProperties));
  CLEAR_DEBUG_MSG();

  // DEBUG_MSG("bool SimTK::Body::Particle::isInstanceOf(const SimTK::Body &) (" __HERE__ ")");
  // // signature to use in the veto list: bool SimTK::Body::Particle::isInstanceOf(const SimTK::Body &)
  // // defined in simbody/internal/Body.h:247:5
  // t5.method("SimTK!Body!Particle!isInstanceOf", static_cast<bool (*)(const SimTK::Body &) >(&SimTK::Body::Particle::isInstanceOf));

  // DEBUG_MSG("const SimTK::Body::Particle & SimTK::Body::Particle::downcast(const SimTK::Body &) (" __HERE__ ")");
  // // signature to use in the veto list: const SimTK::Body::Particle & SimTK::Body::Particle::downcast(const SimTK::Body &)
  // // defined in simbody/internal/Body.h:247:5
  // t5.method("SimTK!Body!Particle!downcast", static_cast<const SimTK::Body::Particle & (*)(const SimTK::Body &) >(&SimTK::Body::Particle::downcast));

  // DEBUG_MSG("SimTK::Body::Particle & SimTK::Body::Particle::updDowncast(SimTK::Body &) (" __HERE__ ")");
  // // signature to use in the veto list: SimTK::Body::Particle & SimTK::Body::Particle::updDowncast(SimTK::Body &)
  // // defined in simbody/internal/Body.h:247:5
  // t5.method("SimTK!Body!Particle!updDowncast", static_cast<SimTK::Body::Particle & (*)(SimTK::Body &) >(&SimTK::Body::Particle::updDowncast));

  /* End of SimTK::Body::Particle class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class SimTK::Body::Massless
   */

  // DEBUG_MSG("bool SimTK::Body::Massless::isInstanceOf(const SimTK::Body &) (" __HERE__ ")");
  // // signature to use in the veto list: bool SimTK::Body::Massless::isInstanceOf(const SimTK::Body &)
  // // defined in simbody/internal/Body.h:266:5
  // t6.method("SimTK!Body!Massless!isInstanceOf", static_cast<bool (*)(const SimTK::Body &) >(&SimTK::Body::Massless::isInstanceOf));

  // DEBUG_MSG("const SimTK::Body::Massless & SimTK::Body::Massless::downcast(const SimTK::Body &) (" __HERE__ ")");
  // // signature to use in the veto list: const SimTK::Body::Massless & SimTK::Body::Massless::downcast(const SimTK::Body &)
  // // defined in simbody/internal/Body.h:266:5
  // t6.method("SimTK!Body!Massless!downcast", static_cast<const SimTK::Body::Massless & (*)(const SimTK::Body &) >(&SimTK::Body::Massless::downcast));

  // DEBUG_MSG("SimTK::Body::Massless & SimTK::Body::Massless::updDowncast(SimTK::Body &) (" __HERE__ ")");
  // // signature to use in the veto list: SimTK::Body::Massless & SimTK::Body::Massless::updDowncast(SimTK::Body &)
  // // defined in simbody/internal/Body.h:266:5
  // t6.method("SimTK!Body!Massless!updDowncast", static_cast<SimTK::Body::Massless & (*)(SimTK::Body &) >(&SimTK::Body::Massless::updDowncast));

  /* End of SimTK::Body::Massless class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class SimTK::Body::Ground
   */

  // DEBUG_MSG("bool SimTK::Body::Ground::isInstanceOf(const SimTK::Body &) (" __HERE__ ")");
  // // signature to use in the veto list: bool SimTK::Body::Ground::isInstanceOf(const SimTK::Body &)
  // // defined in simbody/internal/Body.h:284:5
  // t7.method("SimTK!Body!Ground!isInstanceOf", static_cast<bool (*)(const SimTK::Body &) >(&SimTK::Body::Ground::isInstanceOf));

  // DEBUG_MSG("const SimTK::Body::Ground & SimTK::Body::Ground::downcast(const SimTK::Body &) (" __HERE__ ")");
  // // signature to use in the veto list: const SimTK::Body::Ground & SimTK::Body::Ground::downcast(const SimTK::Body &)
  // // defined in simbody/internal/Body.h:284:5
  // t7.method("SimTK!Body!Ground!downcast", static_cast<const SimTK::Body::Ground & (*)(const SimTK::Body &) >(&SimTK::Body::Ground::downcast));

  // DEBUG_MSG("SimTK::Body::Ground & SimTK::Body::Ground::updDowncast(SimTK::Body &) (" __HERE__ ")");
  // // signature to use in the veto list: SimTK::Body::Ground & SimTK::Body::Ground::updDowncast(SimTK::Body &)
  // // defined in simbody/internal/Body.h:284:5
  // t7.method("SimTK!Body!Ground!updDowncast", static_cast<SimTK::Body::Ground & (*)(SimTK::Body &) >(&SimTK::Body::Ground::updDowncast));

  /* End of SimTK::Body::Ground class method wrappers
   **********************************************************************/

}

}
