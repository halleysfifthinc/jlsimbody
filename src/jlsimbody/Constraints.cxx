// this file was auto-generated by wrapit v1.3.3
#include "jlsimbody/common.h"

#include "jlsimbody/Constraints.h"

namespace jlsimbody {

class JlSimTK_Constraint;
class JlSimTK_Constraint_PointOnLine;
class JlSimTK_Constraint_ConstantAngle;
class JlSimTK_Constraint_ConstantOrientation;
class JlSimTK_Constraint_NoSlip1D;
class JlSimTK_Constraint_ConstantCoordinate;
class JlSimTK_Constraint_ConstantSpeed;
class JlSimTK_Constraint_ConstantAcceleration;
class JlSimTK_Constraint_Custom;
class JlSimTK_Constraint_CoordinateCoupler;
class JlSimTK_Constraint_SpeedCoupler;
class JlSimTK_Constraint_PrescribedMotion;
class JlSimTK_Constraint_Ball;
class JlSimTK_Constraint_LineOnLineContact;
class JlSimTK_Constraint_PointInPlane;
class JlSimTK_Constraint_PointOnPlaneContact;
class JlSimTK_Constraint_Rod;
class JlSimTK_Constraint_SphereOnPlaneContact;
class JlSimTK_Constraint_SphereOnSphereContact;
class JlSimTK_Constraint_Weld;

std::shared_ptr<Wrapper> newJlSimTK_Constraint(jlcxx::Module&);
std::shared_ptr<Wrapper> newJlSimTK_Constraint_PointOnLine(jlcxx::Module&);
std::shared_ptr<Wrapper> newJlSimTK_Constraint_ConstantAngle(jlcxx::Module&);
std::shared_ptr<Wrapper> newJlSimTK_Constraint_ConstantOrientation(jlcxx::Module&);
std::shared_ptr<Wrapper> newJlSimTK_Constraint_NoSlip1D(jlcxx::Module&);
std::shared_ptr<Wrapper> newJlSimTK_Constraint_ConstantCoordinate(jlcxx::Module&);
std::shared_ptr<Wrapper> newJlSimTK_Constraint_ConstantSpeed(jlcxx::Module&);
std::shared_ptr<Wrapper> newJlSimTK_Constraint_ConstantAcceleration(jlcxx::Module&);
std::shared_ptr<Wrapper> newJlSimTK_Constraint_Custom(jlcxx::Module&);
std::shared_ptr<Wrapper> newJlSimTK_Constraint_CoordinateCoupler(jlcxx::Module&);
std::shared_ptr<Wrapper> newJlSimTK_Constraint_SpeedCoupler(jlcxx::Module&);
std::shared_ptr<Wrapper> newJlSimTK_Constraint_PrescribedMotion(jlcxx::Module&);
std::shared_ptr<Wrapper> newJlSimTK_Constraint_Ball(jlcxx::Module&);
std::shared_ptr<Wrapper> newJlSimTK_Constraint_LineOnLineContact(jlcxx::Module&);
std::shared_ptr<Wrapper> newJlSimTK_Constraint_PointInPlane(jlcxx::Module&);
std::shared_ptr<Wrapper> newJlSimTK_Constraint_PointOnPlaneContact(jlcxx::Module&);
std::shared_ptr<Wrapper> newJlSimTK_Constraint_Rod(jlcxx::Module&);
std::shared_ptr<Wrapper> newJlSimTK_Constraint_SphereOnPlaneContact(jlcxx::Module&);
std::shared_ptr<Wrapper> newJlSimTK_Constraint_SphereOnSphereContact(jlcxx::Module&);
std::shared_ptr<Wrapper> newJlSimTK_Constraint_Weld(jlcxx::Module&);

void define_jlsimbody_Constraints(jlcxx::Module& module){

  std::vector<std::shared_ptr<Wrapper>> wrappers = {
    std::shared_ptr<Wrapper>(newJlSimTK_Constraint(module)),
    std::shared_ptr<Wrapper>(newJlSimTK_Constraint_PointOnLine(module)),
    std::shared_ptr<Wrapper>(newJlSimTK_Constraint_ConstantAngle(module)),
    std::shared_ptr<Wrapper>(newJlSimTK_Constraint_ConstantOrientation(module)),
    std::shared_ptr<Wrapper>(newJlSimTK_Constraint_NoSlip1D(module)),
    std::shared_ptr<Wrapper>(newJlSimTK_Constraint_ConstantCoordinate(module)),
    std::shared_ptr<Wrapper>(newJlSimTK_Constraint_ConstantSpeed(module)),
    std::shared_ptr<Wrapper>(newJlSimTK_Constraint_ConstantAcceleration(module)),
    std::shared_ptr<Wrapper>(newJlSimTK_Constraint_Custom(module)),
    std::shared_ptr<Wrapper>(newJlSimTK_Constraint_CoordinateCoupler(module)),
    std::shared_ptr<Wrapper>(newJlSimTK_Constraint_SpeedCoupler(module)),
    std::shared_ptr<Wrapper>(newJlSimTK_Constraint_PrescribedMotion(module)),
    std::shared_ptr<Wrapper>(newJlSimTK_Constraint_Ball(module)),
    std::shared_ptr<Wrapper>(newJlSimTK_Constraint_LineOnLineContact(module)),
    std::shared_ptr<Wrapper>(newJlSimTK_Constraint_PointInPlane(module)),
    std::shared_ptr<Wrapper>(newJlSimTK_Constraint_PointOnPlaneContact(module)),
    std::shared_ptr<Wrapper>(newJlSimTK_Constraint_Rod(module)),
    std::shared_ptr<Wrapper>(newJlSimTK_Constraint_SphereOnPlaneContact(module)),
    std::shared_ptr<Wrapper>(newJlSimTK_Constraint_SphereOnSphereContact(module)),
    std::shared_ptr<Wrapper>(newJlSimTK_Constraint_Weld(module))
  };
  for(const auto& w: wrappers) w->add_methods();

}

}
