#ifndef _JLSIMMATH_TIMESTEPPER_AND_INTEGRATORS_H_
#define _JLSIMMATH_TIMESTEPPER_AND_INTEGRATORS_H_

#include "simmath/Integrator.h"
#include "simmath/TimeStepper.h"
#include "simmath/CPodesIntegrator.h"
#include "simmath/ExplicitEulerIntegrator.h"
#include "simmath/RungeKutta2Integrator.h"
#include "simmath/RungeKutta3Integrator.h"
#include "simmath/RungeKuttaFeldbergIntegrator.h"
#include "simmath/RungeKuttaMersonIntegrator.h"
#include "simmath/SemiExplicitEuler2Integrator.h"
#include "simmath/SemiExplicitEulerIntegrator.h"
#include "simmath/VerletIntegrator.h"

namespace jlsimbody {

    struct Wrapper{
    Wrapper(jlcxx::Module& module): module_(module) {};
    virtual ~Wrapper() {};
    virtual void add_methods() const = 0;

    protected:
    jlcxx::Module& module_;
    };

    JLSIMBODY_NO_EXPORT void define_simmath_Timestepper_and_Integrators(jlcxx::Module&);
}

#endif // _JLSIMMATH_TIMESTEPPER_AND_INTEGRATORS_H_
