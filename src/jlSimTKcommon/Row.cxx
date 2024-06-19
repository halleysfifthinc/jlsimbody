// this file was auto-generated by wrapit v0.1.0-61-g71d8603-dirty
#include "jlsimbody/common.h"

#include "jlSimTKcommon/Row.h"

namespace jlsimbody {

void define_SimTKcommon_Row(jlcxx::Module& types){

  // defined in SimTKcommon/internal/Row.h:132:47
  auto t0 = types.add_type<jlcxx::Parametric<jlcxx::TypeVar<1>, jlcxx::TypeVar<2>, jlcxx::TypeVar<3>>>("SimTK!Row");

  /**********************************************************************/
  /* Wrappers for the methods of class SimTK::Row
   */
  auto t0_decl_methods = []<int N, typename ELT, int STRIDE> (jlcxx::TypeWrapper<SimTK::Row<N, ELT, STRIDE>> wrapped){
    typedef SimTK::Row<N, ELT, STRIDE> WrappedType;
    wrapped.template constructor<>();


    DEBUG_MSG("Adding wrapper for void SimTK::Row::Row<N, ELT, STRIDE>(int) (" __HERE__ ")");
    // defined in SimTKcommon/internal/Row.h:352:14
    wrapped.template constructor<int>();

    DEBUG_MSG("Adding wrapper for void SimTK::Row::setToNaN() (" __HERE__ ")");
    // signature to use in the veto list: void SimTK::Row::setToNaN()
    // defined in SimTKcommon/internal/Row.h:616:10
    wrapped.method("setToNaN", static_cast<void (WrappedType::*)() >(&WrappedType::setToNaN));

    DEBUG_MSG("Adding wrapper for void SimTK::Row::setToZero() (" __HERE__ ")");
    // signature to use in the veto list: void SimTK::Row::setToZero()
    // defined in SimTKcommon/internal/Row.h:621:10
    wrapped.method("setToZero", static_cast<void (WrappedType::*)() >(&WrappedType::setToZero));

    DEBUG_MSG("Adding wrapper for bool SimTK::Row::isNaN() (" __HERE__ ")");
    // signature to use in the veto list: bool SimTK::Row::isNaN()
    // defined in SimTKcommon/internal/Row.h:718:10
    wrapped.method("isNaN", static_cast<bool (WrappedType::*)()  const>(&WrappedType::isNaN));

    DEBUG_MSG("Adding wrapper for bool SimTK::Row::isInf() (" __HERE__ ")");
    // signature to use in the veto list: bool SimTK::Row::isInf()
    // defined in SimTKcommon/internal/Row.h:727:10
    wrapped.method("isInf", static_cast<bool (WrappedType::*)()  const>(&WrappedType::isInf));

    DEBUG_MSG("Adding wrapper for bool SimTK::Row::isFinite() (" __HERE__ ")");
    // signature to use in the veto list: bool SimTK::Row::isFinite()
    // defined in SimTKcommon/internal/Row.h:742:10
    wrapped.method("isFinite", static_cast<bool (WrappedType::*)()  const>(&WrappedType::isFinite));
  };
  t0.apply<SimTK::Row<3, double, 1>, SimTK::Row<1, double, 1>>(t0_decl_methods);

  /* End of SimTK::Row class method wrappers
   **********************************************************************/
  DEBUG_MSG("End of wrapper definitions");

}
}
