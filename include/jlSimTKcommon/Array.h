#include "SimTKcommon/internal/common.h"
#include "SimTKcommon/internal/Array.h"

#ifndef JLSIMTKCOMMON_ARRAY_H
#define JLSIMTKCOMMON_ARRAY_H

namespace jlcxx {

  template<typename T, typename X>
  struct BuildParameterList<SimTK::ArrayView_<T, X>>
  {
    typedef ParameterList<T, X> type;
  };

  template<typename T, typename X> struct IsMirroredType<SimTK::ArrayView_<T, X>> : std::false_type { };
  template<typename T, typename X> struct DefaultConstructible<SimTK::ArrayView_<T, X>> : std::false_type { };

  template<typename T, typename X>
  struct BuildParameterList<SimTK::Array_<T, X>>
  {
    typedef ParameterList<T, X> type;
  };

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
      typedef SimTK::ArrayView_<T,X> WrappedType;

      wrapped.template constructor<>();

      DEBUG_MSG("Adding wrapper for void SimTK::ArrayView_::ArrayView_<T, X>(const WrappedType &) (" __HERE__ ")");
      // defined in SimTKcommon/internal/Array.h:882:1
      wrapped.template constructor<const WrappedType &>();

      DEBUG_MSG("Adding wrapper for void SimTK::ArrayView_::ArrayView_<T, X>(T *, const T *) (" __HERE__ ")");
      // defined in SimTKcommon/internal/Array.h:885:1
      wrapped.template constructor<T *, const T *>();

      DEBUG_MSG("Adding wrapper for ArrayView_<T, X> & SimTK::ArrayView_::operator=(const WrappedType &) (" __HERE__ ")");
      // signature to use in the veto list: ArrayView_<T, X> & SimTK::ArrayView_::operator=(const WrappedType &)
      // defined in SimTKcommon/internal/Array.h:923:13
      wrapped.method("assign", static_cast<WrappedType & (WrappedType::*)(const WrappedType &) >(&WrappedType::operator=));

      DEBUG_MSG("Adding wrapper for ArrayView_<T, X> SimTK::ArrayView_::updSubArray(typename WrappedType::index_type, typename WrappedType::size_type) (" __HERE__ ")");
      // signature to use in the veto list: ArrayView_<T, X> SimTK::ArrayView_::updSubArray(typename WrappedType::index_type, typename WrappedType::size_type)
      // defined in SimTKcommon/internal/Array.h:1169:12
      wrapped.method("updSubArray", static_cast<WrappedType (WrappedType::*)(typename WrappedType::index_type, typename WrappedType::size_type) >(&WrappedType::updSubArray));

      // DEBUG_MSG("Adding wrapper for SimTK::ArrayView_::size_type SimTK::ArrayView_::max_size() (" __HERE__ ")");
      // // signature to use in the veto list: SimTK::ArrayView_::size_type SimTK::ArrayView_::max_size()
      // // defined in SimTKcommon/internal/Array.h:1264:11
      // wrapped.method("max_size", static_cast<typename WrappedType::size_type (WrappedType::*)()  const>(&WrappedType::max_size));

      // DEBUG_MSG("Adding wrapper for SimTK::ArrayView_::size_type SimTK::ArrayView_::capacity() (" __HERE__ ")");
      // // signature to use in the veto list: SimTK::ArrayView_::size_type SimTK::ArrayView_::capacity()
      // // defined in SimTKcommon/internal/Array.h:1266:11
      // wrapped.method("capacity", static_cast<typename WrappedType::size_type (WrappedType::*)()  const>(&WrappedType::capacity));

      // DEBUG_MSG("Adding wrapper for SimTK::ArrayView_::size_type SimTK::ArrayView_::allocated() (" __HERE__ ")");
      // // signature to use in the veto list: SimTK::ArrayView_::size_type SimTK::ArrayView_::allocated()
      // // defined in SimTKcommon/internal/Array.h:1267:11
      // wrapped.method("allocated", static_cast<typename WrappedType::size_type (WrappedType::*)()  const>(&WrappedType::allocated));

