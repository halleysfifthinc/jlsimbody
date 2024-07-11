#include "jlsimbody/common.h"
#include "jlSimTKcommon/MatrixVector.h"

namespace jlsimbody {

void define_SimTKcommon_MatrixVector(jlcxx::Module& types){

  // defined in SimTKcommon/internal/Matrix_.h:51:28
  auto t1 = types.add_type<jlcxx::Parametric<jlcxx::TypeVar<1>>,
    jlcxx::ParameterList<jlcxx::TypeVar<1>>>("SimTKMatrix", jlcxx::julia_type("AbstractMatrix"));

  // defined in SimTKcommon/internal/Vector_.h:50:28
  auto t2 = types.add_type<jlcxx::Parametric<jlcxx::TypeVar<1>>,
    jlcxx::ParameterList<jlcxx::TypeVar<1>>>("SimTKVector", jlcxx::julia_type("AbstractVector"));

  /**********************************************************************/
  /* Wrappers for the methods of class SimTK::Vector_
   */
  auto t2_decl_methods = []<typename ELT> (jlcxx::TypeWrapper<SimTK::Vector_<ELT>> wrapped){
    typedef SimTK::Vector_<ELT> WrappedType;
    wrapped.template constructor<>();

    DEBUG_MSG("void SimTK::Vector_::Vector_<ELT>(const WrappedType &) (" __HERE__ ")");
    // defined in SimTKcommon/internal/Vector_.h:71:5
    wrapped.template constructor<const WrappedType &>();
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("void SimTK::Vector_::Vector_<ELT>(int) (" __HERE__ ")");
    // defined in SimTKcommon/internal/Vector_.h:87:14
    wrapped.template constructor<int>();
    CLEAR_DEBUG_MSG();


    DEBUG_MSG("void SimTK::Vector_::Vector_<ELT>(int, const ELT *) (" __HERE__ ")");
    // defined in SimTKcommon/internal/Vector_.h:92:5
    wrapped.template constructor<int, const ELT *>();
    CLEAR_DEBUG_MSG();


    DEBUG_MSG("void SimTK::Vector_::Vector_<ELT>(int, const ELT &) (" __HERE__ ")");
    // defined in SimTKcommon/internal/Vector_.h:95:5
    wrapped.template constructor<int, const ELT &>();
    CLEAR_DEBUG_MSG();

    wrapped.method("cppsize", [] (const WrappedType & v) {
      return std::make_tuple(v.nrow(), v.ncol());
    });

    DEBUG_MSG("const ELT & SimTK::Vector_::get(int) (" __HERE__ ")");
    // signature to use in the veto list: const ELT & SimTK::Vector_::get(int)
    // defined in SimTKcommon/internal/Vector_.h:197:16
    wrapped.method("cppgetindex", static_cast<ELT & (WrappedType::*)(int) >(&WrappedType::operator[]));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("void SimTK::Vector_::set(int, const ELT &) (" __HERE__ ")");
    // signature to use in the veto list: void SimTK::Vector_::set(int, const ELT &)
    // defined in SimTKcommon/internal/Vector_.h:199:10
    wrapped.method("cppsetindex!", static_cast<void (WrappedType::*)(int, const ELT &) >(&WrappedType::set));
    CLEAR_DEBUG_MSG();

    wrapped.module().set_override_module(jl_base_module);
    wrapped.method("empty!", static_cast<void (WrappedType::*)()>(&WrappedType::clear));
    wrapped.module().unset_override_module();


    DEBUG_MSG("void SimTK::Vector_::resizeKeep(int) (" __HERE__ ")");
    wrapped.method("resize!", reinterpret_cast<WrappedType & (WrappedType::*)(int) >(
      static_cast<SimTK::VectorBase<ELT> & (WrappedType::*)(int) >(&WrappedType::resizeKeep)
    ));
    CLEAR_DEBUG_MSG();

    if constexpr (std::is_same<ELT, double>::value || std::is_same<ELT, std::complex<double>>::value) {
      wrapped.method("unsafe_copyto!",
        [] (WrappedType& dest, const int doffs, const jlcxx::ArrayRef<ELT> src, const int soffs, const int n) -> void {
          ELT* dv = dest.updContiguousScalarData()+doffs-1;
          typename jlcxx::ArrayRef<ELT>::const_iterator sv = src.begin()+soffs-1;
          for (int i = 0; i < n; ++i, ++sv, ++dv) {
            *dv = *sv;
          }
        }
      );
      wrapped.method("unsafe_copyto!",
        [] (jlcxx::ArrayRef<ELT> dest, const int doffs, const WrappedType& src, const int soffs, const int n) -> void {
          typename jlcxx::ArrayRef<ELT>::iterator dv = dest.begin()+doffs-1;
          const ELT* sv = src.getContiguousScalarData()+soffs-1;
          for (int i = 0; i < n; ++i, ++sv, ++dv) {
            *dv = *sv;
          }
        }
      );
    } else {
      wrapped.method("unsafe_copyto!",
        [] (WrappedType& dest, const int doffs, const jlcxx::ArrayRef<jl_value_t*> src, const int soffs, const int n) -> void {
          // updContiguousScalarData() returns a pointer with the most scalar type (e.g. double if ELT is a Vec<3,double>, etc)
          // so we reinterpret_cast as ELT for simpler/automatic pointer incrementing without needing to fiddle with the ELT size
          ELT* dv = reinterpret_cast<ELT*>(dest.updContiguousScalarData())+doffs-1;
          typename jlcxx::ArrayRef<jl_value_t*>::const_iterator sv = src.begin()+soffs-1;
          for (int i = 0; i < n; ++i, ++sv, ++dv) {
            *dv = jlcxx::unbox<ELT>(*sv);
          }
        }
      );
      wrapped.method("unsafe_copyto!",
        [] (jlcxx::ArrayRef<jl_value_t*> dest, const int doffs, const WrappedType& src, const int soffs, const int n) -> void {
          typename jlcxx::ArrayRef<jl_value_t*>::iterator dv = dest.begin()+doffs-1;
          const ELT* sv = reinterpret_cast<const ELT*>(src.getContiguousScalarData())+soffs-1;
          for (int i = 0; i < n; ++i, ++sv, ++dv) {
            *dv = jlcxx::box<ELT>(*sv);
          }
        }
      );
    }

  };
  t2.apply<
    SimTK::Vector_<double>,
    SimTK::Vector_<std::complex<double>>,
    SimTK::Vector_<SimTK::Vec<1, double, 1>>,
    SimTK::Vector_<SimTK::Vec<3, double, 1>>,
    SimTK::Vector_<SimTK::Vec<2, SimTK::Vec<3, double, 1>, 1>>
    >(t2_decl_methods);

  /* End of SimTK::Vector_ class method wrappers
   **********************************************************************/

  /**********************************************************************/
  /* Wrappers for the methods of class SimTK::Matrix_
   */
  auto t1_decl_methods = []<typename ELT> (jlcxx::TypeWrapper<SimTK::Matrix_<ELT>> wrapped){
    typedef SimTK::Matrix_<ELT> WrappedType;
    wrapped.template constructor<>();

    DEBUG_MSG("void SimTK::Matrix_::Matrix_<ELT>(const WrappedType &) (" __HERE__ ")");
    // defined in SimTKcommon/internal/Matrix_.h:71:5
    wrapped.template constructor<const WrappedType &>();
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("void SimTK::Matrix_::Matrix_<ELT>(int, int) (" __HERE__ ")");
    // defined in SimTKcommon/internal/Matrix_.h:91:5
    wrapped.template constructor<int, int>();
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("void SimTK::Matrix_::Matrix_<ELT>(int, int, const ELT *) (" __HERE__ ")");
    // defined in SimTKcommon/internal/Matrix_.h:93:5
    wrapped.template constructor<int, int, const ELT *>();
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("void SimTK::Matrix_::Matrix_<ELT>(int, int, const ELT &) (" __HERE__ ")");
    // defined in SimTKcommon/internal/Matrix_.h:95:5
    wrapped.template constructor<int, int, const ELT &>();
    CLEAR_DEBUG_MSG();

    wrapped.method("cppsize", [] (const WrappedType & v) {
      return std::make_tuple(v.nrow(), v.ncol());
    });

    DEBUG_MSG("const ELT & SimTK::Matrix_::get(int, int) (" __HERE__ ")");
    // signature to use in the veto list: const ELT & SimTK::Matrix_::get(int, int)
    // defined in SimTKcommon/internal/Matrix_.h:141:16
    wrapped.method("cppgetindex", static_cast<ELT & (WrappedType::*)(int, int) >(&WrappedType::operator()));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("void SimTK::Matrix_::set(int, int, const ELT &) (" __HERE__ ")");
    // signature to use in the veto list: void SimTK::Matrix_::set(int, int, const ELT &)
    // defined in SimTKcommon/internal/Matrix_.h:143:16
    wrapped.method("cppsetindex!", static_cast<void (WrappedType::*)(int, int, const ELT &) >(&WrappedType::set));
    CLEAR_DEBUG_MSG();

    wrapped.module().set_override_module(jl_base_module);
    wrapped.method("empty!", static_cast<void (WrappedType::*)()>(&WrappedType::clear));
    wrapped.module().unset_override_module();

    // wrapped.method("view", static_cast<WrappedType & (WrappedType::*)(int, int)  const>(&WrappedType::operator()));
    wrapped.method("slice", [](const WrappedType & v, int i, int j, int m, int n){
      WrappedType out = v(i,j,m,n); // copy to match typical Julia semantics
      return out;
    });

    DEBUG_MSG("void SimTK::Vector_::resizeKeep(int) (" __HERE__ ")");
    wrapped.method("resize!", reinterpret_cast<WrappedType & (WrappedType::*)(int,int) >(
      static_cast<SimTK::MatrixBase<ELT> & (WrappedType::*)(int,int) >(&WrappedType::resizeKeep)
    ));
    CLEAR_DEBUG_MSG();

    if constexpr (std::is_same<ELT, double>::value || std::is_same<ELT, std::complex<double>>::value) {
      wrapped.method("unsafe_copyto!",
        [] (WrappedType& dest, const int doffs, const jlcxx::ArrayRef<ELT> src, const int soffs, const int n) -> void {
          ELT* dv = dest.updContiguousScalarData()+doffs-1;
          typename jlcxx::ArrayRef<ELT>::const_iterator sv = src.begin()+soffs-1;
          for (int i = 0; i < n; ++i, ++sv, ++dv) {
            *dv = *sv;
          }
        }
      );
      wrapped.method("unsafe_copyto!",
        [] (jlcxx::ArrayRef<ELT> dest, const int doffs, const WrappedType& src, const int soffs, const int n) -> void {
          typename jlcxx::ArrayRef<ELT>::iterator dv = dest.begin()+doffs-1;
          const ELT* sv = src.getContiguousScalarData()+soffs-1;
          for (int i = 0; i < n; ++i, ++sv, ++dv) {
            *dv = *sv;
          }
        }
      );
    } else {
      wrapped.method("unsafe_copyto!",
        [] (WrappedType& dest, const int doffs, const jlcxx::ArrayRef<jl_value_t*> src, const int soffs, const int n) -> void {
          ELT* dv = reinterpret_cast<ELT*>(dest.updContiguousScalarData())+doffs-1;
          typename jlcxx::ArrayRef<jl_value_t*>::const_iterator sv = src.begin()+soffs-1;
          for (int i = 0; i < n; ++i, ++sv, ++dv) {
            *dv = jlcxx::unbox<ELT>(*sv);
          }
        }
      );
      wrapped.method("unsafe_copyto!",
        [] (jlcxx::ArrayRef<jl_value_t*> dest, const int doffs, const WrappedType& src, const int soffs, const int n) -> void {
          typename jlcxx::ArrayRef<jl_value_t*>::iterator dv = dest.begin()+doffs-1;
          const ELT* sv = reinterpret_cast<const ELT*>(src.getContiguousScalarData())+soffs-1;
          for (int i = 0; i < n; ++i, ++sv, ++dv) {
            *dv = jlcxx::box<ELT>(*sv);
          }
        }
      );
    }
  };
  t1.apply<
    SimTK::Matrix_<double>,
    SimTK::Matrix_<std::complex<double>>,
    SimTK::Matrix_<SimTK::Vec<3, double, 1>>,
    SimTK::Matrix_<SimTK::Vec<2, SimTK::Vec<3, double, 1>, 1>>
    >(t1_decl_methods);

  /* End of SimTK::Matrix_ class method wrappers
   **********************************************************************/

}

}
