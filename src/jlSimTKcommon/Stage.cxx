// this file was auto-generated by wrapit v0.1.0-61-g71d8603-dirty
#include "jlsimbody/common.h"

#include "jlSimTKcommon/Stage.h"

namespace jlsimbody {

void define_SimTKcommon_Stage(jlcxx::Module& types){

  DEBUG_MSG("enum SimTK::Stage::Level (" __HERE__ ")");
  // defined in SimTKcommon/internal/Stage.h:68:10
  types.add_bits<SimTK::Stage::Level>("StageLevel", jlcxx::julia_type("CppEnum"));
  types.set_const("Empty", SimTK::Stage::Empty);
  types.set_const("Topology", SimTK::Stage::Topology);
  types.set_const("Model", SimTK::Stage::Model);
  types.set_const("Instance", SimTK::Stage::Instance);
  types.set_const("Time", SimTK::Stage::Time);
  types.set_const("Position", SimTK::Stage::Position);
  types.set_const("Velocity", SimTK::Stage::Velocity);
  types.set_const("Dynamics", SimTK::Stage::Dynamics);
  types.set_const("Acceleration", SimTK::Stage::Acceleration);
  types.set_const("Report", SimTK::Stage::Report);
  types.set_const("Infinity", SimTK::Stage::Infinity);
  types.set_const("LowestValid", SimTK::Stage::LowestValid);
  types.set_const("HighestValid", SimTK::Stage::HighestValid);
  types.set_const("LowestRuntime", SimTK::Stage::LowestRuntime);
  types.set_const("HighestRuntime", SimTK::Stage::HighestRuntime);
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("Adding anonymous enum defined in SimTKcommon/internal/Stage.h:87:5 (" __HERE__ ")");
  // defined in SimTKcommon/internal/Stage.h:87:5
  types.set_const("NValid", static_cast<int>(SimTK::Stage::NValid));
  types.set_const("NRuntime", static_cast<int>(SimTK::Stage::NRuntime));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("type SimTK::Stage (" __HERE__ ")");
  // defined in SimTKcommon/internal/Stage.h:66:7
  auto t0 = types.add_type<SimTK::Stage>("Stage");
  t0.template constructor<>();
  CLEAR_DEBUG_MSG();

  // DEBUG_MSG("type SimTK::Exception::RealizeTopologyMustBeCalledFirst (" __HERE__ ")");
  // // defined in SimTKcommon/internal/Stage.h:189:7
  // auto t4 = types.add_type<SimTK::Exception::RealizeTopologyMustBeCalledFirst>("Exception!RealizeTopologyMustBeCalledFirst");
  // CLEAR_DEBUG_MSG();

  // DEBUG_MSG("type SimTK::Exception::StateAndSystemTopologyVersionsMustMatch (" __HERE__ ")");
  // // defined in SimTKcommon/internal/Stage.h:202:7
  // auto t5 = types.add_type<SimTK::Exception::StateAndSystemTopologyVersionsMustMatch>("Exception!StateAndSystemTopologyVersionsMustMatch");
  // CLEAR_DEBUG_MSG();

  // DEBUG_MSG("type SimTK::Exception::StageTooLow (" __HERE__ ")");
  // // defined in SimTKcommon/internal/Stage.h:226:7
  // auto t6 = types.add_type<SimTK::Exception::StageTooLow>("Exception!StageTooLow");
  // CLEAR_DEBUG_MSG();

  // DEBUG_MSG("type SimTK::Exception::StageIsWrong (" __HERE__ ")");
  // // defined in SimTKcommon/internal/Stage.h:237:7
  // auto t7 = types.add_type<SimTK::Exception::StageIsWrong>("Exception!StageIsWrong");
  // CLEAR_DEBUG_MSG();

  // DEBUG_MSG("type SimTK::Exception::StageTooHigh (" __HERE__ ")");
  // // defined in SimTKcommon/internal/Stage.h:248:7
  // auto t8 = types.add_type<SimTK::Exception::StageTooHigh>("Exception!StageTooHigh");
  // CLEAR_DEBUG_MSG();

  // DEBUG_MSG("type SimTK::Exception::StageOutOfRange (" __HERE__ ")");
  // // defined in SimTKcommon/internal/Stage.h:259:7
  // auto t9 = types.add_type<SimTK::Exception::StageOutOfRange>("Exception!StageOutOfRange");
  // CLEAR_DEBUG_MSG();

  // DEBUG_MSG("type SimTK::Exception::CacheEntryOutOfDate (" __HERE__ ")");
  // // defined in SimTKcommon/internal/Stage.h:270:7
  // auto t10 = types.add_type<SimTK::Exception::CacheEntryOutOfDate>("Exception!CacheEntryOutOfDate");
  // CLEAR_DEBUG_MSG();

  // DEBUG_MSG("type SimTK::Exception::RealizeCheckFailed (" __HERE__ ")");
  // // defined in SimTKcommon/internal/Stage.h:286:7
  // auto t11 = types.add_type<SimTK::Exception::RealizeCheckFailed>("Exception!RealizeCheckFailed");
  // CLEAR_DEBUG_MSG();

  /**********************************************************************/
  /* Wrappers for the methods of class SimTK::Stage
   */

  // Ambiguous/overwrites the following int constructor method
  // DEBUG_MSG("void SimTK::Stage::Stage(SimTK::Stage::Level) (" __HERE__ ")");
  // // defined in SimTKcommon/internal/Stage.h:95:5
  // t0.constructor<SimTK::Stage::Level>();

  DEBUG_MSG("void SimTK::Stage::Stage(int) (" __HERE__ ")");
  // defined in SimTKcommon/internal/Stage.h:100:14
  t0.constructor<int>();
  types.set_override_module(jl_base_module);
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("bool SimTK::Stage::operator==(SimTK::Stage::Level) (" __HERE__ ")");
  // signature to use in the veto list: bool SimTK::Stage::operator==(SimTK::Stage::Level)
  // defined in SimTKcommon/internal/Stage.h:107:10
  t0.method("==", static_cast<bool (SimTK::Stage::*)(SimTK::Stage::Level)  const>(&SimTK::Stage::operator==));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("bool SimTK::Stage::operator<(SimTK::Stage::Level) (" __HERE__ ")");
  // signature to use in the veto list: bool SimTK::Stage::operator<(SimTK::Stage::Level)
  // defined in SimTKcommon/internal/Stage.h:109:10
  t0.method("<", static_cast<bool (SimTK::Stage::*)(SimTK::Stage::Level)  const>(&SimTK::Stage::operator<));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("bool SimTK::Stage::operator==(SimTK::Stage) (" __HERE__ ")");
  // signature to use in the veto list: bool SimTK::Stage::operator==(SimTK::Stage)
  // defined in SimTKcommon/internal/Stage.h:113:10
  t0.method("==", static_cast<bool (SimTK::Stage::*)(SimTK::Stage)  const>(&SimTK::Stage::operator==));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("bool SimTK::Stage::operator<(SimTK::Stage) (" __HERE__ ")");
  // signature to use in the veto list: bool SimTK::Stage::operator<(SimTK::Stage)
  // defined in SimTKcommon/internal/Stage.h:115:10
  t0.method("<", static_cast<bool (SimTK::Stage::*)(SimTK::Stage)  const>(&SimTK::Stage::operator<));
  CLEAR_DEBUG_MSG();
  types.unset_override_module();

  DEBUG_MSG("const SimTK::Stage & SimTK::Stage::operator++() (" __HERE__ ")");
  // signature to use in the veto list: const SimTK::Stage & SimTK::Stage::operator++()
  // defined in SimTKcommon/internal/Stage.h:121:18
  t0.method("inc!", static_cast<const SimTK::Stage & (SimTK::Stage::*)() >(&SimTK::Stage::operator++));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("const SimTK::Stage & SimTK::Stage::operator--() (" __HERE__ ")");
  // signature to use in the veto list: const SimTK::Stage & SimTK::Stage::operator--()
  // defined in SimTKcommon/internal/Stage.h:123:18
  t0.method("dec!", static_cast<const SimTK::Stage & (SimTK::Stage::*)() >(&SimTK::Stage::operator--));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("SimTK::Stage SimTK::Stage::operator++(int) (" __HERE__ ")");
  // signature to use in the veto list: SimTK::Stage SimTK::Stage::operator++(int)
  // defined in SimTKcommon/internal/Stage.h:126:11
  t0.method("inc!", static_cast<SimTK::Stage (SimTK::Stage::*)(int) >(&SimTK::Stage::operator++));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("SimTK::Stage SimTK::Stage::operator--(int) (" __HERE__ ")");
  // signature to use in the veto list: SimTK::Stage SimTK::Stage::operator--(int)
  // defined in SimTKcommon/internal/Stage.h:128:11
  t0.method("dec!", static_cast<SimTK::Stage (SimTK::Stage::*)(int) >(&SimTK::Stage::operator--));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("SimTK::Stage SimTK::Stage::next() (" __HERE__ ")");
  // signature to use in the veto list: SimTK::Stage SimTK::Stage::next()
  // defined in SimTKcommon/internal/Stage.h:134:11
  t0.method("next", static_cast<SimTK::Stage (SimTK::Stage::*)()  const>(&SimTK::Stage::next));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("SimTK::Stage SimTK::Stage::prev() (" __HERE__ ")");
  // signature to use in the veto list: SimTK::Stage SimTK::Stage::prev()
  // defined in SimTKcommon/internal/Stage.h:139:11
  t0.method("prev", static_cast<SimTK::Stage (SimTK::Stage::*)()  const>(&SimTK::Stage::prev));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("SimTK::String SimTK::Stage::getName() (" __HERE__ ")");
  // signature to use in the veto list: SimTK::String SimTK::Stage::getName()
  // defined in SimTKcommon/internal/Stage.h:144:12
  t0.method("getName", static_cast<SimTK::String (SimTK::Stage::*)()  const>(&SimTK::Stage::getName));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("void SimTK::Stage::invalidate(SimTK::Stage) (" __HERE__ ")");
  // signature to use in the veto list: void SimTK::Stage::invalidate(SimTK::Stage)
  // defined in SimTKcommon/internal/Stage.h:163:10
  t0.method("invalidate", static_cast<void (SimTK::Stage::*)(SimTK::Stage) >(&SimTK::Stage::invalidate));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("bool SimTK::Stage::isInRuntimeRange() (" __HERE__ ")");
  // signature to use in the veto list: bool SimTK::Stage::isInRuntimeRange()
  // defined in SimTKcommon/internal/Stage.h:171:10
  t0.method("isInRuntimeRange", static_cast<bool (SimTK::Stage::*)()  const>(&SimTK::Stage::isInRuntimeRange));
  CLEAR_DEBUG_MSG();

  /* End of SimTK::Stage class method wrappers
   **********************************************************************/


  // /**********************************************************************/
  // /* Wrappers for the methods of class SimTK::Exception::RealizeTopologyMustBeCalledFirst
  //  */


  // DEBUG_MSG("void SimTK::Exception::RealizeTopologyMustBeCalledFirst::RealizeTopologyMustBeCalledFirst(const char *, int, const char *, const char *, const char *) (" __HERE__ ")");
  // // defined in SimTKcommon/internal/Stage.h:191:5
  // t4.constructor<const char *, int, const char *, const char *, const char *>();
  // CLEAR_DEBUG_MSG();

  // /* End of SimTK::Exception::RealizeTopologyMustBeCalledFirst class method wrappers
  //  **********************************************************************/


  // /**********************************************************************/
  // /* Wrappers for the methods of class SimTK::Exception::StateAndSystemTopologyVersionsMustMatch
  //  */


  // DEBUG_MSG("void SimTK::Exception::StateAndSystemTopologyVersionsMustMatch::StateAndSystemTopologyVersionsMustMatch(const char *, int, const char *, const char *, const char *, int, int) (" __HERE__ ")");
  // // defined in SimTKcommon/internal/Stage.h:204:5
  // t5.constructor<const char *, int, const char *, const char *, const char *, int, int>();
  // CLEAR_DEBUG_MSG();

  // /* End of SimTK::Exception::StateAndSystemTopologyVersionsMustMatch class method wrappers
  //  **********************************************************************/


  // /**********************************************************************/
  // /* Wrappers for the methods of class SimTK::Exception::StageTooLow
  //  */


  // DEBUG_MSG("void SimTK::Exception::StageTooLow::StageTooLow(const char *, int, SimTK::Stage, SimTK::Stage, const char *) (" __HERE__ ")");
  // // defined in SimTKcommon/internal/Stage.h:228:5
  // t6.constructor<const char *, int, SimTK::Stage, SimTK::Stage, const char *>();
  // CLEAR_DEBUG_MSG();

  // /* End of SimTK::Exception::StageTooLow class method wrappers
  //  **********************************************************************/


  // /**********************************************************************/
  // /* Wrappers for the methods of class SimTK::Exception::StageIsWrong
  //  */


  // DEBUG_MSG("void SimTK::Exception::StageIsWrong::StageIsWrong(const char *, int, SimTK::Stage, SimTK::Stage, const char *) (" __HERE__ ")");
  // // defined in SimTKcommon/internal/Stage.h:239:5
  // t7.constructor<const char *, int, SimTK::Stage, SimTK::Stage, const char *>();
  // CLEAR_DEBUG_MSG();

  // /* End of SimTK::Exception::StageIsWrong class method wrappers
  //  **********************************************************************/


  // /**********************************************************************/
  // /* Wrappers for the methods of class SimTK::Exception::StageTooHigh
  //  */


  // DEBUG_MSG("void SimTK::Exception::StageTooHigh::StageTooHigh(const char *, int, SimTK::Stage, SimTK::Stage, const char *) (" __HERE__ ")");
  // // defined in SimTKcommon/internal/Stage.h:250:5
  // t8.constructor<const char *, int, SimTK::Stage, SimTK::Stage, const char *>();
  // CLEAR_DEBUG_MSG();

  // /* End of SimTK::Exception::StageTooHigh class method wrappers
  //  **********************************************************************/


  // /**********************************************************************/
  // /* Wrappers for the methods of class SimTK::Exception::StageOutOfRange
  //  */


  // DEBUG_MSG("void SimTK::Exception::StageOutOfRange::StageOutOfRange(const char *, int, SimTK::Stage, SimTK::Stage, SimTK::Stage, const char *) (" __HERE__ ")");
  // // defined in SimTKcommon/internal/Stage.h:261:5
  // t9.constructor<const char *, int, SimTK::Stage, SimTK::Stage, SimTK::Stage, const char *>();
  // CLEAR_DEBUG_MSG();

  // /* End of SimTK::Exception::StageOutOfRange class method wrappers
  //  **********************************************************************/


  // /**********************************************************************/
  // /* Wrappers for the methods of class SimTK::Exception::CacheEntryOutOfDate
  //  */


  // DEBUG_MSG("void SimTK::Exception::CacheEntryOutOfDate::CacheEntryOutOfDate(const char *, int, SimTK::Stage, SimTK::Stage, SimTK::StageVersion, SimTK::StageVersion) (" __HERE__ ")");
  // // defined in SimTKcommon/internal/Stage.h:272:5
  // t10.constructor<const char *, int, SimTK::Stage, SimTK::Stage, SimTK::StageVersion, SimTK::StageVersion>();
  // CLEAR_DEBUG_MSG();

  // /* End of SimTK::Exception::CacheEntryOutOfDate class method wrappers
  //  **********************************************************************/


  // /**********************************************************************/
  // /* Wrappers for the methods of class SimTK::Exception::RealizeCheckFailed
  //  */


  // /* End of SimTK::Exception::RealizeCheckFailed class method wrappers
  //  **********************************************************************/

}

}