      // DEBUG_MSG("Adding wrapper for bool SimTK::ArrayView_::isOwner() (" __HERE__ ")");
      // // signature to use in the veto list: bool SimTK::ArrayView_::isOwner()
      // // defined in SimTKcommon/internal/Array.h:1268:11
      // wrapped.method("isOwner", static_cast<bool (WrappedType::*)()  const>(&WrappedType::isOwner));

      DEBUG_MSG("Adding wrapper for SimTK::ArrayView_::size_type SimTK::ArrayView_::size() (" __HERE__ ")");
      // signature to use in the veto list: SimTK::ArrayView_::size_type SimTK::ArrayView_::size()
      // defined in SimTKcommon/internal/Array.h:1263:30
      wrapped.method("cppsize", static_cast<typename WrappedType::size_type (WrappedType::*)()  const>(&WrappedType::size));

      DEBUG_MSG("Adding getindex method to wrap const T & SimTK::ArrayView_::operator[](typename WrappedType::index_type) (" __HERE__ ")");
      // defined in SimTKcommon/internal/Array.h:1075:29
      wrapped.method("cppgetindex", static_cast<T & (WrappedType::*)(typename WrappedType::index_type) >(&WrappedType::operator[]));
      // wrapped.method("cppgetindex",
      //   [](WrappedType& a, typename WrappedType::index_type i) -> T& {
      //   return a.updElt(i);
      // });

      DEBUG_MSG("Adding setindex! method  to wrap T & SimTK::ArrayView_::operator[](typename WrappedType::index_type) (" __HERE__ ")");
      // wrapped.method("cppsetindex!", static_cast<T & (WrappedType::*)(typename WrappedType::index_type, ) >(&WrappedType::set));
      // defined in SimTKcommon/internal/Array.h:1085:23
      wrapped.method("cppsetindex!",
        [](WrappedType& a, typename WrappedType::index_type i, T const & val){
        return a[i] = val;
      });

      DEBUG_MSG("Adding wrapper for ArrayView_<T, X> & SimTK::ArrayView_::fill(const T &) (" __HERE__ ")");
      // signature to use in the veto list: ArrayView_<T, X> & SimTK::ArrayView_::fill(const T &)
      // defined in SimTKcommon/internal/Array.h:976:13
      wrapped.method("fill", static_cast<WrappedType & (WrappedType::*)(const T &) >(&WrappedType::fill));

      DEBUG_MSG("Adding wrapper for T & SimTK::ArrayView_::front() (" __HERE__ ")");
      // signature to use in the veto list: T & SimTK::ArrayView_::front()
      // defined in SimTKcommon/internal/Array.h:1121:23
      wrapped.method("first", static_cast<T & (WrappedType::*)() >(&WrappedType::front));

