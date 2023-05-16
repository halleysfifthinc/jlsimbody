SimTK::String;
SimTK::Stage;
std::mutex;
std::mutex & SimTK::State::getStateLock();
std::pair;

// SimTK::EventTriggerByStageIndex
// SimTK::SystemEventTriggerIndex
// SimTK::SystemEventTriggerByStageIndex
SimTK::PeriodicEventHandler
// using CacheEntryKey = std::pair<SubsystemIndex,CacheEntryIndex>;
bool SimTK::State::hasCacheEntry(const SimTK::CacheEntryKey &)
const SimTK::CacheEntryInfo & SimTK::State::getCacheEntryInfo(const SimTK::CacheEntryKey &)
SimTK::CacheEntryInfo & SimTK::State::updCacheEntryInfo(const SimTK::CacheEntryKey &)

