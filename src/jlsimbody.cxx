#include <type_traits>
#include "jlcxx/jlcxx.hpp"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

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
#include "jlsimmath/Contact_related.h"


using namespace jlsimbody;

JLCXX_MODULE define_julia_module(jlcxx::Module& types){
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Array.h:845:35
  auto t8 = types.add_type<jlcxx::Parametric<jlcxx::TypeVar<1>,jlcxx::TypeVar<2>>>("SimTK!ArrayView_");

  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Array.h:1520:35
  auto t9 = types.add_type<jlcxx::Parametric<jlcxx::TypeVar<1>,jlcxx::TypeVar<2>>>("SimTK!Array_");

  auto array_wrapper = ArrayWrapper(t9, t8);

  using array_types = jlcxx::ParameterList<bool, double, int, SimTK::Array_<int>>;
  jlcxx::for_each_parameter_type<array_types>(array_wrapper);

  define_SimTKcommon_String(types, array_wrapper);
  define_SimTKcommon_Row(types);
  define_SimTKcommon_Vec(types, array_wrapper);
  define_SimTKcommon_Mat(types);
  define_SimTKcommon_CoordinateAxis(types);
  define_SimTKcommon_UnitVec(types);
  define_SimTKcommon_Orientations(types, array_wrapper);
  define_SimTKcommon_Transform(types, array_wrapper);
  define_SimTKcommon_SpatialAlgebra(types);
  define_SimTKcommon_MassProperties(types);
  define_SimTKcommon_MatrixVector(types);
  define_SimTKcommon_Decorations(types, array_wrapper);
  define_SimTKcommon_Stage(types);
  define_SimTKcommon_State(types, array_wrapper);
  define_SimTKcommon_Events(types, array_wrapper);

  // DEBUG_MSG("Adding wrapper for type SimTK::MeasureIndex (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Measure.h:133:32
  auto meas_ind = types.add_type<SimTK::MeasureIndex>("SimTK!MeasureIndex");
  meas_ind.template constructor<>(/*finalize=*/true);

  // DEBUG_MSG("Adding wrapper for type SimTK::AbstractMeasure (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Measure.h:151:32
  auto abs_meas = types.add_type<SimTK::AbstractMeasure>("SimTK!AbstractMeasure");
  abs_meas.template constructor<>(/*finalize=*/true);

  define_SimTKcommon_SystemSubsystem(types);
  define_SimTKcommon_Measure(types, meas_ind, abs_meas, array_wrapper);
  define_SimTKcommon_Function(types);

  define_simbody_Geo(types);
  define_simbody_Contact_related(types);
}
