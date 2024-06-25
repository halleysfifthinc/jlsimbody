#ifndef _JLSIMTKCOMMON_STATE_H
#define _JLSIMTKCOMMON_STATE_H

#include "SimTKcommon/internal/State.h"
#include "SimTKcommon/internal/Event.h"
#include "jlSimTKcommon/Array.h"

namespace jlcxx {
  template<> struct IsMirroredType<SimTK::EventId> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::EventId> : std::false_type { };
  template<> struct IsMirroredType<SimTK::SystemEventTriggerIndex> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::SystemEventTriggerIndex> : std::false_type { };
  template<> struct IsMirroredType<SimTK::SystemEventTriggerByStageIndex> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::SystemEventTriggerByStageIndex> : std::false_type { };
  template<> struct IsMirroredType<SimTK::EventTriggerByStageIndex> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::EventTriggerByStageIndex> : std::false_type { };
  template<> struct IsMirroredType<SimTK::Event> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::Event> : std::false_type { };
  template<> struct IsMirroredType<SimTK::Event::Cause> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::Event::Cause> : std::false_type { };
  template<> struct IsMirroredType<SimTK::EventTriggerInfo> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::EventTriggerInfo> : std::false_type { };
  template<> struct IsMirroredType<SimTK::HandleEventsOptions> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::HandleEventsOptions> : std::false_type { };
  template<> struct IsMirroredType<SimTK::HandleEventsResults> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::HandleEventsResults> : std::false_type { };
  template<> struct IsMirroredType<SimTK::SubsystemIndex> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::SubsystemIndex> : std::false_type { };
  template<> struct IsMirroredType<SimTK::SystemYIndex> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::SystemYIndex> : std::false_type { };
  template<> struct IsMirroredType<SimTK::SystemQIndex> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::SystemQIndex> : std::false_type { };
  template<> struct IsMirroredType<SimTK::QIndex> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::QIndex> : std::false_type { };
  template<> struct IsMirroredType<SimTK::SystemUIndex> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::SystemUIndex> : std::false_type { };
  template<> struct IsMirroredType<SimTK::UIndex> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::UIndex> : std::false_type { };
  template<> struct IsMirroredType<SimTK::SystemZIndex> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::SystemZIndex> : std::false_type { };
  template<> struct IsMirroredType<SimTK::ZIndex> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::ZIndex> : std::false_type { };
  template<> struct IsMirroredType<SimTK::DiscreteVariableIndex> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::DiscreteVariableIndex> : std::false_type { };
  template<> struct IsMirroredType<SimTK::CacheEntryIndex> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::CacheEntryIndex> : std::false_type { };
  template<> struct IsMirroredType<SimTK::SystemYErrIndex> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::SystemYErrIndex> : std::false_type { };
  template<> struct IsMirroredType<SimTK::SystemQErrIndex> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::SystemQErrIndex> : std::false_type { };
  template<> struct IsMirroredType<SimTK::QErrIndex> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::QErrIndex> : std::false_type { };
  template<> struct IsMirroredType<SimTK::SystemUErrIndex> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::SystemUErrIndex> : std::false_type { };
  template<> struct IsMirroredType<SimTK::UErrIndex> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::UErrIndex> : std::false_type { };
  template<> struct IsMirroredType<SimTK::SystemUDotErrIndex> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::SystemUDotErrIndex> : std::false_type { };
  template<> struct IsMirroredType<SimTK::UDotErrIndex> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::UDotErrIndex> : std::false_type { };
  template<> struct IsMirroredType<SimTK::SystemMultiplierIndex> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::SystemMultiplierIndex> : std::false_type { };
  template<> struct IsMirroredType<SimTK::MultiplierIndex> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::MultiplierIndex> : std::false_type { };
  template<> struct IsMirroredType<SimTK::State> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::State> : std::false_type { };
  template<> struct IsMirroredType<SimTK::AbstractValue> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::AbstractValue> : std::false_type { };
  template<> struct IsMirroredType<SimTK::ListOfDependents> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::ListOfDependents> : std::false_type { };
  template<> struct IsMirroredType<SimTK::DiscreteVarInfo> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::DiscreteVarInfo> : std::false_type { };
  template<> struct IsMirroredType<SimTK::PerSubsystemInfo> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::PerSubsystemInfo> : std::false_type { };
}

namespace jlsimbody {
  JLSIMBODY_NO_EXPORT void define_SimTKcommon_State(jlcxx::Module& types, const ArrayWrapper& array_wrapper);
}

#endif // _JLSIMTKCOMMON_STATE_H
