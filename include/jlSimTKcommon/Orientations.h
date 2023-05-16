#include "SimTKcommon/internal/CompositeNumericalTypes.h"
#include "SimTKcommon/internal/ResultType.h"
#include "SimTKcommon/Scalar.h"
#include "SimTKcommon/internal/NTraits.h"
#include "SimTKcommon/internal/Quaternion.h"
#include "SimTKcommon/internal/Rotation.h"
#include "SimTKcommon/internal/Vec.h"
#include "SimTKcommon/internal/UnitVec.h"
#include "jlSimTKcommon/Array.h"

namespace jlcxx {

  template<typename P>
  struct BuildParameterList<SimTK::Quaternion_<P>>
  {
    typedef ParameterList<P> type;
  };

  template<typename P> struct IsMirroredType<SimTK::Quaternion_<P>> : std::false_type { };
  template<typename P> struct DefaultConstructible<SimTK::Quaternion_<P>> : std::false_type { };

  template<typename P>
  struct BuildParameterList<SimTK::Rotation_<P>>
  {
    typedef ParameterList<P> type;
  };

  template<typename P> struct IsMirroredType<SimTK::Rotation_<P>> : std::false_type { };
  template<typename P> struct DefaultConstructible<SimTK::Rotation_<P>> : std::false_type { };

  template<typename P>
  struct BuildParameterList<SimTK::InverseRotation_<P>>
  {
    typedef ParameterList<P> type;
  };

  template<typename P> struct IsMirroredType<SimTK::InverseRotation_<P>> : std::false_type { };
  template<typename P> struct DefaultConstructible<SimTK::InverseRotation_<P>> : std::false_type { };
}

namespace jlsimbody {
  void define_SimTKcommon_Orientations(jlcxx::Module& types, const ArrayWrapper& array_wrapper);
}
