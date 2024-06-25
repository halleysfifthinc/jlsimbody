#ifndef _JLSIMTKCOMMON_MATRIXVECTOR_H
#define _JLSIMTKCOMMON_MATRIXVECTOR_H

#include "SimTKcommon/internal/CompositeNumericalTypes.h"
#include "SimTKcommon/internal/ResultType.h"
#include "SimTKcommon/Scalar.h"
#include "SimTKcommon/internal/NTraits.h"
#include "SimTKcommon/internal/BigMatrix.h"
#include "SimTKcommon/internal/MatrixHelper.h"
#include "SimTKcommon/internal/MatrixCharacteristics.h"
#include "SimTKcommon/internal/MatrixBase.h"
#include "SimTKcommon/internal/VectorBase.h"
#include "SimTKcommon/internal/RowVectorBase.h"
#include "SimTKcommon/internal/Vector_.h"
#include "SimTKcommon/internal/RowVector_.h"
#include "SimTKcommon/internal/Matrix_.h"

#include "jlSimTKcommon/Vec.h"
#include "jlSimTKcommon/Mat.h"

namespace jlcxx {

  template<typename ELT>
  struct BuildParameterList<SimTK::Matrix_<ELT>>
  {
    typedef ParameterList<ELT> type;
  };

  template<typename ELT> struct IsMirroredType<SimTK::Matrix_<ELT>> : std::false_type { };
  template<typename ELT> struct DefaultConstructible<SimTK::Matrix_<ELT>> : std::false_type { };

  template<typename ELT>
  struct BuildParameterList<SimTK::Vector_<ELT>>
  {
    typedef ParameterList<ELT> type;
  };

  template<typename ELT> struct IsMirroredType<SimTK::Vector_<ELT>> : std::false_type { };
  template<typename ELT> struct DefaultConstructible<SimTK::Vector_<ELT>> : std::false_type { };
}

namespace jlsimbody {
  JLSIMBODY_NO_EXPORT void define_SimTKcommon_MatrixVector(jlcxx::Module& types);
}

#endif // _JLSIMTKCOMMON_MATRIXVECTOR_H
