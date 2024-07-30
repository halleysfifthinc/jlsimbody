// this file was auto-generated by wrapit v1.3.3
#include "jlsimbody/common.h"

#include "jlsimbody/Constraints.h"

namespace jlcxx {
  template<> struct IsMirroredType<SimTK::Constraint::SpeedCoupler> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::Constraint::SpeedCoupler> : std::false_type { };
  template<> struct SuperType<SimTK::Constraint::SpeedCoupler> { typedef SimTK::Constraint::Custom type; };
}

namespace jlsimbody {

// Class generating the wrapper for type SimTK::Constraint::SpeedCoupler
struct JlSimTK_Constraint_SpeedCoupler: public Wrapper {

  JlSimTK_Constraint_SpeedCoupler(jlcxx::Module& module): Wrapper(module){
    DEBUG_MSG("type SimTK::Constraint::SpeedCoupler (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint.h:2072:40
    auto t = module.add_type<SimTK::Constraint::SpeedCoupler>(
      "SpeedCouplerConstraint",
      jlcxx::julia_base_type<SimTK::Constraint::Custom>());
    CLEAR_DEBUG_MSG();

    type_ = std::unique_ptr<jlcxx::TypeWrapper<SimTK::Constraint::SpeedCoupler>>(new jlcxx::TypeWrapper<SimTK::Constraint::SpeedCoupler>(module, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>();

    #ifdef JLSIMBODY_USE_SIMTK_UNIQUEINDEX_TYPES
    DEBUG_MSG("void SimTK::Constraint::SpeedCoupler::SpeedCoupler(SimTK::SimbodyMatterSubsystem &, const SimTK::Function *, const SimTK::Array_<SimTK::MobilizedBodyIndex> &, const SimTK::Array_<SimTK::MobilizerUIndex> &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint.h:2092:5
    t.constructor<SimTK::SimbodyMatterSubsystem &, const SimTK::Function *, const SimTK::Array_<SimTK::MobilizedBodyIndex> &, const SimTK::Array_<SimTK::MobilizerUIndex> &>();
    CLEAR_DEBUG_MSG();
    #else
    DEBUG_MSG("void SimTK::Constraint::SpeedCoupler::SpeedCoupler(SimTK::SimbodyMatterSubsystem &, const SimTK::Function *, const SimTK::Array_<SimTK::MobilizedBodyIndex> &, const SimTK::Array_<SimTK::MobilizerUIndex> &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint.h:2092:5
    t.constructor([] (
        SimTK::SimbodyMatterSubsystem & matter,
        const SimTK::Function * function,
        const SimTK::Array_<int> & speedBody,
        const SimTK::Array_<int> & speedIndex) {
      return new SimTK::Constraint::SpeedCoupler(
        matter,
        function,
        reinterpret_cast<const SimTK::Array_<SimTK::MobilizedBodyIndex> &>(speedBody),
        reinterpret_cast<const SimTK::Array_<SimTK::MobilizerUIndex> &>(speedIndex));
    });
    CLEAR_DEBUG_MSG();
    #endif

    #ifdef JLSIMBODY_USE_SIMTK_UNIQUEINDEX_TYPES
    DEBUG_MSG("void SimTK::Constraint::SpeedCoupler::SpeedCoupler(SimTK::SimbodyMatterSubsystem &, const SimTK::Function *, const SimTK::Array_<SimTK::MobilizedBodyIndex> &, const SimTK::Array_<SimTK::MobilizerUIndex> &, const SimTK::Array_<SimTK::MobilizedBodyIndex> &, const SimTK::Array_<SimTK::MobilizerQIndex> &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint.h:2136:5
    t.constructor<SimTK::SimbodyMatterSubsystem &, const SimTK::Function *, const SimTK::Array_<SimTK::MobilizedBodyIndex> &, const SimTK::Array_<SimTK::MobilizerUIndex> &, const SimTK::Array_<SimTK::MobilizedBodyIndex> &, const SimTK::Array_<SimTK::MobilizerQIndex> &>();
    CLEAR_DEBUG_MSG();
    #else
    DEBUG_MSG("void SimTK::Constraint::SpeedCoupler::SpeedCoupler(SimTK::SimbodyMatterSubsystem &, const SimTK::Function *, const SimTK::Array_<SimTK::MobilizedBodyIndex> &, const SimTK::Array_<SimTK::MobilizerUIndex> &, const SimTK::Array_<SimTK::MobilizedBodyIndex> &, const SimTK::Array_<SimTK::MobilizerQIndex> &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/Constraint.h:2136:5
    t.constructor([] (
        SimTK::SimbodyMatterSubsystem & matter,
        const SimTK::Function * function,
        const SimTK::Array_<int> & speedBody,
        const SimTK::Array_<int> & speedIndex,
        const SimTK::Array_<int> & coordBody,
        const SimTK::Array_<int> & coordIndex) {
      return new SimTK::Constraint::SpeedCoupler(
        matter,
        function,
        reinterpret_cast<const SimTK::Array_<SimTK::MobilizedBodyIndex> &>(speedBody),
        reinterpret_cast<const SimTK::Array_<SimTK::MobilizerUIndex> &>(speedIndex),
        reinterpret_cast<const SimTK::Array_<SimTK::MobilizedBodyIndex> &>(coordBody),
        reinterpret_cast<const SimTK::Array_<SimTK::MobilizerQIndex> &>(coordIndex));
    });
    CLEAR_DEBUG_MSG();
    #endif

    // TODO: Missing DERIVED_HANDLE_DECLARATIONS
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<SimTK::Constraint::SpeedCoupler>> type_;
};
std::shared_ptr<Wrapper> newJlSimTK_Constraint_SpeedCoupler(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlSimTK_Constraint_SpeedCoupler(module));
}

}