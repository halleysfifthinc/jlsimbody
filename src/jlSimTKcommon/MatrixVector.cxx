// this file was auto-generated by wrapit v0.1.0-61-g71d8603-dirty
#include <type_traits>
#include "jlcxx/jlcxx.hpp"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

#include "jlSimTKcommon/MatrixVector.h"

#ifdef VERBOSE_IMPORT
#  define DEBUG_MSG(a) std::cerr << a << "\n"
#else
#  define DEBUG_MSG(a)
#endif
#define __HERE__  __FILE__ ":" QUOTE2(__LINE__)
#define QUOTE(arg) #arg
#define QUOTE2(arg) QUOTE(arg)

namespace jlsimbody {

void define_SimTKcommon_MatrixVector(jlcxx::Module& types){

  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Matrix_.h:51:28
  auto t1 = types.add_type<jlcxx::Parametric<jlcxx::TypeVar<1>>>("SimTK!Matrix_");

  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Vector_.h:50:28
  auto t2 = types.add_type<jlcxx::Parametric<jlcxx::TypeVar<1>>>("SimTK!Vector_");

  /**********************************************************************/
  /* Wrappers for the methods of class SimTK::Vector_
   */
  auto t2_decl_methods = []<typename ELT> (jlcxx::TypeWrapper<SimTK::Vector_<ELT>> wrapped){
    typedef SimTK::Vector_<ELT> WrappedType;
    wrapped.template constructor<>(/*finalize=*/true);

    DEBUG_MSG("Adding wrapper for void SimTK::Vector_::Vector_<ELT>(const WrappedType &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Vector_.h:71:5
    wrapped.template constructor<const WrappedType &>(/*finalize=*/true);

    DEBUG_MSG("Adding wrapper for void SimTK::Vector_::Vector_<ELT>(int) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Vector_.h:87:14
    wrapped.template constructor<int>(/*finalize=*/true);


    DEBUG_MSG("Adding wrapper for void SimTK::Vector_::Vector_<ELT>(int, const ELT *) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Vector_.h:92:5
    wrapped.template constructor<int, const ELT *>(/*finalize=*/true);


    DEBUG_MSG("Adding wrapper for void SimTK::Vector_::Vector_<ELT>(int, const ELT &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Vector_.h:95:5
    wrapped.template constructor<int, const ELT &>(/*finalize=*/true);

    // TODO:
    // If kept, expand to match the instantiated Vec templates
    // If not kept, similar functionality could be implemented from the Julia side
    // wrapped.template constructor<const SimTK::Vec<3,ELT> &>(/*finalize=*/true);

    DEBUG_MSG("Adding wrapper for Vector_<ELT> & SimTK::Vector_::operator=(const WrappedType &) (" __HERE__ ")");
    // signature to use in the veto list: Vector_<ELT> & SimTK::Vector_::operator=(const WrappedType &)
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Vector_.h:142:14
    wrapped.method("assign", static_cast<WrappedType & (WrappedType::*)(const WrappedType &) >(&WrappedType::operator=));

    DEBUG_MSG("Adding wrapper for Vector_<ELT> & SimTK::Vector_::operator=(const ELT &) (" __HERE__ ")");
    // signature to use in the veto list: Vector_<ELT> & SimTK::Vector_::operator=(const ELT &)
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Vector_.h:152:14
    wrapped.method("fill", static_cast<WrappedType & (WrappedType::*)(const ELT &) >(&WrappedType::operator=));

    DEBUG_MSG("Adding wrapper for Vector_<ELT> & SimTK::Vector_::operator+=(const ELT &) (" __HERE__ ")");
    // signature to use in the veto list: Vector_<ELT> & SimTK::Vector_::operator+=(const ELT &)
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Vector_.h:176:14
    wrapped.method("add!", static_cast<WrappedType & (WrappedType::*)(const ELT &) >(&WrappedType::operator+=));
    // wrapped.method("add!", static_cast<WrappedType & (WrappedType::*)(const SimTK::VectorBase<ELT> &) >(&WrappedType::operator+=));

    DEBUG_MSG("Adding wrapper for Vector_<ELT> & SimTK::Vector_::operator-=(const ELT &) (" __HERE__ ")");
    // signature to use in the veto list: Vector_<ELT> & SimTK::Vector_::operator-=(const ELT &)
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Vector_.h:181:14
    wrapped.method("sub!", static_cast<WrappedType & (WrappedType::*)(const ELT &) >(&WrappedType::operator-=));
    // wrapped.method("sub!", static_cast<WrappedType & (WrappedType::*)(const SimTK::VectorBase<ELT> &) >(&WrappedType::operator-=));

    wrapped.method("mult!", static_cast<WrappedType & (WrappedType::*)(const typename SimTK::CNT<ELT>::StdNumber &) >(&WrappedType::operator*=));
    wrapped.method("div!", static_cast<WrappedType & (WrappedType::*)(const typename SimTK::CNT<ELT>::StdNumber &) >(&WrappedType::operator/=));

    // wrapped.method("elementwiseInvert", static_cast<WrappedType & (WrappedType::*)() >(&SimTK::VectorBase<ELT>::elementwiseInvert));
    // wrapped.method("elementwiseInvert!", static_cast<SimTK::VectorBase<ELT> & (WrappedType::*)() >(&WrappedType::elementwiseInvertInPlace));

    // wrapped.method("elementwiseMultiply", static_cast<typename SimTK::VectorBase<ELT>::template EltResult<double>::Mul & (WrappedType::*)(const SimTK::VectorBase<double> &) >(&WrappedType::elementwiseMultiply));
    // wrapped.method("elementwiseMultiply!", static_cast<SimTK::VectorBase<ELT> & (WrappedType::*)(const SimTK::VectorBase<double> &) >(&WrappedType::elementwiseMultiplyInPlace));
    // wrapped.method("elementwiseMultiply!", static_cast<SimTK::VectorBase<ELT> & (WrappedType::*)(const SimTK::VectorBase<double> &) >(&WrappedType::elementwiseMultiplyInPlace));


    DEBUG_MSG("Adding wrapper for std::string SimTK::Vector_::toString() (" __HERE__ ")");
    // signature to use in the veto list: std::string SimTK::Vector_::toString()
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Vector_.h:191:17
    wrapped.method("toString", static_cast<std::string (WrappedType::*)()  const>(&WrappedType::toString));

    DEBUG_MSG("Adding wrapper for const ELT & SimTK::Vector_::get(int) (" __HERE__ ")");
    // signature to use in the veto list: const ELT & SimTK::Vector_::get(int)
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Vector_.h:197:16
    wrapped.method("get", static_cast<const ELT & (WrappedType::*)(int)  const>(&WrappedType::get));

    DEBUG_MSG("Adding wrapper for void SimTK::Vector_::set(int, const ELT &) (" __HERE__ ")");
    // signature to use in the veto list: void SimTK::Vector_::set(int, const ELT &)
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Vector_.h:199:10
    wrapped.method("set", static_cast<void (WrappedType::*)(int, const ELT &) >(&WrappedType::set));

    wrapped.method("nrow", static_cast<int (WrappedType::*)() const>(&WrappedType::nrow));
    wrapped.method("ncol", static_cast<int (WrappedType::*)() const>(&WrappedType::ncol));
    wrapped.method("clear", static_cast<void (WrappedType::*)()>(&WrappedType::clear));

    // wrapped.method("view", static_cast<WrappedType & (WrappedType::*)(int, int)  const>(&WrappedType::operator()));
    wrapped.method("slice", [](const WrappedType & v, int i, int m){
      WrappedType out = v(i,m); // copy to match typical Julia semantics
      return out;
    });

  };
  t2.apply<SimTK::Vector_<double>, SimTK::Vector_<std::complex<double>>, SimTK::Vector_<SimTK::Vec<1, double, 1>>, SimTK::Vector_<SimTK::Vec<3, double, 1>>, SimTK::Vector_<SimTK::Vec<2, SimTK::Vec<3, double, 1>, 1>>>(t2_decl_methods);

  /* End of SimTK::Vector_ class method wrappers
   **********************************************************************/

  /**********************************************************************/
  /* Wrappers for the methods of class SimTK::Matrix_
   */
  auto t1_decl_methods = []<typename ELT> (jlcxx::TypeWrapper<SimTK::Matrix_<ELT>> wrapped){
    typedef SimTK::Matrix_<ELT> WrappedType;
    wrapped.template constructor<>(/*finalize=*/true);

    DEBUG_MSG("Adding wrapper for void SimTK::Matrix_::Matrix_<ELT>(const WrappedType &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Matrix_.h:71:5
    wrapped.template constructor<const WrappedType &>(/*finalize=*/true);

    DEBUG_MSG("Adding wrapper for Matrix_<ELT> & SimTK::Matrix_::operator=(const WrappedType &) (" __HERE__ ")");
    // signature to use in the veto list: Matrix_<ELT> & SimTK::Matrix_::operator=(const WrappedType &)
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Matrix_.h:75:14
    wrapped.method("assign", static_cast<WrappedType & (WrappedType::*)(const WrappedType &) >(&WrappedType::operator=));

    DEBUG_MSG("Adding wrapper for void SimTK::Matrix_::Matrix_<ELT>(int, int) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Matrix_.h:91:5
    wrapped.template constructor<int, int>(/*finalize=*/true);

    DEBUG_MSG("Adding wrapper for void SimTK::Matrix_::Matrix_<ELT>(int, int, const ELT *) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Matrix_.h:93:5
    wrapped.template constructor<int, int, const ELT *>(/*finalize=*/true);

    DEBUG_MSG("Adding wrapper for void SimTK::Matrix_::Matrix_<ELT>(int, int, const ELT &) (" __HERE__ ")");
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Matrix_.h:95:5
    wrapped.template constructor<int, int, const ELT &>(/*finalize=*/true);

    DEBUG_MSG("Adding wrapper for Matrix_<ELT> & SimTK::Matrix_::operator=(const ELT &) (" __HERE__ ")");
    // signature to use in the veto list: Matrix_<ELT> & SimTK::Matrix_::operator=(const ELT &)
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Matrix_.h:113:14
    wrapped.method("assign", static_cast<WrappedType & (WrappedType::*)(const ELT &) >(&WrappedType::operator=));

    DEBUG_MSG("Adding wrapper for Matrix_<ELT> & SimTK::Matrix_::operator+=(const ELT &) (" __HERE__ ")");
    // signature to use in the veto list: Matrix_<ELT> & SimTK::Matrix_::operator+=(const ELT &)
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Matrix_.h:124:14
    wrapped.method("add!", static_cast<WrappedType & (WrappedType::*)(const ELT &) >(&WrappedType::operator+=));
    // wrapped.method("add!", static_cast<WrappedType & (WrappedType::*)(const SimTK::MatrixBase<ELT> &) >(&WrappedType::operator+=));

    DEBUG_MSG("Adding wrapper for Matrix_<ELT> & SimTK::Matrix_::operator-=(const ELT &) (" __HERE__ ")");
    // signature to use in the veto list: Matrix_<ELT> & SimTK::Matrix_::operator-=(const ELT &)
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Matrix_.h:125:14
    wrapped.method("sub!", static_cast<WrappedType & (WrappedType::*)(const ELT &) >(&WrappedType::operator-=));
    // wrapped.method("sub!", static_cast<WrappedType & (WrappedType::*)(const SimTK::MatrixBase<ELT> &) >(&WrappedType::operator-=));

    DEBUG_MSG("Adding wrapper for std::string SimTK::Matrix_::toString() (" __HERE__ ")");
    // signature to use in the veto list: std::string SimTK::Matrix_::toString()
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Matrix_.h:135:17
    wrapped.method("toString", static_cast<std::string (WrappedType::*)()  const>(&WrappedType::toString));

    DEBUG_MSG("Adding wrapper for const ELT & SimTK::Matrix_::get(int, int) (" __HERE__ ")");
    // signature to use in the veto list: const ELT & SimTK::Matrix_::get(int, int)
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Matrix_.h:141:16
    wrapped.method("get", static_cast<const ELT & (WrappedType::*)(int, int)  const>(&WrappedType::get));

    DEBUG_MSG("Adding wrapper for void SimTK::Matrix_::set(int, int, const ELT &) (" __HERE__ ")");
    // signature to use in the veto list: void SimTK::Matrix_::set(int, int, const ELT &)
    // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Matrix_.h:143:16
    wrapped.method("set", static_cast<void (WrappedType::*)(int, int, const ELT &) >(&WrappedType::set));

    wrapped.method("nrow", static_cast<int (WrappedType::*)() const>(&WrappedType::nrow));
    wrapped.method("ncol", static_cast<int (WrappedType::*)() const>(&WrappedType::ncol));
    wrapped.method("clear", static_cast<void (WrappedType::*)()>(&WrappedType::clear));

    // wrapped.method("view", static_cast<WrappedType & (WrappedType::*)(int, int)  const>(&WrappedType::operator()));
    wrapped.method("slice", [](const WrappedType & v, int i, int j, int m, int n){
      WrappedType out = v(i,j,m,n); // copy to match typical Julia semantics
      return out;
    });
  };
  t1.apply<SimTK::Matrix_<double>, SimTK::Matrix_<std::complex<double>>, SimTK::Matrix_<SimTK::Vec<3, double, 1>>, SimTK::Matrix_<SimTK::Vec<2, SimTK::Vec<3, double, 1>, 1>>>(t1_decl_methods);

  /* End of SimTK::Matrix_ class method wrappers
   **********************************************************************/
  DEBUG_MSG("End of wrapper definitions");

}
}