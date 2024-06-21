// this file was auto-generated by wrapit v0.1.0-61-g71d8603-dirty
#include "jlsimbody/common.h"

#include "jlSimTKcommon/DecorationGenerator.h"

namespace jlsimbody {

void define_SimTKcommon_DecorationGenerator(jlcxx::Module& types){

  DEBUG_MSG("Adding wrapper for type SimTK::DecorationGenerator (" __HERE__ ")");
  // defined in SimTKcommon/internal/DecorationGenerator.h:45:7
  auto t0 = types.add_type<SimTK::DecorationGenerator>("SimTK!DecorationGenerator");

  DEBUG_MSG("Adding wrapper for type SimTK::GeodesicDecorator (" __HERE__ ")");
  // defined in simmath/internal/Geodesic.h:274:7
  auto t1 = types.add_type<SimTK::GeodesicDecorator>("SimTK!GeodesicDecorator", t0.dt());

  DEBUG_MSG("Adding wrapper for type SimTK::PathDecorator (" __HERE__ ")");
  // defined in simmath/internal/ContactGeometry.h:1501:7
  auto t2 = types.add_type<SimTK::PathDecorator>("SimTK!PathDecorator", t0.dt());

  /**********************************************************************/
  /* Wrappers for the methods of class SimTK::DecorationGenerator
   */

  DEBUG_MSG("Adding wrapper for void SimTK::DecorationGenerator::generateDecorations(const SimTK::State &, SimTK::Array_<SimTK::DecorativeGeometry> &) (" __HERE__ ")");
  // signature to use in the veto list: void SimTK::DecorationGenerator::generateDecorations(const SimTK::State &, SimTK::Array_<SimTK::DecorativeGeometry> &)
  // defined in SimTKcommon/internal/DecorationGenerator.h:52:18
  t0.method("generateDecorations", static_cast<void (SimTK::DecorationGenerator::*)(const SimTK::State &, SimTK::Array_<SimTK::DecorativeGeometry> &) >(&SimTK::DecorationGenerator::generateDecorations));

  /* End of SimTK::DecorationGenerator class method wrappers
   **********************************************************************/

  /**********************************************************************/
  /* Wrappers for the methods of class SimTK::GeodesicDecorator
   */

  DEBUG_MSG("Adding wrapper for void SimTK::GeodesicDecorator::GeodesicDecorator(const SimTK::Geodesic &, const SimTK::Vec3 &) (" __HERE__ ")");
  // defined in simmath/internal/Geodesic.h:276:5
  t1.constructor<const SimTK::Geodesic &, const SimTK::Vec3 &>();

  DEBUG_MSG("Adding wrapper for void SimTK::GeodesicDecorator::generateDecorations(const SimTK::State &, SimTK::Array_<SimTK::DecorativeGeometry> &) (" __HERE__ ")");
  // signature to use in the veto list: void SimTK::GeodesicDecorator::generateDecorations(const SimTK::State &, SimTK::Array_<SimTK::DecorativeGeometry> &)
  // defined in simmath/internal/Geodesic.h:279:18
  t1.method("generateDecorations", static_cast<void (SimTK::GeodesicDecorator::*)(const SimTK::State &, SimTK::Array_<SimTK::DecorativeGeometry> &) >(&SimTK::GeodesicDecorator::generateDecorations));

  /* End of SimTK::GeodesicDecorator class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class SimTK::PathDecorator
   */


  DEBUG_MSG("Adding wrapper for void SimTK::PathDecorator::PathDecorator(const SimTK::Vector &, const SimTK::Vec3 &, const SimTK::Vec3 &, const SimTK::Vec3 &) (" __HERE__ ")");
  // defined in simmath/internal/ContactGeometry.h:1503:5
  t2.constructor<const SimTK::Vector &, const SimTK::Vec3 &, const SimTK::Vec3 &, const SimTK::Vec3 &>();

  DEBUG_MSG("Adding wrapper for void SimTK::PathDecorator::generateDecorations(const SimTK::State &, SimTK::Array_<SimTK::DecorativeGeometry> &) (" __HERE__ ")");
  // signature to use in the veto list: void SimTK::PathDecorator::generateDecorations(const SimTK::State &, SimTK::Array_<SimTK::DecorativeGeometry> &)
  // defined in simmath/internal/ContactGeometry.h:1506:18
  t2.method("generateDecorations", static_cast<void (SimTK::PathDecorator::*)(const SimTK::State &, SimTK::Array_<SimTK::DecorativeGeometry> &) >(&SimTK::PathDecorator::generateDecorations));

  /* End of SimTK::PathDecorator class method wrappers
   **********************************************************************/

  DEBUG_MSG("End of wrapper definitions");

}
}