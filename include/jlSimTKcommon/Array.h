#ifndef _JLSIMTKCOMMON_ARRAY_H
#define _JLSIMTKCOMMON_ARRAY_H

#include "jlsimbody/common.h"

#include "SimTKcommon/internal/common.h"
#include "SimTKcommon/internal/Array.h"

namespace jlcxx {
  template<typename T, typename X> struct IsMirroredType<SimTK::ArrayView_<T, X>> : std::false_type { };
  template<typename T, typename X> struct DefaultConstructible<SimTK::ArrayView_<T, X>> : std::false_type { };

  template<typename T, typename X> struct IsMirroredType<SimTK::Array_<T, X>> : std::false_type { };
  template<typename T, typename X> struct DefaultConstructible<SimTK::Array_<T, X>> : std::false_type { };
}

namespace jlsimbody {

  template<typename T, typename X=unsigned>
  struct WrapSimTKArrayView
  {
    template<typename TypeWrapperT>
    void operator()(TypeWrapperT&& wrapped)
    {
      typedef typename TypeWrapperT::type WrappedType;

      DEBUG_MSG("void SimTK::ArrayView_::ArrayView_<T, X>() (" __HERE__ ")");
      wrapped.template constructor<>();
      CLEAR_DEBUG_MSG();

      DEBUG_MSG("void SimTK::ArrayView_::ArrayView_<T, X>(const WrappedType &) (" __HERE__ ")");
      // defined in SimTKcommon/internal/Array.h:882:1
      wrapped.template constructor<const WrappedType &>();
      CLEAR_DEBUG_MSG();

      DEBUG_MSG("void SimTK::ArrayView_::ArrayView_<T, X>(T *, const T *) (" __HERE__ ")");
      // defined in SimTKcommon/internal/Array.h:885:1
      wrapped.template constructor<T *, const T *>();
      CLEAR_DEBUG_MSG();

      DEBUG_MSG("ArrayView_<T, X> & SimTK::ArrayView_::operator=(const WrappedType &) (" __HERE__ ")");
      // defined in SimTKcommon/internal/Array.h:923:13
      wrapped.method("set!", static_cast<WrappedType & (WrappedType::*)(const WrappedType &) >(&WrappedType::operator=));
      CLEAR_DEBUG_MSG();

      DEBUG_MSG("ArrayView_<T, X> SimTK::ArrayView_::updSubArray(typename WrappedType::index_type, typename WrappedType::size_type) (" __HERE__ ")");
      // defined in SimTKcommon/internal/Array.h:1169:12
      wrapped.method("updSubArray", static_cast<WrappedType (WrappedType::*)(typename WrappedType::index_type, typename WrappedType::size_type) >(&WrappedType::updSubArray));
      CLEAR_DEBUG_MSG();

      // DEBUG_MSG("SimTK::ArrayView_::size_type SimTK::ArrayView_::max_size() (" __HERE__ ")");
      // // defined in SimTKcommon/internal/Array.h:1264:11
      // wrapped.method("max_size", static_cast<typename WrappedType::size_type (WrappedType::*)()  const>(&WrappedType::max_size));

      // DEBUG_MSG("SimTK::ArrayView_::size_type SimTK::ArrayView_::capacity() (" __HERE__ ")");
      // // defined in SimTKcommon/internal/Array.h:1266:11
      // wrapped.method("capacity", static_cast<typename WrappedType::size_type (WrappedType::*)()  const>(&WrappedType::capacity));

      // DEBUG_MSG("SimTK::ArrayView_::size_type SimTK::ArrayView_::allocated() (" __HERE__ ")");
      // // defined in SimTKcommon/internal/Array.h:1267:11
      // wrapped.method("allocated", static_cast<typename WrappedType::size_type (WrappedType::*)()  const>(&WrappedType::allocated));

      // DEBUG_MSG("bool SimTK::ArrayView_::isOwner() (" __HERE__ ")");
      // // defined in SimTKcommon/internal/Array.h:1268:11
      // wrapped.method("isOwner", static_cast<bool (WrappedType::*)()  const>(&WrappedType::isOwner));

      DEBUG_MSG("SimTK::ArrayView_::size_type SimTK::ArrayView_::size() (" __HERE__ ")");
      // defined in SimTKcommon/internal/Array.h:1263:30
      wrapped.method("cppsize", static_cast<typename WrappedType::size_type (WrappedType::*)()  const>(&WrappedType::size));
      CLEAR_DEBUG_MSG();

      DEBUG_MSG("const T & SimTK::ArrayView_::operator[](typename WrappedType::index_type) (" __HERE__ ")");
      // defined in SimTKcommon/internal/Array.h:1075:29
      wrapped.method("cppgetindex", static_cast<T & (WrappedType::*)(typename WrappedType::index_type) >(&WrappedType::operator[]));
      CLEAR_DEBUG_MSG();
      // wrapped.method("cppgetindex",
      //   [](WrappedType& a, typename WrappedType::index_type i) -> T& {
      //   return a.updElt(i);
      // });

      DEBUG_MSG("T & SimTK::ArrayView_::operator[](typename WrappedType::index_type) (" __HERE__ ")");
      // wrapped.method("cppsetindex!", static_cast<T & (WrappedType::*)(typename WrappedType::index_type, ) >(&WrappedType::set));
      // defined in SimTKcommon/internal/Array.h:1085:23
      wrapped.method("cppsetindex!",
        [](WrappedType& a, typename WrappedType::index_type i, T const & val){
        return a[i] = val;
      });
      CLEAR_DEBUG_MSG();

      DEBUG_MSG("ArrayView_<T, X> & SimTK::ArrayView_::fill(const T &) (" __HERE__ ")");
      // defined in SimTKcommon/internal/Array.h:976:13
      wrapped.method("fill", static_cast<WrappedType & (WrappedType::*)(const T &) >(&WrappedType::fill));
      CLEAR_DEBUG_MSG();

      DEBUG_MSG("T & SimTK::ArrayView_::front() (" __HERE__ ")");
      // defined in SimTKcommon/internal/Array.h:1121:23
      wrapped.method("first", static_cast<T & (WrappedType::*)() >(&WrappedType::front));
      CLEAR_DEBUG_MSG();

      DEBUG_MSG("T & SimTK::ArrayView_::back() (" __HERE__ ")");
      // defined in SimTKcommon/internal/Array.h:1135:23
      wrapped.method("last", static_cast<T & (WrappedType::*)() >(&WrappedType::back));
      CLEAR_DEBUG_MSG();
    }
  };

