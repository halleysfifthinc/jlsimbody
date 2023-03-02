#include <type_traits>
#include "jlcxx/jlcxx.hpp"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

#include "jljlopensim.h"

#ifdef VERBOSE_IMPORT
#  define DEBUG_MSG(a) std::cerr << a << "\n"
#else
#  define DEBUG_MSG(a)
#endif
#define __HERE__  __FILE__ ":" QUOTE2(__LINE__)
#define QUOTE(arg) #arg
#define QUOTE2(arg) QUOTE(arg)

namespace jlcxx {
  template<> struct IsMirroredType<OpenSim::Object> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Object> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::AbstractProperty> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::AbstractProperty> : std::false_type { };
  template<> struct IsMirroredType<SimTK::Xml::Element> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::Xml::Element> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::PropertySet> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::PropertySet> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Object_GetClassName<bool>> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Object_GetClassName<bool>> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Object_GetClassName<signed char>> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Object_GetClassName<signed char>> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Object_GetClassName<unsigned char>> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Object_GetClassName<unsigned char>> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Object_GetClassName<char>> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Object_GetClassName<char>> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Object_GetClassName<short>> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Object_GetClassName<short>> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Object_GetClassName<unsigned short>> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Object_GetClassName<unsigned short>> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Object_GetClassName<int>> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Object_GetClassName<int>> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Object_GetClassName<unsigned int>> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Object_GetClassName<unsigned int>> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Object_GetClassName<long>> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Object_GetClassName<long>> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Object_GetClassName<unsigned long>> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Object_GetClassName<unsigned long>> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Object_GetClassName<long long>> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Object_GetClassName<long long>> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Object_GetClassName<unsigned long long>> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Object_GetClassName<unsigned long long>> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Object_GetClassName<float>> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Object_GetClassName<float>> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Object_GetClassName<double>> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Object_GetClassName<double>> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Object_GetClassName<long double>> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Object_GetClassName<long double>> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Object_GetClassName<std::basic_string<char>>> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Object_GetClassName<std::basic_string<char>>> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Object_GetClassName<SimTK::Vec<2, double, 1>>> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Object_GetClassName<SimTK::Vec<2, double, 1>>> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Object_GetClassName<SimTK::Vec<3, double, 1>>> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Object_GetClassName<SimTK::Vec<3, double, 1>>> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Object_GetClassName<SimTK::Vec<6, double, 1>>> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Object_GetClassName<SimTK::Vec<6, double, 1>>> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Object_GetClassName<SimTK::Vector_<>>> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Object_GetClassName<SimTK::Vector_<>>> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Object_GetClassName<SimTK::Vector_<SimTK::Vec<3, double, 1>>>> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Object_GetClassName<SimTK::Vector_<SimTK::Vec<3, double, 1>>>> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Object_GetClassName<SimTK::Vector_<SimTK::Vec<6, double, 1>>>> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Object_GetClassName<SimTK::Vector_<SimTK::Vec<6, double, 1>>>> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Object_GetClassName<SimTK::Vector_<SimTK::Vec<2, SimTK::Vec<3, double, 1>, 1>>>> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Object_GetClassName<SimTK::Vector_<SimTK::Vec<2, SimTK::Vec<3, double, 1>, 1>>>> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Object_GetClassName<SimTK::Vec<2, SimTK::Vec<3, double, 1>, 1>>> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Object_GetClassName<SimTK::Vec<2, SimTK::Vec<3, double, 1>, 1>>> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Object_GetClassName<SimTK::Transform_<double>>> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Object_GetClassName<SimTK::Transform_<double>>> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Object_GetClassName<SimTK::Rotation_<double>>> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Object_GetClassName<SimTK::Rotation_<double>>> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Object_GetClassName<SimTK::Quaternion_<double>>> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Object_GetClassName<SimTK::Quaternion_<double>>> : std::false_type { };
}