      DEBUG_MSG("Adding wrapper for T & SimTK::ArrayView_::back() (" __HERE__ ")");
      // signature to use in the veto list: T & SimTK::ArrayView_::back()
      // defined in SimTKcommon/internal/Array.h:1135:23
      wrapped.method("last", static_cast<T & (WrappedType::*)() >(&WrappedType::back));
    }
  };

  template<typename T, typename X=unsigned>
  struct WrapSimTKArray
  {
    template<typename TypeWrapperT>
    void operator()(TypeWrapperT&& wrapped)
    {
      typedef SimTK::Array_<T,X> WrappedType;

      wrapped.template constructor<>();

      DEBUG_MSG("Adding wrapper for void SimTK::Array_::Array_<T, X>(typename WrappedType::size_type) (" __HERE__ ")");
      // defined in SimTKcommon/internal/Array.h:1566:10
      wrapped.template constructor<typename WrappedType::size_type>();

      DEBUG_MSG("Adding wrapper for void SimTK::Array_::Array_<T, X>(typename WrappedType::size_type, const T &) (" __HERE__ ")");
      // defined in SimTKcommon/internal/Array.h:1576:1
      wrapped.template constructor<typename WrappedType::size_type, const T &>();

      DEBUG_MSG("Adding wrapper for void SimTK::Array_::Array_<T, X>(const WrappedType &) (" __HERE__ ")");
      // defined in SimTKcommon/internal/Array.h:1654:1
      wrapped.template constructor<const WrappedType &>();

      DEBUG_MSG("Adding wrapper for Array_<T, X> & SimTK::Array_::operator=(const WrappedType &) (" __HERE__ ")");
      // signature to use in the veto list: Array_<T, X> & SimTK::Array_::operator=(const WrappedType &)
      // defined in SimTKcommon/internal/Array.h:1935:9
      wrapped.method("assign", static_cast<WrappedType & (WrappedType::*)(const WrappedType &) >(&WrappedType::operator=));

      // DEBUG_MSG("Adding wrapper for SimTK::Array_::size_type SimTK::Array_::max_size() (" __HERE__ ")");
      // // signature to use in the veto list: SimTK::Array_::size_type SimTK::Array_::max_size()
      // // defined in SimTKcommon/internal/Array.h:2077:11
      // wrapped.method("max_size", static_cast<typename WrappedType::size_type (WrappedType::*)()  const>(&WrappedType::max_size));

      // DEBUG_MSG("Adding wrapper for SimTK::Array_::size_type SimTK::Array_::capacity() (" __HERE__ ")");
      // // signature to use in the veto list: SimTK::Array_::size_type SimTK::Array_::capacity()
      // // defined in SimTKcommon/internal/Array.h:2085:11
      // wrapped.method("capacity", static_cast<typename WrappedType::size_type (WrappedType::*)()  const>(&WrappedType::capacity));

      // DEBUG_MSG("Adding wrapper for SimTK::Array_::size_type SimTK::Array_::allocated() (" __HERE__ ")");
      // // signature to use in the veto list: SimTK::Array_::size_type SimTK::Array_::allocated()
      // // defined in SimTKcommon/internal/Array.h:2187:11
      // wrapped.method("allocated", static_cast<typename WrappedType::size_type (WrappedType::*)()  const>(&WrappedType::allocated));

      // DEBUG_MSG("Adding wrapper for bool SimTK::Array_::isOwner() (" __HERE__ ")");
      // // signature to use in the veto list: bool SimTK::Array_::isOwner()
      // // defined in SimTKcommon/internal/Array.h:2194:6
      // wrapped.method("isOwner", static_cast<bool (WrappedType::*)()  const>(&WrappedType::isOwner));

      DEBUG_MSG("Adding wrapper for ArrayView_<T, X> SimTK::Array_::updSubArray(typename WrappedType::index_type, typename WrappedType::size_type) (" __HERE__ ")");
      // signature to use in the veto list: ArrayView_<T, X> SimTK::Array_::updSubArray(typename WrappedType::index_type, typename WrappedType::size_type)
      // defined in SimTKcommon/internal/Array.h:2361:17
      wrapped.method("updSubArray", static_cast<SimTK::ArrayView_<T,X> (WrappedType::*)(typename WrappedType::index_type, typename WrappedType::size_type) >(&WrappedType::updSubArray));

      // DEBUG_MSG("Adding wrapper for void SimTK::Array_::pop_back() (" __HERE__ ")");
      // // signature to use in the veto list: void SimTK::Array_::pop_back()
      // // defined in SimTKcommon/internal/Array.h:2487:6
      // wrapped.method("pop_back", static_cast<void (WrappedType::*)() >(&WrappedType::pop_back));

      // DEBUG_MSG("Adding wrapper for void SimTK::Array_::clear() (" __HERE__ ")");
      // // signature to use in the veto list: void SimTK::Array_::clear()
      // // defined in SimTKcommon/internal/Array.h:2598:6
      // wrapped.method("clear", static_cast<void (WrappedType::*)() >(&WrappedType::clear));

      // DEBUG_MSG("Adding wrapper for T * SimTK::Array_::insert(T *, typename WrappedType::size_type, const T &) (" __HERE__ ")");
      // // signature to use in the veto list: T * SimTK::Array_::insert(T *, typename WrappedType::size_type, const T &)
      // // defined in SimTKcommon/internal/Array.h:2632:4
      // wrapped.method("insert", static_cast<T * (WrappedType::*)(T *, typename WrappedType::size_type, const T &) >(&WrappedType::insert));

      // DEBUG_MSG("Adding wrapper for T * SimTK::Array_::insert(T *, const T &) (" __HERE__ ")");
      // // signature to use in the veto list: T * SimTK::Array_::insert(T *, const T &)
      // // defined in SimTKcommon/internal/Array.h:2644:4
      // wrapped.method("insert", static_cast<T * (WrappedType::*)(T *, const T &) >(&WrappedType::insert));

      DEBUG_MSG("Adding wrapper for SimTK::ArrayView_::size_type SimTK::ArrayView_::size() (" __HERE__ ")");
      // signature to use in the veto list: SimTK::ArrayView_::size_type SimTK::ArrayView_::size()
      // defined in SimTKcommon/internal/Array.h:1263:30
      wrapped.method("cppsize", static_cast<typename WrappedType::size_type (WrappedType::*)()  const>(&WrappedType::size));

      DEBUG_MSG("Adding getindex method to wrap const T & SimTK::ArrayView_::operator[](typename WrappedType::index_type) (" __HERE__ ")");
      // defined in SimTKcommon/internal/Array.h:1075:29
      wrapped.method("cppgetindex", static_cast<T & (WrappedType::*)(typename WrappedType::index_type)>(&WrappedType::operator[]));
      // wrapped.method("cppgetindex", [](WrappedType& a, typename WrappedType::index_type i){
      //   return a[i];
      // });

      DEBUG_MSG("Adding setindex! method  to wrap T & SimTK::ArrayView_::operator[](typename WrappedType::index_type) (" __HERE__ ")");
      // defined in SimTKcommon/internal/Array.h:1085:23
      wrapped.method("cppsetindex!", [](WrappedType& a, typename WrappedType::index_type i, T const & val){
        return a[i] = val;
      });

      wrapped.method("push_back", static_cast<void (WrappedType::*)(const T &) >(&WrappedType::push_back));

      wrapped.module().set_override_module(jl_base_module);
      DEBUG_MSG("Adding wrapper for void SimTK::Array_::fill(const T &) (" __HERE__ ")");
      // signature to use in the veto list: void SimTK::Array_::fill(const T &)
      // defined in SimTKcommon/internal/Array.h:1852:6
      wrapped.method("fill!", static_cast<void (WrappedType::*)(const T &) >(&WrappedType::fill));

      DEBUG_MSG("Adding wrapper for T & SimTK::ArrayView_::front() (" __HERE__ ")");
      // signature to use in the veto list: T & SimTK::ArrayView_::front()
      // defined in SimTKcommon/internal/Array.h:1121:23
      wrapped.method("first", static_cast<T & (WrappedType::*)() >(&WrappedType::front));

      DEBUG_MSG("Adding wrapper for T & SimTK::ArrayView_::back() (" __HERE__ ")");
      // signature to use in the veto list: T & SimTK::ArrayView_::back()
      // defined in SimTKcommon/internal/Array.h:1135:23
      wrapped.method("last", static_cast<T & (WrappedType::*)() >(&WrappedType::back));

      wrapped.method("empty!", static_cast<WrappedType & (WrappedType::*)() >(&WrappedType::deallocate));
      wrapped.module().unset_override_module();

      wrapped.method("resize!", static_cast<void (WrappedType::*)(typename WrappedType::size_type) >(&WrappedType::resize));
      wrapped.method("reserve!", static_cast<void (WrappedType::*)(typename WrappedType::size_type) >(&WrappedType::reserve));
      wrapped.method("shrink_to_fit!", static_cast<void (WrappedType::*)() >(&WrappedType::shrink_to_fit));

      wrapped.method("erase", [](WrappedType& a, typename WrappedType::index_type i) -> void {
        a.erase(a.begin() + i - 1);
      });
      wrapped.method("erase", [](WrappedType& a, typename WrappedType::index_type i, typename WrappedType::index_type j) -> void {
        a.erase(a.begin() + i - 1, a.begin() + j);
      });

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

#endif // JLSIMTKCOMMON_ARRAY_H
