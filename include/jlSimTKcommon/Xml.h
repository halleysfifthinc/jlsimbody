#ifndef _JLSIMTKCOMMON_XML_H_
#define _JLSIMTKCOMMON_XML_H_

#include "SimTKcommon/internal/Xml.h"
#include "jlSimTKcommon/Array.h"

namespace jlsimbody {
    JLSIMBODY_NO_EXPORT void define_SimTKcommon_Xml(jlcxx::Module&, const ArrayWrapper&);
}

#endif // _JLSIMTKCOMMON_XML_H_
