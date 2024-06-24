#ifndef JLSIMBODY_COMMON_H
#define JLSIMBODY_COMMON_H

#include <type_traits>
#include <cstdio>
#include <string>

#include "jlcxx/jlcxx.hpp"
// #include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"
#include "jlsimbody_export.h"

#ifdef VERBOSE_IMPORT
    namespace jlsimbody {
        static int r = 0;
        const char* wrapping = "Wrapping";
    }

#  define __HERE__  __FILE__ ":" QUOTE2(__LINE__)
#  define DEBUG_MSG(a) r = std::fprintf(stderr, "%s %s", wrapping, a); std::fflush(stderr)
#  define CLEAR_DEBUG_MSG() std::cerr << std::string(r,'\x08') << "\x1B[J"
#else
#  define DEBUG_MSG(a)
#  define CLEAR_DEBUG_MSG()
#endif
#define __HERE__
#define QUOTE(arg) #arg
#define QUOTE2(arg) QUOTE(arg)

#endif
