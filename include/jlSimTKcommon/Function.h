#ifndef _JLSIMTKCOMMON_FUNCTION_H
#define _JLSIMTKCOMMON_FUNCTION_H

#include "SimTKcommon/internal/Function.h"
#include "jlSimTKcommon/Array.h"

namespace SimTK {
  template<typename T>
  class Function_Constant_ : public SimTK::Function_<T>::Constant { };
  template<typename T>
  class Function_Linear_ : public SimTK::Function_<T>::Linear { };
  template<typename T>
  class Function_Polynomial_ : public SimTK::Function_<T>::Polynomial { };
  template<typename T>
  class Function_Sinusoid_ : public SimTK::Function_<T>::Sinusoid { };
  template<typename T>
  class Function_Step_ : public SimTK::Function_<T>::Step { };

}

namespace jlcxx {
  template<typename T> struct IsMirroredType<SimTK::Function_<T>> : std::false_type { };
  template<typename T> struct DefaultConstructible<SimTK::Function_<T>> : std::false_type { };
  template<typename T> struct IsMirroredType<SimTK::Function_Constant_<T>> : std::false_type { };
  template<typename T> struct DefaultConstructible<SimTK::Function_Constant_<T>> : std::false_type { };
  template<typename T> struct IsMirroredType<SimTK::Function_Linear_<T>> : std::false_type { };
  template<typename T> struct DefaultConstructible<SimTK::Function_Linear_<T>> : std::false_type { };
  template<typename T> struct IsMirroredType<SimTK::Function_Polynomial_<T>> : std::false_type { };
  template<typename T> struct DefaultConstructible<SimTK::Function_Polynomial_<T>> : std::false_type { };
  template<typename T> struct IsMirroredType<SimTK::Function_Sinusoid_<T>> : std::false_type { };
  template<typename T> struct DefaultConstructible<SimTK::Function_Sinusoid_<T>> : std::false_type { };
  template<typename T> struct IsMirroredType<SimTK::Function_Step_<T>> : std::false_type { };
  template<typename T> struct DefaultConstructible<SimTK::Function_Step_<T>> : std::false_type { };
}

namespace jlsimbody {
  JLSIMBODY_NO_EXPORT void define_SimTKcommon_Function(jlcxx::Module& types, const ArrayWrapper & array_wrapper);
}

#endif // _JLSIMTKCOMMON_FUNCTION_H
