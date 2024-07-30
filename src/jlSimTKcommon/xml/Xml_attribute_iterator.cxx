// this file was auto-generated by wrapit v1.3.3
#include "jlsimbody/common.h"

#include "jlSimTKcommon/Xml.h"

namespace jlcxx {
  template<> struct IsMirroredType<SimTK::Xml::attribute_iterator> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::Xml::attribute_iterator> : std::false_type { };
}

namespace jlsimbody {

// Class generating the wrapper for type SimTK::Xml::attribute_iterator
struct JlSimTK_Xml_attribute_iterator: public Wrapper {

  JlSimTK_Xml_attribute_iterator(jlcxx::Module& module): Wrapper(module){
    DEBUG_MSG("type SimTK::Xml::attribute_iterator (" __HERE__ ")");
    // defined in simbody/SimTKcommon/internal/Xml.h:649:32
    auto t = module.add_type<SimTK::Xml::attribute_iterator>("Xmlattribute_iterator");
    CLEAR_DEBUG_MSG();

    type_ = std::unique_ptr<jlcxx::TypeWrapper<SimTK::Xml::attribute_iterator>>(new jlcxx::TypeWrapper<SimTK::Xml::attribute_iterator>(module, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>();

    DEBUG_MSG("void SimTK::Xml::attribute_iterator::attribute_iterator(SimTK::Xml::Attribute &) (" __HERE__ ")");
    // defined in simbody/SimTKcommon/internal/Xml.h:662:10
    t.constructor<SimTK::Xml::Attribute &>();
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("void SimTK::Xml::attribute_iterator::attribute_iterator(const SimTK::Xml::attribute_iterator &) (" __HERE__ ")");
    // defined in simbody/SimTKcommon/internal/Xml.h:665:1
    t.constructor<const SimTK::Xml::attribute_iterator &>();
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Xml::attribute_iterator & SimTK::Xml::attribute_iterator::operator=(const SimTK::Xml::attribute_iterator &) (" __HERE__ ")");
    // defined in simbody/SimTKcommon/internal/Xml.h:671:21
    t.method("set!", static_cast<SimTK::Xml::attribute_iterator & (SimTK::Xml::attribute_iterator::*)(const SimTK::Xml::attribute_iterator &) >(&SimTK::Xml::attribute_iterator::operator=));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Xml::attribute_iterator & SimTK::Xml::attribute_iterator::operator++() (" __HERE__ ")");
    // defined in simbody/SimTKcommon/internal/Xml.h:676:21
    t.method("inc!", static_cast<SimTK::Xml::attribute_iterator & (SimTK::Xml::attribute_iterator::*)() >(&SimTK::Xml::attribute_iterator::operator++));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Xml::attribute_iterator SimTK::Xml::attribute_iterator::operator++(int) (" __HERE__ ")");
    // defined in simbody/SimTKcommon/internal/Xml.h:680:20
    t.method("inc!", static_cast<SimTK::Xml::attribute_iterator (SimTK::Xml::attribute_iterator::*)(int) >(&SimTK::Xml::attribute_iterator::operator++));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Xml::attribute_iterator & SimTK::Xml::attribute_iterator::operator--() (" __HERE__ ")");
    // defined in simbody/SimTKcommon/internal/Xml.h:684:21
    t.method("dec!", static_cast<SimTK::Xml::attribute_iterator & (SimTK::Xml::attribute_iterator::*)() >(&SimTK::Xml::attribute_iterator::operator--));
    CLEAR_DEBUG_MSG();

    DEBUG_MSG("SimTK::Xml::attribute_iterator SimTK::Xml::attribute_iterator::operator--(int) (" __HERE__ ")");
    // defined in simbody/SimTKcommon/internal/Xml.h:688:20
    t.method("dec!", static_cast<SimTK::Xml::attribute_iterator (SimTK::Xml::attribute_iterator::*)(int) >(&SimTK::Xml::attribute_iterator::operator--));
    CLEAR_DEBUG_MSG();

    module_.set_override_module(jl_base_module);
    DEBUG_MSG("SimTK::Xml::Attribute & SimTK::Xml::attribute_iterator::operator*() (" __HERE__ ")");
    // defined in simbody/SimTKcommon/internal/Xml.h:695:12
    t.method("getindex", static_cast<SimTK::Xml::Attribute & (SimTK::Xml::attribute_iterator::*)()  const>(&SimTK::Xml::attribute_iterator::operator*));
    CLEAR_DEBUG_MSG();
    module_.unset_override_module();

    DEBUG_MSG("SimTK::Xml::Attribute * SimTK::Xml::attribute_iterator::operator->() (" __HERE__ ")");
    // defined in simbody/SimTKcommon/internal/Xml.h:699:12
    t.method("arrow", static_cast<SimTK::Xml::Attribute * (SimTK::Xml::attribute_iterator::*)()  const>(&SimTK::Xml::attribute_iterator::operator->));
    CLEAR_DEBUG_MSG();

    module_.set_override_module(jl_base_module);
    DEBUG_MSG("bool SimTK::Xml::attribute_iterator::operator==(const SimTK::Xml::attribute_iterator &) (" __HERE__ ")");
    // defined in simbody/SimTKcommon/internal/Xml.h:704:6
    t.method("==", static_cast<bool (SimTK::Xml::attribute_iterator::*)(const SimTK::Xml::attribute_iterator &)  const>(&SimTK::Xml::attribute_iterator::operator==));
    CLEAR_DEBUG_MSG();
    module_.unset_override_module();
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<SimTK::Xml::attribute_iterator>> type_;
};
std::shared_ptr<Wrapper> newJlSimTK_Xml_attribute_iterator(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlSimTK_Xml_attribute_iterator(module));
}

}