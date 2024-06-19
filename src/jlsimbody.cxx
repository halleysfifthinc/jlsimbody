#include <type_traits>
#include "jlcxx/jlcxx.hpp"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

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
#include "jlsimbody/SimbodyMatterSubsystem.h"
#include "jlsimbody/DecorationSubsystem.h"
#include "jlsimbody/ContactTrackerSubsystem.h"
#include "jlsimbody/CableTrackerSubsystem.h"
#include "jlsimbody/Force.h"
#include "jlsimbody/ForceSubsystems.h"
#include "jlsimbody/MultibodySystem.h"
#include "jlsimbody/Assembler_and_related.h"

using namespace jlsimbody;

JLCXX_MODULE define_julia_module(jlcxx::Module& types){
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Array.h:845:35
  auto arrview = types.add_type<jlcxx::Parametric<jlcxx::TypeVar<1>,jlcxx::TypeVar<2>>,
    jlcxx::ParameterList<jlcxx::TypeVar<1>>>("SimTKArrayView", jlcxx::julia_type("AbstractVector"));

  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Array.h:1520:35
  auto arr = types.add_type<jlcxx::Parametric<jlcxx::TypeVar<1>,jlcxx::TypeVar<2>>,
    jlcxx::ParameterList<jlcxx::TypeVar<1>>>("SimTKArray", jlcxx::julia_type("AbstractVector"));

  auto array_wrapper = ArrayWrapper(arr, arrview);
  using array_types = jlcxx::ParameterList<bool, double, int, SimTK::Array_<int>>;
  jlcxx::for_each_parameter_type<array_types>(array_wrapper);
  array_wrapper.template apply<double, int>();

  define_SimTKcommon_String(types, array_wrapper);
  define_SimTKcommon_Row(types);
  define_SimTKcommon_Vec(types, array_wrapper);
  define_SimTKcommon_Mat(types);
  define_SimTKcommon_CoordinateAxis(types);
  define_SimTKcommon_UnitVec(types);
  define_SimTKcommon_Orientations(types, array_wrapper);
  define_SimTKcommon_Transform(types, array_wrapper);
  define_SimTKcommon_SpatialAlgebra(types);
  define_SimTKcommon_MassProperties(types, array_wrapper);
  define_SimTKcommon_MatrixVector(types);
  define_SimTKcommon_Decorations(types, array_wrapper);
  define_SimTKcommon_Stage(types);
  define_SimTKcommon_State(types, array_wrapper);
  define_SimTKcommon_Events(types, array_wrapper);

  wrap_SimTK_UniqueIndexType<SimTK::MeasureIndex>(types, "SimTK!MeasureIndex");

  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Measure.h:151:32
  auto abs_meas = types.add_type<SimTK::AbstractMeasure>("SimTK!AbstractMeasure");
  abs_meas.template constructor<>();

  define_SimTKcommon_SystemSubsystem(types);
  define_SimTKcommon_Measure(types, abs_meas, array_wrapper);
  define_SimTKcommon_Function(types, array_wrapper);

  define_simmath_Geo(types);
  define_SimTKcommon_DecorationGenerator(types);
  define_simmath_Contact_related(types, array_wrapper);
  define_simbody_Body(types);
  define_simbody_SimbodyMatterSubsystem(types, array_wrapper);
  define_simbody_DecorationSubsystem(types);
  define_simbody_ContactTrackerSubsystem(types);
  define_simbody_CableTrackerSubsystem(types);
  define_simbody_Force(types);
  define_simbody_ForceSubsystems(types, array_wrapper);
  define_simbody_MultibodySystem(types);
  define_simbody_Assembler_and_related(types, array_wrapper);
}
