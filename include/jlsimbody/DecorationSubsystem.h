#include "SimTKcommon/internal/DecorativeGeometry.h"
#include "SimTKcommon/internal/Transform.h"
#include "SimTKcommon/internal/Vec.h"
#include "SimTKcommon/internal/DecorationGenerator.h"
#include "SimTKcommon/internal/Subsystem.h"
#include "simbody/internal/common.h"
#include "simbody/internal/DecorationSubsystem.h"

namespace jlcxx {
  template<> struct IsMirroredType<SimTK::DecorationSubsystem> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::DecorationSubsystem> : std::false_type { };

  template<> struct SuperType<SimTK::DecorationSubsystem> { typedef SimTK::Subsystem type; };
}

namespace jlsimbody{
  void define_simbody_DecorationSubsystem(jlcxx::Module& types);
}
