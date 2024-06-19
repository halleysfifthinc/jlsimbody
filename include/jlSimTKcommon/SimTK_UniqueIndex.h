// #include "SimTKcommon/internal/common.h"
#include "jlsimbody/common.h"

#ifndef JLSIMTKCOMMON_UNIQUEINDEX_H
#define JLSIMTKCOMMON_UNIQUEINDEX_H

// template<typename UniqueIndex> struct IsMirroredType<SimTK::UniqueIndex> : std::true_type {};

// template<typename UniqueIndex> struct julia_type_factory<SimTK::UniqueIndex>
// {
//   static jl_datatype_t* julia_type()
//   {
//     return jlcxx::julia_base_type("Int32");
//   }
// };

namespace jlsimbody {

  template<typename UniqueIndex>
  void wrap_SimTK_UniqueIndexType(jlcxx::Module& types, std::string tname)
  {
    auto t0 = types.add_type<UniqueIndex>(tname);
    // types.map_type<UniqueIndex>(tname);
    t0.template constructor<>();
    t0.template constructor<int>();

    t0.method("isValid", static_cast<bool (UniqueIndex::*)()  const>(&UniqueIndex::isValid));
    t0.method("isValidExtended", static_cast<bool (UniqueIndex::*)()  const>(&UniqueIndex::isValidExtended));
    t0.method("invalidate", static_cast<void (UniqueIndex::*)() >(&UniqueIndex::invalidate));
    t0.method("clear", static_cast<void (UniqueIndex::*)() >(&UniqueIndex::clear));

    types.set_override_module(jl_base_module);
    t0.method("==", static_cast<bool (UniqueIndex::*)(const UniqueIndex &)  const>(&UniqueIndex::operator==));
    t0.method("==", static_cast<bool (UniqueIndex::*)(int)  const>(&UniqueIndex::operator==));
    t0.method("!=", static_cast<bool (UniqueIndex::*)(int)  const>(&UniqueIndex::operator!=));
    t0.method("<", static_cast<bool (UniqueIndex::*)(int)  const>(&UniqueIndex::operator<));
    // t0.method(">=", static_cast<bool (UniqueIndex::*)(int)  const>(&UniqueIndex::operator>=));
    // t0.method(">", static_cast<bool (UniqueIndex::*)(int)  const>(&UniqueIndex::operator>));
    // t0.method("<=", static_cast<bool (UniqueIndex::*)(int)  const>(&UniqueIndex::operator<=));
    types.unset_override_module();

    // t0.method("inc!", static_cast<const UniqueIndex & (UniqueIndex::*)() >(&UniqueIndex::operator++));
    // t0.method("inc!", static_cast<UniqueIndex (UniqueIndex::*)(int) >(&UniqueIndex::operator++));
    // t0.method("dec!", static_cast<const UniqueIndex & (UniqueIndex::*)() >(&UniqueIndex::operator--));
    // t0.method("dec!", static_cast<UniqueIndex (UniqueIndex::*)(int) >(&UniqueIndex::operator--));
    t0.method("next", static_cast<UniqueIndex (UniqueIndex::*)()  const>(&UniqueIndex::next));
    t0.method("prev", static_cast<UniqueIndex (UniqueIndex::*)()  const>(&UniqueIndex::prev));
    t0.method("add!", static_cast<UniqueIndex & (UniqueIndex::*)(int) >(&UniqueIndex::operator+=));
    t0.method("sub!", static_cast<UniqueIndex & (UniqueIndex::*)(int) >(&UniqueIndex::operator-=));
    // t0.method("Invalid", static_cast<const UniqueIndex & (*)() >(&UniqueIndex::Invalid));
    // t0.method("SimTK!AssemblyConditionIndex!max_size", static_cast<UniqueIndex::size_type (*)() >(&UniqueIndex::max_size));
  }
  
}

#endif // JLSIMTKCOMMON_UNIQUEINDEX_H
