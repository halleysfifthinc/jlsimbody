#include "jlsimbody/common.h"

#include "jlsimbody/TextDataEventReporter.h"

namespace jlsimbody {

struct TextDataEventReporter_JuliaRealUserFunction: public Wrapper {

  TextDataEventReporter_JuliaRealUserFunction(jlcxx::Module& module): Wrapper(module){
    DEBUG_MSG("Adding wrapper for type SimTK::TextDataEventReporter (" __HERE__ ")");
    // defined in simbody/internal/TextDataEventReporter.h:41:28
    jlcxx::TypeWrapper<jlsimbody::JuliaRealUserFunction> t = module.add_type<jlsimbody::JuliaRealUserFunction>("JuliaUserFunctionReal");
    CLEAR_DEBUG_MSG();

    type_ = std::unique_ptr<jlcxx::TypeWrapper<jlsimbody::JuliaRealUserFunction>>(new jlcxx::TypeWrapper<jlsimbody::JuliaRealUserFunction>(module, t));
  }

  void add_methods() const{
    auto& t = *type_;

    t.constructor<jl_function_t*>();

    t.method("evaluate", static_cast<SimTK::Real (jlsimbody::JuliaRealUserFunction::*)(const SimTK::System &, const SimTK::State &)>(&jlsimbody::JuliaRealUserFunction::evaluate));
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<jlsimbody::JuliaRealUserFunction>> type_;
};

std::shared_ptr<Wrapper> newTextDataEventReporter_JuliaRealUserFunction(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new TextDataEventReporter_JuliaRealUserFunction(module));
}

struct TextDataEventReporter_JuliaVectorUserFunction: public Wrapper {

  TextDataEventReporter_JuliaVectorUserFunction(jlcxx::Module& module): Wrapper(module){
    DEBUG_MSG("Adding wrapper for type SimTK::TextDataEventReporter (" __HERE__ ")");
    // defined in simbody/internal/TextDataEventReporter.h:41:28
    jlcxx::TypeWrapper<jlsimbody::JuliaVectorUserFunction> t = module.add_type<jlsimbody::JuliaVectorUserFunction>("JuliaUserFunctionVector");
    CLEAR_DEBUG_MSG();

    type_ = std::unique_ptr<jlcxx::TypeWrapper<jlsimbody::JuliaVectorUserFunction>>(new jlcxx::TypeWrapper<jlsimbody::JuliaVectorUserFunction>(module, t));
  }

  void add_methods() const{
    auto& t = *type_;

    t.constructor<jl_function_t*>();
    t.method("evaluate", static_cast<SimTK::Vector (jlsimbody::JuliaVectorUserFunction::*)(const SimTK::System &, const SimTK::State &)>(&jlsimbody::JuliaVectorUserFunction::evaluate));
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<jlsimbody::JuliaVectorUserFunction>> type_;
};

std::shared_ptr<Wrapper> newTextDataEventReporter_JuliaVectorUserFunction(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new TextDataEventReporter_JuliaVectorUserFunction(module));
}

}
