// this file was auto-generated by wrapit v0.1.0-61-g71d8603-dirty
#include <type_traits>
#include "jlcxx/jlcxx.hpp"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

#include "jlSimTKcommon/Mat.h"

#ifdef VERBOSE_IMPORT
#  define DEBUG_MSG(a) std::cerr << a << "\n"
#else
#  define DEBUG_MSG(a)
#endif
#define __HERE__  __FILE__ ":" QUOTE2(__LINE__)
#define QUOTE(arg) #arg
#define QUOTE2(arg) QUOTE(arg)

namespace jlsimbody {

void define_SimTKcommon_Mat(jlcxx::Module& types){

  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Mat.h:97:58
  auto t0 = types.add_type<jlcxx::Parametric<jlcxx::TypeVar<1>, jlcxx::TypeVar<2>, jlcxx::TypeVar<3>, jlcxx::TypeVar<4>, jlcxx::TypeVar<5>>>("SimTK!Mat");

  /**********************************************************************/
  /* Wrappers for the methods of class SimTK::Mat
   */
  auto t0_decl_methods = []<int M, int N, typename ELT, int CS, int RS> (jlcxx::TypeWrapper<SimTK::Mat<M, N, ELT, CS, RS>> wrapped){
    typedef SimTK::Mat<M, N, ELT, CS, RS> WrappedType;
    wrapped.template constructor<>(/*finalize=*/true);


    DEBUG_MSG("Adding wrapper for void SimTK::Mat::Mat<M, N, ELT, CS, RS>(int) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Mat.h:376:14
    wrapped.template constructor<int>(/*finalize=*/true);

    DEBUG_MSG("Adding wrapper for void SimTK::Mat::setToNaN() (" __HERE__ ")");
    // signature to use in the veto list: void SimTK::Mat::setToNaN()
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Mat.h:904:10
    wrapped.method("setToNaN", static_cast<void (WrappedType::*)() >(&WrappedType::setToNaN));

    DEBUG_MSG("Adding wrapper for void SimTK::Mat::setToZero() (" __HERE__ ")");
    // signature to use in the veto list: void SimTK::Mat::setToZero()
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Mat.h:909:10
    wrapped.method("setToZero", static_cast<void (WrappedType::*)() >(&WrappedType::setToZero));

    DEBUG_MSG("Adding wrapper for bool SimTK::Mat::isNaN() (" __HERE__ ")");
    // signature to use in the veto list: bool SimTK::Mat::isNaN()
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Mat.h:1092:10
    wrapped.method("isNaN", static_cast<bool (WrappedType::*)()  const>(&WrappedType::isNaN));

    DEBUG_MSG("Adding wrapper for bool SimTK::Mat::isInf() (" __HERE__ ")");
    // signature to use in the veto list: bool SimTK::Mat::isInf()
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Mat.h:1101:10
    wrapped.method("isInf", static_cast<bool (WrappedType::*)()  const>(&WrappedType::isInf));

    DEBUG_MSG("Adding wrapper for bool SimTK::Mat::isFinite() (" __HERE__ ")");
    // signature to use in the veto list: bool SimTK::Mat::isFinite()
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Mat.h:1114:10
    wrapped.method("isFinite", static_cast<bool (WrappedType::*)()  const>(&WrappedType::isFinite));

    DEBUG_MSG("Adding wrapper for std::string SimTK::Mat::toString() (" __HERE__ ")");
    // signature to use in the veto list: std::string SimTK::Mat::toString()
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Mat.h:1219:17
    wrapped.method("toString", static_cast<std::string (WrappedType::*)()  const>(&WrappedType::toString));
  };
  t0.apply<SimTK::Mat<1, 1, double, 1, 1>, SimTK::Mat<1, 2, SimTK::Row<3, double, 1>, 1, 2>, SimTK::Mat<2, 1, SimTK::Vec<3, double, 1>, 2, 1>, SimTK::Mat<2, 2, double, 2, 1>, SimTK::Mat<2, 2, SimTK::Row<3, double, 1>, 1, 2>, SimTK::Mat<2, 2, SimTK::Vec<3, double, 1>, 2, 1>, SimTK::Mat<2, 2, std::complex<double>, 2, 1>, SimTK::Mat<2, 3, SimTK::Vec<3, double, 1>, 2, 1>, SimTK::Mat<2, 4, SimTK::Vec<3, double, 1>, 2, 1>, SimTK::Mat<2, 5, SimTK::Vec<3, double, 1>, 2, 1>, SimTK::Mat<2, 6, SimTK::Vec<3, double, 1>, 2, 1>, SimTK::Mat<3, 2, SimTK::Row<3, double, 1>, 1, 2>, SimTK::Mat<3, 3, double, 1, 3>, SimTK::Mat<3, 3, double, 3, 1>, SimTK::Mat<3, 3, std::complex<double>, 3, 1>, SimTK::Mat<2, 2, SimTK::Mat<3, 3, double, 3, 1>, 2, 1>, SimTK::Mat<3, 4, double, 3, 1>, SimTK::Mat<4, 2, SimTK::Row<3, double, 1>, 1, 2>, SimTK::Mat<4, 4, double, 4, 1>, SimTK::Mat<4, 4, SimTK::Vec<3, double, 1>, 4, 1>, SimTK::Mat<4, 4, std::complex<double>, 4, 1>, SimTK::Mat<5, 2, SimTK::Row<3, double, 1>, 1, 2>, SimTK::Mat<5, 5, double, 5, 1>, SimTK::Mat<5, 5, std::complex<double>, 5, 1>, SimTK::Mat<6, 2, SimTK::Row<3, double, 1>, 1, 2>, SimTK::Mat<6, 3, double, 6, 1>, SimTK::Mat<6, 6, double, 6, 1>>(t0_decl_methods);

  /* End of SimTK::Mat class method wrappers
   **********************************************************************/
  DEBUG_MSG("End of wrapper definitions");

}
}
