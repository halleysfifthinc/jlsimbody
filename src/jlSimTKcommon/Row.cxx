#ifdef VERBOSE_IMPORTS
#include <typeinfo>
#endif

#include "jlsimbody/common.h"

#include "jlSimTKcommon/Row.h"

namespace jlsimbody {

void define_SimTKcommon_Row(jlcxx::Module& types){

  // defined in SimTKcommon/internal/Row.h:132:47
  auto t0 = types.add_type<jlcxx::Parametric<jlcxx::TypeVar<1>, jlcxx::TypeVar<2>, jlcxx::TypeVar<3>>,
    jlcxx::ParameterList<jlcxx::TypeVar<2>>>("SimTKRow", jlcxx::julia_type("AbstractMatrix"));

  /**********************************************************************/
  /* Wrappers for the methods of class SimTK::Row
   */
  auto t0_decl_methods = []<int N, typename ELT, int STRIDE> (jlcxx::TypeWrapper<SimTK::Row<N, ELT, STRIDE>> wrapped){
    typedef SimTK::Row<N, ELT, STRIDE> WrappedType;

    #ifdef VERBOSE_IMPORTS
    std::string debug_msg = std::string("constructors for ") + std::string(typeid(SimTK::Row<N, ELT, STRIDE>).name()) + std::string(" (" __HERE__ ")");
    DEBUG_MSG(debug_msg.c_str());
    #endif

    wrapped.template constructor<>();
    wrapped.template constructor<const ELT &>();
    wrapped.template constructor<const ELT*>();

    if constexpr (N == 3)
      wrapped.template constructor<const ELT &, const ELT &, const ELT &>();
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("ELT & SimTK::Row::operator(int) (" __HERE__ ")");
    wrapped.method("cppgetindex", static_cast<ELT & (WrappedType::*)(int) >(&WrappedType::operator[]));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("ELT & SimTK::Row::operator(int) (" __HERE__ ")");
    wrapped.method("cppsetindex!", [] (WrappedType& row, int i, const ELT & val) -> void {
      row[i] = val;
    });
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("void SimTK::Row::setToNaN() (" __HERE__ ")");
    // defined in SimTKcommon/internal/Row.h:616:10
    wrapped.method("setToNaN", static_cast<void (WrappedType::*)() >(&WrappedType::setToNaN));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("void SimTK::Row::setToZero() (" __HERE__ ")");
    // defined in SimTKcommon/internal/Row.h:621:10
    wrapped.method("setToZero", static_cast<void (WrappedType::*)() >(&WrappedType::setToZero));
    CLEAR_DEBUG_MSG();



  };
  t0.apply<
    SimTK::Row<3, double, 1>,
    SimTK::Row<1, double, 1>
    >(t0_decl_methods);

  /* End of SimTK::Row class method wrappers
   **********************************************************************/

}
}
