// this file was auto-generated by wrapit v0.1.0-61-g71d8603-dirty
#include <type_traits>
#include "jlcxx/jlcxx.hpp"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

#include "jlSimTKcommon/Events.h"

#ifdef VERBOSE_IMPORT
#  define DEBUG_MSG(a) std::cerr << a << "\n"
#else
#  define DEBUG_MSG(a)
#endif
#define __HERE__  __FILE__ ":" QUOTE2(__LINE__)
#define QUOTE(arg) #arg
#define QUOTE2(arg) QUOTE(arg)

namespace jlsimbody {

void define_SimTKcommon_Events(jlcxx::Module& types, const ArrayWrapper& array_wrapper){

  DEBUG_MSG("Adding wrapper for type SimTK::EventHandler (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/EventHandler.h:51:32
  auto t0 = types.add_type<SimTK::EventHandler>("SimTK!EventHandler");

  DEBUG_MSG("Adding wrapper for type SimTK::ScheduledEventHandler (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/EventHandler.h:84:32
  auto t2 = types.add_type<SimTK::ScheduledEventHandler>("SimTK!ScheduledEventHandler", jlcxx::julia_base_type<SimTK::EventHandler>());

  DEBUG_MSG("Adding wrapper for type SimTK::TriggeredEventHandler (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/EventHandler.h:109:32
  auto t3 = types.add_type<SimTK::TriggeredEventHandler>("SimTK!TriggeredEventHandler", jlcxx::julia_base_type<SimTK::EventHandler>());

  DEBUG_MSG("Adding wrapper for type SimTK::PeriodicEventHandler (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/EventHandler.h:146:32
  auto t6 = types.add_type<SimTK::PeriodicEventHandler>("SimTK!PeriodicEventHandler", jlcxx::julia_base_type<SimTK::ScheduledEventHandler>());

  DEBUG_MSG("Adding wrapper for type SimTK::EventReporter (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/EventReporter.h:53:32
  auto t7 = types.add_type<SimTK::EventReporter>("SimTK!EventReporter");

  DEBUG_MSG("Adding wrapper for type SimTK::ScheduledEventReporter (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/EventReporter.h:72:32
  auto t8 = types.add_type<SimTK::ScheduledEventReporter>("SimTK!ScheduledEventReporter", jlcxx::julia_base_type<SimTK::EventReporter>());

  DEBUG_MSG("Adding wrapper for type SimTK::TriggeredEventReporter (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/EventReporter.h:96:32
  auto t9 = types.add_type<SimTK::TriggeredEventReporter>("SimTK!TriggeredEventReporter", jlcxx::julia_base_type<SimTK::EventReporter>());

  DEBUG_MSG("Adding wrapper for type SimTK::PeriodicEventReporter (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/EventReporter.h:138:32
  auto t10 = types.add_type<SimTK::PeriodicEventReporter>("SimTK!PeriodicEventReporter", jlcxx::julia_base_type<SimTK::ScheduledEventReporter>());

  /**********************************************************************/
  /* Wrappers for the methods of class SimTK::EventHandler
   */

  DEBUG_MSG("Adding wrapper for void SimTK::EventHandler::handleEvent(SimTK::State &, SimTK::Real, bool &) (" __HERE__ ")");
  // signature to use in the veto list: void SimTK::EventHandler::handleEvent(SimTK::State &, SimTK::Real, bool &)
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/EventHandler.h:73:18
  t0.method("handleEvent", static_cast<void (SimTK::EventHandler::*)(SimTK::State &, SimTK::Real, bool &)  const>(&SimTK::EventHandler::handleEvent));

  /* End of SimTK::EventHandler class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class SimTK::ScheduledEventHandler
   */

  DEBUG_MSG("Adding wrapper for SimTK::Real SimTK::ScheduledEventHandler::getNextEventTime(const SimTK::State &, bool) (" __HERE__ ")");
  // signature to use in the veto list: SimTK::Real SimTK::ScheduledEventHandler::getNextEventTime(const SimTK::State &, bool)
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/EventHandler.h:96:18
  t2.method("getNextEventTime", static_cast<SimTK::Real (SimTK::ScheduledEventHandler::*)(const SimTK::State &, bool)  const>(&SimTK::ScheduledEventHandler::getNextEventTime));

  /* End of SimTK::ScheduledEventHandler class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class SimTK::TriggeredEventHandler
   */


  DEBUG_MSG("Adding wrapper for SimTK::TriggeredEventHandler & SimTK::TriggeredEventHandler::operator=(const SimTK::TriggeredEventHandler &) (" __HERE__ ")");
  // signature to use in the veto list: SimTK::TriggeredEventHandler & SimTK::TriggeredEventHandler::operator=(const SimTK::TriggeredEventHandler &)
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/EventHandler.h:113:28
  t3.method("assign", static_cast<SimTK::TriggeredEventHandler & (SimTK::TriggeredEventHandler::*)(const SimTK::TriggeredEventHandler &) >(&SimTK::TriggeredEventHandler::operator=));


  DEBUG_MSG("Adding wrapper for SimTK::Real SimTK::TriggeredEventHandler::getValue(const SimTK::State &) (" __HERE__ ")");
  // signature to use in the veto list: SimTK::Real SimTK::TriggeredEventHandler::getValue(const SimTK::State &)
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/EventHandler.h:127:18
  t3.method("getValue", static_cast<SimTK::Real (SimTK::TriggeredEventHandler::*)(const SimTK::State &)  const>(&SimTK::TriggeredEventHandler::getValue));

  DEBUG_MSG("Adding wrapper for SimTK::EventTriggerInfo & SimTK::TriggeredEventHandler::getTriggerInfo() (" __HERE__ ")");
  // signature to use in the veto list: SimTK::EventTriggerInfo & SimTK::TriggeredEventHandler::getTriggerInfo()
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/EventHandler.h:133:23
  t3.method("getTriggerInfo", static_cast<SimTK::EventTriggerInfo & (SimTK::TriggeredEventHandler::*)() >(&SimTK::TriggeredEventHandler::getTriggerInfo));

  DEBUG_MSG("Adding wrapper for SimTK::Stage SimTK::TriggeredEventHandler::getRequiredStage() (" __HERE__ ")");
  // signature to use in the veto list: SimTK::Stage SimTK::TriggeredEventHandler::getRequiredStage()
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/EventHandler.h:138:11
  t3.method("getRequiredStage", static_cast<SimTK::Stage (SimTK::TriggeredEventHandler::*)()  const>(&SimTK::TriggeredEventHandler::getRequiredStage));

  /* End of SimTK::TriggeredEventHandler class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class SimTK::PeriodicEventHandler
   */

  DEBUG_MSG("Adding wrapper for SimTK::Real SimTK::PeriodicEventHandler::getNextEventTime(const SimTK::State &, bool) (" __HERE__ ")");
  // signature to use in the veto list: SimTK::Real SimTK::PeriodicEventHandler::getNextEventTime(const SimTK::State &, bool)
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/EventHandler.h:151:10
  t6.method("getNextEventTime", static_cast<SimTK::Real (SimTK::PeriodicEventHandler::*)(const SimTK::State &, bool)  const>(&SimTK::PeriodicEventHandler::getNextEventTime));


  DEBUG_MSG("Adding wrapper for SimTK::Real SimTK::PeriodicEventHandler::getEventInterval() (" __HERE__ ")");
  // signature to use in the veto list: SimTK::Real SimTK::PeriodicEventHandler::getEventInterval()
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/EventHandler.h:164:10
  t6.method("getEventInterval", static_cast<SimTK::Real (SimTK::PeriodicEventHandler::*)()  const>(&SimTK::PeriodicEventHandler::getEventInterval));

  DEBUG_MSG("Adding wrapper for void SimTK::PeriodicEventHandler::setEventInterval(SimTK::Real) (" __HERE__ ")");
  // signature to use in the veto list: void SimTK::PeriodicEventHandler::setEventInterval(SimTK::Real)
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/EventHandler.h:169:10
  t6.method("setEventInterval", static_cast<void (SimTK::PeriodicEventHandler::*)(SimTK::Real) >(&SimTK::PeriodicEventHandler::setEventInterval));

  /* End of SimTK::PeriodicEventHandler class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class SimTK::EventReporter
   */

  DEBUG_MSG("Adding wrapper for void SimTK::EventReporter::handleEvent(const SimTK::State &) (" __HERE__ ")");
  // signature to use in the veto list: void SimTK::EventReporter::handleEvent(const SimTK::State &)
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/EventReporter.h:62:18
  t7.method("handleEvent", static_cast<void (SimTK::EventReporter::*)(const SimTK::State &)  const>(&SimTK::EventReporter::handleEvent));

  /* End of SimTK::EventReporter class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class SimTK::ScheduledEventReporter
   */

  DEBUG_MSG("Adding wrapper for SimTK::Real SimTK::ScheduledEventReporter::getNextEventTime(const SimTK::State &, bool) (" __HERE__ ")");
  // signature to use in the veto list: SimTK::Real SimTK::ScheduledEventReporter::getNextEventTime(const SimTK::State &, bool)
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/EventReporter.h:84:18
  t8.method("getNextEventTime", static_cast<SimTK::Real (SimTK::ScheduledEventReporter::*)(const SimTK::State &, bool)  const>(&SimTK::ScheduledEventReporter::getNextEventTime));

  /* End of SimTK::ScheduledEventReporter class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class SimTK::TriggeredEventReporter
   */


  DEBUG_MSG("Adding wrapper for SimTK::TriggeredEventReporter & SimTK::TriggeredEventReporter::operator=(const SimTK::TriggeredEventReporter &) (" __HERE__ ")");
  // signature to use in the veto list: SimTK::TriggeredEventReporter & SimTK::TriggeredEventReporter::operator=(const SimTK::TriggeredEventReporter &)
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/EventReporter.h:100:29
  t9.method("assign", static_cast<SimTK::TriggeredEventReporter & (SimTK::TriggeredEventReporter::*)(const SimTK::TriggeredEventReporter &) >(&SimTK::TriggeredEventReporter::operator=));


  DEBUG_MSG("Adding wrapper for SimTK::Real SimTK::TriggeredEventReporter::getValue(const SimTK::State &) (" __HERE__ ")");
  // signature to use in the veto list: SimTK::Real SimTK::TriggeredEventReporter::getValue(const SimTK::State &)
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/EventReporter.h:115:18
  t9.method("getValue", static_cast<SimTK::Real (SimTK::TriggeredEventReporter::*)(const SimTK::State &)  const>(&SimTK::TriggeredEventReporter::getValue));

  DEBUG_MSG("Adding wrapper for SimTK::EventTriggerInfo & SimTK::TriggeredEventReporter::getTriggerInfo() (" __HERE__ ")");
  // signature to use in the veto list: SimTK::EventTriggerInfo & SimTK::TriggeredEventReporter::getTriggerInfo()
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/EventReporter.h:121:23
  t9.method("getTriggerInfo", static_cast<SimTK::EventTriggerInfo & (SimTK::TriggeredEventReporter::*)() >(&SimTK::TriggeredEventReporter::getTriggerInfo));

  DEBUG_MSG("Adding wrapper for SimTK::Stage SimTK::TriggeredEventReporter::getRequiredStage() (" __HERE__ ")");
  // signature to use in the veto list: SimTK::Stage SimTK::TriggeredEventReporter::getRequiredStage()
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/EventReporter.h:127:11
  t9.method("getRequiredStage", static_cast<SimTK::Stage (SimTK::TriggeredEventReporter::*)()  const>(&SimTK::TriggeredEventReporter::getRequiredStage));

  /* End of SimTK::TriggeredEventReporter class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class SimTK::PeriodicEventReporter
   */

  DEBUG_MSG("Adding wrapper for SimTK::Real SimTK::PeriodicEventReporter::getNextEventTime(const SimTK::State &, bool) (" __HERE__ ")");
  // signature to use in the veto list: SimTK::Real SimTK::PeriodicEventReporter::getNextEventTime(const SimTK::State &, bool)
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/EventReporter.h:142:10
  t10.method("getNextEventTime", static_cast<SimTK::Real (SimTK::PeriodicEventReporter::*)(const SimTK::State &, bool)  const>(&SimTK::PeriodicEventReporter::getNextEventTime));


  DEBUG_MSG("Adding wrapper for SimTK::Real SimTK::PeriodicEventReporter::getEventInterval() (" __HERE__ ")");
  // signature to use in the veto list: SimTK::Real SimTK::PeriodicEventReporter::getEventInterval()
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/EventReporter.h:155:10
  t10.method("getEventInterval", static_cast<SimTK::Real (SimTK::PeriodicEventReporter::*)()  const>(&SimTK::PeriodicEventReporter::getEventInterval));

  DEBUG_MSG("Adding wrapper for void SimTK::PeriodicEventReporter::setEventInterval(SimTK::Real) (" __HERE__ ")");
  // signature to use in the veto list: void SimTK::PeriodicEventReporter::setEventInterval(SimTK::Real)
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/EventReporter.h:161:10
  t10.method("setEventInterval", static_cast<void (SimTK::PeriodicEventReporter::*)(SimTK::Real) >(&SimTK::PeriodicEventReporter::setEventInterval));

  /* End of SimTK::PeriodicEventReporter class method wrappers
   **********************************************************************/

  DEBUG_MSG("End of wrapper definitions");

}
}
