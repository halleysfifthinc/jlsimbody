#ifndef _JLSIMBODY_COMMON_H
#define _JLSIMBODY_COMMON_H

#include <type_traits>
#include <cstdio>
#include <string>

#include "jlcxx/jlcxx.hpp"
// #include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"
#include "jlsimbody_export.h"

namespace jlcxx {
  extern template void create_if_not_exists<std::vector<int>>();
}

namespace jlsimbody {
    struct Wrapper{
    Wrapper(jlcxx::Module& module): module_(module) {};
    virtual ~Wrapper() {};
    virtual void add_methods() const = 0;

    protected:
    jlcxx::Module& module_;
    };
}

#ifdef VERBOSE_IMPORT
    namespace jlsimbody {
        static int r = 0;
        static const char* wrapping = "Wrapping";
    }

#  define __HERE__  __FILE__ ":" QUOTE2(__LINE__)
#  define DEBUG_MSG(a) r = std::fprintf(stderr, "%s %s", wrapping, a); std::fflush(stderr)
#  define CLEAR_DEBUG_MSG() std::cerr << std::string(r,'\x08') << "\x1B[J"
#else
#  define __HERE__
#  define DEBUG_MSG(a)
#  define CLEAR_DEBUG_MSG()
#endif
#define QUOTE(arg) #arg
#define QUOTE2(arg) QUOTE(arg)

#endif // _JLSIMBODY_COMMON_H