  template<typename T, typename X=unsigned>
  struct WrapSimTKArray
  {
    template<typename TypeWrapperT>
    void operator()(TypeWrapperT&& wrapped)
    {
      typedef SimTK::Array_<T,X> WrappedType;

      DEBUG_MSG("void SimTK::Array_::Array_<T, X>() (" __HERE__ ")");
      wrapped.template constructor<>();
      CLEAR_DEBUG_MSG();

      DEBUG_MSG("void SimTK::Array_::Array_<T, X>(typename WrappedType::size_type) (" __HERE__ ")");
      // defined in SimTKcommon/internal/Array.h:1566:10
      wrapped.template constructor<typename WrappedType::size_type>();
      CLEAR_DEBUG_MSG();

      DEBUG_MSG("void SimTK::Array_::Array_<T, X>(typename WrappedType::size_type, const T &) (" __HERE__ ")");
      // defined in SimTKcommon/internal/Array.h:1576:1
      wrapped.template constructor<typename WrappedType::size_type, const T &>();
      CLEAR_DEBUG_MSG();

      DEBUG_MSG("void SimTK::Array_::Array_<T, X>(const WrappedType &) (" __HERE__ ")");
      // defined in SimTKcommon/internal/Array.h:1654:1
      wrapped.template constructor<const WrappedType &>();
      CLEAR_DEBUG_MSG();

      if constexpr (std::is_same<T, int>::value || std::is_same<T, double>::value) {
        wrapped.constructor([] (const jlcxx::ArrayRef<T> a) {
          typename jlcxx::ArrayRef<T>::const_iterator begin = a.begin();
          typename jlcxx::ArrayRef<T>::const_iterator end = a.end();
          return new WrappedType(begin, end);
        });
      } else {
        wrapped.constructor([] (const jlcxx::ArrayRef<jl_value_t*> a) {
          WrappedType* w = new WrappedType(a.size());
          auto wv = w->begin();
          typename jlcxx::ArrayRef<jl_value_t*>::const_iterator av = a.begin();
          typename jlcxx::ArrayRef<jl_value_t*>::const_iterator const end = a.end();
          for (; av != end; ++av, ++wv) {
              *wv = jlcxx::unbox<T>(*av);
          }
          return w;
        });
      }

      DEBUG_MSG("void SimTK::Array_::assign(typename WrappedType::size_type, const T &) (" __HERE__ ")");
      // defined in SimTKcommon/internal/Array.h:1935:9
      wrapped.method("resize_and_fill!", static_cast<void (WrappedType::*)(typename WrappedType::size_type, const T &) >(&WrappedType::assign));
      CLEAR_DEBUG_MSG();

      if constexpr (std::is_same<T, int>::value || std::is_same<T, double>::value) {
        wrapped.module().set_override_module(jl_base_module);
        wrapped.method("unsafe_copyto!",
          [] (WrappedType& dest, const typename WrappedType::size_type doffs, const jlcxx::ArrayRef<T> src, const typename WrappedType::size_type soffs, const typename WrappedType::size_type N) -> void {
            typename WrappedType::iterator dv = dest.begin()+doffs-1;
            typename jlcxx::ArrayRef<T>::const_iterator sv = src.begin()+soffs-1;
            for (typename WrappedType::size_type i = 0; i < N; ++i, ++sv, ++dv) {
              *dv = *sv;
            }
          }
        );
        wrapped.method("unsafe_copyto!",
          [] (jlcxx::ArrayRef<T> dest, const typename WrappedType::size_type doffs, const WrappedType& src, const typename WrappedType::size_type soffs, const typename WrappedType::size_type N) -> void {
            typename jlcxx::ArrayRef<T>::iterator dv = dest.begin()+doffs-1;
            typename WrappedType::const_iterator sv = src.cbegin()+soffs-1;
            for (typename WrappedType::size_type i = 0; i < N; ++i, ++sv, ++dv) {
              *dv = *sv;
            }
          }
        );
        wrapped.module().unset_override_module();
      } else {
        wrapped.method("unsafe_copyto!",
          [] (WrappedType& dest, const typename WrappedType::size_type doffs, const jlcxx::ArrayRef<jl_value_t*> src, const typename WrappedType::size_type soffs, const typename WrappedType::size_type N) -> void {
            auto dv = dest.begin()+doffs-1;
            typename jlcxx::ArrayRef<jl_value_t*>::const_iterator sv = src.begin()+soffs-1;
            for (typename WrappedType::size_type i = 0; i < N; ++i, ++sv, ++dv) {
              *dv = jlcxx::unbox<T>(*sv);
            }
          }
        );
        wrapped.method("unsafe_copyto!",
          [] (jlcxx::ArrayRef<jl_value_t*> dest, const typename WrappedType::size_type doffs, const WrappedType& src, const typename WrappedType::size_type soffs, const typename WrappedType::size_type N) -> void {
            typename jlcxx::ArrayRef<jl_value_t*>::iterator dv = dest.begin()+doffs-1;
            typename WrappedType::const_iterator sv = src.cbegin()+soffs-1;
            for (typename WrappedType::size_type i = 0; i < N; ++i, ++sv, ++dv) {
              *dv = jlcxx::box<T>(*sv);
            }
          }
        );
      }

      wrapped.module().set_override_module(jl_base_module);
      wrapped.method("unsafe_copyto!",
        [] (WrappedType& dest, const typename WrappedType::size_type doffs, const WrappedType& src, const typename WrappedType::size_type soffs, const typename WrappedType::size_type N) -> void {
          typename WrappedType::iterator dv = dest.begin()+doffs-1;
          typename WrappedType::const_iterator sv = src.cbegin()+soffs-1;
          for (typename WrappedType::size_type i = 0; i < N; ++i, ++sv, ++dv) {
            *dv = *sv;
          }
        }
      );
      wrapped.module().unset_override_module();

      DEBUG_MSG("void SimTK::Array_::fill(const T &) (" __HERE__ ")");
      // defined in SimTKcommon/internal/Array.h:1852:6
      wrapped.method("fill!", static_cast<void (WrappedType::*)(const T &) >(&WrappedType::fill));
      CLEAR_DEBUG_MSG();

      DEBUG_MSG("SimTK::Array_::size_type SimTK::Array_::size() (" __HERE__ ")");
      // defined in SimTKcommon/internal/Array.h:1263:30
      wrapped.method("cppsize", static_cast<typename WrappedType::size_type (WrappedType::*)()  const>(&WrappedType::size));
      CLEAR_DEBUG_MSG();

      // DEBUG_MSG("SimTK::Array_::size_type SimTK::Array_::max_size() (" __HERE__ ")");
      // // defined in SimTKcommon/internal/Array.h:2077:11
      // wrapped.method("max_size", static_cast<typename WrappedType::size_type (WrappedType::*)()  const>(&WrappedType::max_size));

      // DEBUG_MSG("SimTK::Array_::size_type SimTK::Array_::capacity() (" __HERE__ ")");
      // // defined in SimTKcommon/internal/Array.h:2085:11
      // wrapped.method("capacity", static_cast<typename WrappedType::size_type (WrappedType::*)()  const>(&WrappedType::capacity));

      DEBUG_MSG("void SimTK::SimTKArray_::resize(SimTK::Array_::size_type) (" __HERE__ ")");
      wrapped.method("resize!", static_cast<void (WrappedType::*)(typename WrappedType::size_type) >(&WrappedType::resize));
      CLEAR_DEBUG_MSG();

      DEBUG_MSG("void SimTK::SimTKArray_::reserve(SimTK::Array_::size_type) (" __HERE__ ")");
      wrapped.method("sizehint!", static_cast<void (WrappedType::*)(typename WrappedType::size_type) >(&WrappedType::reserve));
      CLEAR_DEBUG_MSG();

      DEBUG_MSG("void SimTK::SimTKArray_::shrink_to_fit() (" __HERE__ ")");
      wrapped.method("shrink_to_fit!", static_cast<void (WrappedType::*)() >(&WrappedType::shrink_to_fit));
      CLEAR_DEBUG_MSG();

      // DEBUG_MSG("SimTK::Array_::size_type SimTK::Array_::allocated() (" __HERE__ ")");
      // // defined in SimTKcommon/internal/Array.h:2187:11
      // wrapped.method("allocated", static_cast<typename WrappedType::size_type (WrappedType::*)()  const>(&WrappedType::allocated));

      // DEBUG_MSG("bool SimTK::Array_::isOwner() (" __HERE__ ")");
      // // defined in SimTKcommon/internal/Array.h:2194:6
      // wrapped.method("isOwner", static_cast<bool (WrappedType::*)()  const>(&WrappedType::isOwner));

      DEBUG_MSG("const T & SimTK::Array_::operator[](typename WrappedType::index_type) (" __HERE__ ")");
      // defined in SimTKcommon/internal/Array.h:1075:29
      wrapped.method("cppgetindex", static_cast<T & (WrappedType::*)(typename WrappedType::index_type)>(&WrappedType::operator[]));
      CLEAR_DEBUG_MSG();

      DEBUG_MSG("void SimTK::Array_::operator[](typename WrappedType::index_type) (" __HERE__ ")");
      // defined in SimTKcommon/internal/Array.h:1085:23
      wrapped.method("cppsetindex!", [](WrappedType& a, typename WrappedType::index_type i, const T & val){
        a[i] = val;
      });
      CLEAR_DEBUG_MSG();

      wrapped.module().set_override_module(jl_base_module);
      DEBUG_MSG("SimTK::Array_<T,X> & SimTKArray_::deallocate() (" __HERE__ ")");
      wrapped.method("empty!", static_cast<WrappedType & (WrappedType::*)() >(&WrappedType::deallocate));
      CLEAR_DEBUG_MSG();
      wrapped.module().unset_override_module();

      DEBUG_MSG("void SimTK::Array_::push_back(const T &) (" __HERE__ ")");
      wrapped.method("push_back!", static_cast<void (WrappedType::*)(const T &) >(&WrappedType::push_back));
      CLEAR_DEBUG_MSG();

      DEBUG_MSG("void SimTK::Array_::pop_back() (" __HERE__ ")");
      // defined in SimTKcommon/internal/Array.h:2487:6
      wrapped.method("pop_back!", static_cast<void (WrappedType::*)() >(&WrappedType::pop_back));
      CLEAR_DEBUG_MSG();

      DEBUG_MSG("void SimTK::SimTKArray_::erase(SimTK::SimTKArray_::index_type) (" __HERE__ ")");
      wrapped.method("erase!", [](WrappedType& a, typename WrappedType::index_type i) -> void {
        a.erase(a.begin() + i);
      });
      CLEAR_DEBUG_MSG();

      DEBUG_MSG("void SimTK::SimTKArray_::erase(SimTK::SimTKArray_::index_type, SimTK::SimTKArray_::index_type) (" __HERE__ ")");
      wrapped.method("erase!", [](WrappedType& a, typename WrappedType::index_type i, typename WrappedType::index_type j) -> void {
        a.erase(a.begin() + i, a.begin() + j);
      });
      CLEAR_DEBUG_MSG();

      DEBUG_MSG("T * SimTK::Array_::insert(T *, const T &) (" __HERE__ ")");
      // defined in SimTKcommon/internal/Array.h:2644:4
      wrapped.method("insert!", [](WrappedType& a, typename WrappedType::index_type i, T const & val) -> void {
        a.insert(a.begin() + i, val);
      });
      CLEAR_DEBUG_MSG();

    }
  };

  struct ArrayWrapper {
    using TypeWrapper2 = jlcxx::TypeWrapper<jlcxx::Parametric<jlcxx::TypeVar<1>,jlcxx::TypeVar<2>>>;

    public:
    ArrayWrapper(TypeWrapper2& array, TypeWrapper2& arrayview) :
      array(array),
      arrayview(arrayview)
    {
    }

    template<typename T, typename X=unsigned>
    void apply() const
    {
      arrayview.apply<SimTK::ArrayView_<T,X>>(WrapSimTKArrayView<T,X>());
      array.apply<SimTK::Array_<T,X>>(WrapSimTKArray<T,X>());
    }

    private:
    TypeWrapper2& array;
    TypeWrapper2& arrayview;
  };
}

#endif // _JLSIMTKCOMMON_ARRAY_H