JLCXX_MODULE define_julia_module(jlcxx::Module& types){

  DEBUG_MSG("Adding wrapper for type OpenSim::Object (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:193:22
  auto t0 = types.add_type<OpenSim::Object>("OpenSim!Object");

  DEBUG_MSG("Adding wrapper for type OpenSim::AbstractProperty (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/AbstractProperty.h:75:22
  types.add_type<OpenSim::AbstractProperty>("OpenSim!AbstractProperty");

  DEBUG_MSG("Adding wrapper for type SimTK::Xml::Element (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Xml.h:1033:32
  auto t2 = types.add_type<SimTK::Xml::Element>("SimTK!Xml!Element");
  t2.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type OpenSim::PropertySet (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/PropertySet.h:75:22
  auto t3 = types.add_type<OpenSim::PropertySet>("OpenSim!PropertySet");
  t3.template constructor<>(/*finalize=*/true);

  // defined in /opt/opensim-core/OpenSim/Common/Object.h:1162:27
  auto t4 = types.add_type<jlcxx::Parametric<jlcxx::TypeVar<1>>>("OpenSim!Object_GetClassName");

  /**********************************************************************/
  /* Wrappers for the methods of class OpenSim::Object
   */

  DEBUG_MSG("Adding wrapper for OpenSim::Object * OpenSim::Object::clone() (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::Object * OpenSim::Object::clone()
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:215:21
  t0.method("clone", static_cast<OpenSim::Object * (OpenSim::Object::*)()  const>(&OpenSim::Object::clone));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::Object::getConcreteClassName() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::Object::getConcreteClassName()
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:225:32
  t0.method("getConcreteClassName", static_cast<const std::string & (OpenSim::Object::*)()  const>(&OpenSim::Object::getConcreteClassName));

  DEBUG_MSG("Adding wrapper for void OpenSim::Object::assign(OpenSim::Object &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Object::assign(OpenSim::Object &)
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:229:18
  t0.method("assign", static_cast<void (OpenSim::Object::*)(OpenSim::Object &) >(&OpenSim::Object::assign));

  DEBUG_MSG("Adding wrapper for bool OpenSim::Object::isEqualTo(const OpenSim::Object &) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::Object::isEqualTo(const OpenSim::Object &)
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:239:10
  t0.method("isEqualTo", static_cast<bool (OpenSim::Object::*)(const OpenSim::Object &)  const>(&OpenSim::Object::isEqualTo));

  DEBUG_MSG("Adding wrapper for OpenSim::Object & OpenSim::Object::operator=(const OpenSim::Object &) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::Object & OpenSim::Object::operator=(const OpenSim::Object &)
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:247:13
  t0.method("assign", static_cast<OpenSim::Object & (OpenSim::Object::*)(const OpenSim::Object &) >(&OpenSim::Object::operator=));
  types.set_override_module(jl_base_module);

  DEBUG_MSG("Adding wrapper for bool OpenSim::Object::operator==(const OpenSim::Object &) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::Object::operator==(const OpenSim::Object &)
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:256:18
  t0.method("==", static_cast<bool (OpenSim::Object::*)(const OpenSim::Object &)  const>(&OpenSim::Object::operator==));

  DEBUG_MSG("Adding wrapper for bool OpenSim::Object::operator<(const OpenSim::Object &) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::Object::operator<(const OpenSim::Object &)
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:259:18
  t0.method("<", static_cast<bool (OpenSim::Object::*)(const OpenSim::Object &)  const>(&OpenSim::Object::operator<));

  types.unset_override_module();

  DEBUG_MSG("Adding wrapper for void OpenSim::Object::setName(const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Object::setName(const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:272:10
  t0.method("setName", static_cast<void (OpenSim::Object::*)(const std::string &) >(&OpenSim::Object::setName));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::Object::getName() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::Object::getName()
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:274:24
  t0.method("getName", static_cast<const std::string & (OpenSim::Object::*)()  const>(&OpenSim::Object::getName));

  DEBUG_MSG("Adding wrapper for void OpenSim::Object::setDescription(const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Object::setDescription(const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:276:10
  t0.method("setDescription", static_cast<void (OpenSim::Object::*)(const std::string &) >(&OpenSim::Object::setDescription));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::Object::getDescription() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::Object::getDescription()
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:278:24
  t0.method("getDescription", static_cast<const std::string & (OpenSim::Object::*)()  const>(&OpenSim::Object::getDescription));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::Object::getAuthors() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::Object::getAuthors()
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:281:24
  t0.method("getAuthors", static_cast<const std::string & (OpenSim::Object::*)()  const>(&OpenSim::Object::getAuthors));

  DEBUG_MSG("Adding wrapper for void OpenSim::Object::setAuthors(const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Object::setAuthors(const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:283:10
  t0.method("setAuthors", static_cast<void (OpenSim::Object::*)(const std::string &) >(&OpenSim::Object::setAuthors));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::Object::getReferences() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::Object::getReferences()
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:286:24
  t0.method("getReferences", static_cast<const std::string & (OpenSim::Object::*)()  const>(&OpenSim::Object::getReferences));

  DEBUG_MSG("Adding wrapper for void OpenSim::Object::setReferences(const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Object::setReferences(const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:288:10
  t0.method("setReferences", static_cast<void (OpenSim::Object::*)(const std::string &) >(&OpenSim::Object::setReferences));

  DEBUG_MSG("Adding wrapper for int OpenSim::Object::getNumProperties() (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::Object::getNumProperties()
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:313:9
  t0.method("getNumProperties", static_cast<int (OpenSim::Object::*)()  const>(&OpenSim::Object::getNumProperties));

  DEBUG_MSG("Adding wrapper for const OpenSim::AbstractProperty & OpenSim::Object::getPropertyByIndex(int) (" __HERE__ ")");
  // signature to use in the veto list: const OpenSim::AbstractProperty & OpenSim::Object::getPropertyByIndex(int)
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:316:29
  t0.method("getPropertyByIndex", static_cast<const OpenSim::AbstractProperty & (OpenSim::Object::*)(int)  const>(&OpenSim::Object::getPropertyByIndex));

  DEBUG_MSG("Adding wrapper for OpenSim::AbstractProperty & OpenSim::Object::updPropertyByIndex(int) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::AbstractProperty & OpenSim::Object::updPropertyByIndex(int)
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:319:23
  t0.method("updPropertyByIndex", static_cast<OpenSim::AbstractProperty & (OpenSim::Object::*)(int) >(&OpenSim::Object::updPropertyByIndex));

  DEBUG_MSG("Adding wrapper for bool OpenSim::Object::hasProperty(const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::Object::hasProperty(const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:323:10
  t0.method("hasProperty", static_cast<bool (OpenSim::Object::*)(const std::string &)  const>(&OpenSim::Object::hasProperty));

  DEBUG_MSG("Adding wrapper for const OpenSim::AbstractProperty & OpenSim::Object::getPropertyByName(const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: const OpenSim::AbstractProperty & OpenSim::Object::getPropertyByName(const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:327:29
  t0.method("getPropertyByName", static_cast<const OpenSim::AbstractProperty & (OpenSim::Object::*)(const std::string &)  const>(&OpenSim::Object::getPropertyByName));

  DEBUG_MSG("Adding wrapper for OpenSim::AbstractProperty & OpenSim::Object::updPropertyByName(const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::AbstractProperty & OpenSim::Object::updPropertyByName(const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:331:23
  t0.method("updPropertyByName", static_cast<OpenSim::AbstractProperty & (OpenSim::Object::*)(const std::string &) >(&OpenSim::Object::updPropertyByName));

  DEBUG_MSG("Adding wrapper for bool OpenSim::Object::isObjectUpToDateWithProperties() (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::Object::isObjectUpToDateWithProperties()
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:353:10
  t0.method("isObjectUpToDateWithProperties", static_cast<bool (OpenSim::Object::*)()  const>(&OpenSim::Object::isObjectUpToDateWithProperties));

  DEBUG_MSG("Adding wrapper for void OpenSim::Object::registerType(const OpenSim::Object &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Object::registerType(const OpenSim::Object &)
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:411:17
  t0.method("OpenSim!Object!registerType", static_cast<void (*)(const OpenSim::Object &) >(&OpenSim::Object::registerType));

  DEBUG_MSG("Adding wrapper for void OpenSim::Object::renameType(const std::string &, const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Object::renameType(const std::string &, const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:418:17
  t0.method("OpenSim!Object!renameType", static_cast<void (*)(const std::string &, const std::string &) >(&OpenSim::Object::renameType));

  DEBUG_MSG("Adding wrapper for const OpenSim::Object * OpenSim::Object::getDefaultInstanceOfType(const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: const OpenSim::Object * OpenSim::Object::getDefaultInstanceOfType(const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:432:5
  t0.method("OpenSim!Object!getDefaultInstanceOfType", static_cast<const OpenSim::Object * (*)(const std::string &) >(&OpenSim::Object::getDefaultInstanceOfType));

  DEBUG_MSG("Adding wrapper for OpenSim::Object * OpenSim::Object::newInstanceOfType(const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::Object * OpenSim::Object::newInstanceOfType(const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:455:20
  t0.method("OpenSim!Object!newInstanceOfType", static_cast<OpenSim::Object * (*)(const std::string &) >(&OpenSim::Object::newInstanceOfType));

  DEBUG_MSG("Adding wrapper for OpenSim::Object * OpenSim::Object::makeObjectFromFile(const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::Object * OpenSim::Object::makeObjectFromFile(const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:495:20
  t0.method("OpenSim!Object!makeObjectFromFile", static_cast<OpenSim::Object * (*)(const std::string &) >(&OpenSim::Object::makeObjectFromFile));

  DEBUG_MSG("Adding wrapper for void OpenSim::Object::readObjectFromXMLNodeOrFile(SimTK::Xml::Element &, int) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Object::readObjectFromXMLNodeOrFile(SimTK::Xml::Element &, int)
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:504:10
  t0.method("readObjectFromXMLNodeOrFile", static_cast<void (OpenSim::Object::*)(SimTK::Xml::Element &, int) >(&OpenSim::Object::readObjectFromXMLNodeOrFile));

  DEBUG_MSG("Adding wrapper for void OpenSim::Object::updateFromXMLNode(SimTK::Xml::Element &, int) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Object::updateFromXMLNode(SimTK::Xml::Element &, int)
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:513:18
  t0.method("updateFromXMLNode", static_cast<void (OpenSim::Object::*)(SimTK::Xml::Element &, int) >(&OpenSim::Object::updateFromXMLNode));

  DEBUG_MSG("Adding wrapper for void OpenSim::Object::updateXMLNode(SimTK::Xml::Element &, const OpenSim::AbstractProperty *) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Object::updateXMLNode(SimTK::Xml::Element &, const OpenSim::AbstractProperty *)
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:528:10
  t0.method("updateXMLNode", static_cast<void (OpenSim::Object::*)(SimTK::Xml::Element &, const OpenSim::AbstractProperty *)  const>(&OpenSim::Object::updateXMLNode));
  t0.method("updateXMLNode", [](OpenSim::Object const& a, SimTK::Xml::Element & arg0)->void{ a.updateXMLNode(arg0); });
  t0.method("updateXMLNode", [](OpenSim::Object const* a, SimTK::Xml::Element & arg0)->void{ a->updateXMLNode(arg0); });

  DEBUG_MSG("Adding wrapper for bool OpenSim::Object::getInlined() (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::Object::getInlined()
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:533:10
  t0.method("getInlined", static_cast<bool (OpenSim::Object::*)()  const>(&OpenSim::Object::getInlined));

  DEBUG_MSG("Adding wrapper for void OpenSim::Object::setInlined(bool, const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Object::setInlined(bool, const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:538:10
  t0.method("setInlined", static_cast<void (OpenSim::Object::*)(bool, const std::string &) >(&OpenSim::Object::setInlined));
  t0.method("setInlined", [](OpenSim::Object& a, bool arg0)->void{ a.setInlined(arg0); });
  t0.method("setInlined", [](OpenSim::Object* a, bool arg0)->void{ a->setInlined(arg0); });

  DEBUG_MSG("Adding wrapper for std::string OpenSim::Object::getDocumentFileName() (" __HERE__ ")");
  // signature to use in the veto list: std::string OpenSim::Object::getDocumentFileName()
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:586:17
  t0.method("getDocumentFileName", static_cast<std::string (OpenSim::Object::*)()  const>(&OpenSim::Object::getDocumentFileName));

  DEBUG_MSG("Adding wrapper for int OpenSim::Object::getDocumentFileVersion() (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::Object::getDocumentFileVersion()
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:592:9
  t0.method("getDocumentFileVersion", static_cast<int (OpenSim::Object::*)()  const>(&OpenSim::Object::getDocumentFileVersion));

  DEBUG_MSG("Adding wrapper for void OpenSim::Object::setAllPropertiesUseDefault(bool) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Object::setAllPropertiesUseDefault(bool)
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:594:10
  t0.method("setAllPropertiesUseDefault", static_cast<void (OpenSim::Object::*)(bool) >(&OpenSim::Object::setAllPropertiesUseDefault));

  DEBUG_MSG("Adding wrapper for bool OpenSim::Object::print(const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::Object::print(const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:602:10
  t0.method("print", static_cast<bool (OpenSim::Object::*)(const std::string &)  const>(&OpenSim::Object::print));

  DEBUG_MSG("Adding wrapper for std::string OpenSim::Object::dump() (" __HERE__ ")");
  // signature to use in the veto list: std::string OpenSim::Object::dump()
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:606:17
  t0.method("dump", static_cast<std::string (OpenSim::Object::*)()  const>(&OpenSim::Object::dump));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::Object::getClassName() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::Object::getClassName()
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:622:31
  t0.method("OpenSim!Object!getClassName", static_cast<const std::string & (*)() >(&OpenSim::Object::getClassName));

  DEBUG_MSG("Adding wrapper for void OpenSim::Object::setSerializeAllDefaults(bool) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Object::setSerializeAllDefaults(bool)
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:629:17
  t0.method("OpenSim!Object!setSerializeAllDefaults", static_cast<void (*)(bool) >(&OpenSim::Object::setSerializeAllDefaults));

  DEBUG_MSG("Adding wrapper for bool OpenSim::Object::getSerializeAllDefaults() (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::Object::getSerializeAllDefaults()
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:634:17
  t0.method("OpenSim!Object!getSerializeAllDefaults", static_cast<bool (*)() >(&OpenSim::Object::getSerializeAllDefaults));

  DEBUG_MSG("Adding wrapper for bool OpenSim::Object::isKindOf(const char *) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::Object::isKindOf(const char *)
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:641:17
  t0.method("OpenSim!Object!isKindOf", static_cast<bool (*)(const char *) >(&OpenSim::Object::isKindOf));

  DEBUG_MSG("Adding wrapper for bool OpenSim::Object::isA(const char *) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::Object::isA(const char *)
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:648:18
  t0.method("isA", static_cast<bool (OpenSim::Object::*)(const char *)  const>(&OpenSim::Object::isA));

  DEBUG_MSG("Adding wrapper for void OpenSim::Object::setDebugLevel(int) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Object::setDebugLevel(int)
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:665:17
  t0.method("OpenSim!Object!setDebugLevel", static_cast<void (*)(int) >(&OpenSim::Object::setDebugLevel));

  DEBUG_MSG("Adding wrapper for int OpenSim::Object::getDebugLevel() (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::Object::getDebugLevel()
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:669:16
  t0.method("OpenSim!Object!getDebugLevel", static_cast<int (*)() >(&OpenSim::Object::getDebugLevel));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::Object::toString() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::Object::toString()
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:673:24
  t0.method("toString", static_cast<const std::string & (OpenSim::Object::*)()  const>(&OpenSim::Object::toString));

  DEBUG_MSG("Adding wrapper for OpenSim::PropertySet & OpenSim::Object::getPropertySet() (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::PropertySet & OpenSim::Object::getPropertySet()
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:678:18
  t0.method("getPropertySet", static_cast<OpenSim::PropertySet & (OpenSim::Object::*)() >(&OpenSim::Object::getPropertySet));

  DEBUG_MSG("Adding wrapper for const OpenSim::PropertySet & OpenSim::Object::getPropertySet() (" __HERE__ ")");
  // signature to use in the veto list: const OpenSim::PropertySet & OpenSim::Object::getPropertySet()
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:679:24
  t0.method("getPropertySet", static_cast<const OpenSim::PropertySet & (OpenSim::Object::*)()  const>(&OpenSim::Object::getPropertySet));

  DEBUG_MSG("Adding wrapper for OpenSim::Object * OpenSim::Object::SafeCopy(const OpenSim::Object *) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::Object * OpenSim::Object::SafeCopy(const OpenSim::Object *)
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:684:20
  t0.method("OpenSim!Object!SafeCopy", static_cast<OpenSim::Object * (*)(const OpenSim::Object *) >(&OpenSim::Object::SafeCopy));

  DEBUG_MSG("Adding wrapper for void OpenSim::Object::RegisterType(const OpenSim::Object &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Object::RegisterType(const OpenSim::Object &)
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:688:17
  t0.method("OpenSim!Object!RegisterType", static_cast<void (*)(const OpenSim::Object &) >(&OpenSim::Object::RegisterType));

  DEBUG_MSG("Adding wrapper for void OpenSim::Object::RenameType(const std::string &, const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Object::RenameType(const std::string &, const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:691:17
  t0.method("OpenSim!Object!RenameType", static_cast<void (*)(const std::string &, const std::string &) >(&OpenSim::Object::RenameType));

  /* End of OpenSim::Object class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class OpenSim::Object_GetClassName
   */
  auto t4_decl_methods = []<typename T> (jlcxx::TypeWrapper<OpenSim::Object_GetClassName<T>> wrapped){
    typedef OpenSim::Object_GetClassName<T> WrappedType;
    wrapped.template constructor<>(/*finalize=*/true);

    DEBUG_MSG("Adding wrapper for const std::string & WrappedType::name() (" __HERE__ ")");
    // signature to use in the veto list: const std::string & WrappedType::name()
    // defined in /opt/opensim-core/OpenSim/Common/Object.h:1163:31
    wrapped.method("WrappedType!name", static_cast<const std::string & (*)() >(&WrappedType::name));
  };
  t4.apply<OpenSim::Object_GetClassName<SimTK::Quaternion_<double>>, OpenSim::Object_GetClassName<SimTK::Rotation_<double>>, OpenSim::Object_GetClassName<SimTK::Transform_<double>>, OpenSim::Object_GetClassName<SimTK::Vec<2, SimTK::Vec<3, double, 1>, 1>>, OpenSim::Object_GetClassName<SimTK::Vector_<SimTK::Vec<2, SimTK::Vec<3, double, 1>, 1>>>, OpenSim::Object_GetClassName<SimTK::Vector_<SimTK::Vec<6, double, 1>>>, OpenSim::Object_GetClassName<SimTK::Vector_<SimTK::Vec<3, double, 1>>>, OpenSim::Object_GetClassName<SimTK::Vector_<>>, OpenSim::Object_GetClassName<SimTK::Vec<6, double, 1>>, OpenSim::Object_GetClassName<SimTK::Vec<3, double, 1>>, OpenSim::Object_GetClassName<SimTK::Vec<2, double, 1>>, OpenSim::Object_GetClassName<std::basic_string<char>>, OpenSim::Object_GetClassName<long double>, OpenSim::Object_GetClassName<double>, OpenSim::Object_GetClassName<float>, OpenSim::Object_GetClassName<unsigned long long>, OpenSim::Object_GetClassName<long long>, OpenSim::Object_GetClassName<unsigned long>, OpenSim::Object_GetClassName<long>, OpenSim::Object_GetClassName<unsigned int>, OpenSim::Object_GetClassName<int>, OpenSim::Object_GetClassName<unsigned short>, OpenSim::Object_GetClassName<short>, OpenSim::Object_GetClassName<char>, OpenSim::Object_GetClassName<unsigned char>, OpenSim::Object_GetClassName<signed char>, OpenSim::Object_GetClassName<bool>>(t4_decl_methods);

  /* End of OpenSim::Object_GetClassName class method wrappers
   **********************************************************************/

  /**********************************************************************
   * Wrappers for global functions and variables including
   * class static members
   */

  DEBUG_MSG("Adding OpenSim!Object!DEFAULT_NAME methods to provide access to the global variable OpenSim::Object::DEFAULT_NAME (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:851:30
  types.method("OpenSim!Object!DEFAULT_NAME", []()-> const std::string& { return OpenSim::Object::DEFAULT_NAME; });

  /* End of global function wrappers
   **********************************************************************/

  DEBUG_MSG("End of wrapper definitions");

}
