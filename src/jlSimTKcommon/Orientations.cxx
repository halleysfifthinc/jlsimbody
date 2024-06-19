// this file was auto-generated by wrapit v0.1.0-61-g71d8603-dirty
#include <type_traits>
#include "jlcxx/jlcxx.hpp"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

#include "jlSimTKcommon/Orientations.h"
#include "jlSimTKcommon/Array.h"

#ifdef VERBOSE_IMPORT
#  define DEBUG_MSG(a) std::cerr << a << "\n"
#  define CLEAR_DEBUG_MSG() std::cerr << "\33[2K\33[1F\33[0K\r"
#else
#  define DEBUG_MSG(a)
#  define CLEAR_DEBUG_MSG()
#endif
#define __HERE__  __FILE__ ":" QUOTE2(__LINE__)
#define QUOTE(arg) #arg
#define QUOTE2(arg) QUOTE(arg)

namespace jlsimbody {

void define_SimTKcommon_Orientations(jlcxx::Module& types, const ArrayWrapper& array_wrapper){

  DEBUG_MSG("Adding wrapper for enum SimTK::BodyOrSpaceType (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Rotation.h:42:6
  types.add_bits<SimTK::BodyOrSpaceType>("SimTK!BodyOrSpaceType", jlcxx::julia_type("CppEnum"));
  types.set_const("SimTK!BodyRotationSequence", SimTK::BodyRotationSequence);
  types.set_const("SimTK!SpaceRotationSequence", SimTK::SpaceRotationSequence);

  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Quaternion.h:41:26
  auto t1 = types.add_type<jlcxx::Parametric<jlcxx::TypeVar<1>>>("SimTK!Quaternion_");

  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Rotation.h:46:26
  // auto t4 = types.add_type<jlcxx::Parametric<jlcxx::TypeVar<1>>>("SimTK!Rotation_");
  auto t4 = types.add_type<SimTK::Rotation_<double>>("SimTK!Rotation");
  typedef SimTK::Rotation_<double> Rotation;

  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Rotation.h:47:26
  // auto t5 = types.add_type<jlcxx::Parametric<jlcxx::TypeVar<1>>>("SimTK!InverseRotation_");
  auto t5 = types.add_type<SimTK::InverseRotation_<double>>("SimTK!InverseRotation");
  typedef SimTK::InverseRotation_<double> InverseRotation;

  /**********************************************************************/
  /* Wrappers for the methods of class SimTK::Quaternion_
   */
  auto t1_decl_methods = []<typename P> (jlcxx::TypeWrapper<SimTK::Quaternion_<P>> wrapped){
    typedef SimTK::Quaternion_<P> WrappedType;
    wrapped.template constructor<>();
    wrapped.template constructor<const WrappedType &>();
    wrapped.template constructor<P,P,P,P>();
    wrapped.template constructor<const SimTK::Vec<4,P> &>();
    wrapped.template constructor<const SimTK::Vec<4,P> &, bool>();

    wrapped.template constructor<const Rotation &>();

    wrapped.method("assign", static_cast<WrappedType & (WrappedType::*)(const WrappedType &) >(&WrappedType::operator=));
    wrapped.method("setQuaternionToZeroRotation", static_cast<void (WrappedType::*)() >(&WrappedType::setQuaternionToZeroRotation));
    wrapped.method("setQuaternionToNaN", static_cast<void (WrappedType::*)() >(&WrappedType::setQuaternionToNaN));
    wrapped.method("setQuaternionFromAngleAxis", static_cast<void (WrappedType::*)(const SimTK::Vec<4,P> &) >(&WrappedType::setQuaternionFromAngleAxis));
    wrapped.method("setQuaternionFromAngleAxis", static_cast<void (WrappedType::*)(const P &, const SimTK::UnitVec<P,1> &) >(&WrappedType::setQuaternionFromAngleAxis));
    wrapped.method("convertQuaternionToAngleAxis", static_cast<SimTK::Vec<4,P> (WrappedType::*)() const>(&WrappedType::convertQuaternionToAngleAxis));
    wrapped.method("asVec4", static_cast<const SimTK::Vec<4,P> & (WrappedType::*)() const>(&WrappedType::asVec4));
    wrapped.method("normalizeThis", static_cast<WrappedType & (WrappedType::*)() >(&WrappedType::normalizeThis));
    wrapped.method("normalize", static_cast<WrappedType (WrappedType::*)() const>(&WrappedType::normalize));
  };
  t1.apply<SimTK::Quaternion_<double>>(t1_decl_methods);

  /* End of SimTK::Quaternion_ class method wrappers
   **********************************************************************/

  /**********************************************************************/
  /* Wrappers for the methods of class SimTK::Rotation_
   */
  // auto t4_decl_methods = []<typename P> (jlcxx::TypeWrapper<SimTK::Rotation_<P>> wrapped){
  //   typedef SimTK::Rotation_<P> WrappedType;
  //   wrapped.template constructor<>();
  //   wrapped.template constructor<const WrappedType &>();
  //   wrapped.template constructor<const SimTK::InverseRotation_<P> &>();

  //   wrapped.method("assign", static_cast<WrappedType & (WrappedType::*)(const WrappedType &) >(&WrappedType::operator=));
  //   wrapped.method("assign", static_cast<WrappedType & (WrappedType::*)(const SimTK::InverseRotation_<P> &) >(&WrappedType::operator=));
  //   wrapped.method("setRotationToNaN", static_cast<WrappedType & (WrappedType::*)() >(&WrappedType::setRotationToNaN));
  //   wrapped.method("setRotationToIdentityMatrix", static_cast<WrappedType & (WrappedType::*)() >(&WrappedType::setRotationToIdentityMatrix));

  //   wrapped.template constructor<P, const SimTK::CoordinateAxis &>();
  //   wrapped.method("setRotationFromAngleAboutAxis", static_cast<WrappedType & (WrappedType::*)(P, const SimTK::CoordinateAxis &) >(&WrappedType::setRotationFromAngleAboutAxis));

  //   wrapped.template constructor<P, const SimTK::CoordinateAxis::XCoordinateAxis>();
  //   wrapped.method("setRotationFromAngleAboutX", static_cast<WrappedType & (WrappedType::*)(P) >(&WrappedType::setRotationFromAngleAboutX));
  //   wrapped.method("setRotationFromAngleAboutX", static_cast<WrappedType & (WrappedType::*)(P, P) >(&WrappedType::setRotationFromAngleAboutX));

  //   wrapped.template constructor<P, const SimTK::CoordinateAxis::YCoordinateAxis>();
  //   wrapped.method("setRotationFromAngleAboutY", static_cast<WrappedType & (WrappedType::*)(P) >(&WrappedType::setRotationFromAngleAboutY));
  //   wrapped.method("setRotationFromAngleAboutY", static_cast<WrappedType & (WrappedType::*)(P, P) >(&WrappedType::setRotationFromAngleAboutY));

  //   wrapped.template constructor<P, const SimTK::CoordinateAxis::ZCoordinateAxis>();
  //   wrapped.method("setRotationFromAngleAboutZ", static_cast<WrappedType & (WrappedType::*)(P) >(&WrappedType::setRotationFromAngleAboutZ));
  //   wrapped.method("setRotationFromAngleAboutZ", static_cast<WrappedType & (WrappedType::*)(P, P) >(&WrappedType::setRotationFromAngleAboutZ));

  //   wrapped.template constructor<P, const typename WrappedType::UnitVec3P &>();
  //   wrapped.method("setRotationFromAngleAboutUnitVector", static_cast<WrappedType & (WrappedType::*)(P, const typename WrappedType::UnitVec3P &) >(&WrappedType::setRotationFromAngleAboutUnitVector));

  //   wrapped.template constructor<P, const typename WrappedType::Vec3P &>();
  //   wrapped.method("setRotationFromAngleAboutNonUnitVector", static_cast<WrappedType & (WrappedType::*)(P, const typename WrappedType::Vec3P &) >(&WrappedType::setRotationFromAngleAboutNonUnitVector));

  //   wrapped.template constructor<SimTK::BodyOrSpaceType, P, const SimTK::CoordinateAxis &, P, const SimTK::CoordinateAxis &>();
  //   wrapped.method("setRotationFromTwoAnglesTwoAxes", static_cast<WrappedType & (WrappedType::*)(SimTK::BodyOrSpaceType, P, const SimTK::CoordinateAxis &, P, const SimTK::CoordinateAxis &) >(&WrappedType::setRotationFromTwoAnglesTwoAxes));

  //   wrapped.template constructor<SimTK::BodyOrSpaceType, P, const SimTK::CoordinateAxis &, P, const SimTK::CoordinateAxis &, P, const SimTK::CoordinateAxis &>();
  //   wrapped.method("setRotationFromThreeAnglesThreeAxes", static_cast<WrappedType & (WrappedType::*)(SimTK::BodyOrSpaceType, P, const SimTK::CoordinateAxis &, P, const SimTK::CoordinateAxis &, P, const SimTK::CoordinateAxis &) >(&WrappedType::setRotationFromThreeAnglesThreeAxes));

  //   wrapped.template constructor<const SimTK::Quaternion_<P> &>();
  //   wrapped.method("setRotationFromQuaternion", static_cast<WrappedType & (WrappedType::*)(const SimTK::Quaternion_<P> &) >(&WrappedType::setRotationFromQuaternion));

  //   wrapped.template constructor<const typename WrappedType::Mat33P &>();
  //   wrapped.method("setRotationFromApproximateMat33", static_cast<WrappedType & (WrappedType::*)(const typename WrappedType::Mat33P &) >(&WrappedType::setRotationFromApproximateMat33));

  //   wrapped.template constructor<const typename WrappedType::Mat33P &, bool>();
  //   wrapped.method("setRotationFromMat33TrustMe", static_cast<WrappedType & (WrappedType::*)(const typename WrappedType::Mat33P &) >(&WrappedType::setRotationFromMat33TrustMe));
  //   wrapped.method("setRotationColFromUnitVecTrustMe", static_cast<WrappedType & (WrappedType::*)(int, const typename WrappedType::UnitVec3P &) >(&WrappedType::setRotationColFromUnitVecTrustMe));
  //   wrapped.method("setRotationFromUnitVecsTrustMe", static_cast<WrappedType & (WrappedType::*)(const typename WrappedType::UnitVec3P &, const typename WrappedType::UnitVec3P &, const typename WrappedType::UnitVec3P &) >(&WrappedType::setRotationFromUnitVecsTrustMe));

  //   wrapped.template constructor<const typename WrappedType::UnitVec3P &, SimTK::CoordinateAxis>();
  //   wrapped.method("setRotationFromOneAxis", static_cast<WrappedType & (WrappedType::*)(const typename WrappedType::UnitVec3P &, SimTK::CoordinateAxis) >(&WrappedType::setRotationFromOneAxis));

  //   wrapped.template constructor<const typename WrappedType::UnitVec3P &, const SimTK::CoordinateAxis &, const typename WrappedType::Vec3P &, const SimTK::CoordinateAxis &>();
  //   wrapped.method("setRotationFromTwoAxes", static_cast<WrappedType & (WrappedType::*)(const typename WrappedType::UnitVec3P &, const SimTK::CoordinateAxis &, const typename WrappedType::Vec3P &, const SimTK::CoordinateAxis &) >(&WrappedType::setRotationFromTwoAxes));

  //   wrapped.method("setRotationToBodyFixedXY", static_cast<void (WrappedType::*)(const typename WrappedType::Vec2P &) >(&WrappedType::setRotationToBodyFixedXY));
  //   wrapped.method("setRotationToBodyFixedXYZ", static_cast<void (WrappedType::*)(const typename WrappedType::Vec3P &) >(&WrappedType::setRotationToBodyFixedXYZ));
  //   wrapped.method("setRotationToBodyFixedXYZ", static_cast<void (WrappedType::*)(const typename WrappedType::Vec3P &, const typename WrappedType::Vec3P &) >(&WrappedType::setRotationToBodyFixedXYZ));

  //   wrapped.method("transpose", static_cast<const SimTK::InverseRotation_<P> & (WrappedType::*)() const>(&WrappedType::invert));
  //   wrapped.method("updTranspose", static_cast<SimTK::InverseRotation_<P> & (WrappedType::*)()>(&WrappedType::updInvert));

  //   wrapped.method("mult!", static_cast<WrappedType & (WrappedType::*)(const WrappedType &) >(&WrappedType::operator*=));
  //   wrapped.method("mult!", static_cast<WrappedType & (WrappedType::*)(const SimTK::InverseRotation_<P> &) >(&WrappedType::operator*=));
  //   wrapped.method("div!", static_cast<WrappedType & (WrappedType::*)(const WrappedType &) >(&WrappedType::operator/=));
  //   wrapped.method("div!", static_cast<WrappedType & (WrappedType::*)(const SimTK::InverseRotation_<P> &) >(&WrappedType::operator/=));

  //   wrapped.method("convertOneAxisRotationToOneAngle", static_cast<P (WrappedType::*)(const SimTK::CoordinateAxis &) const>(&WrappedType::convertOneAxisRotationToOneAngle));
  //   wrapped.method("convertTwoAxesRotationToTwoAngles", static_cast<typename WrappedType::Vec2P (WrappedType::*)(SimTK::BodyOrSpaceType, const SimTK::CoordinateAxis &, const SimTK::CoordinateAxis &) const>(&WrappedType::convertTwoAxesRotationToTwoAngles));
  //   wrapped.method("convertThreeAxesRotationToThreeAngles", static_cast<typename WrappedType::Vec3P (WrappedType::*)(SimTK::BodyOrSpaceType, const SimTK::CoordinateAxis &, const SimTK::CoordinateAxis &, const SimTK::CoordinateAxis &) const>(&WrappedType::convertThreeAxesRotationToThreeAngles));
  //   wrapped.method("convertRotationToQuaternion", static_cast<SimTK::Quaternion_<P> (WrappedType::*)() const>(&WrappedType::convertRotationToQuaternion));
  //   wrapped.method("convertRotationToAngleAxis", static_cast<typename WrappedType::Vec4P (WrappedType::*)() const>(&WrappedType::convertRotationToAngleAxis));
  //   wrapped.method("convertRotationToBodyFixedXY", static_cast<typename WrappedType::Vec2P (WrappedType::*)() const>(&WrappedType::convertRotationToBodyFixedXY));
  //   wrapped.method("convertRotationToBodyFixedXYZ", static_cast<typename WrappedType::Vec3P (WrappedType::*)() const>(&WrappedType::convertRotationToBodyFixedXYZ));

  //   wrapped.method("isSameRotationToWithinAngle", static_cast<bool (WrappedType::*)(const WrappedType &, P) const>(&WrappedType::isSameRotationToWithinAngle));
  //   wrapped.method("isSameRotationToWithinAngleOfMachinePrecision", static_cast<bool (WrappedType::*)(const WrappedType &) const>(&WrappedType::isSameRotationToWithinAngleOfMachinePrecision));
  //   wrapped.method("getMaxAbsDifferenceInRotationElements", static_cast<P (WrappedType::*)(const WrappedType &) const>(&WrappedType::getMaxAbsDifferenceInRotationElements));
  //   wrapped.method("areAllRotationElementsSameToEpsilon", static_cast<bool (WrappedType::*)(const WrappedType &, P) const>(&WrappedType::areAllRotationElementsSameToEpsilon));
  //   wrapped.method("areAllRotationElementsSameToMachinePrecision", static_cast<bool (WrappedType::*)(const WrappedType &) const>(&WrappedType::areAllRotationElementsSameToMachinePrecision));

  //   wrapped.method("get", static_cast<const typename WrappedType::ColType & (WrappedType::*)(int) const>(&WrappedType::operator()));
  //   wrapped.method("x", static_cast<const typename WrappedType::ColType & (WrappedType::*)() const>(&WrappedType::x));
  //   wrapped.method("y", static_cast<const typename WrappedType::ColType & (WrappedType::*)() const>(&WrappedType::y));
  //   wrapped.method("z", static_cast<const typename WrappedType::ColType & (WrappedType::*)() const>(&WrappedType::z));

  //   wrapped.method("getAxisUnitVec", static_cast<const typename WrappedType::ColType & (WrappedType::*)(SimTK::CoordinateAxis) const>(&WrappedType::getAxisUnitVec));
  //   wrapped.method("getAxisUnitVec", static_cast<const SimTK::UnitVec<P,1> (WrappedType::*)(SimTK::CoordinateDirection) const>(&WrappedType::getAxisUnitVec));
  // };
  // t4.apply<SimTK::Rotation_<double>>(t4_decl_methods);

    t4.constructor<>();
    t4.constructor<const Rotation &>();
    t4.constructor<const SimTK::InverseRotation_<double> &>();

    t4.method("assign", static_cast<Rotation & (Rotation::*)(const Rotation &) >(&Rotation::operator=));
    t4.method("assign", static_cast<Rotation & (Rotation::*)(const SimTK::InverseRotation_<double> &) >(&Rotation::operator=));
    t4.method("setRotationToNaN", static_cast<Rotation & (Rotation::*)() >(&Rotation::setRotationToNaN));
    t4.method("setRotationToIdentityMatrix", static_cast<Rotation & (Rotation::*)() >(&Rotation::setRotationToIdentityMatrix));

    t4.constructor<double, const SimTK::CoordinateAxis &>();
    t4.method("setRotationFromAngleAboutAxis", static_cast<Rotation & (Rotation::*)(double, const SimTK::CoordinateAxis &) >(&Rotation::setRotationFromAngleAboutAxis));

    t4.constructor<double, const SimTK::CoordinateAxis::XCoordinateAxis>();
    t4.method("setRotationFromAngleAboutX", static_cast<Rotation & (Rotation::*)(double) >(&Rotation::setRotationFromAngleAboutX));
    t4.method("setRotationFromAngleAboutX", static_cast<Rotation & (Rotation::*)(double, double) >(&Rotation::setRotationFromAngleAboutX));

    t4.constructor<double, const SimTK::CoordinateAxis::YCoordinateAxis>();
    t4.method("setRotationFromAngleAboutY", static_cast<Rotation & (Rotation::*)(double) >(&Rotation::setRotationFromAngleAboutY));
    t4.method("setRotationFromAngleAboutY", static_cast<Rotation & (Rotation::*)(double, double) >(&Rotation::setRotationFromAngleAboutY));

    t4.constructor<double, const SimTK::CoordinateAxis::ZCoordinateAxis>();
    t4.method("setRotationFromAngleAboutZ", static_cast<Rotation & (Rotation::*)(double) >(&Rotation::setRotationFromAngleAboutZ));
    t4.method("setRotationFromAngleAboutZ", static_cast<Rotation & (Rotation::*)(double, double) >(&Rotation::setRotationFromAngleAboutZ));

    t4.constructor<double, const typename Rotation::UnitVec3P &>();
    t4.method("setRotationFromAngleAboutUnitVector", static_cast<Rotation & (Rotation::*)(double, const typename Rotation::UnitVec3P &) >(&Rotation::setRotationFromAngleAboutUnitVector));

    t4.constructor<double, const typename Rotation::Vec3P &>();
    t4.method("setRotationFromAngleAboutNonUnitVector", static_cast<Rotation & (Rotation::*)(double, const typename Rotation::Vec3P &) >(&Rotation::setRotationFromAngleAboutNonUnitVector));

    t4.constructor<SimTK::BodyOrSpaceType, double, const SimTK::CoordinateAxis &, double, const SimTK::CoordinateAxis &>();
    t4.method("setRotationFromTwoAnglesTwoAxes", static_cast<Rotation & (Rotation::*)(SimTK::BodyOrSpaceType, double, const SimTK::CoordinateAxis &, double, const SimTK::CoordinateAxis &) >(&Rotation::setRotationFromTwoAnglesTwoAxes));

    t4.constructor<SimTK::BodyOrSpaceType, double, const SimTK::CoordinateAxis &, double, const SimTK::CoordinateAxis &, double, const SimTK::CoordinateAxis &>();
    t4.method("setRotationFromThreeAnglesThreeAxes", static_cast<Rotation & (Rotation::*)(SimTK::BodyOrSpaceType, double, const SimTK::CoordinateAxis &, double, const SimTK::CoordinateAxis &, double, const SimTK::CoordinateAxis &) >(&Rotation::setRotationFromThreeAnglesThreeAxes));

    t4.constructor<const SimTK::Quaternion_<double> &>();
    t4.method("setRotationFromQuaternion", static_cast<Rotation & (Rotation::*)(const SimTK::Quaternion_<double> &) >(&Rotation::setRotationFromQuaternion));

    t4.constructor<const typename Rotation::Mat33P &>();
    t4.method("setRotationFromApproximateMat33", static_cast<Rotation & (Rotation::*)(const typename Rotation::Mat33P &) >(&Rotation::setRotationFromApproximateMat33));

    t4.constructor<const typename Rotation::Mat33P &, bool>();
    t4.method("setRotationFromMat33TrustMe", static_cast<Rotation & (Rotation::*)(const typename Rotation::Mat33P &) >(&Rotation::setRotationFromMat33TrustMe));
    t4.method("setRotationColFromUnitVecTrustMe", static_cast<Rotation & (Rotation::*)(int, const typename Rotation::UnitVec3P &) >(&Rotation::setRotationColFromUnitVecTrustMe));
    t4.method("setRotationFromUnitVecsTrustMe", static_cast<Rotation & (Rotation::*)(const typename Rotation::UnitVec3P &, const typename Rotation::UnitVec3P &, const typename Rotation::UnitVec3P &) >(&Rotation::setRotationFromUnitVecsTrustMe));

    t4.constructor<const typename Rotation::UnitVec3P &, SimTK::CoordinateAxis>();
    t4.method("setRotationFromOneAxis", static_cast<Rotation & (Rotation::*)(const typename Rotation::UnitVec3P &, SimTK::CoordinateAxis) >(&Rotation::setRotationFromOneAxis));

    t4.constructor<const typename Rotation::UnitVec3P &, const SimTK::CoordinateAxis &, const typename Rotation::Vec3P &, const SimTK::CoordinateAxis &>();
    t4.method("setRotationFromTwoAxes", static_cast<Rotation & (Rotation::*)(const typename Rotation::UnitVec3P &, const SimTK::CoordinateAxis &, const typename Rotation::Vec3P &, const SimTK::CoordinateAxis &) >(&Rotation::setRotationFromTwoAxes));

    t4.method("setRotationToBodyFixedXY", static_cast<void (Rotation::*)(const typename Rotation::Vec2P &) >(&Rotation::setRotationToBodyFixedXY));
    t4.method("setRotationToBodyFixedXYZ", static_cast<void (Rotation::*)(const typename Rotation::Vec3P &) >(&Rotation::setRotationToBodyFixedXYZ));
    t4.method("setRotationToBodyFixedXYZ", static_cast<void (Rotation::*)(const typename Rotation::Vec3P &, const typename Rotation::Vec3P &) >(&Rotation::setRotationToBodyFixedXYZ));

    t4.method("transpose", static_cast<const InverseRotation & (Rotation::*)() const>(&Rotation::invert));
    t4.method("updTranspose", static_cast<InverseRotation & (Rotation::*)()>(&Rotation::updInvert));

    t4.method("mult!", static_cast<Rotation & (Rotation::*)(const Rotation &) >(&Rotation::operator*=));
    t4.method("mult!", static_cast<Rotation & (Rotation::*)(const InverseRotation &) >(&Rotation::operator*=));
    t4.method("div!", static_cast<Rotation & (Rotation::*)(const Rotation &) >(&Rotation::operator/=));
    t4.method("div!", static_cast<Rotation & (Rotation::*)(const InverseRotation &) >(&Rotation::operator/=));

    t4.method("convertOneAxisRotationToOneAngle", static_cast<double (Rotation::*)(const SimTK::CoordinateAxis &) const>(&Rotation::convertOneAxisRotationToOneAngle));
    t4.method("convertTwoAxesRotationToTwoAngles", static_cast<typename Rotation::Vec2P (Rotation::*)(SimTK::BodyOrSpaceType, const SimTK::CoordinateAxis &, const SimTK::CoordinateAxis &) const>(&Rotation::convertTwoAxesRotationToTwoAngles));
    t4.method("convertThreeAxesRotationToThreeAngles", static_cast<typename Rotation::Vec3P (Rotation::*)(SimTK::BodyOrSpaceType, const SimTK::CoordinateAxis &, const SimTK::CoordinateAxis &, const SimTK::CoordinateAxis &) const>(&Rotation::convertThreeAxesRotationToThreeAngles));
    t4.method("convertRotationToQuaternion", static_cast<SimTK::Quaternion_<double> (Rotation::*)() const>(&Rotation::convertRotationToQuaternion));
    t4.method("convertRotationToAngleAxis", static_cast<typename Rotation::Vec4P (Rotation::*)() const>(&Rotation::convertRotationToAngleAxis));
    t4.method("convertRotationToBodyFixedXY", static_cast<typename Rotation::Vec2P (Rotation::*)() const>(&Rotation::convertRotationToBodyFixedXY));
    t4.method("convertRotationToBodyFixedXYZ", static_cast<typename Rotation::Vec3P (Rotation::*)() const>(&Rotation::convertRotationToBodyFixedXYZ));

    t4.method("isSameRotationToWithinAngle", static_cast<bool (Rotation::*)(const Rotation &, double) const>(&Rotation::isSameRotationToWithinAngle));
    t4.method("isSameRotationToWithinAngleOfMachinePrecision", static_cast<bool (Rotation::*)(const Rotation &) const>(&Rotation::isSameRotationToWithinAngleOfMachinePrecision));
    t4.method("getMaxAbsDifferenceInRotationElements", static_cast<double (Rotation::*)(const Rotation &) const>(&Rotation::getMaxAbsDifferenceInRotationElements));
    t4.method("areAllRotationElementsSameToEpsilon", static_cast<bool (Rotation::*)(const Rotation &, double) const>(&Rotation::areAllRotationElementsSameToEpsilon));
    t4.method("areAllRotationElementsSameToMachinePrecision", static_cast<bool (Rotation::*)(const Rotation &) const>(&Rotation::areAllRotationElementsSameToMachinePrecision));

    // t4.method("get", static_cast<const typename Rotation::ColType & (Rotation::*)(int) const>(&Rotation::operator()));
    // t4.method("x", static_cast<const typename Rotation::ColType & (Rotation::*)() const>(&Rotation::x));
    // t4.method("y", static_cast<const typename Rotation::ColType & (Rotation::*)() const>(&Rotation::y));
    // t4.method("z", static_cast<const typename Rotation::ColType & (Rotation::*)() const>(&Rotation::z));

    t4.method("getAxisUnitVec", static_cast<const typename Rotation::ColType & (Rotation::*)(SimTK::CoordinateAxis) const>(&Rotation::getAxisUnitVec));
    t4.method("getAxisUnitVec", static_cast<const SimTK::UnitVec<double,1> (Rotation::*)(SimTK::CoordinateDirection) const>(&Rotation::getAxisUnitVec));


  /* End of SimTK::Rotation_ class method wrappers
   **********************************************************************/

  /**********************************************************************/
  /* Wrappers for the methods of class SimTK::InverseRotation_
   */
  // auto t5_decl_methods = []<typename P> (jlcxx::TypeWrapper<SimTK::InverseRotation_<P>> wrapped){
  //   typedef SimTK::InverseRotation_<P> WrappedType;
  //   wrapped.template constructor<>();
  //   wrapped.template constructor<const WrappedType &>();

  //   wrapped.method("assign", static_cast<WrappedType & (WrappedType::*)(const WrappedType &) >(&WrappedType::operator=));

  //   wrapped.method("transpose", static_cast<const SimTK::Rotation_<P> & (WrappedType::*)() const>(&WrappedType::invert));
  //   wrapped.method("updTranspose", static_cast<SimTK::Rotation_<P> & (WrappedType::*)()>(&WrappedType::updInvert));
  // };
  // t5.apply<SimTK::InverseRotation_<double>>(t5_decl_methods);

  /* End of SimTK::InverseRotation_ class method wrappers
   **********************************************************************/

  t5.constructor<>();
  t5.constructor<const InverseRotation &>();
  t5.method("assign", static_cast<InverseRotation & (InverseRotation::*)(const InverseRotation &) >(&InverseRotation::operator=));
  t5.method("transpose", static_cast<const Rotation & (InverseRotation::*)() const>(&InverseRotation::invert));
  t5.method("updTranspose", static_cast<Rotation & (InverseRotation::*)()>(&InverseRotation::updInvert));
    
  // t5.method("get", static_cast<const typename InverseRotation::ColType & (InverseRotation::*)(int) const>(&InverseRotation::operator()));
  // t5.method("x", static_cast<const typename InverseRotation::ColType & (InverseRotation::*)() const>(&InverseRotation::x));
  // t5.method("y", static_cast<const typename InverseRotation::ColType & (InverseRotation::*)() const>(&InverseRotation::y));
  // t5.method("z", static_cast<const typename InverseRotation::ColType & (InverseRotation::*)() const>(&InverseRotation::z));
  t5.method("asMat33", static_cast<const typename InverseRotation::BaseMat & (InverseRotation::*)() const>(&InverseRotation::asMat33));
  t5.method("toMat33", static_cast<typename InverseRotation::BaseMat (InverseRotation::*)() const>(&InverseRotation::toMat33));

  array_wrapper.template apply<SimTK::Rotation_<double>>();

  DEBUG_MSG("End of wrapper definitions");
}
}
