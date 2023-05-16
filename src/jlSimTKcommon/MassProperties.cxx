// this file was auto-generated by wrapit v0.1.0-61-g71d8603-dirty
#include <type_traits>
#include "jlcxx/jlcxx.hpp"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

#include "jlSimTKcommon/MassProperties.h"

#ifdef VERBOSE_IMPORT
#  define DEBUG_MSG(a) std::cerr << a << "\n"
#else
#  define DEBUG_MSG(a)
#endif
#define __HERE__  __FILE__ ":" QUOTE2(__LINE__)
#define QUOTE(arg) #arg
#define QUOTE2(arg) QUOTE(arg)

namespace jlsimbody {

void define_SimTKcommon_MassProperties(jlcxx::Module& types){

  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/MassProperties.h:82:26
  auto t1 = types.add_type<jlcxx::Parametric<jlcxx::TypeVar<1>>>("SimTK!Inertia_");

  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/MassProperties.h:85:26
  auto t4 = types.add_type<jlcxx::Parametric<jlcxx::TypeVar<1>>>("SimTK!MassProperties_");

  /**********************************************************************/
  /* Wrappers for the methods of class SimTK::Inertia_
   */
  auto t1_decl_methods = []<typename P> (jlcxx::TypeWrapper<SimTK::Inertia_<P>> wrapped){
    typedef SimTK::Inertia_<P> WrappedType;
    typedef SimTK::Rotation_<P> Rotation;
    typedef SimTK::InverseRotation_<P> InverseRotation;
    wrapped.template constructor<>(/*finalize=*/true);
    wrapped.template constructor<const P &>(/*finalize=*/true);
    wrapped.template constructor<const SimTK::Vec<3,P>, const P &>(/*finalize=*/true);
    wrapped.template constructor<const SimTK::Vec<3,P>, const SimTK::Vec<3,P>>(/*finalize=*/true);
    // wrapped.template constructor<const SimTK::Vec<3,P>>(/*finalize=*/true); // Second argument has a default
    wrapped.template constructor<const P &, const P &, const P &>(/*finalize=*/true);
    wrapped.template constructor<const P &, const P &, const P &, const P &, const P &, const P &>(/*finalize=*/true);
    wrapped.template constructor<const SimTK::Mat<3,3,P> &>(/*finalize=*/true);

    wrapped.method("setInertia", static_cast<WrappedType & (WrappedType::*)(const SimTK::Vec<3,P> &, const SimTK::Vec<3,P> &) >(&WrappedType::setInertia));
    wrapped.method("setInertia", static_cast<WrappedType & (WrappedType::*)(const P &, const P &, const P &) >(&WrappedType::setInertia));
    wrapped.method("setInertia", static_cast<WrappedType & (WrappedType::*)(const P &, const P &, const P &, const P &, const P &, const P &) >(&WrappedType::setInertia));

    wrapped.method("add!", static_cast<WrappedType & (WrappedType::*)(const WrappedType &) >(&WrappedType::operator+=));
    wrapped.method("sub!", static_cast<WrappedType & (WrappedType::*)(const WrappedType &) >(&WrappedType::operator-=));
    wrapped.method("mult!", static_cast<WrappedType & (WrappedType::*)(const P &) >(&WrappedType::operator*=));
    wrapped.method("div!", static_cast<WrappedType & (WrappedType::*)(const P &) >(&WrappedType::operator/=));

    wrapped.method("shiftToMassCenter", static_cast<WrappedType (WrappedType::*)(const SimTK::Vec<3,P> &, const P &) const>(&WrappedType::shiftToMassCenter));
    wrapped.method("shiftToMassCenter!", static_cast<WrappedType & (WrappedType::*)(const SimTK::Vec<3,P> &, const P &) >(&WrappedType::shiftToMassCenterInPlace));
    wrapped.method("shiftFromMassCenter", static_cast<WrappedType (WrappedType::*)(const SimTK::Vec<3,P> &, const P &) const>(&WrappedType::shiftFromMassCenter));
    wrapped.method("shiftFromMassCenter!", static_cast<WrappedType & (WrappedType::*)(const SimTK::Vec<3,P> &, const P &) >(&WrappedType::shiftFromMassCenterInPlace));

    wrapped.method("reexpress", static_cast<WrappedType (WrappedType::*)(const Rotation &) const>(&WrappedType::reexpress));
    wrapped.method("reexpress", static_cast<WrappedType (WrappedType::*)(const InverseRotation &) const>(&WrappedType::reexpress));
    wrapped.method("reexpress!", static_cast<WrappedType & (WrappedType::*)(const Rotation &) >(&WrappedType::reexpressInPlace));
    wrapped.method("reexpress!", static_cast<WrappedType & (WrappedType::*)(const InverseRotation &) >(&WrappedType::reexpressInPlace));

    wrapped.method("trace", static_cast<P (WrappedType::*)() const>(&WrappedType::trace));

    wrapped.method("toMat33", static_cast<SimTK::Mat<3,3,P> (WrappedType::*)() const>(&WrappedType::toMat33));
    wrapped.method("getMoments", static_cast<const SimTK::Vec<3,P> & (WrappedType::*)() const>(&WrappedType::getMoments));
    wrapped.method("getProducts", static_cast<const SimTK::Vec<3,P> & (WrappedType::*)() const>(&WrappedType::getProducts));

    wrapped.method("isapprox", static_cast<bool (WrappedType::*)(const WrappedType &, P) const>(&WrappedType::isNumericallyEqual));

    wrapped.module().set_override_module(jl_base_module);

    wrapped.method("isnan", static_cast<bool (WrappedType::*)() const>(&WrappedType::isNaN));
    wrapped.method("isinf", static_cast<bool (WrappedType::*)() const>(&WrappedType::isInf));
    wrapped.method("isfinite", static_cast<bool (WrappedType::*)() const>(&WrappedType::isFinite));
    wrapped.method("isequal", static_cast<bool (WrappedType::*)(const WrappedType &) const>(&WrappedType::isNumericallyEqual));

    wrapped.module().unset_override_module();
  };
  t1.apply<SimTK::Inertia_<double>>(t1_decl_methods);

  types.set_override_module(jl_base_module);

  types.method("+", static_cast<SimTK::Inertia_<double> (*)(const SimTK::Inertia_<double> &, const SimTK::Inertia_<double> &) >(&SimTK::operator+));
  types.method("-", static_cast<SimTK::Inertia_<double> (*)(const SimTK::Inertia_<double> &, const SimTK::Inertia_<double> &) >(&SimTK::operator-));
  
  types.method("*", static_cast<SimTK::Inertia_<double> (*)(const SimTK::Inertia_<double> &, const double &) >(&SimTK::operator*));
  types.method("*", static_cast<SimTK::Vec<3,double> (*)(const SimTK::Inertia_<double> &, const SimTK::Vec<3,double> &) >(&SimTK::operator*));
  types.method("/", static_cast<SimTK::Inertia_<double> (*)(const SimTK::Inertia_<double> &, const double &) >(&SimTK::operator/));


  types.unset_override_module();

  types.method("pointMassAtOrigin", &SimTK::Inertia_<double>::pointMassAtOrigin);
  types.method("pointMassAt", &SimTK::Inertia_<double>::pointMassAt);

  types.method("sphere", &SimTK::Inertia_<double>::sphere);
  types.method("cylinderAlongZ", &SimTK::Inertia_<double>::cylinderAlongZ);
  types.method("cylinderAlongY", &SimTK::Inertia_<double>::cylinderAlongY);
  types.method("cylinderAlongX", &SimTK::Inertia_<double>::cylinderAlongX);

  types.method("brick", static_cast<SimTK::Inertia_<double> (*)(const double &, const double &, const double &)>(&SimTK::Inertia_<double>::brick));
  types.method("brick", static_cast<SimTK::Inertia_<double> (*)(const SimTK::Vec<3,double> &)>(&SimTK::Inertia_<double>::brick));

  types.method("ellipsoid", static_cast<SimTK::Inertia_<double> (*)(const double &, const double &, const double &)>(&SimTK::Inertia_<double>::ellipsoid));
  types.method("ellipsoid", static_cast<SimTK::Inertia_<double> (*)(const SimTK::Vec<3,double> &)>(&SimTK::Inertia_<double>::ellipsoid));

  /* End of SimTK::Inertia_ class method wrappers
   **********************************************************************/

  /**********************************************************************/
  /* Wrappers for the methods of class SimTK::MassProperties_
   */
  auto t4_decl_methods = []<typename P> (jlcxx::TypeWrapper<SimTK::MassProperties_<P>> wrapped){
    typedef SimTK::MassProperties_<P> WrappedType;
    typedef SimTK::Inertia_<P> Inertia;
    typedef SimTK::Transform_<P> Transform;
    typedef SimTK::Rotation_<P> Rotation;
    typedef SimTK::Vec<3,P> Vec3P;
    wrapped.template constructor<>(/*finalize=*/true);
    wrapped.template constructor<const P &, const Vec3P &, const Inertia &>(/*finalize=*/true);

    wrapped.method("setMassProperties", static_cast<WrappedType & (WrappedType::*)(const P &, const Vec3P &, const Inertia &) >(&WrappedType::setMassProperties));
    wrapped.method("getMass", static_cast<const P & (WrappedType::*)() const>(&WrappedType::getMass));
    wrapped.method("getMassCenter", static_cast<const Vec3P & (WrappedType::*)() const>(&WrappedType::getMassCenter));
    wrapped.method("calcInertia", static_cast<const Inertia (WrappedType::*)() const>(&WrappedType::calcInertia));

    wrapped.method("calcCentralInertia", static_cast<Inertia (WrappedType::*)() const>(&WrappedType::calcCentralInertia));
    wrapped.method("calcShiftedInertia", static_cast<Inertia (WrappedType::*)(const Vec3P &) const>(&WrappedType::calcShiftedInertia));
    wrapped.method("calcTransformedInertia", static_cast<Inertia (WrappedType::*)(const Transform &) const>(&WrappedType::calcTransformedInertia));

    wrapped.method("calcShiftedMassProps", static_cast<WrappedType (WrappedType::*)(const Vec3P &) const>(&WrappedType::calcShiftedMassProps));
    wrapped.method("calcTransformedMassProps", static_cast<WrappedType (WrappedType::*)(const Transform &) const>(&WrappedType::calcTransformedMassProps));

    wrapped.method("reexpress", static_cast<WrappedType (WrappedType::*)(const Rotation &) const>(&WrappedType::reexpress));

    wrapped.method("isExactlyMassless", static_cast<bool (WrappedType::*)() const>(&WrappedType::isExactlyMassless));
    wrapped.method("isNearlyMassless", static_cast<bool (WrappedType::*)(const P &) const>(&WrappedType::isNearlyMassless));
    wrapped.method("isExactlyCentral", static_cast<bool (WrappedType::*)() const>(&WrappedType::isExactlyCentral));
    wrapped.method("isNearlyCentral", static_cast<bool (WrappedType::*)(const P &) const>(&WrappedType::isNearlyCentral));

    wrapped.module().set_override_module(jl_base_module);

    wrapped.method("isnan", static_cast<bool (WrappedType::*)() const>(&WrappedType::isNaN));
    wrapped.method("isinf", static_cast<bool (WrappedType::*)() const>(&WrappedType::isInf));
    wrapped.method("isfinite", static_cast<bool (WrappedType::*)() const>(&WrappedType::isFinite));

    wrapped.module().unset_override_module();

    wrapped.method("toSpatialMat", static_cast<SimTK::Mat<2,2,SimTK::Mat<3,3,P>> (WrappedType::*)() const>(&WrappedType::toSpatialMat));
    wrapped.method("toMat66", static_cast<SimTK::Mat<6,6,P> (WrappedType::*)() const>(&WrappedType::toMat66));

  };
  t4.apply<SimTK::MassProperties_<double>>(t4_decl_methods);

  /* End of SimTK::MassProperties_ class method wrappers
   **********************************************************************/
  DEBUG_MSG("End of wrapper definitions");

}
}
