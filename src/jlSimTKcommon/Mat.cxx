#ifdef VERBOSE_IMPORTS
#include <typeinfo>
#endif

#include "jlsimbody/common.h"
#include "jlcxx/tuple.hpp"

#include "jlSimTKcommon/Mat.h"

namespace jlsimbody {

void define_SimTKcommon_Mat(jlcxx::Module& types){

  // defined in SimTKcommon/internal/Mat.h:97:58
  auto t0 = types.add_type<jlcxx::Parametric<jlcxx::TypeVar<1>, jlcxx::TypeVar<2>, jlcxx::TypeVar<3>, jlcxx::TypeVar<4>, jlcxx::TypeVar<5>>,
    jlcxx::ParameterList<jlcxx::TypeVar<3>>>("SimTKMat", jlcxx::julia_type("AbstractMatrix"));

  auto t1 = types.add_type<jlcxx::Parametric<jlcxx::TypeVar<1>, jlcxx::TypeVar<2>, jlcxx::TypeVar<3>>,
    jlcxx::ParameterList<jlcxx::TypeVar<2>>>("SimTKSymMat", jlcxx::julia_type("AbstractMatrix"));

  /**********************************************************************/
  /* Wrappers for the methods of class SimTK::Mat
   */
  auto t0_decl_methods = []<int M, int N, typename ELT, int CS, int RS> (jlcxx::TypeWrapper<SimTK::Mat<M, N, ELT, CS, RS>> wrapped){
    typedef SimTK::Mat<M, N, ELT, CS, RS> WrappedType;

    #ifdef VERBOSE_IMPORTS
    std::string debug_msg = std::string("constructors for ") + std::string(typeid(SimTK::Mat<M, N, ELT, CS, RS>).name()) + std::string(" (" __HERE__ ")");
    DEBUG_MSG(debug_msg.c_str());
    #endif

    wrapped.template constructor<>();

    if constexpr (std::is_same<ELT, double>::value || std::is_same<ELT, std::complex<double>>::value) {
      wrapped.constructor([] (const jlcxx::ArrayRef<ELT> a) {
          typename jlcxx::ArrayRef<ELT>::const_iterator av = a.begin();
          typename jlcxx::ArrayRef<ELT>::const_iterator const end = a.end();
          WrappedType* w = new WrappedType();
          for (int j=0; j < N && av < end; ++j)
            for (int i=0; i < N && av < end; ++i, ++av) {
              w->elt(i,j) = *av;
            }

          return w;
      });

      wrapped.module().set_override_module(jl_base_module);
      wrapped.method("unsafe_copyto!",
        [] (WrappedType& dest, const int doffs, const jlcxx::ArrayRef<ELT> src, const int soffs, const int n) -> void {
          // reinterpret_cast to Vec is needed because VectorIterator iterates using single int [] indexing,
          // but Mat uses single int [] indexing to slice rows
          auto dr = reinterpret_cast<SimTK::Vec<M*N, ELT, 1>*>(&dest);
          auto dv = SimTK::VectorIterator<ELT,SimTK::Vec<M*N, ELT, 1>>(*dr,doffs-1);
          typename jlcxx::ArrayRef<ELT>::const_iterator sv = src.begin()+soffs-1;
          for (int i = 0; i < n; ++i, ++sv, ++dv) {
            *dv = *sv;
          }
        }
      );
      wrapped.method("unsafe_copyto!",
        [] (jlcxx::ArrayRef<ELT> dest, const int doffs, WrappedType& src, const int soffs, const int n) -> void {
          typename jlcxx::ArrayRef<ELT>::iterator dv = dest.begin()+doffs-1;
          auto sr = reinterpret_cast<SimTK::Vec<M*N, ELT, 1>*>(&src);
          auto sv = SimTK::VectorIterator<ELT,SimTK::Vec<M*N, ELT, 1>>(*sr,soffs-1);
          for (int i = 0; i < n; ++i, ++sv, ++dv) {
            *dv = *sv;
          }
        }
      );
      wrapped.module().unset_override_module();
    } else {
      wrapped.constructor([] (const jlcxx::ArrayRef<jl_value_t*> a) {
          typename jlcxx::ArrayRef<jl_value_t*>::const_iterator av = a.begin();
          typename jlcxx::ArrayRef<jl_value_t*>::const_iterator const end = a.end();
          WrappedType* w = new WrappedType();
          for (int j=0; j < N && av < end; ++j)
            for (int i=0; i < N && av < end; ++i, ++av) {
              w->elt(i,j) = jlcxx::unbox<ELT>(*av);
            }

          return w;
      });
      wrapped.method("unsafe_copyto!",
        [] (WrappedType& dest, const int doffs, const jlcxx::ArrayRef<jl_value_t*> src, const int soffs, const int n) -> void {
          auto dr = reinterpret_cast<SimTK::Vec<M*N, ELT, 1>*>(&dest);
          auto dv = SimTK::VectorIterator<ELT,SimTK::Vec<M*N, ELT, 1>>(*dr,doffs-1);
          typename jlcxx::ArrayRef<jl_value_t*>::const_iterator sv = src.begin()+soffs-1;
          for (int i = 0; i < n; ++i, ++sv, ++dv) {
            *dv = jlcxx::unbox<ELT>(*sv);
          }
        }
      );
      wrapped.method("unsafe_copyto!",
        [] (jlcxx::ArrayRef<jl_value_t*> dest, const int doffs, WrappedType& src, const int soffs, const int n) -> void {
          typename jlcxx::ArrayRef<jl_value_t*>::iterator dv = dest.begin()+doffs-1;
          auto sr = reinterpret_cast<SimTK::Vec<M*N, ELT, 1>*>(&src);
          auto sv = SimTK::VectorIterator<ELT,SimTK::Vec<M*N, ELT, 1>>(*sr,soffs-1);
          for (int i = 0; i < n; ++i, ++sv, ++dv) {
            *dv = jlcxx::box<ELT>(*sv);
          }
        }
      );
    }

    wrapped.module().set_override_module(jl_base_module);
    wrapped.method("unsafe_copyto!",
      [] (WrappedType& dest, const int doffs, const ELT* src, const int soffs, const int n) -> void {
        auto dr = reinterpret_cast<SimTK::Vec<M*N, ELT, 1>*>(&dest);
        auto dv = SimTK::VectorIterator<ELT,SimTK::Vec<M*N, ELT, 1>>(*dr,doffs-1);
        auto sv = src+soffs-1;
        for (int i = 0; i < n; ++i, ++sv, ++dv) {
          *dv = *sv;
        }
      }
    );
    wrapped.module().unset_override_module();

    wrapped.method("cppgetindex", static_cast<ELT & (WrappedType::*)(int, int)>(&WrappedType::elt));
    wrapped.method("cppsetindex!", static_cast<void (WrappedType::*)(int, int, const ELT &)>(&WrappedType::set));

    if constexpr (M > 1)
      if (jlcxx::has_julia_type<typename WrappedType::TDropRow>())
        wrapped.method("droprow", static_cast<typename WrappedType::TDropRow (WrappedType::*)(int) const>(&WrappedType::dropRow));

    if constexpr (N > 1)
      if (jlcxx::has_julia_type<typename WrappedType::TDropCol>())
        wrapped.method("dropcol", static_cast<typename WrappedType::TDropCol (WrappedType::*)(int) const>(&WrappedType::dropCol));

    if (jlcxx::has_julia_type<typename WrappedType::TAppendRow>())
      wrapped.method("appendrow", static_cast<typename WrappedType::TAppendRow (WrappedType::*)(const typename WrappedType::TRow &) const>(&WrappedType::appendRow));

    if (jlcxx::has_julia_type<typename WrappedType::TAppendCol>())
      wrapped.method("appendcol", static_cast<typename WrappedType::TAppendCol (WrappedType::*)(const typename WrappedType::TCol &) const>(&WrappedType::appendCol));

    if (jlcxx::has_julia_type<typename WrappedType::TAppendRow>())
      wrapped.method("insertrow", static_cast<typename WrappedType::TAppendRow (WrappedType::*)(int, const typename WrappedType::TRow &) const>(&WrappedType::insertRow));

    if (jlcxx::has_julia_type<typename WrappedType::TAppendCol>())
      wrapped.method("insertcol", static_cast<typename WrappedType::TAppendCol (WrappedType::*)(int, const typename WrappedType::TCol &) const>(&WrappedType::insertCol));

    // TODO: Additional methods to wrap:
    // ~~updDiag~~ (Returns a vec with a stride that isn't wrapped)
    //   Manually implement in Julia? (Use cppgetindex to return writable references to the elements)
    // updSubMat (view)?
    //   updSubMat is templated on the number of rows and columns of the submatrix,
    //   wrapping would need to be iterated to be complete? Messy; utility vs Julia-side implentation not clear

    DEBUG_MSG("void SimTK::Mat::setToNaN() (" __HERE__ ")");
    // signature to use in the veto list: void SimTK::Mat::setToNaN()
    // defined in SimTKcommon/internal/Mat.h:904:10
    wrapped.method("setToNaN", static_cast<void (WrappedType::*)() >(&WrappedType::setToNaN));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("void SimTK::Mat::setToZero() (" __HERE__ ")");
    // signature to use in the veto list: void SimTK::Mat::setToZero()
    // defined in SimTKcommon/internal/Mat.h:909:10
    wrapped.method("setToZero", static_cast<void (WrappedType::*)() >(&WrappedType::setToZero));
    CLEAR_DEBUG_MSG();
  };
  t0.apply<
    SimTK::Mat<1, 1, double, 1, 1>,
    SimTK::Mat<1, 2, SimTK::Row<3, double, 1>, 1, 2>,
    SimTK::Mat<2, 1, SimTK::Vec<3, double, 1>, 2, 1>,
    SimTK::Mat<2, 2, double, 2, 1>,
    SimTK::Mat<2, 2, SimTK::Row<3, double, 1>, 1, 2>,
    SimTK::Mat<2, 2, SimTK::Vec<3, double, 1>, 2, 1>,
    SimTK::Mat<2, 2, std::complex<double>, 2, 1>,
    SimTK::Mat<2, 3, SimTK::Vec<3, double, 1>, 2, 1>,
    SimTK::Mat<2, 4, SimTK::Vec<3, double, 1>, 2, 1>,
    SimTK::Mat<2, 5, SimTK::Vec<3, double, 1>, 2, 1>,
    SimTK::Mat<2, 6, SimTK::Vec<3, double, 1>, 2, 1>,
    SimTK::Mat<3, 2, SimTK::Row<3, double, 1>, 1, 2>,
    SimTK::Mat<3, 3, double, 1, 3>,
    SimTK::Mat<3, 3, double, 3, 1>,
    SimTK::Mat<3, 3, std::complex<double>, 3, 1>,
    SimTK::Mat<2, 2, SimTK::Mat<3, 3, double, 3, 1>, 2, 1>,
    SimTK::Mat<3, 4, double, 3, 1>,
    SimTK::Mat<4, 2, SimTK::Row<3, double, 1>, 1, 2>,
    SimTK::Mat<4, 4, double, 4, 1>,
    SimTK::Mat<4, 4, SimTK::Vec<3, double, 1>, 4, 1>,
    SimTK::Mat<4, 4, std::complex<double>, 4, 1>,
    SimTK::Mat<5, 2, SimTK::Row<3, double, 1>, 1, 2>,
    SimTK::Mat<5, 5, double, 5, 1>,
    SimTK::Mat<5, 5, std::complex<double>, 5, 1>,
    SimTK::Mat<6, 2, SimTK::Row<3, double, 1>, 1, 2>,
    SimTK::Mat<6, 3, double, 6, 1>,
    SimTK::Mat<6, 6, double, 6, 1>
    >(t0_decl_methods);

  /* End of SimTK::Mat class method wrappers
   **********************************************************************/

  /* Begin adding SimTK::SymMat class method wrappers
   **********************************************************************/

  auto t1_decl_methods = []<int M, typename ELT, int RS> (jlcxx::TypeWrapper<SimTK::SymMat<M, ELT, RS>> wrapped){
    typedef SimTK::SymMat<M, ELT, RS> WrappedType;

    #ifdef VERBOSE_IMPORTS
    std::string debug_msg = std::string("constructors for ") + std::string(typeid(SimTK::SymMat<M, ELT, RS>).name()) + std::string(" (" __HERE__ ")");
    DEBUG_MSG(debug_msg.c_str());
    #endif

    wrapped.template constructor<>();
    wrapped.template constructor<const WrappedType &>();
    wrapped.template constructor<const SimTK::Mat<M,M,ELT,M,RS> &>();
    wrapped.template constructor<const ELT &>();
    CLEAR_DEBUG_MSG();

    wrapped.method("setFromLower", static_cast<WrappedType & (WrappedType::*)(const SimTK::Mat<M,M,ELT,M,RS> &)>(&WrappedType::setFromLower));
    wrapped.method("setFromUpper", static_cast<WrappedType & (WrappedType::*)(const SimTK::Mat<M,M,ELT,M,RS> &)>(&WrappedType::setFromUpper));
    wrapped.method("setFromSymmetric", static_cast<WrappedType & (WrappedType::*)(const SimTK::Mat<M,M,ELT,M,RS> &)>(&WrappedType::setFromSymmetric));

    wrapped.method("cppgetindex", static_cast<ELT & (WrappedType::*)(int, int)>(&WrappedType::operator()));

    DEBUG_MSG("void SimTK::SymMat::operator[](typename WrappedType::index_type) (" __HERE__ ")");
    wrapped.method("cppsetindex!", [](WrappedType& a, int i, int j, const ELT & val){
      a[i] = val;
    });
    CLEAR_DEBUG_MSG();

    wrapped.method("rowslice", static_cast<SimTK::Row<M,ELT,RS> (WrappedType::*)(int) const>(&WrappedType::row));
    wrapped.method("colslice", static_cast<SimTK::Vec<M,ELT,RS> (WrappedType::*)(int) const>(&WrappedType::col));

    wrapped.method("setToNan", static_cast<void (WrappedType::*)() >(&WrappedType::setToNaN));
    wrapped.method("setToZero", static_cast<void (WrappedType::*)() >(&WrappedType::setToZero));
  };
  t1.apply<SimTK::SymMat<3,double,1>>(t1_decl_methods);

  /* End of SimTK::SymMat class method wrappers
   **********************************************************************/

  types.method("SimTK!Mat", [] (const SimTK::SymMat<3,double,1> &m) {
    return new SimTK::Mat<3,3>(m);
  });

}

}
