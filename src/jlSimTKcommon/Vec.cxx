// this file was auto-generated by wrapit v0.1.0-61-g71d8603-dirty
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
    wrapped.template constructor<>();
    wrapped.template constructor<const ELT &>();
    wrapped.template constructor<const ELT*>();

    wrapped.method("cppgetindex", static_cast<ELT & (WrappedType::*)(int) >(&WrappedType::operator[]));
    wrapped.method("cppsetindex!", static_cast<void (WrappedType::*)(int, const ELT &) >(&WrappedType::set));

    // wrapped.method("conformingAdd", static_cast<WrappedType (WrappedType::*)(const WrappedType &) const>(&WrappedType::conformingAdd));
    // wrapped.method("scalarAdd", static_cast<WrappedType (WrappedType::*)(const ELT &) const>(&WrappedType::scalarAdd));
    // // wrapped.method("scalarAdd", static_cast<WrappedType (WrappedType::*)(const typename WrappedType::StdNumber &) const>(&WrappedType::scalarAdd));

    // if constexpr (std::is_same<ELT, double>::value) {
    //   wrapped.method("conformingAdd", static_cast<SimTK::Vec<M, typename SimTK::CNT<ELT>::template Result<ELT>::Add> (WrappedType::*)(const WrappedType &) const>(&WrappedType::conformingAdd));
    //   wrapped.method("conformingSubtract", static_cast<SimTK::Vec<M, typename SimTK::CNT<ELT>::template Result<ELT>::Sub> (WrappedType::*)(const WrappedType &) const>(&WrappedType::conformingSubtract));
    //   wrapped.method("elementwiseMultiply", static_cast<SimTK::Vec<M, typename SimTK::CNT<ELT>::template Result<ELT>::Mul> (WrappedType::*)(const WrappedType &) const>(&WrappedType::elementwiseMultiply));
    //   wrapped.method("elementwiseDivide", static_cast<SimTK::Vec<M, typename SimTK::CNT<ELT>::template Result<ELT>::Dvd> (WrappedType::*)(const WrappedType &) const>(&WrappedType::elementwiseDivide));
    // }

    // defined in SimTKcommon/internal/Vec.h:812:10
    wrapped.method("setToNaN", static_cast<void (WrappedType::*)() >(&WrappedType::setToNaN));

    // defined in SimTKcommon/internal/Vec.h:817:10
    wrapped.method("setToZero", static_cast<void (WrappedType::*)() >(&WrappedType::setToZero));

    wrapped.module().set_override_module(jl_base_module);
    // defined in SimTKcommon/internal/Vec.h:918:10
    wrapped.method("isnan", static_cast<bool (WrappedType::*)()  const>(&WrappedType::isNaN));

    // defined in SimTKcommon/internal/Vec.h:927:10
    wrapped.method("isinf", static_cast<bool (WrappedType::*)()  const>(&WrappedType::isInf));

    // defined in SimTKcommon/internal/Vec.h:942:10
    wrapped.method("isfinite", static_cast<bool (WrappedType::*)()  const>(&WrappedType::isFinite));
    wrapped.module().unset_override_module();

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
