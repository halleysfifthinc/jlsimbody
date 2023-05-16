#include "SimTKcommon/Scalar.h"
#include "SimTKcommon/SmallMatrix.h"
#include "SimTKcommon/Orientation.h"
#include "SimTKcommon/internal/MassProperties.h"

namespace jlcxx {

  template<typename P>
  struct BuildParameterList<SimTK::Inertia_<P>>
  {
    typedef ParameterList<P> type;
  };

  template<typename P> struct IsMirroredType<SimTK::Inertia_<P>> : std::false_type { };
  template<typename P> struct DefaultConstructible<SimTK::Inertia_<P>> : std::false_type { };

  template<typename P>
  struct BuildParameterList<SimTK::MassProperties_<P>>
  {
    typedef ParameterList<P> type;
  };

  template<typename P> struct IsMirroredType<SimTK::MassProperties_<P>> : std::false_type { };
  template<typename P> struct DefaultConstructible<SimTK::MassProperties_<P>> : std::false_type { };
}

namespace jlsimbody {
  void define_SimTKcommon_MassProperties(jlcxx::Module& types);
}
