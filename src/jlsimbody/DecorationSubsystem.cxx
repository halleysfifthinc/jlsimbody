// this file was auto-generated by wrapit v0.1.0-61-g71d8603-dirty
#include <type_traits>
#include "jlcxx/jlcxx.hpp"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

#include "jlsimbody/DecorationSubsystem.h"

#ifdef VERBOSE_IMPORT
#  define DEBUG_MSG(a) std::cerr << a << "\n"
#else
#  define DEBUG_MSG(a)
#endif
#define __HERE__  __FILE__ ":" QUOTE2(__LINE__)
#define QUOTE(arg) #arg
#define QUOTE2(arg) QUOTE(arg)

namespace jlsimbody {

void define_simbody_DecorationSubsystem(jlcxx::Module& types){

  auto t1 = types.add_type<SimTK::DecorationSubsystem>("SimTK!DecorationSubsystem", jlcxx::julia_base_type<SimTK::Subsystem>());
  t1.template constructor<>();

  /**********************************************************************/
  /* Wrappers for the methods of class SimTK::DecorationSubsystem
   */

  t1.method("addBodyFixedDecoration", static_cast<void (SimTK::DecorationSubsystem::*)(SimTK::MobilizedBodyIndex, const SimTK::Transform &, const SimTK::DecorativeGeometry &) >( &SimTK::DecorationSubsystem::addBodyFixedDecoration));
  t1.method("addRubberBandLine", static_cast<void (SimTK::DecorationSubsystem::*)(SimTK::MobilizedBodyIndex, const SimTK::Vec3 &, SimTK::MobilizedBodyIndex, const SimTK::Vec3 &, const SimTK::DecorativeLine &) >( &SimTK::DecorationSubsystem::addRubberBandLine));
  t1.method("addDecorationGenerator", static_cast<void (SimTK::DecorationSubsystem::*)(SimTK::Stage, SimTK::DecorationGenerator *) >( &SimTK::DecorationSubsystem::addDecorationGenerator));

  /* End of SimTK::DecorationSubsystem class method wrappers
   **********************************************************************/

  DEBUG_MSG("End of wrapper definitions");

}
}
