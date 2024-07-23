// this file was auto-generated by wrapit v0.1.0-61-g71d8603-dirty
#include "jlsimbody/common.h"

#include "jlsimbody/DecorationSubsystem.h"

namespace jlsimbody {

void define_simbody_DecorationSubsystem(jlcxx::Module& types){

  auto t1 = types.add_type<SimTK::DecorationSubsystem>("DecorationSubsystem", jlcxx::julia_base_type<SimTK::Subsystem>());
  t1.template constructor<>();

  /**********************************************************************/
  /* Wrappers for the methods of class SimTK::DecorationSubsystem
   */

  #ifdef JLSIMBODY_USE_SIMTK_UNIQUEINDEX_TYPES
  DEBUG_MSG("void SimTK::DecorationSubsystem::addBodyFixedDecoration(SimTK::MobilizedBodyIndex, const SimTK::Transform &, const SimTK::DecorativeGeometry &) (" __HERE__ ")");
  // defined in simbody/internal/DecorationSubsystem.h:59:10
  t1.method("addBodyFixedDecoration", static_cast<void (SimTK::DecorationSubsystem::*)(SimTK::MobilizedBodyIndex, const SimTK::Transform &, const SimTK::DecorativeGeometry &) >( &SimTK::DecorationSubsystem::addBodyFixedDecoration));
  CLEAR_DEBUG_MSG();
  #else
  DEBUG_MSG("void SimTK::DecorationSubsystem::addBodyFixedDecoration(int, const SimTK::Transform &, const SimTK::DecorativeGeometry &) (" __HERE__ ")");
  // defined in simbody/internal/DecorationSubsystem.h:59:10
  t1.method("addBodyFixedDecoration", reinterpret_cast<void (SimTK::DecorationSubsystem::*)(int, const SimTK::Transform &, const SimTK::DecorativeGeometry &) >( &SimTK::DecorationSubsystem::addBodyFixedDecoration));
  CLEAR_DEBUG_MSG();
  #endif

  #ifdef JLSIMBODY_USE_SIMTK_UNIQUEINDEX_TYPES
  t1.method("addRubberBandLine", static_cast<void (SimTK::DecorationSubsystem::*)(SimTK::MobilizedBodyIndex, const SimTK::Vec3 &, SimTK::MobilizedBodyIndex, const SimTK::Vec3 &, const SimTK::DecorativeLine &) >( &SimTK::DecorationSubsystem::addRubberBandLine));
  #else
  t1.method("addRubberBandLine", reinterpret_cast<void (SimTK::DecorationSubsystem::*)(int, const SimTK::Vec3 &, int, const SimTK::Vec3 &, const SimTK::DecorativeLine &) >( &SimTK::DecorationSubsystem::addRubberBandLine));
  #endif

  t1.method("addDecorationGenerator", static_cast<void (SimTK::DecorationSubsystem::*)(SimTK::Stage, SimTK::DecorationGenerator *) >( &SimTK::DecorationSubsystem::addDecorationGenerator));

  DEBUG_MSG("bool SimTK::DecorationSubsystem::isInstanceOf(const SimTK::Subsystem &) (" __HERE__ ")");
  types.method("DecorationSubsystem!isInstanceOf", static_cast<bool (*)(const SimTK::Subsystem &) >(&SimTK::DecorationSubsystem::isInstanceOf));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("const SimTK::DecorationSubsystem & SimTK::DecorationSubsystem::downcast(const SimTK::Subsystem &) (" __HERE__ ")");
  types.method("DecorationSubsystem!downcast", static_cast<const SimTK::DecorationSubsystem & (*)(const SimTK::Subsystem &) >(&SimTK::DecorationSubsystem::downcast));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("SimTK::DecorationSubsystem & SimTK::DecorationSubsystem::updDowncast(SimTK::Subsystem &) (" __HERE__ ")");
  types.method("DecorationSubsystem!updDowncast", static_cast<SimTK::DecorationSubsystem & (*)(SimTK::Subsystem &) >(&SimTK::DecorationSubsystem::updDowncast));
  CLEAR_DEBUG_MSG();

  /* End of SimTK::DecorationSubsystem class method wrappers
   **********************************************************************/

}

}
