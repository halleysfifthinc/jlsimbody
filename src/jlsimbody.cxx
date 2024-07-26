#include "jlsimbody/common.h"

#include "jlSimTKcommon/SimTK_UniqueIndex.h"
#include "jlSimTKcommon/Array.h"
#include "jlSimTKcommon/String.h"
#include "jlSimTKcommon/Row.h"
#include "jlSimTKcommon/Vec.h"
#include "jlSimTKcommon/Mat.h"
#include "jlSimTKcommon/CoordinateAxis.h"
#include "jlSimTKcommon/UnitVec.h"
#include "jlSimTKcommon/Orientations.h"
#include "jlSimTKcommon/Transform.h"
#include "jlSimTKcommon/SpatialAlgebra.h"
#include "jlSimTKcommon/MassProperties.h"
#include "jlSimTKcommon/MatrixVector.h"
#include "jlSimTKcommon/Decorations.h"
#include "jlSimTKcommon/Stage.h"
#include "jlSimTKcommon/State.h"
#include "jlSimTKcommon/Events.h"
#include "jlSimTKcommon/Measure.h"
#include "jlSimTKcommon/SystemSubsystem.h"
#include "jlSimTKcommon/Function.h"

#include "jlsimmath/Geo.h"
#include "jlSimTKcommon/DecorationGenerator.h"
#include "jlsimmath/Contact_related.h"

#include "jlsimbody/Body.h"
#include "jlsimbody/MobilizedBodies.h"
#include "jlsimbody/SimbodyMatterSubsystem.h"
#include "jlsimbody/DecorationSubsystem.h"
#include "jlsimbody/ContactTrackerSubsystem.h"
#include "jlsimbody/CableTrackerSubsystem.h"
#include "jlsimbody/Force.h"
#include "jlsimbody/ForceSubsystems.h"
#include "jlsimbody/MultibodySystem.h"
#include "jlsimbody/Assembler_and_related.h"
#include "jlsimmath/Timestepper_and_Integrators.h"
#include "jlsimmath/Optimizers.h"
#include "jlsimbody/TextDataEventReporter.h"

using namespace jlsimbody;

JLCXX_MODULE define_julia_module(jlcxx::Module& types){

  JuliaRealUserFunction::m_simbody_mod = types.julia_module();
  JuliaVectorUserFunction::m_simbody_mod = types.julia_module();

  DEBUG_MSG("type SimTK::SimTKArrayView (" __HERE__ ")");
  // defined in SimTKcommon/internal/Array.h:845:35
  auto arrview = types.add_type<jlcxx::Parametric<jlcxx::TypeVar<1>,jlcxx::TypeVar<2>>,
    jlcxx::ParameterList<jlcxx::TypeVar<1>>>("SimTKArrayView", jlcxx::julia_type("AbstractVector"));
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("type SimTK::SimTKArray (" __HERE__ ")");
  // defined in SimTKcommon/internal/Array.h:1520:35
  auto arr = types.add_type<jlcxx::Parametric<jlcxx::TypeVar<1>,jlcxx::TypeVar<2>>,
    jlcxx::ParameterList<jlcxx::TypeVar<1>>>("SimTKArray", jlcxx::julia_type("AbstractVector"));
  CLEAR_DEBUG_MSG();

  auto array_wrapper = ArrayWrapper(arr, arrview);

  DEBUG_MSG("Instantiating wrappers for SimTK::SimTKArray element types (" __HERE__ ")");
  using array_types = jlcxx::ParameterList<bool, double, int, SimTK::Array_<int>>;
  jlcxx::for_each_parameter_type<array_types>(array_wrapper);
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("Instantiating wrappers for SimTK::SimTKArray<double,int> (" __HERE__ ")");
  array_wrapper.template apply<double, int>();
  CLEAR_DEBUG_MSG();

  define_SimTKcommon_String(types, array_wrapper);
  define_SimTKcommon_Row(types);

  // defined in SimTKcommon/internal/Vec.h:184:7
  auto vec = types.add_type<jlcxx::Parametric<jlcxx::TypeVar<1>, jlcxx::TypeVar<2>, jlcxx::TypeVar<3>>,
    jlcxx::ParameterList<jlcxx::TypeVar<2>>>("SimTKVec", jlcxx::julia_type("AbstractVector"));
  define_SimTKcommon_Vec(types, vec, array_wrapper);

  define_SimTKcommon_Mat(types);
  define_SimTKcommon_CoordinateAxis(types);
  define_SimTKcommon_UnitVec(types, vec);
  define_SimTKcommon_Orientations(types, vec, array_wrapper);
  define_SimTKcommon_Transform(types, array_wrapper);
  define_SimTKcommon_SpatialAlgebra(types);
  define_SimTKcommon_MassProperties(types, array_wrapper);
  define_SimTKcommon_MatrixVector(types);
  define_SimTKcommon_Decorations(types, array_wrapper);
  define_SimTKcommon_Stage(types);
  define_SimTKcommon_State(types, array_wrapper);
  define_SimTKcommon_Events(types, array_wrapper);

  #ifdef JLSIMBODY_USE_SIMTK_UNIQUEINDEX_TYPES
  wrap_SimTK_UniqueIndexType<SimTK::MeasureIndex>(types, "MeasureIndex");
  #endif

  // defined in SimTKcommon/internal/Measure.h:151:32
  auto abs_meas = types.add_type<SimTK::AbstractMeasure>("AbstractMeasure");
  abs_meas.template constructor<>();

  define_SimTKcommon_SystemSubsystem(types);
  define_simbody_TextDataEventReporter_JuliaUserFunctions(types);
  define_SimTKcommon_Measure(types, abs_meas, array_wrapper);
  define_SimTKcommon_Function(types, array_wrapper);

  define_simmath_Geo(types);
  define_SimTKcommon_DecorationGenerator(types);
  define_simmath_Contact_related(types, array_wrapper);
  define_simbody_Body(types);

  DEBUG_MSG("type SimTK::SimbodyMatterSubsystem (" __HERE__ ")");
  // defined in simbody/internal/SimbodyMatterSubsystem.h:133:28
  auto mattersubsys = types.add_type<SimTK::SimbodyMatterSubsystem>("SimbodyMatterSubsystem", jlcxx::julia_base_type<SimTK::Subsystem>());
  mattersubsys.template constructor<>();
  CLEAR_DEBUG_MSG();

  DEBUG_MSG("type SimTK::MultibodySystem (" __HERE__ ")");
  // defined in simbody/internal/MultibodySystem.h:48:28
  auto multibod = types.add_type<SimTK::MultibodySystem>("MultibodySystem", jlcxx::julia_base_type<SimTK::System>());
  multibod.template constructor<>();
  CLEAR_DEBUG_MSG();

  define_simbody_MobilizedBodies(types, array_wrapper);
  define_simbody_SimbodyMatterSubsystem(types, mattersubsys, array_wrapper);
  define_simbody_DecorationSubsystem(types);
  define_simbody_ContactTrackerSubsystem(types);
  define_simbody_CableTrackerSubsystem(types);
  define_simbody_Force(types);
  define_simbody_ForceSubsystems(types, array_wrapper);
  define_simbody_MultibodySystem(types, multibod);
  define_simbody_Assembler_and_related(types, array_wrapper);
  define_simmath_Timestepper_and_Integrators(types);
  define_simmath_Optimizers(types);
}
