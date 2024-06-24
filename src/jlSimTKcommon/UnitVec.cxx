// this file was auto-generated by wrapit v0.1.0-61-g71d8603-dirty
#include "jlsimbody/common.h"

#include "jlSimTKcommon/UnitVec.h"

namespace jlsimbody {

void define_SimTKcommon_UnitVec(jlcxx::Module& types){

  // defined in SimTKcommon/internal/UnitVec.h:40:33
  auto t1 = types.add_type<jlcxx::Parametric<jlcxx::TypeVar<1>, jlcxx::TypeVar<2>>>("SimTK!UnitVec");

  /**********************************************************************/
  /* Wrappers for the methods of class SimTK::UnitVec
   */
  auto t1_decl_methods = []<typename P, int S> (jlcxx::TypeWrapper<SimTK::UnitVec<P, S>> wrapped){
    typedef SimTK::UnitVec<P,S> WrappedType;
    
    wrapped.template constructor<>();
    wrapped.template constructor<const WrappedType &>();
    wrapped.template constructor<const typename WrappedType::BaseVec &>();
    wrapped.template constructor<const typename WrappedType::BaseVec &, bool>();
    wrapped.template constructor<const P &, const P &, const P &>();
    wrapped.template constructor<const SimTK::CoordinateAxis &>();
    wrapped.template constructor<const SimTK::CoordinateDirection &>();
    wrapped.template constructor<int>();

    wrapped.method("assign", static_cast<WrappedType & (WrappedType::*)(const WrappedType &) >(&WrappedType::operator=));
    wrapped.method("asVec3", static_cast<const typename WrappedType::BaseVec & (WrappedType::*)() const>(&WrappedType::asVec3));
    wrapped.method("cppgetindex", static_cast<const P & (WrappedType::*)(int) const>(&WrappedType::operator[]));
    wrapped.method("perp", static_cast<SimTK::UnitVec<P,1> (WrappedType::*)() const>(&WrappedType::perp));

    wrapped.module().set_override_module(jl_base_module);

    wrapped.method("-", static_cast<SimTK::UnitVec<P,1> (WrappedType::*)() const>(&WrappedType::operator-));
    wrapped.method("abs", static_cast<SimTK::UnitVec<P,1> (WrappedType::*)() const>(&WrappedType::abs));

    wrapped.module().unset_override_module();
  };
  t1.apply<SimTK::UnitVec<double, 1>>(t1_decl_methods);

  /* End of SimTK::UnitVec class method wrappers
   **********************************************************************/
  
  types.set_override_module(jl_base_module);
  
  types.method("==", static_cast<bool (*)(const SimTK::UnitVec<double,1> &, const SimTK::UnitVec<double,1> &)>(&SimTK::operator==));

  types.unset_override_module();

}

}
