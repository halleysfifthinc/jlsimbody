#include "SimTKcommon/internal/Subsystem.h"
#include "SimTKcommon/internal/State.h"
#include "SimTKcommon/internal/Vec.h"
#include "SimTKcommon/internal/Vector_.h"
#include "simbody/internal/MobilizedBody.h"
#include "simbody/internal/SimbodyMatterSubsystem.h"
#include "simbody/internal/ForceSubsystem.h"
#include "simbody/internal/DecorationSubsystem.h"
#include "simbody/internal/GeneralContactSubsystem.h"
#include "simbody/internal/MultibodySystem.h"

namespace jlcxx {
  template<> struct IsMirroredType<SimTK::MultibodySystem> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::MultibodySystem> : std::false_type { };
  template<> struct SuperType<SimTK::MultibodySystem> { typedef SimTK::System type; };
}

namespace jlsimbody{
  void define_simbody_MultibodySystem(jlcxx::Module& types);
}