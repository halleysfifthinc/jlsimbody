#ifndef JLSIMBODY_COMMON_H
#define JLSIMBODY_COMMON_H

#include <type_traits>
#include "jlcxx/jlcxx.hpp"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

#ifdef VERBOSE_IMPORT
#  define DEBUG_MSG(a) std::cerr << a << "\n"
#  define CLEAR_DEBUG_MSG() std::cerr << "\33[2K\33[1F\33[0K\r"
#else
#  define DEBUG_MSG(a)
#  define CLEAR_DEBUG_MSG()
#endif
#define __HERE__  __FILE__ ":" QUOTE2(__LINE__)
#define QUOTE(arg) #arg
#define QUOTE2(arg) QUOTE(arg)

#endif
