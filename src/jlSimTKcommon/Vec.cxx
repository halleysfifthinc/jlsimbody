#ifdef VERBOSE_IMPORTS
#include <typeinfo>
#endif

#include "jlsimbody/common.h"

#include "jlSimTKcommon/Array.h"
#include "jlSimTKcommon/Vec.h"

namespace jlsimbody {

void define_SimTKcommon_Vec(jlcxx::Module& types, jlcxx::TypeWrapper<jlcxx::Parametric<jlcxx::TypeVar<1>, jlcxx::TypeVar<2>, jlcxx::TypeVar<3>>>& vec, const ArrayWrapper& array_wrapper){

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
    wrapped.template constructor<const WrappedType &>();
    wrapped.template constructor<const ELT &>();

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

    if constexpr (std::is_same<ELT, double>::value || std::is_same<ELT, std::complex<double>>::value) {
      wrapped.template constructor<const ELT*>();

      wrapped.module().set_override_module(jl_base_module);
      wrapped.method("unsafe_copyto!",
        [] (WrappedType& dest, const int doffs, const jlcxx::ArrayRef<ELT> src, const int soffs, const int N) -> void {
          auto dv = SimTK::VectorIterator<ELT,WrappedType>(dest,doffs-1);
          typename jlcxx::ArrayRef<ELT>::const_iterator sv = src.begin()+soffs-1;
          for (int i = 0; i < N; ++i, ++sv, ++dv) {
            *dv = *sv;
          }
        }
      );
      wrapped.method("unsafe_copyto!",
        [] (jlcxx::ArrayRef<ELT> dest, const int doffs, WrappedType& src, const int soffs, const int N) -> void {
          typename jlcxx::ArrayRef<ELT>::iterator dv = dest.begin()+doffs-1;
          auto sv = SimTK::VectorIterator<ELT,WrappedType>(src,soffs-1);
          for (int i = 0; i < N; ++i, ++sv, ++dv) {
            *dv = *sv;
          }
        }
      );
      wrapped.module().unset_override_module();
    } else {
      wrapped.constructor([] (const jlcxx::ArrayRef<jl_value_t*> a) {
        WrappedType* w = new WrappedType(a.size());
        auto wv = SimTK::VectorIterator<ELT,WrappedType>(*w,0);
        typename jlcxx::ArrayRef<jl_value_t*>::const_iterator av = a.begin();
        typename jlcxx::ArrayRef<jl_value_t*>::const_iterator const end = a.end();
        for (; av != end; ++av, ++wv) {
            *wv = jlcxx::unbox<ELT>(*av);
        }
        return w;
      });
      wrapped.method("unsafe_copyto!",
        [] (WrappedType& dest, const int doffs, const jlcxx::ArrayRef<jl_value_t*> src, const int soffs, const int N) -> void {
          auto dv = SimTK::VectorIterator<ELT,WrappedType>(dest,doffs-1);
          typename jlcxx::ArrayRef<jl_value_t*>::const_iterator sv = src.begin()+soffs-1;
          for (int i = 0; i < N; ++i, ++sv, ++dv) {
            *dv = jlcxx::unbox<ELT>(*sv);
          }
        }
      );
      wrapped.method("unsafe_copyto!",
        [] (jlcxx::ArrayRef<jl_value_t*> dest, const int doffs, WrappedType& src, const int soffs, const int N) -> void {
          typename jlcxx::ArrayRef<jl_value_t*>::iterator dv = dest.begin()+doffs-1;
          auto sv = SimTK::VectorIterator<ELT,WrappedType>(src,soffs-1);
          for (int i = 0; i < N; ++i, ++sv, ++dv) {
            *dv = jlcxx::box<ELT>(*sv);
          }
        }
      );
    }

    wrapped.module().set_override_module(jl_base_module);
    wrapped.method("unsafe_copyto!",
      [] (WrappedType& dest, const int doffs, WrappedType& src, const int soffs, const int N) -> void {
        auto dv = SimTK::VectorIterator<ELT,WrappedType>(dest,doffs-1);
        auto sv = SimTK::VectorIterator<ELT,WrappedType>(src,soffs-1);
        for (int i = 0; i < N; ++i, ++sv, ++dv) {
          *dv = *sv;
        }
      }
    );
    wrapped.module().unset_override_module();

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
  vec.apply<
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
