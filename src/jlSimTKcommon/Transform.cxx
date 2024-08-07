// this file was auto-generated by wrapit v0.1.0-61-g71d8603-dirty
#include "jlsimbody/common.h"

#include "jlSimTKcommon/Array.h"
#include "jlSimTKcommon/Transform.h"

namespace jlsimbody {

void define_SimTKcommon_Transform(jlcxx::Module& types, const ArrayWrapper& array_wrapper){

  auto t1 = types.add_type<SimTK::Transform_<double>>("Transform");
  typedef SimTK::Transform_<double> Transform;

  auto t2 = types.add_type<SimTK::InverseTransform_<double>>("InverseTransform");
  typedef SimTK::InverseTransform_<double> InverseTransform;

  /**********************************************************************/
  /* Wrappers for the methods of class SimTK::InverseTransform_
   */
  t2.constructor<>();

  t2.method("set!", static_cast<InverseTransform & (InverseTransform::*)(const InverseTransform &) >(&InverseTransform::operator=));
  t2.method("castAsTransform", [] (const InverseTransform &it) -> Transform { return it; });

  t2.method("invert", &InverseTransform::invert);
  t2.method("updInvert!", &InverseTransform::updInvert);

  t2.method("compose", static_cast<Transform (InverseTransform::*)(const InverseTransform &) const>(&InverseTransform::compose));
  t2.method("compose", static_cast<Transform (InverseTransform::*)(const Transform &) const>(&InverseTransform::compose));

  t2.method("xformFrameVecToBase", &InverseTransform::xformFrameVecToBase);
  t2.method("xformBaseVecToFrame", &InverseTransform::xformBaseVecToFrame);
  t2.method("shiftFrameStationToBase", &InverseTransform::shiftFrameStationToBase);
  t2.method("shiftBaseStationToFrame", &InverseTransform::shiftBaseStationToFrame);

  t2.method("R", &InverseTransform::R);
  t2.method("updR!", &InverseTransform::updR);
  t2.method("RInv", &InverseTransform::RInv);
  t2.method("updRInv!", &InverseTransform::updRInv);

  t2.method("p", &InverseTransform::p);
  t2.method("setP!", &InverseTransform::setP);
  t2.method("pInv", &InverseTransform::pInv);
  t2.method("setPInv!", &InverseTransform::setPInv);

  // Implemented in Julia
  // t2.method("x", &InverseTransform::x);
  // t2.method("y", &InverseTransform::y);
  // t2.method("z", &InverseTransform::z);

  t2.method("asMat34", [](const InverseTransform &it) -> SimTK::Mat<3,4,double> { return ((Transform)it).asMat34(); });
  t2.method("toMat34", &InverseTransform::toMat34);
  t2.method("toMat44", &InverseTransform::toMat44);
  t2.method("T", &InverseTransform::T);

  /* End of SimTK::InverseTransform_ class method wrappers
   **********************************************************************/

  /**********************************************************************/
  /* Wrappers for the methods of class SimTK::Transform_
   */
  t1.constructor<>();
  t1.constructor<const SimTK::Rotation_<double> &, const SimTK::Vec<3,double> &>();
  t1.constructor<const SimTK::Rotation_<double> &>();
  t1.constructor<const SimTK::Vec<3,double> &>();

  t1.method("set!", static_cast<Transform & (Transform::*)(const InverseTransform &) >(&Transform::operator=));
  t1.method("add!", static_cast<Transform & (Transform::*)(const SimTK::Vec<3,double> &) >(&Transform::operator+=));
  t1.method("subtract!", static_cast<Transform & (Transform::*)(const SimTK::Vec<3,double> &) >(&Transform::operator-=));
  t1.method("set", static_cast<Transform & (Transform::*)(const SimTK::Rotation_<double> &, const SimTK::Vec<3,double> &) >(&Transform::set));
  t1.method("setToZero", static_cast<Transform & (Transform::*)() >(&Transform::setToZero));
  t1.method("setToNaN", static_cast<Transform & (Transform::*)() >(&Transform::setToNaN));

  t1.method("invert", static_cast<const InverseTransform & (Transform::*)() const>(&Transform::invert));
  t1.method("updInvert!", static_cast<InverseTransform & (Transform::*)() >(&Transform::updInvert));

  t1.method("compose", static_cast<Transform (Transform::*)(const Transform &) const>(&Transform::compose));
  t1.method("compose", static_cast<Transform (Transform::*)(const InverseTransform &) const>(&Transform::compose));

  t1.method("xformFrameVecToBase", static_cast<SimTK::Vec<3,double> (Transform::*)(const SimTK::Vec<3,double> &) const>(&Transform::xformFrameVecToBase));
  t1.method("xformBaseVecToFrame", static_cast<SimTK::Vec<3,double> (Transform::*)(const SimTK::Vec<3,double> &) const>(&Transform::xformBaseVecToFrame));
  t1.method("shiftFrameStationToBase", static_cast<SimTK::Vec<3,double> (Transform::*)(const SimTK::Vec<3,double> &) const>(&Transform::shiftFrameStationToBase));
  t1.method("shiftBaseStationToFrame", static_cast<SimTK::Vec<3,double> (Transform::*)(const SimTK::Vec<3,double> &) const>(&Transform::shiftBaseStationToFrame));

  t1.method("R", static_cast<const SimTK::Rotation_<double> & (Transform::*)() const>(&Transform::R));
  t1.method("updR!", static_cast<SimTK::Rotation_<double> & (Transform::*)() >(&Transform::updR));

  t1.method("RInv", static_cast<const SimTK::InverseRotation_<double> & (Transform::*)() const>(&Transform::RInv));
  t1.method("updRInv!", static_cast<SimTK::InverseRotation_<double> & (Transform::*)() >(&Transform::updRInv));

  t1.method("p", static_cast<const SimTK::Vec<3,double> & (Transform::*)() const>(&Transform::p));
  t1.method("updP!", static_cast<SimTK::Vec<3,double> & (Transform::*)() >(&Transform::updP));

  t1.method("pInv", static_cast<SimTK::Vec<3,double> (Transform::*)() const>(&Transform::pInv));
  t1.method("setP!", static_cast<Transform & (Transform::*)(const SimTK::Vec<3,double> &) >(&Transform::setP));
  t1.method("setPInv!", static_cast<Transform & (Transform::*)(const SimTK::Vec<3,double> &) >(&Transform::setPInv));

  t1.method("T", static_cast<const SimTK::Vec<3,double> & (Transform::*)() const>(&Transform::T));
  t1.method("updT!", static_cast<SimTK::Vec<3,double> & (Transform::*)() >(&Transform::updT));

  t1.method("asMat34", static_cast<const SimTK::Mat<3,4,double> & (Transform::*)() const>(&Transform::asMat34));
  t1.method("toMat34", static_cast<SimTK::Mat<3,4,double> (Transform::*)() const>(&Transform::toMat34));
  t1.method("toMat44", static_cast<SimTK::Mat<4,4,double> (Transform::*)() const>(&Transform::toMat44));

  /* End of SimTK::Transform_ class method wrappers
   **********************************************************************/
  types.set_override_module(jl_base_module);
  types.method("==", static_cast<bool (*)(const Transform &, const Transform &)>(&SimTK::operator==));
  types.method("*", [] (const Transform &t, const SimTK::Vec<3,double> &v) -> SimTK::Vec<3,double> { return t*v; });
  types.method("*", [] (const InverseTransform &t, const SimTK::Vec<3,double> &v) -> SimTK::Vec<3,double> { return t*v; });
  types.method("*", [] (const Transform &t, const SimTK::Vec<4,double> &v) -> SimTK::Vec<4,double> { return t*v; });
  types.method("*", [] (const InverseTransform &t, const SimTK::Vec<4,double> &v) -> SimTK::Vec<4,double> { return t*v; });
  types.method("+", [] (const Transform &t, const SimTK::Vec<3,double> &v) -> Transform { return t+v; });
  types.method("-", [] (const Transform &t, const SimTK::Vec<3,double> &v) -> Transform { return t-v; });
  types.unset_override_module();

  using array_types = jlcxx::ParameterList<Transform>;
  jlcxx::for_each_parameter_type<array_types>(array_wrapper);

}
}
