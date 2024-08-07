// this file was auto-generated by wrapit v0.1.0-61-g71d8603-dirty
#include "jlsimbody/common.h"

#include "jlsimbody/CableTrackerSubsystem.h"

#ifdef JLSIMBODY_USE_SIMTK_UNIQUEINDEX_TYPES
#include "jlSimTKcommon/SimTK_UniqueIndex.h"
#endif

namespace jlsimbody {

void define_simbody_CableTrackerSubsystem(jlcxx::Module& types){

  DEBUG_MSG("type SimTK::CableTrackerSubsystem (" __HERE__ ")");
  // defined in simbody/internal/CableTrackerSubsystem.h:68:28
  auto t1 = types.add_type<SimTK::CableTrackerSubsystem>("CableTrackerSubsystem", jlcxx::julia_base_type<SimTK::Subsystem>());
  t1.template constructor<>();
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("type SimTK::CablePath (" __HERE__ ")");
  // defined in simbody/internal/CablePath.h:92:28
  auto t2 = types.add_type<SimTK::CablePath>("CablePath");
  t2.template constructor<>();
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("type SimTK::CableObstacle (" __HERE__ ")");
  // defined in simbody/internal/CablePath.h:210:28
  auto t6 = types.add_type<SimTK::CableObstacle>("CableObstacle");
  t6.template constructor<>();
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("type SimTK::CableObstacle::ViaPoint (" __HERE__ ")");
  // defined in simbody/internal/CablePath.h:294:43
  auto t8 = types.add_type<SimTK::CableObstacle::ViaPoint>("ViaPointCableObstacle", t6.dt());
  t8.template constructor<>();
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("type SimTK::CableObstacle::Surface (" __HERE__ ")");
  // defined in simbody/internal/CablePath.h:320:43
  auto t9 = types.add_type<SimTK::CableObstacle::Surface>("SurfaceCableObstacle", t6.dt());
  t9.template constructor<>();
  CLEAR_DEBUG_MSG();

  #ifdef JLSIMBODY_USE_SIMTK_UNIQUEINDEX_TYPES
  wrap_SimTK_UniqueIndexType<SimTK::CablePathIndex>(types, "CablePathIndex");
  wrap_SimTK_UniqueIndexType<SimTK::CableObstacleIndex>(types, "CableObstacleIndex");
  #endif

  /**********************************************************************/
  /* Wrappers for the methods of class SimTK::CableTrackerSubsystem
   */

  DEBUG_MSG("int SimTK::CableTrackerSubsystem::getNumCablePaths() (" __HERE__ ")");
  // defined in simbody/internal/CableTrackerSubsystem.h:76:5
  t1.method("getNumCablePaths", static_cast<int (SimTK::CableTrackerSubsystem::*)()  const>(&SimTK::CableTrackerSubsystem::getNumCablePaths));
  CLEAR_DEBUG_MSG();

  #ifdef JLSIMBODY_USE_SIMTK_UNIQUEINDEX_TYPES
  DEBUG_MSG("const SimTK::CablePath & SimTK::CableTrackerSubsystem::getCablePath(SimTK::CablePathIndex) (" __HERE__ ")");
  // defined in simbody/internal/CableTrackerSubsystem.h:79:18
  t1.method("getCablePath", static_cast<const SimTK::CablePath & (SimTK::CableTrackerSubsystem::*)(SimTK::CablePathIndex)  const>(&SimTK::CableTrackerSubsystem::getCablePath));
  CLEAR_DEBUG_MSG();
  #else
  DEBUG_MSG("const SimTK::CablePath & SimTK::CableTrackerSubsystem::getCablePath(int) (" __HERE__ ")");
  // defined in simbody/internal/CableTrackerSubsystem.h:79:18
  t1.method("getCablePath", reinterpret_cast<const SimTK::CablePath & (SimTK::CableTrackerSubsystem::*)(int)  const>(&SimTK::CableTrackerSubsystem::getCablePath));
  CLEAR_DEBUG_MSG();
  #endif

  #ifdef JLSIMBODY_USE_SIMTK_UNIQUEINDEX_TYPES
  DEBUG_MSG("SimTK::CablePath & SimTK::CableTrackerSubsystem::updCablePath(SimTK::CablePathIndex) (" __HERE__ ")");
  // defined in simbody/internal/CableTrackerSubsystem.h:81:12
  t1.method("updCablePath", static_cast<SimTK::CablePath & (SimTK::CableTrackerSubsystem::*)(SimTK::CablePathIndex) >(&SimTK::CableTrackerSubsystem::updCablePath));
  CLEAR_DEBUG_MSG();
  #else
  DEBUG_MSG("SimTK::CablePath & SimTK::CableTrackerSubsystem::updCablePath(int) (" __HERE__ ")");
  // defined in simbody/internal/CableTrackerSubsystem.h:81:12
  t1.method("updCablePath", reinterpret_cast<SimTK::CablePath & (SimTK::CableTrackerSubsystem::*)(int) >(&SimTK::CableTrackerSubsystem::updCablePath));
  CLEAR_DEBUG_MSG();
  #endif

  /* End of SimTK::CableTrackerSubsystem class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class SimTK::CablePath
   */


  DEBUG_MSG("void SimTK::CablePath::CablePath(SimTK::CableTrackerSubsystem &, const SimTK::MobilizedBody &, const SimTK::Vec3 &, const SimTK::MobilizedBody &, const SimTK::Vec3 &) (" __HERE__ ")");
  // defined in simbody/internal/CablePath.h:98:1
  t2.constructor<SimTK::CableTrackerSubsystem &, const SimTK::MobilizedBody &, const SimTK::Vec3 &, const SimTK::MobilizedBody &, const SimTK::Vec3 &>();
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("void SimTK::CablePath::CablePath(SimTK::CableTrackerSubsystem &, const SimTK::MobilizedBody &, const SimTK::MobilizedBody &) (" __HERE__ ")");
  // defined in simbody/internal/CablePath.h:107:1
  t2.constructor<SimTK::CableTrackerSubsystem &, const SimTK::MobilizedBody &, const SimTK::MobilizedBody &>();
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("void SimTK::CablePath::CablePath(const SimTK::CablePath &) (" __HERE__ ")");
  // defined in simbody/internal/CablePath.h:112:1
  t2.constructor<const SimTK::CablePath &>();
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("SimTK::CablePath & SimTK::CablePath::operator=(const SimTK::CablePath &) (" __HERE__ ")");
  // defined in simbody/internal/CablePath.h:115:12
  t2.method("set!", static_cast<SimTK::CablePath & (SimTK::CablePath::*)(const SimTK::CablePath &) >(&SimTK::CablePath::operator=));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("void SimTK::CablePath::solveForInitialCablePath(SimTK::State &) (" __HERE__ ")");
  // defined in simbody/internal/CablePath.h:141:6
  t2.method("solveForInitialCablePath", static_cast<void (SimTK::CablePath::*)(SimTK::State &)  const>(&SimTK::CablePath::solveForInitialCablePath));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("int SimTK::CablePath::getNumObstacles() (" __HERE__ ")");
  // defined in simbody/internal/CablePath.h:146:5
  t2.method("getNumObstacles", static_cast<int (SimTK::CablePath::*)()  const>(&SimTK::CablePath::getNumObstacles));
  CLEAR_DEBUG_MSG();

  #ifdef JLSIMBODY_USE_SIMTK_UNIQUEINDEX_TYPES
  DEBUG_MSG("const SimTK::CableObstacle & SimTK::CablePath::getObstacle(SimTK::CableObstacleIndex) (" __HERE__ ")");
  // defined in simbody/internal/CablePath.h:149:22
  t2.method("getObstacle", static_cast<const SimTK::CableObstacle & (SimTK::CablePath::*)(SimTK::CableObstacleIndex)  const>(&SimTK::CablePath::getObstacle));
  CLEAR_DEBUG_MSG();
  #else
  DEBUG_MSG("const SimTK::CableObstacle & SimTK::CablePath::getObstacle(int) (" __HERE__ ")");
  // defined in simbody/internal/CablePath.h:149:22
  t2.method("getObstacle", reinterpret_cast<const SimTK::CableObstacle & (SimTK::CablePath::*)(int)  const>(&SimTK::CablePath::getObstacle));
  CLEAR_DEBUG_MSG();
  #endif

  DEBUG_MSG("SimTK::Real SimTK::CablePath::getCableLength(const SimTK::State &) (" __HERE__ ")");
  // defined in simbody/internal/CablePath.h:154:6
  t2.method("getCableLength", static_cast<SimTK::Real (SimTK::CablePath::*)(const SimTK::State &)  const>(&SimTK::CablePath::getCableLength));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("SimTK::Real SimTK::CablePath::getCableLengthDot(const SimTK::State &) (" __HERE__ ")");
  // defined in simbody/internal/CablePath.h:161:6
  t2.method("getCableLengthDot", static_cast<SimTK::Real (SimTK::CablePath::*)(const SimTK::State &)  const>(&SimTK::CablePath::getCableLengthDot));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("void SimTK::CablePath::applyBodyForces(const SimTK::State &, SimTK::Real, SimTK::Vector_<SimTK::SpatialVec> &) (" __HERE__ ")");
  // defined in simbody/internal/CablePath.h:168:6
  t2.method("applyBodyForces", static_cast<void (SimTK::CablePath::*)(const SimTK::State &, SimTK::Real, SimTK::Vector_<SimTK::SpatialVec> &)  const>(&SimTK::CablePath::applyBodyForces));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("SimTK::Real SimTK::CablePath::calcCablePower(const SimTK::State &, SimTK::Real) (" __HERE__ ")");
  // defined in simbody/internal/CablePath.h:177:6
  t2.method("calcCablePower", static_cast<SimTK::Real (SimTK::CablePath::*)(const SimTK::State &, SimTK::Real)  const>(&SimTK::CablePath::calcCablePower));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("SimTK::Real SimTK::CablePath::getIntegratedCableLengthDot(const SimTK::State &) (" __HERE__ ")");
  // defined in simbody/internal/CablePath.h:182:6
  t2.method("getIntegratedCableLengthDot", static_cast<SimTK::Real (SimTK::CablePath::*)(const SimTK::State &)  const>(&SimTK::CablePath::getIntegratedCableLengthDot));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("void SimTK::CablePath::setIntegratedCableLengthDot(SimTK::State &, SimTK::Real) (" __HERE__ ")");
  // defined in simbody/internal/CablePath.h:188:6
  t2.method("setIntegratedCableLengthDot", static_cast<void (SimTK::CablePath::*)(SimTK::State &, SimTK::Real)  const>(&SimTK::CablePath::setIntegratedCableLengthDot));
  CLEAR_DEBUG_MSG();

  /* End of SimTK::CablePath class method wrappers
   **********************************************************************/

  /**********************************************************************/
  /* Wrappers for the methods of class SimTK::CableObstacle
   */


  // DEBUG_MSG("void SimTK::CableObstacle::CableObstacle(SimTK::CablePath &) (" __HERE__ ")");
  // // defined in simbody/internal/CablePath.h:219:10
  // t6.constructor<SimTK::CablePath &>();
  // CLEAR_DEBUG_MSG();

  DEBUG_MSG("void SimTK::CableObstacle::CableObstacle(const SimTK::CableObstacle &) (" __HERE__ ")");
  // defined in simbody/internal/CablePath.h:222:1
  t6.constructor<const SimTK::CableObstacle &>();
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("SimTK::CableObstacle & SimTK::CableObstacle::operator=(const SimTK::CableObstacle &) (" __HERE__ ")");
  // defined in simbody/internal/CablePath.h:225:16
  t6.method("set!", static_cast<SimTK::CableObstacle & (SimTK::CableObstacle::*)(const SimTK::CableObstacle &) >(&SimTK::CableObstacle::operator=));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("const SimTK::Transform & SimTK::CableObstacle::getDefaultTransform() (" __HERE__ ")");
  // defined in simbody/internal/CablePath.h:233:18
  t6.method("getDefaultTransform", static_cast<const SimTK::Transform & (SimTK::CableObstacle::*)()  const>(&SimTK::CableObstacle::getDefaultTransform));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("const SimTK::MobilizedBody & SimTK::CableObstacle::getMobilizedBody() (" __HERE__ ")");
  // defined in simbody/internal/CablePath.h:237:22
  t6.method("getMobilizedBody", static_cast<const SimTK::MobilizedBody & (SimTK::CableObstacle::*)()  const>(&SimTK::CableObstacle::getMobilizedBody));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("const SimTK::CablePath & SimTK::CableObstacle::getCablePath() (" __HERE__ ")");
  // defined in simbody/internal/CablePath.h:239:18
  t6.method("getCablePath", static_cast<const SimTK::CablePath & (SimTK::CableObstacle::*)()  const>(&SimTK::CableObstacle::getCablePath));
  CLEAR_DEBUG_MSG();

  #ifdef JLSIMBODY_USE_SIMTK_UNIQUEINDEX_TYPES
  DEBUG_MSG("SimTK::CableObstacleIndex SimTK::CableObstacle::getObstacleIndex() (" __HERE__ ")");
  // defined in simbody/internal/CablePath.h:241:20
  t6.method("getObstacleIndex", static_cast<SimTK::CableObstacleIndex (SimTK::CableObstacle::*)()  const>(&SimTK::CableObstacle::getObstacleIndex));
  CLEAR_DEBUG_MSG();
  #else
  DEBUG_MSG("int SimTK::CableObstacle::getObstacleIndex() (" __HERE__ ")");
  // defined in simbody/internal/CablePath.h:241:20
  t6.method("getObstacleIndex", reinterpret_cast<int (SimTK::CableObstacle::*)()  const>(&SimTK::CableObstacle::getObstacleIndex));
  CLEAR_DEBUG_MSG();
  #endif

  DEBUG_MSG("const SimTK::DecorativeGeometry & SimTK::CableObstacle::getDecorativeGeometry() (" __HERE__ ")");
  // defined in simbody/internal/CablePath.h:245:27
  t6.method("getDecorativeGeometry", static_cast<const SimTK::DecorativeGeometry & (SimTK::CableObstacle::*)()  const>(&SimTK::CableObstacle::getDecorativeGeometry));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("SimTK::DecorativeGeometry & SimTK::CableObstacle::updDecorativeGeometry() (" __HERE__ ")");
  // defined in simbody/internal/CablePath.h:249:21
  t6.method("updDecorativeGeometry", static_cast<SimTK::DecorativeGeometry & (SimTK::CableObstacle::*)() >(&SimTK::CableObstacle::updDecorativeGeometry));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("bool SimTK::CableObstacle::isDisabledByDefault() (" __HERE__ ")");
  // defined in simbody/internal/CablePath.h:254:6
  t6.method("isDisabledByDefault", static_cast<bool (SimTK::CableObstacle::*)()  const>(&SimTK::CableObstacle::isDisabledByDefault));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("SimTK::CableObstacle & SimTK::CableObstacle::setDisabledByDefault(bool) (" __HERE__ ")");
  // defined in simbody/internal/CablePath.h:259:16
  t6.method("setDisabledByDefault", static_cast<SimTK::CableObstacle & (SimTK::CableObstacle::*)(bool) >(&SimTK::CableObstacle::setDisabledByDefault));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("SimTK::CableObstacle & SimTK::CableObstacle::setDefaultTransform(const SimTK::Transform &) (" __HERE__ ")");
  // defined in simbody/internal/CablePath.h:263:16
  t6.method("setDefaultTransform", static_cast<SimTK::CableObstacle & (SimTK::CableObstacle::*)(const SimTK::Transform &) >(&SimTK::CableObstacle::setDefaultTransform));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("SimTK::CableObstacle & SimTK::CableObstacle::setDecorativeGeometry(const SimTK::DecorativeGeometry &) (" __HERE__ ")");
  // defined in simbody/internal/CablePath.h:269:16
  t6.method("setDecorativeGeometry", static_cast<SimTK::CableObstacle & (SimTK::CableObstacle::*)(const SimTK::DecorativeGeometry &) >(&SimTK::CableObstacle::setDecorativeGeometry));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("void SimTK::CableObstacle::clear() (" __HERE__ ")");
  // defined in simbody/internal/CablePath.h:273:6
  t6.method("clear", static_cast<void (SimTK::CableObstacle::*)() >(&SimTK::CableObstacle::clear));
  CLEAR_DEBUG_MSG();

  // DEBUG_MSG("bool SimTK::CableObstacle::isEmpty() (" __HERE__ ")");
  // // defined in simbody/internal/CablePath.h:275:6
  // t6.method("isEmpty", static_cast<bool (SimTK::CableObstacle::*)()  const>(&SimTK::CableObstacle::isEmpty));
  // CLEAR_DEBUG_MSG();

  /* End of SimTK::CableObstacle class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class SimTK::CableObstacle::ViaPoint
   */

  DEBUG_MSG("void SimTK::CableObstacle::ViaPoint::ViaPoint(SimTK::CablePath &, const SimTK::MobilizedBody &, const SimTK::Vec3 &) (" __HERE__ ")");
  // defined in simbody/internal/CablePath.h:299:1
  t8.constructor<SimTK::CablePath &, const SimTK::MobilizedBody &, const SimTK::Vec3 &>();
  CLEAR_DEBUG_MSG();

  // DEBUG_MSG("bool SimTK::CableObstacle::ViaPoint::isInstanceOf(const SimTK::CableObstacle &) (" __HERE__ ")");
  // types.method("CableObstacle!ViaPoint!isInstanceOf", static_cast<bool (*)(const SimTK::CableObstacle &) >(&SimTK::CableObstacle::ViaPoint::isInstance));
  // CLEAR_DEBUG_MSG();

  // DEBUG_MSG("const SimTK::CableObstacle::ViaPoint & SimTK::CableObstacle::ViaPoint::downcast(const SimTK::CableObstacle &) (" __HERE__ ")");
  // types.method("CableObstacle!ViaPoint!downcast", static_cast<const SimTK::CableObstacle::ViaPoint & (*)(const SimTK::CableObstacle &) >(&SimTK::CableObstacle::ViaPoint::downcast));
  // CLEAR_DEBUG_MSG();

  // DEBUG_MSG("SimTK::CableObstacle::ViaPoint & SimTK::CableObstacle::ViaPoint::updDowncast(SimTK::CableObstacle &) (" __HERE__ ")");
  // types.method("CableObstacle!ViaPoint!updDowncast", static_cast<SimTK::CableObstacle::ViaPoint & (*)(SimTK::CableObstacle &) >(&SimTK::CableObstacle::ViaPoint::updDowncast));
  // CLEAR_DEBUG_MSG();

  /* End of SimTK::CableObstacle::ViaPoint class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class SimTK::CableObstacle::Surface
   */


  DEBUG_MSG("void SimTK::CableObstacle::Surface::Surface(SimTK::CablePath &, const SimTK::MobilizedBody &, const SimTK::Transform &, const SimTK::ContactGeometry &) (" __HERE__ ")");
  // defined in simbody/internal/CablePath.h:329:1
  t9.constructor<SimTK::CablePath &, const SimTK::MobilizedBody &, const SimTK::Transform &, const SimTK::ContactGeometry &>();
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("SimTK::CableObstacle::Surface & SimTK::CableObstacle::Surface::setDecorativeGeometry(const SimTK::DecorativeGeometry &) (" __HERE__ ")");
  // defined in simbody/internal/CablePath.h:335:10
  t9.method("setDecorativeGeometry", static_cast<SimTK::CableObstacle::Surface & (SimTK::CableObstacle::Surface::*)(const SimTK::DecorativeGeometry &) >(&SimTK::CableObstacle::Surface::setDecorativeGeometry));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("SimTK::CableObstacle::Surface & SimTK::CableObstacle::Surface::setNearPoint(const SimTK::Vec3 &) (" __HERE__ ")");
  // defined in simbody/internal/CablePath.h:348:10
  t9.method("setNearPoint", static_cast<SimTK::CableObstacle::Surface & (SimTK::CableObstacle::Surface::*)(const SimTK::Vec3 &) >(&SimTK::CableObstacle::Surface::setNearPoint));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("SimTK::CableObstacle::Surface & SimTK::CableObstacle::Surface::setContactPointHints(const SimTK::Vec3 &, const SimTK::Vec3 &) (" __HERE__ ")");
  // defined in simbody/internal/CablePath.h:354:10
  t9.method("setContactPointHints", static_cast<SimTK::CableObstacle::Surface & (SimTK::CableObstacle::Surface::*)(const SimTK::Vec3 &, const SimTK::Vec3 &) >(&SimTK::CableObstacle::Surface::setContactPointHints));
  CLEAR_DEBUG_MSG();

  // DEBUG_MSG("bool SimTK::CableObstacle::Surface::isInstanceOf(const SimTK::CableObstacle &) (" __HERE__ ")");
  // types.method("CableObstacle!Surface!isInstanceOf", static_cast<bool (*)(const SimTK::CableObstacle &) >(&SimTK::CableObstacle::Surface::isInstance));
  // CLEAR_DEBUG_MSG();

  // DEBUG_MSG("const SimTK::CableObstacle::Surface & SimTK::CableObstacle::Surface::downcast(const SimTK::CableObstacle &) (" __HERE__ ")");
  // types.method("CableObstacle!Surface!downcast", static_cast<const SimTK::CableObstacle::Surface & (*)(const SimTK::CableObstacle &) >(&SimTK::CableObstacle::Surface::downcast));
  // CLEAR_DEBUG_MSG();

  // DEBUG_MSG("SimTK::CableObstacle::Surface & SimTK::CableObstacle::Surface::updDowncast(SimTK::CableObstacle &) (" __HERE__ ")");
  // types.method("CableObstacle!Surface!updDowncast", static_cast<SimTK::CableObstacle::Surface & (*)(SimTK::CableObstacle &) >(&SimTK::CableObstacle::Surface::updDowncast));
  // CLEAR_DEBUG_MSG();

  /* End of SimTK::CableObstacle::Surface class method wrappers
   **********************************************************************/

}

}
