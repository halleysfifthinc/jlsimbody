#ifndef _JLSIMTKCOMMON_STRING_H
#define _JLSIMTKCOMMON_STRING_H

#include "SimTKcommon/internal/String.h"
#include "jlSimTKcommon/Array.h"

namespace jlcxx {
  template<> struct IsMirroredType<SimTK::String> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::String> : std::false_type { };
  template<> struct SuperType<SimTK::String> { typedef std::string type; };
}

namespace jlsimbody {
  JLSIMBODY_NO_EXPORT void define_SimTKcommon_String(jlcxx::Module& types, const ArrayWrapper& wraparray);
}

#endif // _JLSIMTKCOMMON_STRING_H
