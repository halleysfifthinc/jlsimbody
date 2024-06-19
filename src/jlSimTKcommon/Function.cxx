// this file was auto-generated by wrapit v0.1.0-61-g71d8603-dirty
#include <type_traits>
#include "jlcxx/jlcxx.hpp"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

#include "jlSimTKcommon/Function.h"

#ifdef VERBOSE_IMPORT
#  define DEBUG_MSG(a) std::cerr << a << "\n"
#else
#  define DEBUG_MSG(a)
#endif
#define __HERE__  __FILE__ ":" QUOTE2(__LINE__)
#define QUOTE(arg) #arg
#define QUOTE2(arg) QUOTE(arg)

namespace jlsimbody {

void define_SimTKcommon_Function(jlcxx::Module& types, const ArrayWrapper & array_wrapper){

  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Function.h:51:7
  auto t0 = types.add_type<jlcxx::Parametric<jlcxx::TypeVar<1>>>("SimTK!Function_");

  DEBUG_MSG("Adding wrapper for type SimTK::Function_::Constant (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Function.h:126:21
  auto t1 = types.add_type<jlcxx::Parametric<jlcxx::TypeVar<1>>>("SimTK!Function_!Constant");

  DEBUG_MSG("Adding wrapper for type SimTK::Function_::Linear (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Function.h:170:21
  auto t2 = types.add_type<jlcxx::Parametric<jlcxx::TypeVar<1>>>("SimTK!Function_!Linear");

  DEBUG_MSG("Adding wrapper for type SimTK::Function_::Polynomial (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Function.h:223:21
  auto t3 = types.add_type<jlcxx::Parametric<jlcxx::TypeVar<1>>>("SimTK!Function_!Polynomial");

  DEBUG_MSG("Adding wrapper for type SimTK::Function_::Sinusoid (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Function.h:56:11
  auto t4 = types.add_type<jlcxx::Parametric<jlcxx::TypeVar<1>>>("SimTK!Function_!Sinusoid");

  DEBUG_MSG("Adding wrapper for type SimTK::Function_::Step (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Function.h:355:21
  auto t5 = types.add_type<jlcxx::Parametric<jlcxx::TypeVar<1>>>("SimTK!Function_!Step");


  /**********************************************************************/
  /* Wrappers for the methods of class SimTK::Function_
   */
  auto t0_decl_methods = []<typename T> (jlcxx::TypeWrapper<SimTK::Function_<T>> wrapped){
    typedef SimTK::Function_<T> WrappedType;
    // wrapped.template constructor<>();

    // DEBUG_MSG("Adding wrapper for T SimTK::Function_::calcValue(const SimTK::Vector &) (" __HERE__ ")");
    // // signature to use in the veto list: T SimTK::Function_::calcValue(const SimTK::Vector &)
    // // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Function.h:66:15
    // wrapped.method("calcValue", static_cast<T (WrappedType::*)(const SimTK::Vector &)  const>(&WrappedType::calcValue));

    // DEBUG_MSG("Adding wrapper for T SimTK::Function_::calcDerivative(const SimTK::Array_<int> &, const SimTK::Vector &) (" __HERE__ ")");
    // // signature to use in the veto list: T SimTK::Function_::calcDerivative(const SimTK::Array_<int> &, const SimTK::Vector &)
    // // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Function.h:86:15
    // wrapped.method("calcDerivative", static_cast<T (WrappedType::*)(const SimTK::Array_<int> &, const SimTK::Vector &)  const>(&WrappedType::calcDerivative));

    // DEBUG_MSG("Adding wrapper for T SimTK::Function_::calcDerivative(const std::vector<int> &, const SimTK::Vector &) (" __HERE__ ")");
    // // signature to use in the veto list: T SimTK::Function_::calcDerivative(const std::vector<int> &, const SimTK::Vector &)
    // // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Function.h:91:7
    // wrapped.method("calcDerivative", static_cast<T (WrappedType::*)(const std::vector<int> &, const SimTK::Vector &)  const>(&WrappedType::calcDerivative));

    // DEBUG_MSG("Adding wrapper for int SimTK::Function_::getArgumentSize() (" __HERE__ ")");
    // // signature to use in the veto list: int SimTK::Function_::getArgumentSize()
    // // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Function.h:97:17
    // wrapped.method("getArgumentSize", static_cast<int (WrappedType::*)()  const>(&WrappedType::getArgumentSize));

    // DEBUG_MSG("Adding wrapper for int SimTK::Function_::getMaxDerivativeOrder() (" __HERE__ ")");
    // // signature to use in the veto list: int SimTK::Function_::getMaxDerivativeOrder()
    // // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Function.h:101:17
    // wrapped.method("getMaxDerivativeOrder", static_cast<int (WrappedType::*)()  const>(&WrappedType::getMaxDerivativeOrder));

    DEBUG_MSG("Adding wrapper for Function_<T> * SimTK::Function_::clone() (" __HERE__ ")");
    // signature to use in the veto list: Function_<T> * SimTK::Function_::clone()
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Function.h:109:24
    wrapped.method("clone", static_cast<WrappedType * (WrappedType::*)()  const>(&WrappedType::clone));
  };
  t0.apply<SimTK::Function_<double>>(t0_decl_methods);

  /* End of SimTK::Function_ class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class SimTK::Function_::Constant
   */

  auto t1_decl_methods = []<typename T> (jlcxx::TypeWrapper<typename SimTK::Function_Constant_<T>> wrapped){
    typedef typename SimTK::Function_Constant_<T> WrappedType;

    DEBUG_MSG("Adding wrapper for void SimTK::Function_::Constant::Constant(T, int) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Function.h:135:14
    // wrapped.template constructor<T>();
    // wrapped.template constructor<T, int>();
    wrapped.constructor([] (T t) {
      return reinterpret_cast<WrappedType*>(new typename SimTK::Function_<T>::Constant(t));
    });
    wrapped.constructor([] (T t, int i) {
      return reinterpret_cast<WrappedType*>(new typename SimTK::Function_<T>::Constant(t, i));
    });

    DEBUG_MSG("Adding wrapper for T SimTK::Function_::Constant::calcValue(const SimTK::Vector &) (" __HERE__ ")");
    // signature to use in the veto list: T SimTK::Function_::Constant::calcValue(const SimTK::Vector &)
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Function.h:138:7
    wrapped.method("calcValue", static_cast<T (WrappedType::*)(const SimTK::Vector &)  const>(&WrappedType::calcValue));

    DEBUG_MSG("Adding wrapper for T SimTK::Function_::Constant::calcDerivative(const SimTK::Array_<int> &, const SimTK::Vector &) (" __HERE__ ")");
    // signature to use in the veto list: T SimTK::Function_::Constant::calcDerivative(const SimTK::Array_<int> &, const SimTK::Vector &)
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Function.h:142:7
    wrapped.method("calcDerivative", static_cast<T (WrappedType::*)(const SimTK::Array_<int> &, const SimTK::Vector &)  const>(&WrappedType::calcDerivative));

    DEBUG_MSG("Adding wrapper for int SimTK::Function_::Constant::getArgumentSize() (" __HERE__ ")");
    // signature to use in the veto list: int SimTK::Function_::Constant::getArgumentSize()
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Function.h:146:9
    wrapped.method("getArgumentSize", static_cast<int (WrappedType::*)()  const>(&WrappedType::getArgumentSize));

    DEBUG_MSG("Adding wrapper for int SimTK::Function_::Constant::getMaxDerivativeOrder() (" __HERE__ ")");
    // signature to use in the veto list: int SimTK::Function_::Constant::getMaxDerivativeOrder()
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Function.h:149:9
    wrapped.method("getMaxDerivativeOrder", static_cast<int (WrappedType::*)()  const>(&WrappedType::getMaxDerivativeOrder));

    DEBUG_MSG("Adding wrapper for SimTK::Function_::Constant * SimTK::Function_::Constant::clone() (" __HERE__ ")");
    // signature to use in the veto list: SimTK::Function_::Constant * SimTK::Function_::Constant::clone()
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Function.h:153:15
    wrapped.method("clone", reinterpret_cast<WrappedType * (WrappedType::*)()  const>(&WrappedType::clone));

    DEBUG_MSG("Adding wrapper for T SimTK::Function_::Constant::calcDerivative(const std::vector<int> &, const SimTK::Vector &) (" __HERE__ ")");
    // signature to use in the veto list: T SimTK::Function_::Constant::calcDerivative(const std::vector<int> &, const SimTK::Vector &)
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Function.h:157:7
    wrapped.method("calcDerivative", static_cast<T (WrappedType::*)(const std::vector<int> &, const SimTK::Vector &)  const>(&WrappedType::calcDerivative));
  };
  t1.apply<SimTK::Function_Constant_<double>>(t1_decl_methods);

  /* End of SimTK::Function_::Constant class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class SimTK::Function_::Linear
   */

  auto t2_decl_methods = []<typename T> (jlcxx::TypeWrapper<typename SimTK::Function_Linear_<T>> wrapped){
    typedef typename SimTK::Function_Linear_<T> WrappedType;

    DEBUG_MSG("Adding wrapper for void SimTK::Function_::Linear::Linear(const Vector_<T> &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Function.h:182:14
    // wrapped.template constructor<const SimTK::Vector_<T> &>();
    wrapped.constructor([] (const SimTK::Vector_<T>& coef) {
      return reinterpret_cast<WrappedType*>(new typename SimTK::Function_<T>::Linear(coef));
    });

    DEBUG_MSG("Adding wrapper for T SimTK::Function_::Linear::calcValue(const SimTK::Vector &) (" __HERE__ ")");
    // signature to use in the veto list: T SimTK::Function_::Linear::calcValue(const SimTK::Vector &)
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Function.h:184:7
    wrapped.method("calcValue", static_cast<T (WrappedType::*)(const SimTK::Vector &)  const>(&WrappedType::calcValue));

    DEBUG_MSG("Adding wrapper for T SimTK::Function_::Linear::calcDerivative(const SimTK::Array_<int> &, const SimTK::Vector &) (" __HERE__ ")");
    // signature to use in the veto list: T SimTK::Function_::Linear::calcDerivative(const SimTK::Array_<int> &, const SimTK::Vector &)
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Function.h:192:7
    wrapped.method("calcDerivative", static_cast<T (WrappedType::*)(const SimTK::Array_<int> &, const SimTK::Vector &)  const>(&WrappedType::calcDerivative));

    DEBUG_MSG("Adding wrapper for int SimTK::Function_::Linear::getArgumentSize() (" __HERE__ ")");
    // signature to use in the veto list: int SimTK::Function_::Linear::getArgumentSize()
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Function.h:200:9
    wrapped.method("getArgumentSize", static_cast<int (WrappedType::*)()  const>(&WrappedType::getArgumentSize));

    DEBUG_MSG("Adding wrapper for int SimTK::Function_::Linear::getMaxDerivativeOrder() (" __HERE__ ")");
    // signature to use in the veto list: int SimTK::Function_::Linear::getMaxDerivativeOrder()
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Function.h:203:9
    wrapped.method("getMaxDerivativeOrder", static_cast<int (WrappedType::*)()  const>(&WrappedType::getMaxDerivativeOrder));

    DEBUG_MSG("Adding wrapper for SimTK::Function_::Linear * SimTK::Function_::Linear::clone() (" __HERE__ ")");
    // signature to use in the veto list: SimTK::Function_::Linear * SimTK::Function_::Linear::clone()
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Function.h:207:13
    wrapped.method("clone", reinterpret_cast<WrappedType * (WrappedType::*)()  const>(&WrappedType::clone));

    DEBUG_MSG("Adding wrapper for T SimTK::Function_::Linear::calcDerivative(const std::vector<int> &, const SimTK::Vector &) (" __HERE__ ")");
    // signature to use in the veto list: T SimTK::Function_::Linear::calcDerivative(const std::vector<int> &, const SimTK::Vector &)
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Function.h:211:7
    wrapped.method("calcDerivative", static_cast<T (WrappedType::*)(const std::vector<int> &, const SimTK::Vector &)  const>(&WrappedType::calcDerivative));
  };
  t2.apply<SimTK::Function_Linear_<double>>(t2_decl_methods);

  /* End of SimTK::Function_::Linear class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class SimTK::Function_::Polynomial
   */

  auto t3_decl_methods = []<typename T> (jlcxx::TypeWrapper<typename SimTK::Function_Polynomial_<T>> wrapped){
    typedef typename SimTK::Function_Polynomial_<T> WrappedType;

    DEBUG_MSG("Adding wrapper for void SimTK::Function_::Polynomial::Polynomial(const Vector_<T> &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Function.h:231:5
    // wrapped.template constructor<const SimTK::Vector_<T> &>();
    wrapped.constructor([] (const SimTK::Vector_<T>& coef) {
      return reinterpret_cast<WrappedType*>(new typename SimTK::Function_<T>::Polynomial(coef));
    });

    DEBUG_MSG("Adding wrapper for T SimTK::Function_::Polynomial::calcValue(const SimTK::Vector &) (" __HERE__ ")");
    // signature to use in the veto list: T SimTK::Function_::Polynomial::calcValue(const SimTK::Vector &)
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Function.h:233:7
    wrapped.method("calcValue", static_cast<T (WrappedType::*)(const SimTK::Vector &)  const>(&WrappedType::calcValue));

    DEBUG_MSG("Adding wrapper for T SimTK::Function_::Polynomial::calcDerivative(const SimTK::Array_<int> &, const SimTK::Vector &) (" __HERE__ ")");
    // signature to use in the veto list: T SimTK::Function_::Polynomial::calcDerivative(const SimTK::Array_<int> &, const SimTK::Vector &)
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Function.h:241:7
    wrapped.method("calcDerivative", static_cast<T (WrappedType::*)(const SimTK::Array_<int> &, const SimTK::Vector &)  const>(&WrappedType::calcDerivative));

    DEBUG_MSG("Adding wrapper for int SimTK::Function_::Polynomial::getArgumentSize() (" __HERE__ ")");
    // signature to use in the veto list: int SimTK::Function_::Polynomial::getArgumentSize()
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Function.h:257:9
    wrapped.method("getArgumentSize", static_cast<int (WrappedType::*)()  const>(&WrappedType::getArgumentSize));

    DEBUG_MSG("Adding wrapper for int SimTK::Function_::Polynomial::getMaxDerivativeOrder() (" __HERE__ ")");
    // signature to use in the veto list: int SimTK::Function_::Polynomial::getMaxDerivativeOrder()
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Function.h:260:9
    wrapped.method("getMaxDerivativeOrder", static_cast<int (WrappedType::*)()  const>(&WrappedType::getMaxDerivativeOrder));

    DEBUG_MSG("Adding wrapper for SimTK::Function_::Polynomial * SimTK::Function_::Polynomial::clone() (" __HERE__ ")");
    // signature to use in the veto list: SimTK::Function_::Polynomial * SimTK::Function_::Polynomial::clone()
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Function.h:264:17
    wrapped.method("clone", reinterpret_cast<WrappedType * (WrappedType::*)()  const>(&WrappedType::clone));

    DEBUG_MSG("Adding wrapper for T SimTK::Function_::Polynomial::calcDerivative(const std::vector<int> &, const SimTK::Vector &) (" __HERE__ ")");
    // signature to use in the veto list: T SimTK::Function_::Polynomial::calcDerivative(const std::vector<int> &, const SimTK::Vector &)
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Function.h:268:7
    wrapped.method("calcDerivative", static_cast<T (WrappedType::*)(const std::vector<int> &, const SimTK::Vector &)  const>(&WrappedType::calcDerivative));
  };
  t3.apply<SimTK::Function_Polynomial_<double>>(t3_decl_methods);

  /* End of SimTK::Function_::Polynomial class method wrappers
   **********************************************************************/

  /**********************************************************************/
  /* Wrappers for the methods of class SimTK::Function_::Sinusoid
   */

  auto t4_decl_methods = []<typename T> (jlcxx::TypeWrapper<typename SimTK::Function_Sinusoid_<T>> wrapped){
    typedef typename SimTK::Function_Sinusoid_<T> WrappedType;

    DEBUG_MSG("Adding wrapper for void SimTK::Function_::Sinusoid::Sinusoid(const Vector_<T> &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Function.h:231:5
    // wrapped.template constructor<SimTK::Real, SimTK::Real, SimTK::Real>();
    wrapped.constructor([] (SimTK::Real ampl, SimTK::Real freq, SimTK::Real phase) {
      return reinterpret_cast<WrappedType*>(new typename SimTK::Function_<T>::Sinusoid(ampl, freq, phase));
    });

    wrapped.method("setAmplitude", static_cast<void (WrappedType::*)(SimTK::Real) >(&WrappedType::setAmplitude));
    wrapped.method("setFrequency", static_cast<void (WrappedType::*)(SimTK::Real) >(&WrappedType::setFrequency));
    wrapped.method("setPhase", static_cast<void (WrappedType::*)(SimTK::Real) >(&WrappedType::setPhase));

    wrapped.method("getAmplitude", static_cast<SimTK::Real (WrappedType::*)() const>(&WrappedType::getAmplitude));
    wrapped.method("getFrequency", static_cast<SimTK::Real (WrappedType::*)() const>(&WrappedType::getFrequency));
    wrapped.method("getPhase", static_cast<SimTK::Real (WrappedType::*)() const>(&WrappedType::getPhase));

    DEBUG_MSG("Adding wrapper for T SimTK::Function_::Sinusoid::calcValue(const SimTK::Vector &) (" __HERE__ ")");
    // signature to use in the veto list: T SimTK::Function_::Sinusoid::calcValue(const SimTK::Vector &)
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Function.h:233:7
    wrapped.method("calcValue", static_cast<T (WrappedType::*)(const SimTK::Vector &)  const>(&WrappedType::calcValue));

    DEBUG_MSG("Adding wrapper for T SimTK::Function_::Sinusoid::calcDerivative(const SimTK::Array_<int> &, const SimTK::Vector &) (" __HERE__ ")");
    // signature to use in the veto list: T SimTK::Function_::Sinusoid::calcDerivative(const SimTK::Array_<int> &, const SimTK::Vector &)
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Function.h:241:7
    wrapped.method("calcDerivative", static_cast<T (WrappedType::*)(const SimTK::Array_<int> &, const SimTK::Vector &)  const>(&WrappedType::calcDerivative));

    DEBUG_MSG("Adding wrapper for int SimTK::Function_::Sinusoid::getArgumentSize() (" __HERE__ ")");
    // signature to use in the veto list: int SimTK::Function_::Sinusoid::getArgumentSize()
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Function.h:257:9
    wrapped.method("getArgumentSize", static_cast<int (WrappedType::*)()  const>(&WrappedType::getArgumentSize));

    DEBUG_MSG("Adding wrapper for int SimTK::Function_::Sinusoid::getMaxDerivativeOrder() (" __HERE__ ")");
    // signature to use in the veto list: int SimTK::Function_::Sinusoid::getMaxDerivativeOrder()
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Function.h:260:9
    wrapped.method("getMaxDerivativeOrder", static_cast<int (WrappedType::*)()  const>(&WrappedType::getMaxDerivativeOrder));

    DEBUG_MSG("Adding wrapper for SimTK::Function_::Sinusoid * SimTK::Function_::Sinusoid::clone() (" __HERE__ ")");
    // signature to use in the veto list: SimTK::Function_::Sinusoid * SimTK::Function_::Sinusoid::clone()
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Function.h:264:17
    wrapped.method("clone", reinterpret_cast<WrappedType * (WrappedType::*)()  const>(&WrappedType::clone));

    DEBUG_MSG("Adding wrapper for T SimTK::Function_::Sinusoid::calcDerivative(const std::vector<int> &, const SimTK::Vector &) (" __HERE__ ")");
    // signature to use in the veto list: T SimTK::Function_::Sinusoid::calcDerivative(const std::vector<int> &, const SimTK::Vector &)
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Function.h:268:7
    wrapped.method("calcDerivative", static_cast<T (WrappedType::*)(const std::vector<int> &, const SimTK::Vector &)  const>(&WrappedType::calcDerivative));
  };
  t4.apply<SimTK::Function_Sinusoid_<double>>(t4_decl_methods);

  /* End of SimTK::Function_::Sinusoid class method wrappers
   **********************************************************************/

  /**********************************************************************/
  /* Wrappers for the methods of class SimTK::Function_::Step
   */

  auto t5_decl_methods = []<typename T> (jlcxx::TypeWrapper<typename SimTK::Function_Step_<T>> wrapped){
    typedef typename SimTK::Function_Step_<T> WrappedType;
    DEBUG_MSG("Adding wrapper for void SimTK::Function_::Step::Step(const T &, const T &, SimTK::Real, SimTK::Real) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Function.h:374:5
    // wrapped.template constructor<const T &, const T &, SimTK::Real, SimTK::Real>();
    wrapped.constructor([] (const T& y0, const T& y1, SimTK::Real x0, SimTK::Real x1) {
      return reinterpret_cast<WrappedType*>(new typename SimTK::Function_<T>::Step(y0, y1, x0, x1));
    });

    DEBUG_MSG("Adding wrapper for void SimTK::Function_::Step::setParameters(const T &, const T &, SimTK::Real, SimTK::Real) (" __HERE__ ")");
    // signature to use in the veto list: void SimTK::Function_::Step::setParameters(const T &, const T &, SimTK::Real, SimTK::Real)
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Function.h:379:10
    wrapped.method("setParameters", static_cast<void (WrappedType::*)(const T &, const T &, SimTK::Real, SimTK::Real) >(&WrappedType::setParameters));

    DEBUG_MSG("Adding wrapper for T SimTK::Function_::Step::calcValue(const SimTK::Vector &) (" __HERE__ ")");
    // signature to use in the veto list: T SimTK::Function_::Step::calcValue(const SimTK::Vector &)
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Function.h:386:7
    wrapped.method("calcValue", static_cast<T (WrappedType::*)(const SimTK::Vector &)  const>(&WrappedType::calcValue));

    DEBUG_MSG("Adding wrapper for T SimTK::Function_::Step::calcDerivative(const SimTK::Array_<int> &, const SimTK::Vector &) (" __HERE__ ")");
    // signature to use in the veto list: T SimTK::Function_::Step::calcDerivative(const SimTK::Array_<int> &, const SimTK::Vector &)
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Function.h:399:7
    wrapped.method("calcDerivative", static_cast<T (WrappedType::*)(const SimTK::Array_<int> &, const SimTK::Vector &)  const>(&WrappedType::calcDerivative));

    DEBUG_MSG("Adding wrapper for int SimTK::Function_::Step::getArgumentSize() (" __HERE__ ")");
    // signature to use in the veto list: int SimTK::Function_::Step::getArgumentSize()
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Function.h:422:9
    wrapped.method("getArgumentSize", static_cast<int (WrappedType::*)()  const>(&WrappedType::getArgumentSize));

    DEBUG_MSG("Adding wrapper for int SimTK::Function_::Step::getMaxDerivativeOrder() (" __HERE__ ")");
    // signature to use in the veto list: int SimTK::Function_::Step::getMaxDerivativeOrder()
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Function.h:423:9
    wrapped.method("getMaxDerivativeOrder", static_cast<int (WrappedType::*)()  const>(&WrappedType::getMaxDerivativeOrder));

    DEBUG_MSG("Adding wrapper for SimTK::Function_::Step * SimTK::Function_::Step::clone() (" __HERE__ ")");
    // signature to use in the veto list: SimTK::Function_::Step * SimTK::Function_::Step::clone()
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Function.h:425:11
    wrapped.method("clone", reinterpret_cast<WrappedType * (WrappedType::*)()  const>(&WrappedType::clone));

    DEBUG_MSG("Adding wrapper for T SimTK::Function_::Step::calcDerivative(const std::vector<int> &, const SimTK::Vector &) (" __HERE__ ")");
    // signature to use in the veto list: T SimTK::Function_::Step::calcDerivative(const std::vector<int> &, const SimTK::Vector &)
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Function.h:429:7
    wrapped.method("calcDerivative", static_cast<T (WrappedType::*)(const std::vector<int> &, const SimTK::Vector &)  const>(&WrappedType::calcDerivative));
  };
  t5.apply<SimTK::Function_Step_<double>>(t5_decl_methods);

  /* End of SimTK::Function_::Step class method wrappers
   **********************************************************************/

  array_wrapper.template apply<const SimTK::Function *>();

  DEBUG_MSG("End of wrapper definitions");

}
}
