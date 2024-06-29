#ifdef VERBOSE_IMPORTS
#include <typeinfo>
#endif

#include "jlsimbody/common.h"

#include "jlSimTKcommon/Array.h"
#include "jlSimTKcommon/Vec.h"

namespace jlsimbody {

void define_SimTKcommon_Vec(jlcxx::Module& types, const ArrayWrapper& array_wrapper){

  // defined in SimTKcommon/internal/Vec.h:184:7
  auto t0 = types.add_type<jlcxx::Parametric<jlcxx::TypeVar<1>, jlcxx::TypeVar<2>, jlcxx::TypeVar<3>>,
    jlcxx::ParameterList<jlcxx::TypeVar<2>>>("SimTKVec", jlcxx::julia_type("AbstractVector"));

  /**********************************************************************/
  /* Wrappers for the methods of class SimTK::Vec
   */
  auto t0_decl_methods = []<int M, typename ELT, int STRIDE> (jlcxx::TypeWrapper<SimTK::Vec<M, ELT, STRIDE>> wrapped){
    typedef SimTK::Vec<M, ELT, STRIDE> WrappedType;

    #ifdef VERBOSE_IMPORTS
    std::string debug_msg = std::string("constructors for ") + std::string(typeid(SimTK::Vec<M, ELT, STRIDE>).name()) + std::string(" (" __HERE__ ")");
    DEBUG_MSG(debug_msg.c_str());
    #endif

    wrapped.template constructor<>();
    wrapped.template constructor<const ELT &>();
    wrapped.template constructor<const ELT*>();

    if constexpr (M == 2)
      wrapped.template constructor<const ELT &, const ELT &>();

    if constexpr (M == 3)
      wrapped.template constructor<const ELT &, const ELT &, const ELT &>();

    if constexpr (M == 4)
      wrapped.template constructor<const ELT &, const ELT &, const ELT &, const ELT &>();

    if constexpr (M == 5)
      wrapped.template constructor<const ELT &, const ELT &, const ELT &, const ELT &, const ELT &>();

    if constexpr (M == 6)
      wrapped.template constructor<const ELT &, const ELT &, const ELT &, const ELT &, const ELT &, const ELT &>();

    if constexpr (M == 7)
      wrapped.template constructor<const ELT &, const ELT &, const ELT &, const ELT &, const ELT &, const ELT &, const ELT &>();

    if constexpr (M == 8)
      wrapped.template constructor<const ELT &, const ELT &, const ELT &, const ELT &, const ELT &, const ELT &, const ELT &, const ELT &>();
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("ELT & SimTK::Vec::operator(int) (" __HERE__ ")");
    wrapped.method("cppgetindex", static_cast<ELT & (WrappedType::*)(int) >(&WrappedType::operator()));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("void SimTK::Vec::set(int, const ELT &) (" __HERE__ ")");
    wrapped.method("cppsetindex!", static_cast<void (WrappedType::*)(int, const ELT &) >(&WrappedType::set));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("void SimTK::Vec::setToNaN() (" __HERE__ ")");
    // defined in SimTKcommon/internal/Vec.h:812:10
    wrapped.method("setToNaN", static_cast<void (WrappedType::*)() >(&WrappedType::setToNaN));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("void SimTK::Vec::setToZero() (" __HERE__ ")");
    // defined in SimTKcommon/internal/Vec.h:817:10
    wrapped.method("setToZero", static_cast<void (WrappedType::*)() >(&WrappedType::setToZero));
    CLEAR_DEBUG_MSG();

    if constexpr (M > 1) {
      if (jlcxx::has_julia_type<SimTK::Vec<M-1,ELT,STRIDE>>())
        wrapped.method("deleteat", static_cast<SimTK::Vec<M-1,ELT,STRIDE> (WrappedType::*)(int) const>(&WrappedType::drop1));

      if (jlcxx::has_julia_type<SimTK::Vec<M+1,ELT,STRIDE>>()) {
        wrapped.method("push", static_cast<SimTK::Vec<M+1,ELT,STRIDE> (WrappedType::*)(const ELT &) const>(&WrappedType::append1));
        wrapped.method("insert", static_cast<SimTK::Vec<M+1,ELT,STRIDE> (WrappedType::*)(int, const ELT &) const>(&WrappedType::insert1));
      }
    }

  };
  t0.apply<
    SimTK::Vec<1, double, 1>,
    SimTK::Vec<2, double, 1>,
    SimTK::Vec<3, double, 1>,
    SimTK::Vec<4, double, 1>,
    SimTK::Vec<5, double, 1>,
    SimTK::Vec<6, double, 1>,
    SimTK::Vec<7, double, 1>,
    SimTK::Vec<8, double, 1>,
    SimTK::Vec<9, double, 1>,
    SimTK::Vec<10, double, 1>,
    SimTK::Vec<11, double, 1>,
    SimTK::Vec<12, double, 1>,
    SimTK::Vec<16, double, 1>,
    SimTK::Vec<2, SimTK::Vec<3, double, 1>, 1>,
    SimTK::Vec<4, SimTK::Vec<3, double, 1>, 1>,
    SimTK::Vec<5, SimTK::Vec<3, double, 1>, 1>,
    SimTK::Vec<4, SimTK::Row<3, double, 1>, 1>,
    SimTK::Vec<5, SimTK::Row<3, double, 1>, 1>,
    SimTK::Vec<2, std::complex<double>, 1>,
    SimTK::Vec<3, std::complex<double>, 1>,
    SimTK::Vec<4, std::complex<double>, 1>,
    SimTK::Vec<6, std::complex<double>, 1>,
    SimTK::Vec<10, std::complex<double>, 1>
    >(t0_decl_methods);

  /* End of SimTK::Vec class method wrappers
   **********************************************************************/

  using array_types = jlcxx::ParameterList<SimTK::Vec<2,double>, SimTK::Vec<3,double>>;
  jlcxx::for_each_parameter_type<array_types>(array_wrapper);
  array_wrapper.template apply<SimTK::Vec<3,double>, int>();

}

}
