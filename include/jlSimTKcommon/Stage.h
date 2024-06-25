#ifndef _JLSIMTKCOMMON_STAGE_H
#define _JLSIMTKCOMMON_STAGE_H

#include "SimTKcommon/internal/Stage.h"

namespace jlcxx {
  template<> struct IsMirroredType<SimTK::Stage> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::Stage> : std::false_type { };
  template<> struct IsMirroredType<SimTK::Exception::RealizeTopologyMustBeCalledFirst> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::Exception::RealizeTopologyMustBeCalledFirst> : std::false_type { };
  template<> struct IsMirroredType<SimTK::Exception::StateAndSystemTopologyVersionsMustMatch> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::Exception::StateAndSystemTopologyVersionsMustMatch> : std::false_type { };
  template<> struct IsMirroredType<SimTK::Exception::StageTooLow> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::Exception::StageTooLow> : std::false_type { };
  template<> struct IsMirroredType<SimTK::Exception::StageIsWrong> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::Exception::StageIsWrong> : std::false_type { };
  template<> struct IsMirroredType<SimTK::Exception::StageTooHigh> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::Exception::StageTooHigh> : std::false_type { };
  template<> struct IsMirroredType<SimTK::Exception::StageOutOfRange> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::Exception::StageOutOfRange> : std::false_type { };
  template<> struct IsMirroredType<SimTK::Exception::CacheEntryOutOfDate> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::Exception::CacheEntryOutOfDate> : std::false_type { };
  template<> struct IsMirroredType<SimTK::Exception::RealizeCheckFailed> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::Exception::RealizeCheckFailed> : std::false_type { };
}

namespace jlsimbody {
  JLSIMBODY_NO_EXPORT void define_SimTKcommon_Stage(jlcxx::Module& types);
}

#endif // _JLSIMTKCOMMON_STAGE_H
