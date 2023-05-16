// common.h
typename SimTK::NiceTypeName;
typename SimTK::Is64BitHelper;
typename SimTK::IsArithmeticType;
typename SimTK::IsVoidType;
typename SimTK::IsFloatingType;
typename SimTK::IsIntegralType;
typename SimTK::XorOpType;
typename SimTK::OrOpType;
typename SimTK::AndOpType;
typename SimTK::TrueType;
typename SimTK::FalseType;
typename SimTK::TrustMe;
typename SimTK::DontCopy;
typename SimTK::CNT;
typename SimTK::Segment;
SimTK::CoordinateAxis;
SimTK::CoordinateDirection;

// Vec.h
int SimTK::Vec::size();
int SimTK::Vec::nrow();
int SimTK::Vec::ncol();
void SimTK::Vec::Vec<M, ELT, STRIDE>(const typename WrappedType::ENeg &);
const SimTK::Vec::TNeg & SimTK::Vec::negate();
SimTK::Vec::TNeg & SimTK::Vec::updNegate();
const SimTK::Vec::TWithoutNegator & SimTK::Vec::castAwayNegatorIfAny();
SimTK::Vec::TWithoutNegator & SimTK::Vec::updCastAwayNegatorIfAny();

const Vec<M, ELT, STRIDE> & SimTK::Vec::operator+();
const SimTK::Vec::THerm & SimTK::Vec::transpose();
const SimTK::Vec::THerm & SimTK::Vec::operator~();
SimTK::Vec::THerm & SimTK::Vec::operator~();
SimTK::Vec::THerm & SimTK::Vec::updTranspose();
const SimTK::Vec::TPosTrans & SimTK::Vec::positionalTranspose();
SimTK::Vec::TPosTrans & SimTK::Vec::updPositionalTranspose();
typename CNT<ScalarNormSq>::TSqrt SimTK::Vec::norm();
SimTK::Vec::TStandard SimTK::Vec::standardize();
SimTK::Vec::EStandard SimTK::Vec::sum();
SimTK::Vec::TInvert SimTK::Vec::invert();
const SimTK::Vec::TNeg & SimTK::Vec::operator-();
SimTK::Vec::TNeg & SimTK::Vec::operator-();
double SimTK::Vec::getDefaultTolerance();
const SimTK::Vec::TReal & SimTK::Vec::real();
SimTK::Vec::TReal & SimTK::Vec::real();
const SimTK::Vec::TImag & SimTK::Vec::imag();
SimTK::Vec::TImag & SimTK::Vec::imag();

Vec<M, ELT, STRIDE> & SimTK::Vec::scalarEq(int);
Vec<M, ELT, STRIDE> & SimTK::Vec::scalarPlusEq(int);
Vec<M, ELT, STRIDE> & SimTK::Vec::scalarMinusEq(int);
Vec<M, ELT, STRIDE> & SimTK::Vec::scalarTimesEq(int);
Vec<M, ELT, STRIDE> & SimTK::Vec::scalarDivideEq(int);
Vec<M, ELT, STRIDE> & SimTK::Vec::scalarMinusEqFromLeft(int);
Vec<M, ELT, STRIDE> & SimTK::Vec::scalarTimesEqFromLeft(int);
Vec<M, ELT, STRIDE> & SimTK::Vec::scalarDivideEqFromLeft(int);
Vec<M, ELT, 1> SimTK::Vec::getNaN();
Vec<M - 1, ELT, 1> SimTK::Vec::drop1(int);
Vec<M, ELT, STRIDE> & SimTK::Vec::operator=(const Vec<M, ELT, STRIDE> &);
