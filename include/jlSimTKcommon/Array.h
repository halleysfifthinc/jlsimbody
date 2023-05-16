#include "SimTKcommon/internal/common.h"
#include "SimTKcommon/internal/Array.h"

#ifdef VERBOSE_IMPORT
#  define DEBUG_MSG(a) std::cerr << a << "\n"
#else
#  define DEBUG_MSG(a)
#endif
#define __HERE__  __FILE__ ":" QUOTE2(__LINE__)
#define QUOTE(arg) #arg
#define QUOTE2(arg) QUOTE(arg)

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

  template<typename T>
  struct WrapSimTKArrayView
  {
    template<typename TypeWrapperT>
    void operator()(TypeWrapperT&& wrapped)
    {
      typedef SimTK::ArrayView_<T> WrappedType;

      wrapped.template constructor<>(/*finalize=*/true);

      DEBUG_MSG("Adding wrapper for void SimTK::ArrayView_::ArrayView_<T, X>(const WrappedType &) (" __HERE__ ")");
      // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Array.h:882:1
      wrapped.template constructor<const WrappedType &>(/*finalize=*/true);

      DEBUG_MSG("Adding wrapper for void SimTK::ArrayView_::ArrayView_<T, X>(T *, const T *) (" __HERE__ ")");
      // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Array.h:885:1
      wrapped.template constructor<T *, const T *>(/*finalize=*/true);

      DEBUG_MSG("Adding wrapper for ArrayView_<T, X> & SimTK::ArrayView_::operator=(const WrappedType &) (" __HERE__ ")");
      // signature to use in the veto list: ArrayView_<T, X> & SimTK::ArrayView_::operator=(const WrappedType &)
      // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Array.h:923:13
      wrapped.method("assign", static_cast<WrappedType & (WrappedType::*)(const WrappedType &) >(&WrappedType::operator=));

      DEBUG_MSG("Adding wrapper for ArrayView_<T, X> & SimTK::ArrayView_::operator=(const T &) (" __HERE__ ")");
      // signature to use in the veto list: ArrayView_<T, X> & SimTK::ArrayView_::operator=(const T &)
      // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Array.h:968:13
      wrapped.method("assign", static_cast<WrappedType & (WrappedType::*)(const T &) >(&WrappedType::operator=));

      DEBUG_MSG("Adding wrapper for ArrayView_<T, X> & SimTK::ArrayView_::fill(const T &) (" __HERE__ ")");
      // signature to use in the veto list: ArrayView_<T, X> & SimTK::ArrayView_::fill(const T &)
      // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Array.h:976:13
      wrapped.method("fill", static_cast<WrappedType & (WrappedType::*)(const T &) >(&WrappedType::fill));

      DEBUG_MSG("Adding wrapper for void SimTK::ArrayView_::assign(typename WrappedType::size_type, const T &) (" __HERE__ ")");
      // signature to use in the veto list: void SimTK::ArrayView_::assign(typename WrappedType::size_type, const T &)
      // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Array.h:985:6
      wrapped.method("assign", static_cast<void (WrappedType::*)(typename WrappedType::size_type, const T &) >(&WrappedType::assign));
      
      wrapped.module().set_override_module(jl_base_module);
      DEBUG_MSG("Adding getindex method to wrap const T & SimTK::ArrayView_::operator[](typename WrappedType::index_type) (" __HERE__ ")");
      // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Array.h:1075:29
      wrapped.method("getindex",
        [](WrappedType& a, typename WrappedType::index_type i){
        return a[i];
      });

      DEBUG_MSG("Adding setindex! method  to wrap T & SimTK::ArrayView_::operator[](typename WrappedType::index_type) (" __HERE__ ")");
      // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Array.h:1085:23
      wrapped.method("setindex!",
        [](WrappedType& a, typename WrappedType::index_type i, T const & val){
        return a[i] = val;
      });
      wrapped.module().unset_override_module();

      DEBUG_MSG("Adding wrapper for T & SimTK::ArrayView_::front() (" __HERE__ ")");
      // signature to use in the veto list: T & SimTK::ArrayView_::front()
      // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Array.h:1121:23
      wrapped.method("front", static_cast<T & (WrappedType::*)() >(&WrappedType::front));

      DEBUG_MSG("Adding wrapper for T & SimTK::ArrayView_::back() (" __HERE__ ")");
      // signature to use in the veto list: T & SimTK::ArrayView_::back()
      // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Array.h:1135:23
      wrapped.method("back", static_cast<T & (WrappedType::*)() >(&WrappedType::back));

      DEBUG_MSG("Adding wrapper for ArrayView_<T, X> SimTK::ArrayView_::operator()(typename WrappedType::index_type, typename WrappedType::size_type) (" __HERE__ ")");
      // signature to use in the veto list: ArrayView_<T, X> SimTK::ArrayView_::operator()(typename WrappedType::index_type, typename WrappedType::size_type)
      // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Array.h:1155:12
      wrapped.method("paren", static_cast<WrappedType (WrappedType::*)(typename WrappedType::index_type, typename WrappedType::size_type) >(&WrappedType::operator()));

      DEBUG_MSG("Adding wrapper for ArrayView_<T, X> SimTK::ArrayView_::updSubArray(typename WrappedType::index_type, typename WrappedType::size_type) (" __HERE__ ")");
      // signature to use in the veto list: ArrayView_<T, X> SimTK::ArrayView_::updSubArray(typename WrappedType::index_type, typename WrappedType::size_type)
      // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Array.h:1169:12
      wrapped.method("updSubArray", static_cast<WrappedType (WrappedType::*)(typename WrappedType::index_type, typename WrappedType::size_type) >(&WrappedType::updSubArray));

      DEBUG_MSG("Adding wrapper for SimTK::ArrayView_::size_type SimTK::ArrayView_::size() (" __HERE__ ")");
      // signature to use in the veto list: SimTK::ArrayView_::size_type SimTK::ArrayView_::size()
      // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Array.h:1263:30
      wrapped.method("size", static_cast<typename WrappedType::size_type (WrappedType::*)()  const>(&WrappedType::size));

      DEBUG_MSG("Adding wrapper for SimTK::ArrayView_::size_type SimTK::ArrayView_::max_size() (" __HERE__ ")");
      // signature to use in the veto list: SimTK::ArrayView_::size_type SimTK::ArrayView_::max_size()
      // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Array.h:1264:11
      wrapped.method("max_size", static_cast<typename WrappedType::size_type (WrappedType::*)()  const>(&WrappedType::max_size));

      DEBUG_MSG("Adding wrapper for bool SimTK::ArrayView_::empty() (" __HERE__ ")");
      // signature to use in the veto list: bool SimTK::ArrayView_::empty()
      // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Array.h:1265:11
      wrapped.method("empty", static_cast<bool (WrappedType::*)()  const>(&WrappedType::empty));

      DEBUG_MSG("Adding wrapper for SimTK::ArrayView_::size_type SimTK::ArrayView_::capacity() (" __HERE__ ")");
      // signature to use in the veto list: SimTK::ArrayView_::size_type SimTK::ArrayView_::capacity()
      // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Array.h:1266:11
      wrapped.method("capacity", static_cast<typename WrappedType::size_type (WrappedType::*)()  const>(&WrappedType::capacity));

      DEBUG_MSG("Adding wrapper for SimTK::ArrayView_::size_type SimTK::ArrayView_::allocated() (" __HERE__ ")");
      // signature to use in the veto list: SimTK::ArrayView_::size_type SimTK::ArrayView_::allocated()
      // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Array.h:1267:11
      wrapped.method("allocated", static_cast<typename WrappedType::size_type (WrappedType::*)()  const>(&WrappedType::allocated));

      DEBUG_MSG("Adding wrapper for bool SimTK::ArrayView_::isOwner() (" __HERE__ ")");
      // signature to use in the veto list: bool SimTK::ArrayView_::isOwner()
      // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Array.h:1268:11
      wrapped.method("isOwner", static_cast<bool (WrappedType::*)()  const>(&WrappedType::isOwner));
    }
  };

  template<typename T>
  struct WrapSimTKArray
  {
    template<typename TypeWrapperT>
    void operator()(TypeWrapperT&& wrapped)
    {
      typedef SimTK::Array_<T> WrappedType;

      wrapped.template constructor<>(/*finalize=*/true);

      DEBUG_MSG("Adding wrapper for void SimTK::Array_::Array_<T, X>(typename WrappedType::size_type) (" __HERE__ ")");
      // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Array.h:1566:10
      wrapped.template constructor<typename WrappedType::size_type>(/*finalize=*/true);

      DEBUG_MSG("Adding wrapper for void SimTK::Array_::Array_<T, X>(typename WrappedType::size_type, const T &) (" __HERE__ ")");
      // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Array.h:1576:1
      wrapped.template constructor<typename WrappedType::size_type, const T &>(/*finalize=*/true);

      DEBUG_MSG("Adding wrapper for void SimTK::Array_::Array_<T, X>(const WrappedType &) (" __HERE__ ")");
      // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Array.h:1654:1
      wrapped.template constructor<const WrappedType &>(/*finalize=*/true);

      DEBUG_MSG("Adding wrapper for Array_<T, X> & SimTK::Array_::deallocate() (" __HERE__ ")");
      // signature to use in the veto list: Array_<T, X> & SimTK::Array_::deallocate()
      // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Array.h:1753:9
      wrapped.method("deallocate", static_cast<WrappedType & (WrappedType::*)() >(&WrappedType::deallocate));

      DEBUG_MSG("Adding wrapper for void SimTK::Array_::assign(typename WrappedType::size_type, const T &) (" __HERE__ ")");
      // signature to use in the veto list: void SimTK::Array_::assign(typename WrappedType::size_type, const T &)
      // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Array.h:1818:6
      wrapped.method("assign", static_cast<void (WrappedType::*)(typename WrappedType::size_type, const T &) >(&WrappedType::assign));

      DEBUG_MSG("Adding wrapper for void SimTK::Array_::fill(const T &) (" __HERE__ ")");
      // signature to use in the veto list: void SimTK::Array_::fill(const T &)
      // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Array.h:1852:6
      wrapped.method("fill", static_cast<void (WrappedType::*)(const T &) >(&WrappedType::fill));

      DEBUG_MSG("Adding wrapper for Array_<T, X> & SimTK::Array_::operator=(const WrappedType &) (" __HERE__ ")");
      // signature to use in the veto list: Array_<T, X> & SimTK::Array_::operator=(const WrappedType &)
      // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Array.h:1935:9
      wrapped.method("assign", static_cast<WrappedType & (WrappedType::*)(const WrappedType &) >(&WrappedType::operator=));

      DEBUG_MSG("Adding wrapper for void SimTK::Array_::swap(WrappedType &) (" __HERE__ ")");
      // signature to use in the veto list: void SimTK::Array_::swap(WrappedType &)
      // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Array.h:1983:6
      wrapped.method("swap", static_cast<void (WrappedType::*)(WrappedType &) >(&WrappedType::swap));

      DEBUG_MSG("Adding wrapper for SimTK::Array_::size_type SimTK::Array_::size() (" __HERE__ ")");
      // signature to use in the veto list: SimTK::Array_::size_type SimTK::Array_::size()
      // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Array.h:2075:30
      wrapped.method("size", static_cast<typename WrappedType::size_type (WrappedType::*)()  const>(&WrappedType::size));

      DEBUG_MSG("Adding wrapper for SimTK::Array_::size_type SimTK::Array_::max_size() (" __HERE__ ")");
      // signature to use in the veto list: SimTK::Array_::size_type SimTK::Array_::max_size()
      // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Array.h:2077:11
      wrapped.method("max_size", static_cast<typename WrappedType::size_type (WrappedType::*)()  const>(&WrappedType::max_size));

      DEBUG_MSG("Adding wrapper for bool SimTK::Array_::empty() (" __HERE__ ")");
      // signature to use in the veto list: bool SimTK::Array_::empty()
      // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Array.h:2080:6
      wrapped.method("empty", static_cast<bool (WrappedType::*)()  const>(&WrappedType::empty));

      DEBUG_MSG("Adding wrapper for SimTK::Array_::size_type SimTK::Array_::capacity() (" __HERE__ ")");
      // signature to use in the veto list: SimTK::Array_::size_type SimTK::Array_::capacity()
      // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Array.h:2085:11
      wrapped.method("capacity", static_cast<typename WrappedType::size_type (WrappedType::*)()  const>(&WrappedType::capacity));

      DEBUG_MSG("Adding wrapper for void SimTK::Array_::resize(typename WrappedType::size_type) (" __HERE__ ")");
      // signature to use in the veto list: void SimTK::Array_::resize(typename WrappedType::size_type)
      // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Array.h:2091:6
      wrapped.method("resize", static_cast<void (WrappedType::*)(typename WrappedType::size_type) >(&WrappedType::resize));

      DEBUG_MSG("Adding wrapper for void SimTK::Array_::resize(typename WrappedType::size_type, const T &) (" __HERE__ ")");
      // signature to use in the veto list: void SimTK::Array_::resize(typename WrappedType::size_type, const T &)
      // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Array.h:2113:6
      wrapped.method("resize", static_cast<void (WrappedType::*)(typename WrappedType::size_type, const T &) >(&WrappedType::resize));

      DEBUG_MSG("Adding wrapper for void SimTK::Array_::reserve(typename WrappedType::size_type) (" __HERE__ ")");
      // signature to use in the veto list: void SimTK::Array_::reserve(typename WrappedType::size_type)
      // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Array.h:2136:6
      wrapped.method("reserve", static_cast<void (WrappedType::*)(typename WrappedType::size_type) >(&WrappedType::reserve));

      DEBUG_MSG("Adding wrapper for void SimTK::Array_::shrink_to_fit() (" __HERE__ ")");
      // signature to use in the veto list: void SimTK::Array_::shrink_to_fit()
      // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Array.h:2172:6
      wrapped.method("shrink_to_fit", static_cast<void (WrappedType::*)() >(&WrappedType::shrink_to_fit));

      DEBUG_MSG("Adding wrapper for SimTK::Array_::size_type SimTK::Array_::allocated() (" __HERE__ ")");
      // signature to use in the veto list: SimTK::Array_::size_type SimTK::Array_::allocated()
      // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Array.h:2187:11
      wrapped.method("allocated", static_cast<typename WrappedType::size_type (WrappedType::*)()  const>(&WrappedType::allocated));

      DEBUG_MSG("Adding wrapper for bool SimTK::Array_::isOwner() (" __HERE__ ")");
      // signature to use in the veto list: bool SimTK::Array_::isOwner()
      // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Array.h:2194:6
      wrapped.method("isOwner", static_cast<bool (WrappedType::*)()  const>(&WrappedType::isOwner));
      
      wrapped.module().set_override_module(jl_base_module);
      DEBUG_MSG("Adding getindex method to wrap const T & SimTK::Array_::operator[](typename WrappedType::index_type) (" __HERE__ ")");
      // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Array.h:2286:29
      wrapped.method("getindex",
        [](WrappedType& a, typename WrappedType::index_type i){
        return a[i];
      });

      DEBUG_MSG("Adding setindex! method  to wrap T & SimTK::Array_::operator[](typename WrappedType::index_type) (" __HERE__ ")");
      // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Array.h:2296:23
      wrapped.method("setindex!",
        [](WrappedType& a, typename WrappedType::index_type i, T const & val){
        return a[i] = val;
      });
      wrapped.module().unset_override_module();

      DEBUG_MSG("Adding wrapper for const T & SimTK::Array_::at(typename WrappedType::index_type) (" __HERE__ ")");
      // signature to use in the veto list: const T & SimTK::Array_::at(typename WrappedType::index_type)
      // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Array.h:2302:10
      wrapped.method("at", static_cast<const T & (WrappedType::*)(typename WrappedType::index_type)  const>(&WrappedType::at));

      DEBUG_MSG("Adding wrapper for T & SimTK::Array_::at(typename WrappedType::index_type) (" __HERE__ ")");
      // signature to use in the veto list: T & SimTK::Array_::at(typename WrappedType::index_type)
      // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Array.h:2308:4
      wrapped.method("at", static_cast<T & (WrappedType::*)(typename WrappedType::index_type) >(&WrappedType::at));

      DEBUG_MSG("Adding wrapper for T & SimTK::Array_::front() (" __HERE__ ")");
      // signature to use in the veto list: T & SimTK::Array_::front()
      // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Array.h:2330:23
      wrapped.method("front", static_cast<T & (WrappedType::*)() >(&WrappedType::front));

      DEBUG_MSG("Adding wrapper for T & SimTK::Array_::back() (" __HERE__ ")");
      // signature to use in the veto list: T & SimTK::Array_::back()
      // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Array.h:2344:23
      wrapped.method("back", static_cast<T & (WrappedType::*)() >(&WrappedType::back));

      DEBUG_MSG("Adding wrapper for ArrayView_<T, X> SimTK::Array_::operator()(typename WrappedType::index_type, typename WrappedType::size_type) (" __HERE__ ")");
      // signature to use in the veto list: ArrayView_<T, X> SimTK::Array_::operator()(typename WrappedType::index_type, typename WrappedType::size_type)
      // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Array.h:2357:17
      wrapped.method("paren", static_cast<SimTK::ArrayView_<T> (WrappedType::*)(typename WrappedType::index_type, typename WrappedType::size_type) >(&WrappedType::operator()));

      DEBUG_MSG("Adding wrapper for ArrayView_<T, X> SimTK::Array_::updSubArray(typename WrappedType::index_type, typename WrappedType::size_type) (" __HERE__ ")");
      // signature to use in the veto list: ArrayView_<T, X> SimTK::Array_::updSubArray(typename WrappedType::index_type, typename WrappedType::size_type)
      // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Array.h:2361:17
      wrapped.method("updSubArray", static_cast<SimTK::ArrayView_<T> (WrappedType::*)(typename WrappedType::index_type, typename WrappedType::size_type) >(&WrappedType::updSubArray));

      DEBUG_MSG("Adding wrapper for void SimTK::Array_::push_back(const T &) (" __HERE__ ")");
      // signature to use in the veto list: void SimTK::Array_::push_back(const T &)
      // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Array.h:2399:6
      wrapped.method("push_back", static_cast<void (WrappedType::*)(const T &) >(&WrappedType::push_back));

      DEBUG_MSG("Adding wrapper for void SimTK::Array_::push_back() (" __HERE__ ")");
      // signature to use in the veto list: void SimTK::Array_::push_back()
      // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Array.h:2450:6
      wrapped.method("push_back", static_cast<void (WrappedType::*)() >(&WrappedType::push_back));

      DEBUG_MSG("Adding wrapper for void SimTK::Array_::pop_back() (" __HERE__ ")");
      // signature to use in the veto list: void SimTK::Array_::pop_back()
      // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Array.h:2487:6
      wrapped.method("pop_back", static_cast<void (WrappedType::*)() >(&WrappedType::pop_back));

      DEBUG_MSG("Adding wrapper for T * SimTK::Array_::erase(T *, const T *) (" __HERE__ ")");
      // signature to use in the veto list: T * SimTK::Array_::erase(T *, const T *)
      // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Array.h:2510:4
      wrapped.method("erase", static_cast<T * (WrappedType::*)(T *, const T *) >(&WrappedType::erase));

      DEBUG_MSG("Adding wrapper for T * SimTK::Array_::erase(T *) (" __HERE__ ")");
      // signature to use in the veto list: T * SimTK::Array_::erase(T *)
      // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Array.h:2545:4
      wrapped.method("erase", static_cast<T * (WrappedType::*)(T *) >(&WrappedType::erase));

      DEBUG_MSG("Adding wrapper for void SimTK::Array_::clear() (" __HERE__ ")");
      // signature to use in the veto list: void SimTK::Array_::clear()
      // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Array.h:2598:6
      wrapped.method("clear", static_cast<void (WrappedType::*)() >(&WrappedType::clear));

      DEBUG_MSG("Adding wrapper for T * SimTK::Array_::insert(T *, typename WrappedType::size_type, const T &) (" __HERE__ ")");
      // signature to use in the veto list: T * SimTK::Array_::insert(T *, typename WrappedType::size_type, const T &)
      // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Array.h:2632:4
      wrapped.method("insert", static_cast<T * (WrappedType::*)(T *, typename WrappedType::size_type, const T &) >(&WrappedType::insert));

      DEBUG_MSG("Adding wrapper for T * SimTK::Array_::insert(T *, const T &) (" __HERE__ ")");
      // signature to use in the veto list: T * SimTK::Array_::insert(T *, const T &)
      // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Array.h:2644:4
      wrapped.method("insert", static_cast<T * (WrappedType::*)(T *, const T &) >(&WrappedType::insert));
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
      arrayview.apply<SimTK::ArrayView_<T,X>>(WrapSimTKArrayView<T>());
      array.apply<SimTK::Array_<T,X>>(WrapSimTKArray<T>());
    }

    private:
    TypeWrapper2& array;
    TypeWrapper2& arrayview;
  };

  ArrayWrapper define_SimTKcommon_Array(jlcxx::Module& types);
}

#endif // JLSIMTKCOMMON_ARRAY_H