// this file was auto-generated by wrapit v1.3.3
#include "jlsimbody/common.h"

#include "jlSimTKcommon/Xml.h"

namespace jlcxx {
  template<> struct IsMirroredType<SimTK::Xml::Unknown> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::Xml::Unknown> : std::false_type { };
  template<> struct SuperType<SimTK::Xml::Unknown> { typedef SimTK::Xml::Node type; };
}

namespace jlsimbody {

// Class generating the wrapper for type SimTK::Xml::Unknown
struct JlSimTK_Xml_Unknown: public Wrapper {

  JlSimTK_Xml_Unknown(jlcxx::Module& module): Wrapper(module){
    DEBUG_MSG("type SimTK::Xml::Unknown (" __HERE__ ")");
    // defined in simbody/SimTKcommon/internal/Xml.h:1582:32
    auto t = module.add_type<SimTK::Xml::Unknown>("XmlUnknown",
      jlcxx::julia_base_type<SimTK::Xml::Node>());
    CLEAR_DEBUG_MSG();

    type_ = std::unique_ptr<jlcxx::TypeWrapper<SimTK::Xml::Unknown>>(new jlcxx::TypeWrapper<SimTK::Xml::Unknown>(module, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>();

    DEBUG_MSG("void SimTK::Xml::Unknown::Unknown(const SimTK::String &) (" __HERE__ ")");
    // defined in simbody/SimTKcommon/internal/Xml.h:1593:10
    t.constructor<const SimTK::String &>();
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("void SimTK::Xml::Unknown::Unknown(SimTK::Xml::Element &, const SimTK::String &) (" __HERE__ ")");
    // defined in simbody/SimTKcommon/internal/Xml.h:1598:1
    t.constructor<SimTK::Xml::Element &, const SimTK::String &>();
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Xml::Unknown SimTK::Xml::Unknown::clone() (" __HERE__ ")");
    // defined in simbody/SimTKcommon/internal/Xml.h:1605:9
    t.method("clone", static_cast<SimTK::Xml::Unknown (SimTK::Xml::Unknown::*)()  const>(&SimTK::Xml::Unknown::clone));
    CLEAR_DEBUG_MSG();

    // DEBUG_MSG("const SimTK::String & SimTK::Xml::Unknown::getContents() (" __HERE__ ")");
    // // defined in simbody/SimTKcommon/internal/Xml.h:1609:15
    // // Not implemented
    // t.method("getContents", static_cast<const SimTK::String & (SimTK::Xml::Unknown::*)()  const>(&SimTK::Xml::Unknown::getContents));
    // CLEAR_DEBUG_MSG();

    // DEBUG_MSG("void SimTK::Xml::Unknown::setContents(const SimTK::String &) (" __HERE__ ")");
    // // defined in simbody/SimTKcommon/internal/Xml.h:1612:6
    // // Not implemented
    // t.method("setContents", static_cast<void (SimTK::Xml::Unknown::*)(const SimTK::String &) >(&SimTK::Xml::Unknown::setContents));
    // CLEAR_DEBUG_MSG();

    DEBUG_MSG("bool SimTK::Xml::Unknown::isA(const SimTK::Xml::Node &) (" __HERE__ ")");
    // defined in simbody/SimTKcommon/internal/Xml.h:1619:13
    module_.method("Xml!Unknown!isA", static_cast<bool (*)(const SimTK::Xml::Node &) >(&SimTK::Xml::Unknown::isA));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("const SimTK::Xml::Unknown & SimTK::Xml::Unknown::getAs(const SimTK::Xml::Node &) (" __HERE__ ")");
    // defined in simbody/SimTKcommon/internal/Xml.h:1622:23
    module_.method("Xml!Unknown!getAs", static_cast<const SimTK::Xml::Unknown & (*)(const SimTK::Xml::Node &) >(&SimTK::Xml::Unknown::getAs));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Xml::Unknown & SimTK::Xml::Unknown::getAs(SimTK::Xml::Node &) (" __HERE__ ")");
    // defined in simbody/SimTKcommon/internal/Xml.h:1625:17
    module_.method("Xml!Unknown!updAs", static_cast<SimTK::Xml::Unknown & (*)(SimTK::Xml::Node &) >(&SimTK::Xml::Unknown::getAs));
    CLEAR_DEBUG_MSG();
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<SimTK::Xml::Unknown>> type_;
};
std::shared_ptr<Wrapper> newJlSimTK_Xml_Unknown(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlSimTK_Xml_Unknown(module));
}

}
