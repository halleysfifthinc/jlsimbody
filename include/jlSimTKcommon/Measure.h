#ifndef _JLSIMTKCOMMON_MEASURE_H
#define _JLSIMTKCOMMON_MEASURE_H

#include "SimTKcommon/internal/Measure.h"
#include "SimTKcommon/internal/MeasureImplementation.h"
#include "jlSimTKcommon/Array.h"

namespace SimTK {
  template<typename T>
  class Measure_Constant_ : public SimTK::Measure_<T>::Constant { };

  template<typename T>
  class Measure_Zero_ : public SimTK::Measure_<T>::Zero { };

  template<typename T>
  class Measure_One_ : public SimTK::Measure_<T>::One { };

  template<typename T>
  class Measure_Time_ : public SimTK::Measure_<T>::Time { };

  template<typename T>
  class Measure_Variable_ : public SimTK::Measure_<T>::Variable { };

  template<typename T>
  class Measure_Result_ : public SimTK::Measure_<T>::Result { };

  template<typename T>
  class Measure_Sinusoid_ : public SimTK::Measure_<T>::Sinusoid { };

  template<typename T>
  class Measure_Plus_ : public SimTK::Measure_<T>::Plus { };

  template<typename T>
  class Measure_Minus_ : public SimTK::Measure_<T>::Minus { };

  template<typename T>
  class Measure_Scale_ : public SimTK::Measure_<T>::Scale { };

  template<typename T>
  class Measure_Integrate_ : public SimTK::Measure_<T>::Integrate { };

  template<typename T>
  class Measure_Differentiate_ : public SimTK::Measure_<T>::Differentiate { };

  template<typename T>
  class Measure_Extreme_ : public SimTK::Measure_<T>::Extreme { };

  template<typename T>
  class Measure_Minimum_ : public SimTK::Measure_<T>::Minimum { };

  template<typename T>
  class Measure_Maximum_ : public SimTK::Measure_<T>::Maximum { };

  template<typename T>
  class Measure_MaxAbs_ : public SimTK::Measure_<T>::MaxAbs { };

  template<typename T>
  class Measure_MinAbs_ : public SimTK::Measure_<T>::MinAbs { };

}

namespace jlcxx {
  template<> struct IsMirroredType<SimTK::AbstractMeasure> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::AbstractMeasure> : std::false_type { };

  template<typename T> struct IsMirroredType<SimTK::Measure_<T>> : std::false_type { };
  template<typename T> struct DefaultConstructible<SimTK::Measure_<T>> : std::false_type { };

  template<typename T> struct IsMirroredType<SimTK::Measure_Constant_<T>> : std::false_type { };
  template<typename T> struct DefaultConstructible<SimTK::Measure_Constant_<T>> : std::false_type { };

  template<typename T> struct IsMirroredType<SimTK::Measure_Zero_<T>> : std::false_type { };
  template<typename T> struct DefaultConstructible<SimTK::Measure_Zero_<T>> : std::false_type { };

  template<typename T> struct IsMirroredType<SimTK::Measure_One_<T>> : std::false_type { };
  template<typename T> struct DefaultConstructible<SimTK::Measure_One_<T>> : std::false_type { };

  template<typename T> struct IsMirroredType<SimTK::Measure_Time_<T>> : std::false_type { };
  template<typename T> struct DefaultConstructible<SimTK::Measure_Time_<T>> : std::false_type { };

  template<typename T> struct IsMirroredType<SimTK::Measure_Variable_<T>> : std::false_type { };
  template<typename T> struct DefaultConstructible<SimTK::Measure_Variable_<T>> : std::false_type { };

  template<typename T> struct IsMirroredType<SimTK::Measure_Result_<T>> : std::false_type { };
  template<typename T> struct DefaultConstructible<SimTK::Measure_Result_<T>> : std::false_type { };

  template<typename T> struct IsMirroredType<SimTK::Measure_Sinusoid_<T>> : std::false_type { };
  template<typename T> struct DefaultConstructible<SimTK::Measure_Sinusoid_<T>> : std::false_type { };

  template<typename T> struct IsMirroredType<SimTK::Measure_Plus_<T>> : std::false_type { };
  template<typename T> struct DefaultConstructible<SimTK::Measure_Plus_<T>> : std::false_type { };

  template<typename T> struct IsMirroredType<SimTK::Measure_Minus_<T>> : std::false_type { };
  template<typename T> struct DefaultConstructible<SimTK::Measure_Minus_<T>> : std::false_type { };

  template<typename T> struct IsMirroredType<SimTK::Measure_Scale_<T>> : std::false_type { };
  template<typename T> struct DefaultConstructible<SimTK::Measure_Scale_<T>> : std::false_type { };

  template<typename T> struct IsMirroredType<SimTK::Measure_Integrate_<T>> : std::false_type { };
  template<typename T> struct DefaultConstructible<SimTK::Measure_Integrate_<T>> : std::false_type { };

  template<typename T> struct IsMirroredType<SimTK::Measure_Differentiate_<T>> : std::false_type { };
  template<typename T> struct DefaultConstructible<SimTK::Measure_Differentiate_<T>> : std::false_type { };

  template<typename T> struct IsMirroredType<SimTK::Measure_Extreme_<T>> : std::false_type { };
  template<typename T> struct DefaultConstructible<SimTK::Measure_Extreme_<T>> : std::false_type { };

  template<typename T> struct IsMirroredType<SimTK::Measure_Minimum_<T>> : std::false_type { };
  template<typename T> struct DefaultConstructible<SimTK::Measure_Minimum_<T>> : std::false_type { };

  template<typename T> struct IsMirroredType<SimTK::Measure_Maximum_<T>> : std::false_type { };
  template<typename T> struct DefaultConstructible<SimTK::Measure_Maximum_<T>> : std::false_type { };

  template<typename T> struct IsMirroredType<SimTK::Measure_MaxAbs_<T>> : std::false_type { };
  template<typename T> struct DefaultConstructible<SimTK::Measure_MaxAbs_<T>> : std::false_type { };

  template<typename T> struct IsMirroredType<SimTK::Measure_MinAbs_<T>> : std::false_type { };
  template<typename T> struct DefaultConstructible<SimTK::Measure_MinAbs_<T>> : std::false_type { };

  template<typename T> struct SuperType<SimTK::Measure_<T>> { typedef SimTK::AbstractMeasure type; };
  template<typename T> struct SuperType<SimTK::Measure_Constant_<T>> { typedef SimTK::Measure_<T> type; };

  // Errors for some reason, and seems to work with out? (compiles at least)
  // template<typename T> struct SuperType<SimTK::Measure_Zero_<T>> { typedef SimTK::Measure_Constant_<T> type; };
  // template<typename T> struct SuperType<SimTK::Measure_One_<T>> { typedef SimTK::Measure_Constant_<T> type; };

  #ifdef JLSIMBODY_USE_SIMTK_UNIQUEINDEX_TYPES
  template<> struct IsMirroredType<SimTK::MeasureIndex> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::MeasureIndex> : std::false_type { };
  #endif
}

namespace jlsimbody {
  JLSIMBODY_NO_EXPORT void define_SimTKcommon_Measure(jlcxx::Module& types, jlcxx::TypeWrapper<SimTK::AbstractMeasure>& t1, const ArrayWrapper& array_wrapper);
}

#endif // _JLSIMTKCOMMON_MEASURE_H
