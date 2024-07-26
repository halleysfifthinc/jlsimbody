#ifndef _JLSIMBODY_TEXTDATAEVENTREPORTER_H
#define _JLSIMBODY_TEXTDATAEVENTREPORTER_H

#include "simbody/internal/TextDataEventReporter.h"
#include "jlcxx/functions.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<SimTK::TextDataEventReporter> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::TextDataEventReporter> : std::false_type { };
}

namespace jlsimbody{

  class JuliaRealUserFunction : public SimTK::TextDataEventReporter::UserFunction<SimTK::Real> {

  public:
    static jl_module_t* m_simbody_mod;

    JuliaRealUserFunction(jl_function_t* f);
    ~JuliaRealUserFunction();

    SimTK::Real evaluate(const SimTK::System & system, const SimTK::State & state) override;

  private:
    jl_function_t* m_f;
  };

  class JuliaVectorUserFunction : public SimTK::TextDataEventReporter::UserFunction<SimTK::Vector> {

  public:
    static jl_module_t* m_simbody_mod;

    JuliaVectorUserFunction(jl_function_t* f);
    ~JuliaVectorUserFunction();

    SimTK::Vector evaluate(const SimTK::System & system, const SimTK::State & state) override;

  private:
      jl_function_t* m_f;

  };

  JLSIMBODY_NO_EXPORT void define_simbody_TextDataEventReporter_JuliaUserFunctions(jlcxx::Module& types);
}

#endif // _JLSIMBODY_TEXTDATAEVENTREPORTER_H
