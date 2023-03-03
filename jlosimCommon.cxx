#include <type_traits>
#include "jlcxx/jlcxx.hpp"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

#include "jlosimCommon.h"

#ifdef VERBOSE_IMPORT
#  define DEBUG_MSG(a) std::cerr << a << "\n"
#else
#  define DEBUG_MSG(a)
#endif
#define __HERE__  __FILE__ ":" QUOTE2(__LINE__)
#define QUOTE(arg) #arg
#define QUOTE2(arg) QUOTE(arg)

namespace jlcxx {
  template<> struct IsMirroredType<OpenSim::Exception> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Exception> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::InvalidArgument> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::InvalidArgument> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::InvalidCall> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::InvalidCall> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::InvalidTemplateArgument> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::InvalidTemplateArgument> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::IndexOutOfRange> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::IndexOutOfRange> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::KeyNotFound> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::KeyNotFound> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::IOError> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::IOError> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::ComponentNotFound> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::ComponentNotFound> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::NonUniqueLabels> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::NonUniqueLabels> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Logger> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Logger> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::InvalidPropertyValue> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::InvalidPropertyValue> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::AbstractProperty> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::AbstractProperty> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Object> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Object> : std::false_type { };
  template<> struct IsMirroredType<SimTK::Xml::Element> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::Xml::Element> : std::false_type { };
  template<> struct IsMirroredType<SimTK::String> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::String> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Property::TypeHelper> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Property::TypeHelper> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::PropertyIndex> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::PropertyIndex> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Object_GetClassName<bool>> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Object_GetClassName<bool>> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Object_GetClassName<signed char>> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Object_GetClassName<signed char>> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Object_GetClassName<unsigned char>> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Object_GetClassName<unsigned char>> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Object_GetClassName<char>> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Object_GetClassName<char>> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Object_GetClassName<short>> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Object_GetClassName<short>> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Object_GetClassName<unsigned short>> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Object_GetClassName<unsigned short>> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Object_GetClassName<int>> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Object_GetClassName<int>> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Object_GetClassName<unsigned int>> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Object_GetClassName<unsigned int>> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Object_GetClassName<long>> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Object_GetClassName<long>> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Object_GetClassName<unsigned long>> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Object_GetClassName<unsigned long>> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Object_GetClassName<long long>> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Object_GetClassName<long long>> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Object_GetClassName<unsigned long long>> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Object_GetClassName<unsigned long long>> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Object_GetClassName<float>> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Object_GetClassName<float>> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Object_GetClassName<double>> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Object_GetClassName<double>> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Object_GetClassName<long double>> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Object_GetClassName<long double>> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Object_GetClassName<std::basic_string<char>>> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Object_GetClassName<std::basic_string<char>>> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Object_GetClassName<SimTK::Vec<2, double, 1>>> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Object_GetClassName<SimTK::Vec<2, double, 1>>> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Object_GetClassName<SimTK::Vec<3, double, 1>>> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Object_GetClassName<SimTK::Vec<3, double, 1>>> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Object_GetClassName<SimTK::Vec<6, double, 1>>> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Object_GetClassName<SimTK::Vec<6, double, 1>>> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Object_GetClassName<SimTK::Vector_<>>> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Object_GetClassName<SimTK::Vector_<>>> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Object_GetClassName<SimTK::Vector_<SimTK::Vec<3, double, 1>>>> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Object_GetClassName<SimTK::Vector_<SimTK::Vec<3, double, 1>>>> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Object_GetClassName<SimTK::Vector_<SimTK::Vec<6, double, 1>>>> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Object_GetClassName<SimTK::Vector_<SimTK::Vec<6, double, 1>>>> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Object_GetClassName<SimTK::Vector_<SimTK::Vec<2, SimTK::Vec<3, double, 1>, 1>>>> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Object_GetClassName<SimTK::Vector_<SimTK::Vec<2, SimTK::Vec<3, double, 1>, 1>>>> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Object_GetClassName<SimTK::Vec<2, SimTK::Vec<3, double, 1>, 1>>> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Object_GetClassName<SimTK::Vec<2, SimTK::Vec<3, double, 1>, 1>>> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Object_GetClassName<SimTK::Transform_<double>>> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Object_GetClassName<SimTK::Transform_<double>>> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Object_GetClassName<SimTK::Rotation_<double>>> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Object_GetClassName<SimTK::Rotation_<double>>> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Object_GetClassName<SimTK::Quaternion_<double>>> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Object_GetClassName<SimTK::Quaternion_<double>>> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::ExperimentalSensor> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::ExperimentalSensor> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::APDMDataReaderSettings> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::APDMDataReaderSettings> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::InvalidRow> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::InvalidRow> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::InvalidColumn> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::InvalidColumn> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::InvalidColumnLabel> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::InvalidColumnLabel> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::IncorrectNumColumns> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::IncorrectNumColumns> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::IncorrectNumRows> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::IncorrectNumRows> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::RowIndexOutOfRange> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::RowIndexOutOfRange> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::ColumnIndexOutOfRange> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::ColumnIndexOutOfRange> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::MissingMetaData> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::MissingMetaData> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::NoColumnLabels> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::NoColumnLabels> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::IncorrectMetaDataLength> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::IncorrectMetaDataLength> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::EmptyTable> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::EmptyTable> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::KeyExists> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::KeyExists> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::AbstractDataTable> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::AbstractDataTable> : std::false_type { };
  template<> struct IsMirroredType<std::char_traits<char>> : std::false_type { };
  template<> struct DefaultConstructible<std::char_traits<char>> : std::false_type { };
  template<> struct IsMirroredType<std::allocator<char>> : std::false_type { };
  template<> struct DefaultConstructible<std::allocator<char>> : std::false_type { };
  template<> struct IsMirroredType<std::allocator<std::basic_string<char>>> : std::false_type { };
  template<> struct DefaultConstructible<std::allocator<std::basic_string<char>>> : std::false_type { };
  template<> struct IsMirroredType<std::allocator<int>> : std::false_type { };
  template<> struct DefaultConstructible<std::allocator<int>> : std::false_type { };
  template<> struct IsMirroredType<std::allocator<double>> : std::false_type { };
  template<> struct DefaultConstructible<std::allocator<double>> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::ValueArrayDictionary> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::ValueArrayDictionary> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::DataAdapterAlreadyRegistered> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::DataAdapterAlreadyRegistered> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::NoRegisteredDataAdapter> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::NoRegisteredDataAdapter> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::TableNotFoundException> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::TableNotFoundException> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::DataAdapter> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::DataAdapter> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::EmptyFileName> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::EmptyFileName> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::FileDoesNotExist> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::FileDoesNotExist> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::FileIsEmpty> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::FileIsEmpty> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::FileExtensionNotFound> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::FileExtensionNotFound> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::UnexpectedColumnLabel> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::UnexpectedColumnLabel> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::RowLengthMismatch> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::RowLengthMismatch> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::NoTableFound> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::NoTableFound> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::KeyMissing> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::KeyMissing> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::IncorrectTableType> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::IncorrectTableType> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::TableMissingHeader> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::TableMissingHeader> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::FileAdapter> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::FileAdapter> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::IO> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::IO> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::IO::CwdChanger> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::IO::CwdChanger> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::InvalidTable> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::InvalidTable> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::TimeColumnNotIncreasing> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::TimeColumnNotIncreasing> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::InvalidTimestamp> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::InvalidTimestamp> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::TimestampLessThanEqualToPrevious> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::TimestampLessThanEqualToPrevious> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::TimestampGreaterThanEqualToNext> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::TimestampGreaterThanEqualToNext> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::TimeOutOfRange> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::TimeOutOfRange> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::InvalidTimeRange> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::InvalidTimeRange> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::IMUDataReader> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::IMUDataReader> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::APDMDataReader> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::APDMDataReader> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::IncorrectNumTokens> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::IncorrectNumTokens> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::DataTypeMismatch> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::DataTypeMismatch> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::CSVFileAdapter> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::CSVFileAdapter> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::FileRemover> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::FileRemover> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::ComponentPath> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::ComponentPath> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::ComponentHasNoName> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::ComponentHasNoName> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::InvalidComponentName> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::InvalidComponentName> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::ComponentNotFoundOnSpecifiedPath> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::ComponentNotFoundOnSpecifiedPath> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::ComponentIsAnOrphan> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::ComponentIsAnOrphan> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::SubcomponentsWithDuplicateName> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::SubcomponentsWithDuplicateName> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::ComponentIsRootWithNoSubcomponents> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::ComponentIsRootWithNoSubcomponents> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::ComponentAlreadyPartOfOwnershipTree> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::ComponentAlreadyPartOfOwnershipTree> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::ComponentHasNoSystem> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::ComponentHasNoSystem> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::SocketNotFound> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::SocketNotFound> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::InputNotFound> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::InputNotFound> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::OutputNotFound> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::OutputNotFound> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Component> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Component> : std::false_type { };
  template<> struct IsMirroredType<SimTK::MultibodySystem> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::MultibodySystem> : std::false_type { };
  template<> struct IsMirroredType<SimTK::State> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::State> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::AbstractSocket> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::AbstractSocket> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::AbstractInput> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::AbstractInput> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::AbstractOutput> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::AbstractOutput> : std::false_type { };
  template<> struct IsMirroredType<SimTK::CacheEntryIndex> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::CacheEntryIndex> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::ConnecteeNotSpecified> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::ConnecteeNotSpecified> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::AbstractChannel> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::AbstractChannel> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Function> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Function> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Constant> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Constant> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Event> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Event> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::ObjectGroup> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::ObjectGroup> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Array<std::basic_string<char>>> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Array<std::basic_string<char>>> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::FunctionSet> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::FunctionSet> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::GCVSpline> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::GCVSpline> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::GCVSplineSet> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::GCVSplineSet> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::StorageInterface> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::StorageInterface> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::LinearFunction> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::LinearFunction> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::LogSink> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::LogSink> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::StringLogSink> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::StringLogSink> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Units> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Units> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::MarkerData> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::MarkerData> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::MarkerFrame> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::MarkerFrame> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::MultiplierFunction> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::MultiplierFunction> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::MultivariatePolynomialFunction> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::MultivariatePolynomialFunction> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::PiecewiseConstantFunction> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::PiecewiseConstantFunction> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::PiecewiseLinearFunction> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::PiecewiseLinearFunction> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::PolynomialFunction> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::PolynomialFunction> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::PropertyGroup> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::PropertyGroup> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Property_Deprecated> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Property_Deprecated> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::AbstractReporter> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::AbstractReporter> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::STODataTypeNotSupported> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::STODataTypeNotSupported> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Scale> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Scale> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::ScaleSet> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::ScaleSet> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::SimmSpline> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::SimmSpline> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Sine> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Sine> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::SmoothSegmentedFunction> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::SmoothSegmentedFunction> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::SmoothSegmentedFunctionFactory> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::SmoothSegmentedFunctionFactory> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::StateVector> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::StateVector> : std::false_type { };
  template<> struct IsMirroredType<SimTK::Vector_<double>> : std::false_type { };
  template<> struct DefaultConstructible<SimTK::Vector_<double>> : std::false_type { };
  template<> struct IsMirroredType<_IO_FILE> : std::false_type { };
  template<> struct DefaultConstructible<_IO_FILE> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::StepFunction> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::StepFunction> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::Storage> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::Storage> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::MissingHeader> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::MissingHeader> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::IncorrectNumMetaDataKeys> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::IncorrectNumMetaDataKeys> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::UnexpectedMetaDataKey> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::UnexpectedMetaDataKey> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::MetaDataLengthMismatch> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::MetaDataLengthMismatch> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::IncorrectNumColumnLabels> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::IncorrectNumColumnLabels> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::TRCFileAdapter> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::TRCFileAdapter> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::TableUtilities> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::TableUtilities> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::XYPoint> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::XYPoint> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::XYFunctionInterface> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::XYFunctionInterface> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::XsensDataReader> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::XsensDataReader> : std::false_type { };
  template<> struct IsMirroredType<OpenSim::XsensDataReaderSettings> : std::false_type { };
  template<> struct DefaultConstructible<OpenSim::XsensDataReaderSettings> : std::false_type { };
  template<> struct SuperType<OpenSim::InvalidArgument> { typedef OpenSim::Exception type; };
  template<> struct SuperType<OpenSim::InvalidCall> { typedef OpenSim::Exception type; };
  template<> struct SuperType<OpenSim::InvalidTemplateArgument> { typedef OpenSim::Exception type; };
  template<> struct SuperType<OpenSim::IndexOutOfRange> { typedef OpenSim::Exception type; };
  template<> struct SuperType<OpenSim::KeyNotFound> { typedef OpenSim::Exception type; };
  template<> struct SuperType<OpenSim::IOError> { typedef OpenSim::Exception type; };
  template<> struct SuperType<OpenSim::ComponentNotFound> { typedef OpenSim::Exception type; };
  template<> struct SuperType<OpenSim::InvalidPropertyValue> { typedef OpenSim::Exception type; };
  template<> struct SuperType<OpenSim::Property> { typedef OpenSim::AbstractProperty type; };
  template<> struct SuperType<SimTK::String> { typedef std::string type; };
  template<> struct SuperType<OpenSim::ExperimentalSensor> { typedef OpenSim::Object type; };
  template<> struct SuperType<OpenSim::APDMDataReaderSettings> { typedef OpenSim::Object type; };
  template<> struct SuperType<OpenSim::InvalidRow> { typedef OpenSim::Exception type; };
  template<> struct SuperType<OpenSim::InvalidColumn> { typedef OpenSim::Exception type; };
  template<> struct SuperType<OpenSim::InvalidColumnLabel> { typedef OpenSim::Exception type; };
  template<> struct SuperType<OpenSim::IncorrectNumColumns> { typedef OpenSim::InvalidRow type; };
  template<> struct SuperType<OpenSim::IncorrectNumRows> { typedef OpenSim::InvalidColumn type; };
  template<> struct SuperType<OpenSim::RowIndexOutOfRange> { typedef OpenSim::IndexOutOfRange type; };
  template<> struct SuperType<OpenSim::ColumnIndexOutOfRange> { typedef OpenSim::IndexOutOfRange type; };
  template<> struct SuperType<OpenSim::MissingMetaData> { typedef OpenSim::Exception type; };
  template<> struct SuperType<OpenSim::NoColumnLabels> { typedef OpenSim::Exception type; };
  template<> struct SuperType<OpenSim::IncorrectMetaDataLength> { typedef OpenSim::Exception type; };
  template<> struct SuperType<OpenSim::EmptyTable> { typedef OpenSim::Exception type; };
  template<> struct SuperType<OpenSim::KeyExists> { typedef OpenSim::Exception type; };
  template<> struct SuperType<OpenSim::DataAdapterAlreadyRegistered> { typedef OpenSim::Exception type; };
  template<> struct SuperType<OpenSim::NoRegisteredDataAdapter> { typedef OpenSim::Exception type; };
  template<> struct SuperType<OpenSim::TableNotFoundException> { typedef OpenSim::Exception type; };
  template<> struct SuperType<OpenSim::EmptyFileName> { typedef OpenSim::InvalidArgument type; };
  template<> struct SuperType<OpenSim::FileDoesNotExist> { typedef OpenSim::IOError type; };
  template<> struct SuperType<OpenSim::FileIsEmpty> { typedef OpenSim::IOError type; };
  template<> struct SuperType<OpenSim::FileExtensionNotFound> { typedef OpenSim::InvalidArgument type; };
  template<> struct SuperType<OpenSim::UnexpectedColumnLabel> { typedef OpenSim::IOError type; };
  template<> struct SuperType<OpenSim::RowLengthMismatch> { typedef OpenSim::IOError type; };
  template<> struct SuperType<OpenSim::NoTableFound> { typedef OpenSim::InvalidArgument type; };
  template<> struct SuperType<OpenSim::KeyMissing> { typedef OpenSim::InvalidArgument type; };
  template<> struct SuperType<OpenSim::IncorrectTableType> { typedef OpenSim::InvalidArgument type; };
  template<> struct SuperType<OpenSim::TableMissingHeader> { typedef OpenSim::Exception type; };
  template<> struct SuperType<OpenSim::FileAdapter> { typedef OpenSim::DataAdapter type; };
  template<> struct SuperType<OpenSim::DataTable_> { typedef OpenSim::AbstractDataTable type; };
  template<> struct SuperType<OpenSim::InvalidTable> { typedef OpenSim::Exception type; };
  template<> struct SuperType<OpenSim::TimeColumnNotIncreasing> { typedef OpenSim::InvalidTable type; };
  template<> struct SuperType<OpenSim::InvalidTimestamp> { typedef OpenSim::InvalidRow type; };
  template<> struct SuperType<OpenSim::TimestampLessThanEqualToPrevious> { typedef OpenSim::InvalidTimestamp type; };
  template<> struct SuperType<OpenSim::TimestampGreaterThanEqualToNext> { typedef OpenSim::InvalidTimestamp type; };
  template<> struct SuperType<OpenSim::TimeOutOfRange> { typedef OpenSim::Exception type; };
  template<> struct SuperType<OpenSim::InvalidTimeRange> { typedef OpenSim::Exception type; };
  template<> struct SuperType<OpenSim::IMUDataReader> { typedef OpenSim::DataAdapter type; };
  template<> struct SuperType<OpenSim::APDMDataReader> { typedef OpenSim::IMUDataReader type; };
  template<> struct SuperType<OpenSim::IncorrectNumTokens> { typedef OpenSim::Exception type; };
  template<> struct SuperType<OpenSim::DataTypeMismatch> { typedef OpenSim::Exception type; };
  template<> struct SuperType<OpenSim::DelimFileAdapter> { typedef OpenSim::FileAdapter type; };
  template<> struct SuperType<OpenSim::ComponentHasNoName> { typedef OpenSim::Exception type; };
  template<> struct SuperType<OpenSim::InvalidComponentName> { typedef OpenSim::Exception type; };
  template<> struct SuperType<OpenSim::ComponentNotFoundOnSpecifiedPath> { typedef OpenSim::ComponentNotFound type; };
  template<> struct SuperType<OpenSim::ComponentIsAnOrphan> { typedef OpenSim::Exception type; };
  template<> struct SuperType<OpenSim::SubcomponentsWithDuplicateName> { typedef OpenSim::Exception type; };
  template<> struct SuperType<OpenSim::ComponentIsRootWithNoSubcomponents> { typedef OpenSim::Exception type; };
  template<> struct SuperType<OpenSim::ComponentAlreadyPartOfOwnershipTree> { typedef OpenSim::Exception type; };
  template<> struct SuperType<OpenSim::ComponentHasNoSystem> { typedef OpenSim::Exception type; };
  template<> struct SuperType<OpenSim::SocketNotFound> { typedef OpenSim::Exception type; };
  template<> struct SuperType<OpenSim::InputNotFound> { typedef OpenSim::Exception type; };
  template<> struct SuperType<OpenSim::OutputNotFound> { typedef OpenSim::Exception type; };
  template<> struct SuperType<OpenSim::Component> { typedef OpenSim::Object type; };
  template<> struct SuperType<OpenSim::AbstractInput> { typedef OpenSim::AbstractSocket type; };
  template<> struct SuperType<OpenSim::ConnecteeNotSpecified> { typedef OpenSim::Exception type; };
  template<> struct SuperType<OpenSim::Function> { typedef OpenSim::Object type; };
  template<> struct SuperType<OpenSim::Constant> { typedef OpenSim::Function type; };
  template<> struct SuperType<OpenSim::ObjectGroup> { typedef OpenSim::Object type; };
  template<> struct SuperType<OpenSim::GCVSpline> { typedef OpenSim::Function type; };
  template<> struct SuperType<OpenSim::GCVSplineSet> { typedef OpenSim::FunctionSet type; };
  template<> struct SuperType<OpenSim::StorageInterface> { typedef OpenSim::Object type; };
  template<> struct SuperType<OpenSim::LinearFunction> { typedef OpenSim::Function type; };
  template<> struct SuperType<OpenSim::StringLogSink> { typedef OpenSim::LogSink type; };
  template<> struct SuperType<OpenSim::MarkerData> { typedef OpenSim::Object type; };
  template<> struct SuperType<OpenSim::MarkerFrame> { typedef OpenSim::Object type; };
  template<> struct SuperType<OpenSim::MultiplierFunction> { typedef OpenSim::Function type; };
  template<> struct SuperType<OpenSim::MultivariatePolynomialFunction> { typedef OpenSim::Function type; };
  template<> struct SuperType<OpenSim::PiecewiseConstantFunction> { typedef OpenSim::Function type; };
  template<> struct SuperType<OpenSim::PiecewiseLinearFunction> { typedef OpenSim::Function type; };
  template<> struct SuperType<OpenSim::PolynomialFunction> { typedef OpenSim::Function type; };
  template<> struct SuperType<OpenSim::Property_Deprecated> { typedef OpenSim::AbstractProperty type; };
  template<> struct SuperType<OpenSim::AbstractReporter> { typedef OpenSim::Component type; };
  template<> struct SuperType<OpenSim::Reporter> { typedef OpenSim::AbstractReporter type; };
  template<> struct SuperType<OpenSim::STODataTypeNotSupported> { typedef OpenSim::Exception type; };
  template<> struct SuperType<OpenSim::Scale> { typedef OpenSim::Object type; };
  template<> struct SuperType<OpenSim::SimmSpline> { typedef OpenSim::Function type; };
  template<> struct SuperType<OpenSim::Sine> { typedef OpenSim::Function type; };
  template<> struct SuperType<OpenSim::StepFunction> { typedef OpenSim::Function type; };
  template<> struct SuperType<OpenSim::Storage> { typedef OpenSim::StorageInterface type; };
  template<> struct SuperType<OpenSim::MissingHeader> { typedef OpenSim::IOError type; };
  template<> struct SuperType<OpenSim::IncorrectNumMetaDataKeys> { typedef OpenSim::IOError type; };
  template<> struct SuperType<OpenSim::UnexpectedMetaDataKey> { typedef OpenSim::IOError type; };
  template<> struct SuperType<OpenSim::MetaDataLengthMismatch> { typedef OpenSim::IOError type; };
  template<> struct SuperType<OpenSim::IncorrectNumColumnLabels> { typedef OpenSim::IOError type; };
  template<> struct SuperType<OpenSim::TRCFileAdapter> { typedef OpenSim::FileAdapter type; };
  template<> struct SuperType<OpenSim::TableSource_> { typedef OpenSim::Component type; };
  template<> struct SuperType<OpenSim::XYFunctionInterface> { typedef OpenSim::Object type; };
  template<> struct SuperType<OpenSim::XsensDataReader> { typedef OpenSim::IMUDataReader type; };
  template<> struct SuperType<OpenSim::XsensDataReaderSettings> { typedef OpenSim::Object type; };
}

JLCXX_MODULE define_julia_module(jlcxx::Module& types){

  DEBUG_MSG("Adding wrapper for enum OpenSim::Logger::Level (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Logger.h:46:16
  types.add_bits<OpenSim::Logger::Level>("OpenSim!Logger!Level", jlcxx::julia_type("CppEnum"));
  types.set_const("OpenSim!Logger!Off", OpenSim::Logger::Level::Off);
  types.set_const("OpenSim!Logger!Critical", OpenSim::Logger::Level::Critical);
  types.set_const("OpenSim!Logger!Error", OpenSim::Logger::Level::Error);
  types.set_const("OpenSim!Logger!Warn", OpenSim::Logger::Level::Warn);
  types.set_const("OpenSim!Logger!Info", OpenSim::Logger::Level::Info);
  types.set_const("OpenSim!Logger!Debug", OpenSim::Logger::Level::Debug);
  types.set_const("OpenSim!Logger!Trace", OpenSim::Logger::Level::Trace);

  DEBUG_MSG("Adding wrapper for enum std::_Ios_Openmode (" __HERE__ ")");
  // defined in /../lib/gcc/x86_64-linux-gnu/12/../../../../include/c++/12/bits/ios_base.h:111:8
  types.add_bits<std::_Ios_Openmode>("std!_Ios_Openmode", jlcxx::julia_type("CppEnum"));
  types.set_const("std!_S_app", std::_S_app);
  types.set_const("std!_S_ate", std::_S_ate);
  types.set_const("std!_S_bin", std::_S_bin);
  types.set_const("std!_S_in", std::_S_in);
  types.set_const("std!_S_out", std::_S_out);
  types.set_const("std!_S_trunc", std::_S_trunc);
  types.set_const("std!_S_noreplace", std::_S_noreplace);
  types.set_const("std!_S_ios_openmode_end", std::_S_ios_openmode_end);
  types.set_const("std!_S_ios_openmode_max", std::_S_ios_openmode_max);
  types.set_const("std!_S_ios_openmode_min", std::_S_ios_openmode_min);

  DEBUG_MSG("Adding wrapper for enum OpenSim::Units::UnitType (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Units.h:45:10
  types.add_bits<OpenSim::Units::UnitType>("OpenSim!Units!UnitType", jlcxx::julia_type("CppEnum"));
  types.set_const("OpenSim!Units!UnknownUnits", OpenSim::Units::UnknownUnits);
  types.set_const("OpenSim!Units!Radians", OpenSim::Units::Radians);
  types.set_const("OpenSim!Units!Degrees", OpenSim::Units::Degrees);
  types.set_const("OpenSim!Units!Millimeters", OpenSim::Units::Millimeters);
  types.set_const("OpenSim!Units!Centimeters", OpenSim::Units::Centimeters);
  types.set_const("OpenSim!Units!Meters", OpenSim::Units::Meters);
  types.set_const("OpenSim!Units!Seconds", OpenSim::Units::Seconds);
  types.set_const("OpenSim!Units!Milliseconds", OpenSim::Units::Milliseconds);
  types.set_const("OpenSim!Units!Newtons", OpenSim::Units::Newtons);

  DEBUG_MSG("Adding wrapper for enum OpenSim::XYFunctionInterface::FunctionType (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/XYFunctionInterface.h:73:10
  types.add_bits<OpenSim::XYFunctionInterface::FunctionType>("OpenSim!XYFunctionInterface!FunctionType", jlcxx::julia_type("CppEnum"));
  types.set_const("OpenSim!XYFunctionInterface!typeConstant", OpenSim::XYFunctionInterface::typeConstant);
  types.set_const("OpenSim!XYFunctionInterface!typeStepFunction", OpenSim::XYFunctionInterface::typeStepFunction);
  types.set_const("OpenSim!XYFunctionInterface!typePiecewiseConstantFunction", OpenSim::XYFunctionInterface::typePiecewiseConstantFunction);
  types.set_const("OpenSim!XYFunctionInterface!typePiecewiseLinearFunction", OpenSim::XYFunctionInterface::typePiecewiseLinearFunction);
  types.set_const("OpenSim!XYFunctionInterface!typeLinearFunction", OpenSim::XYFunctionInterface::typeLinearFunction);
  types.set_const("OpenSim!XYFunctionInterface!typeNatCubicSpline", OpenSim::XYFunctionInterface::typeNatCubicSpline);
  types.set_const("OpenSim!XYFunctionInterface!typeGCVSpline", OpenSim::XYFunctionInterface::typeGCVSpline);
  types.set_const("OpenSim!XYFunctionInterface!typeUndefined", OpenSim::XYFunctionInterface::typeUndefined);

  DEBUG_MSG("Adding wrapper for type OpenSim::Exception (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Exception.h:123:22
  auto t0 = types.add_type<OpenSim::Exception>("OpenSim!Exception");
  t0.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type OpenSim::InvalidArgument (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Exception.h:229:7
  types.add_type<OpenSim::InvalidArgument>("OpenSim!InvalidArgument", jlcxx::julia_base_type<OpenSim::Exception>());

  DEBUG_MSG("Adding wrapper for type OpenSim::InvalidCall (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Exception.h:242:7
  types.add_type<OpenSim::InvalidCall>("OpenSim!InvalidCall", jlcxx::julia_base_type<OpenSim::Exception>());

  DEBUG_MSG("Adding wrapper for type OpenSim::InvalidTemplateArgument (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Exception.h:255:7
  types.add_type<OpenSim::InvalidTemplateArgument>("OpenSim!InvalidTemplateArgument", jlcxx::julia_base_type<OpenSim::Exception>());

  DEBUG_MSG("Adding wrapper for type OpenSim::IndexOutOfRange (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Exception.h:268:7
  types.add_type<OpenSim::IndexOutOfRange>("OpenSim!IndexOutOfRange", jlcxx::julia_base_type<OpenSim::Exception>());

  DEBUG_MSG("Adding wrapper for type OpenSim::KeyNotFound (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Exception.h:285:7
  types.add_type<OpenSim::KeyNotFound>("OpenSim!KeyNotFound", jlcxx::julia_base_type<OpenSim::Exception>());

  DEBUG_MSG("Adding wrapper for type OpenSim::IOError (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Exception.h:298:7
  auto t6 = types.add_type<OpenSim::IOError>("OpenSim!IOError", jlcxx::julia_base_type<OpenSim::Exception>());
  t6.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type OpenSim::ComponentNotFound (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Exception.h:303:7
  types.add_type<OpenSim::ComponentNotFound>("OpenSim!ComponentNotFound", jlcxx::julia_base_type<OpenSim::Exception>());

  DEBUG_MSG("Adding wrapper for type OpenSim::NonUniqueLabels (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Exception.h:320:7
  auto t8 = types.add_type<OpenSim::NonUniqueLabels>("OpenSim!NonUniqueLabels");
  t8.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type OpenSim::Logger (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Logger.h:38:22
  auto t9 = types.add_type<OpenSim::Logger>("OpenSim!Logger");

  DEBUG_MSG("Adding wrapper for type OpenSim::InvalidPropertyValue (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/AbstractProperty.h:43:7
  types.add_type<OpenSim::InvalidPropertyValue>("OpenSim!InvalidPropertyValue", jlcxx::julia_base_type<OpenSim::Exception>());

  DEBUG_MSG("Adding wrapper for type OpenSim::AbstractProperty (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/AbstractProperty.h:75:22
  auto t14 = types.add_type<OpenSim::AbstractProperty>("OpenSim!AbstractProperty");

  DEBUG_MSG("Adding wrapper for type OpenSim::Object (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:193:22
  auto t15 = types.add_type<OpenSim::Object>("OpenSim!Object");

  DEBUG_MSG("Adding wrapper for type SimTK::Xml::Element (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Xml.h:1033:32
  auto t16 = types.add_type<SimTK::Xml::Element>("SimTK!Xml!Element");
  t16.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type SimTK::String (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/String.h:62:7
  auto t21 = types.add_type<SimTK::String>("SimTK!String", jlcxx::julia_base_type<std::string>());
  t21.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type OpenSim::Property::TypeHelper (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Property.h:608:40
  auto t22 = types.add_type<OpenSim::Property::TypeHelper>("OpenSim!Property!TypeHelper");
  t22.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type OpenSim::Property::TypeHelper (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Property.h:334:12
  auto t23 = types.add_type<OpenSim::Property::TypeHelper>("OpenSim!Property!TypeHelper");
  t23.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type OpenSim::PropertyIndex (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Property.h:1234:32
  auto t26 = types.add_type<OpenSim::PropertyIndex>("OpenSim!PropertyIndex");
  t26.template constructor<>(/*finalize=*/true);

  // defined in /opt/opensim-core/OpenSim/Common/Object.h:1162:27
  auto t27 = types.add_type<jlcxx::Parametric<jlcxx::TypeVar<1>>>("OpenSim!Object_GetClassName");

  DEBUG_MSG("Adding wrapper for type OpenSim::ExperimentalSensor (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/ExperimentalSensor.h:35:22
  auto t28 = types.add_type<OpenSim::ExperimentalSensor>("OpenSim!ExperimentalSensor", jlcxx::julia_base_type<OpenSim::Object>());
  t28.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type OpenSim::APDMDataReaderSettings (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/APDMDataReaderSettings.h:36:22
  auto t29 = types.add_type<OpenSim::APDMDataReaderSettings>("OpenSim!APDMDataReaderSettings", jlcxx::julia_base_type<OpenSim::Object>());
  t29.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type OpenSim::InvalidRow (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/AbstractDataTable.h:39:7
  auto t30 = types.add_type<OpenSim::InvalidRow>("OpenSim!InvalidRow", jlcxx::julia_base_type<OpenSim::Exception>());
  t30.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type OpenSim::InvalidColumn (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/AbstractDataTable.h:44:7
  auto t31 = types.add_type<OpenSim::InvalidColumn>("OpenSim!InvalidColumn", jlcxx::julia_base_type<OpenSim::Exception>());
  t31.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type OpenSim::InvalidColumnLabel (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/AbstractDataTable.h:49:7
  auto t32 = types.add_type<OpenSim::InvalidColumnLabel>("OpenSim!InvalidColumnLabel", jlcxx::julia_base_type<OpenSim::Exception>());
  t32.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type OpenSim::IncorrectNumColumns (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/AbstractDataTable.h:55:7
  auto t33 = types.add_type<OpenSim::IncorrectNumColumns>("OpenSim!IncorrectNumColumns", jlcxx::julia_base_type<OpenSim::InvalidRow>());

  DEBUG_MSG("Adding wrapper for type OpenSim::IncorrectNumRows (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/AbstractDataTable.h:71:7
  auto t34 = types.add_type<OpenSim::IncorrectNumRows>("OpenSim!IncorrectNumRows", jlcxx::julia_base_type<OpenSim::InvalidColumn>());

  DEBUG_MSG("Adding wrapper for type OpenSim::RowIndexOutOfRange (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/AbstractDataTable.h:87:7
  auto t35 = types.add_type<OpenSim::RowIndexOutOfRange>("OpenSim!RowIndexOutOfRange", jlcxx::julia_base_type<OpenSim::IndexOutOfRange>());
  t35.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type OpenSim::ColumnIndexOutOfRange (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/AbstractDataTable.h:92:7
  auto t36 = types.add_type<OpenSim::ColumnIndexOutOfRange>("OpenSim!ColumnIndexOutOfRange", jlcxx::julia_base_type<OpenSim::IndexOutOfRange>());
  t36.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type OpenSim::MissingMetaData (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/AbstractDataTable.h:97:7
  auto t37 = types.add_type<OpenSim::MissingMetaData>("OpenSim!MissingMetaData", jlcxx::julia_base_type<OpenSim::Exception>());

  DEBUG_MSG("Adding wrapper for type OpenSim::NoColumnLabels (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/AbstractDataTable.h:110:7
  auto t38 = types.add_type<OpenSim::NoColumnLabels>("OpenSim!NoColumnLabels", jlcxx::julia_base_type<OpenSim::Exception>());

  DEBUG_MSG("Adding wrapper for type OpenSim::IncorrectMetaDataLength (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/AbstractDataTable.h:123:7
  auto t39 = types.add_type<OpenSim::IncorrectMetaDataLength>("OpenSim!IncorrectMetaDataLength", jlcxx::julia_base_type<OpenSim::Exception>());

  DEBUG_MSG("Adding wrapper for type OpenSim::EmptyTable (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/AbstractDataTable.h:140:7
  auto t40 = types.add_type<OpenSim::EmptyTable>("OpenSim!EmptyTable", jlcxx::julia_base_type<OpenSim::Exception>());

  DEBUG_MSG("Adding wrapper for type OpenSim::KeyExists (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/AbstractDataTable.h:150:7
  auto t41 = types.add_type<OpenSim::KeyExists>("OpenSim!KeyExists", jlcxx::julia_base_type<OpenSim::Exception>());

  DEBUG_MSG("Adding wrapper for type OpenSim::AbstractDataTable (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/AbstractDataTable.h:176:22
  auto t42 = types.add_type<OpenSim::AbstractDataTable>("OpenSim!AbstractDataTable");

  // defined in /../lib/gcc/x86_64-linux-gnu/12/../../../../include/c++/12/bits/char_traits.h:329:12
  auto t44 = types.add_type<jlcxx::Parametric<jlcxx::TypeVar<1>>>("std!char_traits");

  // defined in /../lib/gcc/x86_64-linux-gnu/12/../../../../include/c++/12/bits/memoryfwd.h:64:11
  auto t45 = types.add_type<jlcxx::Parametric<jlcxx::TypeVar<1>>>("std!allocator");

  // defined in /../lib/gcc/x86_64-linux-gnu/12/../../../../include/c++/12/bits/allocator.h:124:11
  auto t46 = types.add_type<jlcxx::Parametric<jlcxx::TypeVar<1>>>("std!allocator");

  DEBUG_MSG("Adding wrapper for type OpenSim::ValueArrayDictionary (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/ValueArrayDictionary.h:38:7
  auto t47 = types.add_type<OpenSim::ValueArrayDictionary>("OpenSim!ValueArrayDictionary");
  t47.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type OpenSim::DataAdapterAlreadyRegistered (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/DataAdapter.h:39:7
  types.add_type<OpenSim::DataAdapterAlreadyRegistered>("OpenSim!DataAdapterAlreadyRegistered", jlcxx::julia_base_type<OpenSim::Exception>());

  DEBUG_MSG("Adding wrapper for type OpenSim::NoRegisteredDataAdapter (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/DataAdapter.h:52:7
  types.add_type<OpenSim::NoRegisteredDataAdapter>("OpenSim!NoRegisteredDataAdapter", jlcxx::julia_base_type<OpenSim::Exception>());

  DEBUG_MSG("Adding wrapper for type OpenSim::TableNotFoundException (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/DataAdapter.h:65:7
  types.add_type<OpenSim::TableNotFoundException>("OpenSim!TableNotFoundException", jlcxx::julia_base_type<OpenSim::Exception>());

  DEBUG_MSG("Adding wrapper for type OpenSim::DataAdapter (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/DataAdapter.h:85:22
  auto t51 = types.add_type<OpenSim::DataAdapter>("OpenSim!DataAdapter");

  DEBUG_MSG("Adding wrapper for type OpenSim::EmptyFileName (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/FileAdapter.h:35:7
  types.add_type<OpenSim::EmptyFileName>("OpenSim!EmptyFileName", jlcxx::julia_base_type<OpenSim::InvalidArgument>());

  DEBUG_MSG("Adding wrapper for type OpenSim::FileDoesNotExist (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/FileAdapter.h:47:7
  types.add_type<OpenSim::FileDoesNotExist>("OpenSim!FileDoesNotExist", jlcxx::julia_base_type<OpenSim::IOError>());

  DEBUG_MSG("Adding wrapper for type OpenSim::FileIsEmpty (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/FileAdapter.h:60:7
  types.add_type<OpenSim::FileIsEmpty>("OpenSim!FileIsEmpty", jlcxx::julia_base_type<OpenSim::IOError>());

  DEBUG_MSG("Adding wrapper for type OpenSim::FileExtensionNotFound (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/FileAdapter.h:73:7
  types.add_type<OpenSim::FileExtensionNotFound>("OpenSim!FileExtensionNotFound", jlcxx::julia_base_type<OpenSim::InvalidArgument>());

  DEBUG_MSG("Adding wrapper for type OpenSim::UnexpectedColumnLabel (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/FileAdapter.h:87:7
  types.add_type<OpenSim::UnexpectedColumnLabel>("OpenSim!UnexpectedColumnLabel", jlcxx::julia_base_type<OpenSim::IOError>());

  DEBUG_MSG("Adding wrapper for type OpenSim::RowLengthMismatch (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/FileAdapter.h:105:7
  types.add_type<OpenSim::RowLengthMismatch>("OpenSim!RowLengthMismatch", jlcxx::julia_base_type<OpenSim::IOError>());

  DEBUG_MSG("Adding wrapper for type OpenSim::NoTableFound (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/FileAdapter.h:125:7
  types.add_type<OpenSim::NoTableFound>("OpenSim!NoTableFound", jlcxx::julia_base_type<OpenSim::InvalidArgument>());

  DEBUG_MSG("Adding wrapper for type OpenSim::KeyMissing (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/FileAdapter.h:137:7
  types.add_type<OpenSim::KeyMissing>("OpenSim!KeyMissing", jlcxx::julia_base_type<OpenSim::InvalidArgument>());

  DEBUG_MSG("Adding wrapper for type OpenSim::IncorrectTableType (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/FileAdapter.h:150:7
  types.add_type<OpenSim::IncorrectTableType>("OpenSim!IncorrectTableType", jlcxx::julia_base_type<OpenSim::InvalidArgument>());

  DEBUG_MSG("Adding wrapper for type OpenSim::TableMissingHeader (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/FileAdapter.h:165:7
  types.add_type<OpenSim::TableMissingHeader>("OpenSim!TableMissingHeader", jlcxx::julia_base_type<OpenSim::Exception>());

  DEBUG_MSG("Adding wrapper for type OpenSim::FileAdapter (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/FileAdapter.h:186:22
  auto t62 = types.add_type<OpenSim::FileAdapter>("OpenSim!FileAdapter", jlcxx::julia_base_type<OpenSim::DataAdapter>());

  DEBUG_MSG("Adding wrapper for type OpenSim::IO (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/IO.h:49:22
  auto t63 = types.add_type<OpenSim::IO>("OpenSim!IO");
  t63.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type OpenSim::IO::CwdChanger (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/IO.h:146:26
  auto t65 = types.add_type<OpenSim::IO::CwdChanger>("OpenSim!IO!CwdChanger");

  DEBUG_MSG("Adding wrapper for type OpenSim::InvalidTable (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/TimeSeriesTable.h:37:7
  auto t67 = types.add_type<OpenSim::InvalidTable>("OpenSim!InvalidTable", jlcxx::julia_base_type<OpenSim::Exception>());
  t67.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type OpenSim::TimeColumnNotIncreasing (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/TimeSeriesTable.h:42:7
  types.add_type<OpenSim::TimeColumnNotIncreasing>("OpenSim!TimeColumnNotIncreasing", jlcxx::julia_base_type<OpenSim::InvalidTable>());

  DEBUG_MSG("Adding wrapper for type OpenSim::InvalidTimestamp (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/TimeSeriesTable.h:54:7
  auto t69 = types.add_type<OpenSim::InvalidTimestamp>("OpenSim!InvalidTimestamp", jlcxx::julia_base_type<OpenSim::InvalidRow>());
  t69.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type OpenSim::TimestampLessThanEqualToPrevious (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/TimeSeriesTable.h:61:7
  types.add_type<OpenSim::TimestampLessThanEqualToPrevious>("OpenSim!TimestampLessThanEqualToPrevious", jlcxx::julia_base_type<OpenSim::InvalidTimestamp>());

  DEBUG_MSG("Adding wrapper for type OpenSim::TimestampGreaterThanEqualToNext (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/TimeSeriesTable.h:80:7
  types.add_type<OpenSim::TimestampGreaterThanEqualToNext>("OpenSim!TimestampGreaterThanEqualToNext", jlcxx::julia_base_type<OpenSim::InvalidTimestamp>());

  DEBUG_MSG("Adding wrapper for type OpenSim::TimeOutOfRange (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/TimeSeriesTable.h:99:7
  types.add_type<OpenSim::TimeOutOfRange>("OpenSim!TimeOutOfRange", jlcxx::julia_base_type<OpenSim::Exception>());

  DEBUG_MSG("Adding wrapper for type OpenSim::InvalidTimeRange (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/TimeSeriesTable.h:116:7
  types.add_type<OpenSim::InvalidTimeRange>("OpenSim!InvalidTimeRange", jlcxx::julia_base_type<OpenSim::Exception>());

  DEBUG_MSG("Adding wrapper for type OpenSim::IMUDataReader (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/IMUDataReader.h:36:22
  auto t75 = types.add_type<OpenSim::IMUDataReader>("OpenSim!IMUDataReader", jlcxx::julia_base_type<OpenSim::DataAdapter>());

  DEBUG_MSG("Adding wrapper for type OpenSim::APDMDataReader (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/APDMDataReader.h:41:22
  auto t76 = types.add_type<OpenSim::APDMDataReader>("OpenSim!APDMDataReader", jlcxx::julia_base_type<OpenSim::IMUDataReader>());
  t76.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type OpenSim::IncorrectNumTokens (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/DelimFileAdapter.h:38:7
  types.add_type<OpenSim::IncorrectNumTokens>("OpenSim!IncorrectNumTokens", jlcxx::julia_base_type<OpenSim::Exception>());

  DEBUG_MSG("Adding wrapper for type OpenSim::DataTypeMismatch (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/DelimFileAdapter.h:50:7
  types.add_type<OpenSim::DataTypeMismatch>("OpenSim!DataTypeMismatch", jlcxx::julia_base_type<OpenSim::Exception>());

  DEBUG_MSG("Adding wrapper for type OpenSim::CSVFileAdapter (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/CSVFileAdapter.h:32:22
  auto t81 = types.add_type<OpenSim::CSVFileAdapter>("OpenSim!CSVFileAdapter");
  t81.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type OpenSim::FileRemover (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/CommonUtilities.h:61:22
  auto t82 = types.add_type<OpenSim::FileRemover>("OpenSim!FileRemover");

  DEBUG_MSG("Adding wrapper for type OpenSim::ComponentPath (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/ComponentPath.h:50:22
  auto t84 = types.add_type<OpenSim::ComponentPath>("OpenSim!ComponentPath");
  t84.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type OpenSim::ComponentHasNoName (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:65:7
  types.add_type<OpenSim::ComponentHasNoName>("OpenSim!ComponentHasNoName", jlcxx::julia_base_type<OpenSim::Exception>());

  DEBUG_MSG("Adding wrapper for type OpenSim::InvalidComponentName (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:79:7
  types.add_type<OpenSim::InvalidComponentName>("OpenSim!InvalidComponentName", jlcxx::julia_base_type<OpenSim::Exception>());

  DEBUG_MSG("Adding wrapper for type OpenSim::ComponentNotFoundOnSpecifiedPath (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:95:7
  types.add_type<OpenSim::ComponentNotFoundOnSpecifiedPath>("OpenSim!ComponentNotFoundOnSpecifiedPath", jlcxx::julia_base_type<OpenSim::ComponentNotFound>());

  DEBUG_MSG("Adding wrapper for type OpenSim::ComponentIsAnOrphan (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:113:7
  types.add_type<OpenSim::ComponentIsAnOrphan>("OpenSim!ComponentIsAnOrphan", jlcxx::julia_base_type<OpenSim::Exception>());

  DEBUG_MSG("Adding wrapper for type OpenSim::SubcomponentsWithDuplicateName (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:130:7
  types.add_type<OpenSim::SubcomponentsWithDuplicateName>("OpenSim!SubcomponentsWithDuplicateName", jlcxx::julia_base_type<OpenSim::Exception>());

  DEBUG_MSG("Adding wrapper for type OpenSim::ComponentIsRootWithNoSubcomponents (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:145:7
  types.add_type<OpenSim::ComponentIsRootWithNoSubcomponents>("OpenSim!ComponentIsRootWithNoSubcomponents", jlcxx::julia_base_type<OpenSim::Exception>());

  DEBUG_MSG("Adding wrapper for type OpenSim::ComponentAlreadyPartOfOwnershipTree (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:162:7
  types.add_type<OpenSim::ComponentAlreadyPartOfOwnershipTree>("OpenSim!ComponentAlreadyPartOfOwnershipTree", jlcxx::julia_base_type<OpenSim::Exception>());

  DEBUG_MSG("Adding wrapper for type OpenSim::ComponentHasNoSystem (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:177:7
  types.add_type<OpenSim::ComponentHasNoSystem>("OpenSim!ComponentHasNoSystem", jlcxx::julia_base_type<OpenSim::Exception>());

  DEBUG_MSG("Adding wrapper for type OpenSim::SocketNotFound (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:191:7
  types.add_type<OpenSim::SocketNotFound>("OpenSim!SocketNotFound", jlcxx::julia_base_type<OpenSim::Exception>());

  DEBUG_MSG("Adding wrapper for type OpenSim::InputNotFound (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:205:7
  types.add_type<OpenSim::InputNotFound>("OpenSim!InputNotFound", jlcxx::julia_base_type<OpenSim::Exception>());

  DEBUG_MSG("Adding wrapper for type OpenSim::OutputNotFound (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:219:7
  types.add_type<OpenSim::OutputNotFound>("OpenSim!OutputNotFound", jlcxx::julia_base_type<OpenSim::Exception>());

  DEBUG_MSG("Adding wrapper for type OpenSim::Component (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:402:22
  auto t96 = types.add_type<OpenSim::Component>("OpenSim!Component", jlcxx::julia_base_type<OpenSim::Object>());

  DEBUG_MSG("Adding wrapper for type SimTK::MultibodySystem (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/simbody/internal/MultibodySystem.h:48:28
  auto t97 = types.add_type<SimTK::MultibodySystem>("SimTK!MultibodySystem");
  t97.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type SimTK::State (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/State.h:280:32
  auto t98 = types.add_type<SimTK::State>("SimTK!State");
  t98.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type OpenSim::AbstractSocket (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/ComponentSocket.h:105:22
  types.add_type<OpenSim::AbstractSocket>("OpenSim!AbstractSocket");

  DEBUG_MSG("Adding wrapper for type OpenSim::AbstractInput (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/ComponentSocket.h:493:22
  types.add_type<OpenSim::AbstractInput>("OpenSim!AbstractInput", jlcxx::julia_base_type<OpenSim::AbstractSocket>());

  DEBUG_MSG("Adding wrapper for type OpenSim::AbstractOutput (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/ComponentOutput.h:101:22
  types.add_type<OpenSim::AbstractOutput>("OpenSim!AbstractOutput");

  DEBUG_MSG("Adding wrapper for type SimTK::CacheEntryIndex (" __HERE__ ")");
  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/State.h:105:32
  auto t103 = types.add_type<SimTK::CacheEntryIndex>("SimTK!CacheEntryIndex");
  t103.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type OpenSim::ConnecteeNotSpecified (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:3313:7
  types.add_type<OpenSim::ConnecteeNotSpecified>("OpenSim!ConnecteeNotSpecified", jlcxx::julia_base_type<OpenSim::Exception>());

  DEBUG_MSG("Adding wrapper for type OpenSim::AbstractChannel (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/ComponentOutput.h:49:7
  types.add_type<OpenSim::AbstractChannel>("OpenSim!AbstractChannel");

  DEBUG_MSG("Adding wrapper for type OpenSim::Function (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Function.h:54:22
  auto t106 = types.add_type<OpenSim::Function>("OpenSim!Function", jlcxx::julia_base_type<OpenSim::Object>());

  DEBUG_MSG("Adding wrapper for type OpenSim::Constant (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Constant.h:44:22
  auto t107 = types.add_type<OpenSim::Constant>("OpenSim!Constant", jlcxx::julia_base_type<OpenSim::Function>());
  t107.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type OpenSim::Event (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Event.h:28:8
  auto t108 = types.add_type<OpenSim::Event>("OpenSim!Event");
  t108.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type OpenSim::ObjectGroup (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/ObjectGroup.h:53:22
  auto t110 = types.add_type<OpenSim::ObjectGroup>("OpenSim!ObjectGroup", jlcxx::julia_base_type<OpenSim::Object>());
  t110.template constructor<>(/*finalize=*/true);

  // defined in /opt/opensim-core/OpenSim/Common/Property_Deprecated.h:70:26
  auto t112 = types.add_type<jlcxx::Parametric<jlcxx::TypeVar<1>>>("OpenSim!Array");

  DEBUG_MSG("Adding wrapper for type OpenSim::FunctionSet (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/FunctionSet.h:47:22
  auto t113 = types.add_type<OpenSim::FunctionSet>("OpenSim!FunctionSet");
  t113.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type OpenSim::GCVSpline (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/GCVSpline.h:70:22
  auto t115 = types.add_type<OpenSim::GCVSpline>("OpenSim!GCVSpline", jlcxx::julia_base_type<OpenSim::Function>());
  t115.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type OpenSim::GCVSplineSet (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/GCVSplineSet.h:50:22
  auto t116 = types.add_type<OpenSim::GCVSplineSet>("OpenSim!GCVSplineSet", jlcxx::julia_base_type<OpenSim::FunctionSet>());
  t116.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type OpenSim::StorageInterface (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/StorageInterface.h:43:22
  auto t149 = types.add_type<OpenSim::StorageInterface>("OpenSim!StorageInterface", jlcxx::julia_base_type<OpenSim::Object>());

  DEBUG_MSG("Adding wrapper for type OpenSim::LinearFunction (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/LinearFunction.h:46:22
  auto t118 = types.add_type<OpenSim::LinearFunction>("OpenSim!LinearFunction", jlcxx::julia_base_type<OpenSim::Function>());
  t118.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type OpenSim::LogSink (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/LogSink.h:37:22
  types.add_type<OpenSim::LogSink>("OpenSim!LogSink");

  DEBUG_MSG("Adding wrapper for type OpenSim::StringLogSink (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/LogSink.h:54:22
  auto t120 = types.add_type<OpenSim::StringLogSink>("OpenSim!StringLogSink", jlcxx::julia_base_type<OpenSim::LogSink>());
  t120.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type OpenSim::Units (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Units.h:41:22
  auto t121 = types.add_type<OpenSim::Units>("OpenSim!Units");
  t121.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type OpenSim::MarkerData (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/MarkerData.h:48:22
  auto t123 = types.add_type<OpenSim::MarkerData>("OpenSim!MarkerData", jlcxx::julia_base_type<OpenSim::Object>());
  t123.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type OpenSim::MarkerFrame (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/MarkerFrame.h:42:22
  auto t124 = types.add_type<OpenSim::MarkerFrame>("OpenSim!MarkerFrame", jlcxx::julia_base_type<OpenSim::Object>());
  t124.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type OpenSim::MultiplierFunction (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/MultiplierFunction.h:47:22
  auto t125 = types.add_type<OpenSim::MultiplierFunction>("OpenSim!MultiplierFunction", jlcxx::julia_base_type<OpenSim::Function>());
  t125.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type OpenSim::MultivariatePolynomialFunction (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/MultivariatePolynomialFunction.h:61:22
  auto t126 = types.add_type<OpenSim::MultivariatePolynomialFunction>("OpenSim!MultivariatePolynomialFunction", jlcxx::julia_base_type<OpenSim::Function>());
  t126.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type OpenSim::PiecewiseConstantFunction (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/PiecewiseConstantFunction.h:49:22
  auto t128 = types.add_type<OpenSim::PiecewiseConstantFunction>("OpenSim!PiecewiseConstantFunction", jlcxx::julia_base_type<OpenSim::Function>());
  t128.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type OpenSim::PiecewiseLinearFunction (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/PiecewiseLinearFunction.h:48:22
  auto t129 = types.add_type<OpenSim::PiecewiseLinearFunction>("OpenSim!PiecewiseLinearFunction", jlcxx::julia_base_type<OpenSim::Function>());
  t129.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type OpenSim::PolynomialFunction (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/PolynomialFunction.h:43:7
  auto t130 = types.add_type<OpenSim::PolynomialFunction>("OpenSim!PolynomialFunction", jlcxx::julia_base_type<OpenSim::Function>());
  t130.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type OpenSim::PropertyGroup (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/PropertyGroup.h:52:22
  auto t131 = types.add_type<OpenSim::PropertyGroup>("OpenSim!PropertyGroup");
  t131.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type OpenSim::Property_Deprecated (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Property_Deprecated.h:88:22
  types.add_type<OpenSim::Property_Deprecated>("OpenSim!Property_Deprecated", jlcxx::julia_base_type<OpenSim::AbstractProperty>());

  DEBUG_MSG("Adding wrapper for type OpenSim::AbstractReporter (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Reporter.h:46:22
  auto t133 = types.add_type<OpenSim::AbstractReporter>("OpenSim!AbstractReporter", jlcxx::julia_base_type<OpenSim::Component>());

  DEBUG_MSG("Adding wrapper for type OpenSim::STODataTypeNotSupported (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/STOFileAdapter.h:30:7
  types.add_type<OpenSim::STODataTypeNotSupported>("OpenSim!STODataTypeNotSupported", jlcxx::julia_base_type<OpenSim::Exception>());

  DEBUG_MSG("Adding wrapper for type OpenSim::Scale (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Scale.h:48:22
  auto t139 = types.add_type<OpenSim::Scale>("OpenSim!Scale", jlcxx::julia_base_type<OpenSim::Object>());
  t139.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type OpenSim::ScaleSet (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/ScaleSet.h:45:22
  auto t140 = types.add_type<OpenSim::ScaleSet>("OpenSim!ScaleSet");
  t140.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type OpenSim::SimmSpline (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/SimmSpline.h:50:22
  auto t141 = types.add_type<OpenSim::SimmSpline>("OpenSim!SimmSpline", jlcxx::julia_base_type<OpenSim::Function>());
  t141.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type OpenSim::Sine (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Sine.h:46:22
  auto t142 = types.add_type<OpenSim::Sine>("OpenSim!Sine", jlcxx::julia_base_type<OpenSim::Function>());
  t142.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type OpenSim::SmoothSegmentedFunction (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/SmoothSegmentedFunction.h:61:26
  auto t143 = types.add_type<OpenSim::SmoothSegmentedFunction>("OpenSim!SmoothSegmentedFunction");
  t143.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type OpenSim::SmoothSegmentedFunctionFactory (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/SmoothSegmentedFunctionFactory.h:125:22
  auto t144 = types.add_type<OpenSim::SmoothSegmentedFunctionFactory>("OpenSim!SmoothSegmentedFunctionFactory");
  t144.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type OpenSim::StateVector (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/StateVector.h:54:22
  auto t145 = types.add_type<OpenSim::StateVector>("OpenSim!StateVector");
  t145.template constructor<>(/*finalize=*/true);

  // defined in /opt/opensim-core-fullrelease/sdk/include/simbody/SimTKcommon/internal/Vector_.h:50:28
  auto t146 = types.add_type<jlcxx::Parametric<jlcxx::TypeVar<1>>>("SimTK!Vector_");

  DEBUG_MSG("Adding wrapper for type _IO_FILE (" __HERE__ ")");
  // defined in /usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h:49:8
  auto t147 = types.add_type<_IO_FILE>("_IO_FILE");
  t147.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type OpenSim::StepFunction (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/StepFunction.h:59:22
  auto t148 = types.add_type<OpenSim::StepFunction>("OpenSim!StepFunction", jlcxx::julia_base_type<OpenSim::Function>());
  t148.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type OpenSim::Storage (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:64:22
  auto t117 = types.add_type<OpenSim::Storage>("OpenSim!Storage", jlcxx::julia_base_type<OpenSim::StorageInterface>());
  t117.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type OpenSim::MissingHeader (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/TRCFileAdapter.h:55:7
  auto t150 = types.add_type<OpenSim::MissingHeader>("OpenSim!MissingHeader", jlcxx::julia_base_type<OpenSim::IOError>());
  t150.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type OpenSim::IncorrectNumMetaDataKeys (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/TRCFileAdapter.h:62:7
  types.add_type<OpenSim::IncorrectNumMetaDataKeys>("OpenSim!IncorrectNumMetaDataKeys", jlcxx::julia_base_type<OpenSim::IOError>());

  DEBUG_MSG("Adding wrapper for type OpenSim::UnexpectedMetaDataKey (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/TRCFileAdapter.h:80:7
  types.add_type<OpenSim::UnexpectedMetaDataKey>("OpenSim!UnexpectedMetaDataKey", jlcxx::julia_base_type<OpenSim::IOError>());

  DEBUG_MSG("Adding wrapper for type OpenSim::MetaDataLengthMismatch (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/TRCFileAdapter.h:98:7
  types.add_type<OpenSim::MetaDataLengthMismatch>("OpenSim!MetaDataLengthMismatch", jlcxx::julia_base_type<OpenSim::IOError>());

  DEBUG_MSG("Adding wrapper for type OpenSim::IncorrectNumColumnLabels (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/TRCFileAdapter.h:116:7
  types.add_type<OpenSim::IncorrectNumColumnLabels>("OpenSim!IncorrectNumColumnLabels", jlcxx::julia_base_type<OpenSim::IOError>());

  DEBUG_MSG("Adding wrapper for type OpenSim::TRCFileAdapter (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/TRCFileAdapter.h:138:22
  auto t155 = types.add_type<OpenSim::TRCFileAdapter>("OpenSim!TRCFileAdapter", jlcxx::julia_base_type<OpenSim::FileAdapter>());
  t155.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type OpenSim::TableUtilities (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/TableUtilities.h:34:22
  auto t157 = types.add_type<OpenSim::TableUtilities>("OpenSim!TableUtilities");
  t157.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type OpenSim::XYPoint (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/XYFunctionInterface.h:54:7
  auto t158 = types.add_type<OpenSim::XYPoint>("OpenSim!XYPoint");
  t158.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type OpenSim::XYFunctionInterface (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/XYFunctionInterface.h:69:22
  auto t159 = types.add_type<OpenSim::XYFunctionInterface>("OpenSim!XYFunctionInterface", jlcxx::julia_base_type<OpenSim::Object>());

  DEBUG_MSG("Adding wrapper for type OpenSim::XsensDataReader (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/XsensDataReader.h:42:22
  auto t161 = types.add_type<OpenSim::XsensDataReader>("OpenSim!XsensDataReader", jlcxx::julia_base_type<OpenSim::IMUDataReader>());
  t161.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type OpenSim::XsensDataReaderSettings (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/XsensDataReaderSettings.h:37:22
  auto t162 = types.add_type<OpenSim::XsensDataReaderSettings>("OpenSim!XsensDataReaderSettings", jlcxx::julia_base_type<OpenSim::Object>());
  t162.template constructor<>(/*finalize=*/true);

  /**********************************************************************/
  /* Wrappers for the methods of class OpenSim::Exception
   */

  DEBUG_MSG("Adding wrapper for void OpenSim::Exception::setMessage(const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Exception::setMessage(const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/Exception.h:215:10
  t0.method("setMessage", static_cast<void (OpenSim::Exception::*)(const std::string &) >(&OpenSim::Exception::setMessage));

  DEBUG_MSG("Adding wrapper for const char * OpenSim::Exception::getMessage() (" __HERE__ ")");
  // signature to use in the veto list: const char * OpenSim::Exception::getMessage()
  // defined in /opt/opensim-core/OpenSim/Common/Exception.h:216:17
  t0.method("getMessage", static_cast<const char * (OpenSim::Exception::*)()  const>(&OpenSim::Exception::getMessage));

  DEBUG_MSG("Adding wrapper for const char * OpenSim::Exception::what() (" __HERE__ ")");
  // signature to use in the veto list: const char * OpenSim::Exception::what()
  // defined in /opt/opensim-core/OpenSim/Common/Exception.h:223:17
  t0.method("what", static_cast<const char * (OpenSim::Exception::*)()  const>(&OpenSim::Exception::what));

  /* End of OpenSim::Exception class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class OpenSim::Logger
   */

  DEBUG_MSG("Adding wrapper for void OpenSim::Logger::setLevel(OpenSim::Logger::Level) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Logger::setLevel(OpenSim::Logger::Level)
  // defined in /opt/opensim-core/OpenSim/Common/Logger.h:74:17
  t9.method("OpenSim!Logger!setLevel", static_cast<void (*)(OpenSim::Logger::Level) >(&OpenSim::Logger::setLevel));

  DEBUG_MSG("Adding wrapper for OpenSim::Logger::Level OpenSim::Logger::getLevel() (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::Logger::Level OpenSim::Logger::getLevel()
  // defined in /opt/opensim-core/OpenSim/Common/Logger.h:75:18
  t9.method("OpenSim!Logger!getLevel", static_cast<OpenSim::Logger::Level (*)() >(&OpenSim::Logger::getLevel));

  DEBUG_MSG("Adding wrapper for void OpenSim::Logger::setLevelString(std::string) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Logger::setLevelString(std::string)
  // defined in /opt/opensim-core/OpenSim/Common/Logger.h:88:17
  t9.method("OpenSim!Logger!setLevelString", static_cast<void (*)(std::string) >(&OpenSim::Logger::setLevelString));

  DEBUG_MSG("Adding wrapper for std::string OpenSim::Logger::getLevelString() (" __HERE__ ")");
  // signature to use in the veto list: std::string OpenSim::Logger::getLevelString()
  // defined in /opt/opensim-core/OpenSim/Common/Logger.h:89:24
  t9.method("OpenSim!Logger!getLevelString", static_cast<std::string (*)() >(&OpenSim::Logger::getLevelString));

  DEBUG_MSG("Adding wrapper for bool OpenSim::Logger::shouldLog(OpenSim::Logger::Level) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::Logger::shouldLog(OpenSim::Logger::Level)
  // defined in /opt/opensim-core/OpenSim/Common/Logger.h:99:17
  t9.method("OpenSim!Logger!shouldLog", static_cast<bool (*)(OpenSim::Logger::Level) >(&OpenSim::Logger::shouldLog));

  DEBUG_MSG("Adding wrapper for void OpenSim::Logger::addFileSink(const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Logger::addFileSink(const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/Logger.h:168:17
  t9.method("OpenSim!Logger!addFileSink", static_cast<void (*)(const std::string &) >(&OpenSim::Logger::addFileSink));
  t9.method("OpenSim!Logger!addFileSink", []()->void{ OpenSim::Logger::addFileSink(); });

  DEBUG_MSG("Adding wrapper for void OpenSim::Logger::removeFileSink() (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Logger::removeFileSink()
  // defined in /opt/opensim-core/OpenSim/Common/Logger.h:174:17
  t9.method("OpenSim!Logger!removeFileSink", static_cast<void (*)() >(&OpenSim::Logger::removeFileSink));

  /* End of OpenSim::Logger class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class OpenSim::AbstractProperty
   */

  DEBUG_MSG("Adding wrapper for void OpenSim::AbstractProperty::setAllowableListSize(int, int) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::AbstractProperty::setAllowableListSize(int, int)
  // defined in /opt/opensim-core/OpenSim/Common/AbstractProperty.h:81:10
  t14.method("setAllowableListSize", static_cast<void (OpenSim::AbstractProperty::*)(int, int) >(&OpenSim::AbstractProperty::setAllowableListSize));

  DEBUG_MSG("Adding wrapper for void OpenSim::AbstractProperty::setAllowableListSize(int) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::AbstractProperty::setAllowableListSize(int)
  // defined in /opt/opensim-core/OpenSim/Common/AbstractProperty.h:87:10
  t14.method("setAllowableListSize", static_cast<void (OpenSim::AbstractProperty::*)(int) >(&OpenSim::AbstractProperty::setAllowableListSize));

  DEBUG_MSG("Adding wrapper for OpenSim::AbstractProperty * OpenSim::AbstractProperty::clone() (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::AbstractProperty * OpenSim::AbstractProperty::clone()
  // defined in /opt/opensim-core/OpenSim/Common/AbstractProperty.h:98:31
  t14.method("clone", static_cast<OpenSim::AbstractProperty * (OpenSim::AbstractProperty::*)()  const>(&OpenSim::AbstractProperty::clone));

  DEBUG_MSG("Adding wrapper for std::string OpenSim::AbstractProperty::toString() (" __HERE__ ")");
  // signature to use in the veto list: std::string OpenSim::AbstractProperty::toString()
  // defined in /opt/opensim-core/OpenSim/Common/AbstractProperty.h:106:25
  t14.method("toString", static_cast<std::string (OpenSim::AbstractProperty::*)()  const>(&OpenSim::AbstractProperty::toString));

  DEBUG_MSG("Adding wrapper for std::string OpenSim::AbstractProperty::toStringForDisplay(const int) (" __HERE__ ")");
  // signature to use in the veto list: std::string OpenSim::AbstractProperty::toStringForDisplay(const int)
  // defined in /opt/opensim-core/OpenSim/Common/AbstractProperty.h:120:25
  t14.method("toStringForDisplay", static_cast<std::string (OpenSim::AbstractProperty::*)(const int)  const>(&OpenSim::AbstractProperty::toStringForDisplay));

  DEBUG_MSG("Adding wrapper for std::string OpenSim::AbstractProperty::getTypeName() (" __HERE__ ")");
  // signature to use in the veto list: std::string OpenSim::AbstractProperty::getTypeName()
  // defined in /opt/opensim-core/OpenSim/Common/AbstractProperty.h:127:25
  t14.method("getTypeName", static_cast<std::string (OpenSim::AbstractProperty::*)()  const>(&OpenSim::AbstractProperty::getTypeName));

  DEBUG_MSG("Adding wrapper for bool OpenSim::AbstractProperty::isObjectProperty() (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::AbstractProperty::isObjectProperty()
  // defined in /opt/opensim-core/OpenSim/Common/AbstractProperty.h:135:18
  t14.method("isObjectProperty", static_cast<bool (OpenSim::AbstractProperty::*)()  const>(&OpenSim::AbstractProperty::isObjectProperty));

  DEBUG_MSG("Adding wrapper for bool OpenSim::AbstractProperty::isUnnamedProperty() (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::AbstractProperty::isUnnamedProperty()
  // defined in /opt/opensim-core/OpenSim/Common/AbstractProperty.h:141:18
  t14.method("isUnnamedProperty", static_cast<bool (OpenSim::AbstractProperty::*)()  const>(&OpenSim::AbstractProperty::isUnnamedProperty));

  DEBUG_MSG("Adding wrapper for bool OpenSim::AbstractProperty::equals(const OpenSim::AbstractProperty &) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::AbstractProperty::equals(const OpenSim::AbstractProperty &)
  // defined in /opt/opensim-core/OpenSim/Common/AbstractProperty.h:153:10
  t14.method("equals", static_cast<bool (OpenSim::AbstractProperty::*)(const OpenSim::AbstractProperty &)  const>(&OpenSim::AbstractProperty::equals));

  DEBUG_MSG("Adding wrapper for bool OpenSim::AbstractProperty::isSamePropertyClass(const OpenSim::AbstractProperty &) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::AbstractProperty::isSamePropertyClass(const OpenSim::AbstractProperty &)
  // defined in /opt/opensim-core/OpenSim/Common/AbstractProperty.h:169:10
  t14.method("isSamePropertyClass", static_cast<bool (OpenSim::AbstractProperty::*)(const OpenSim::AbstractProperty &)  const>(&OpenSim::AbstractProperty::isSamePropertyClass));
  types.set_override_module(jl_base_module);

  DEBUG_MSG("Adding wrapper for bool OpenSim::AbstractProperty::operator==(const OpenSim::AbstractProperty &) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::AbstractProperty::operator==(const OpenSim::AbstractProperty &)
  // defined in /opt/opensim-core/OpenSim/Common/AbstractProperty.h:175:10
  t14.method("==", static_cast<bool (OpenSim::AbstractProperty::*)(const OpenSim::AbstractProperty &)  const>(&OpenSim::AbstractProperty::operator==));

  types.unset_override_module();

  DEBUG_MSG("Adding wrapper for int OpenSim::AbstractProperty::size() (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::AbstractProperty::size()
  // defined in /opt/opensim-core/OpenSim/Common/AbstractProperty.h:187:9
  t14.method("size", static_cast<int (OpenSim::AbstractProperty::*)()  const>(&OpenSim::AbstractProperty::size));

  DEBUG_MSG("Adding wrapper for bool OpenSim::AbstractProperty::empty() (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::AbstractProperty::empty()
  // defined in /opt/opensim-core/OpenSim/Common/AbstractProperty.h:189:10
  t14.method("empty", static_cast<bool (OpenSim::AbstractProperty::*)()  const>(&OpenSim::AbstractProperty::empty));

  DEBUG_MSG("Adding wrapper for void OpenSim::AbstractProperty::clear() (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::AbstractProperty::clear()
  // defined in /opt/opensim-core/OpenSim/Common/AbstractProperty.h:192:10
  t14.method("clear", static_cast<void (OpenSim::AbstractProperty::*)() >(&OpenSim::AbstractProperty::clear));

  DEBUG_MSG("Adding wrapper for const OpenSim::Object & OpenSim::AbstractProperty::getValueAsObject(int) (" __HERE__ ")");
  // signature to use in the veto list: const OpenSim::Object & OpenSim::AbstractProperty::getValueAsObject(int)
  // defined in /opt/opensim-core/OpenSim/Common/AbstractProperty.h:205:27
  t14.method("getValueAsObject", static_cast<const OpenSim::Object & (OpenSim::AbstractProperty::*)(int)  const>(&OpenSim::AbstractProperty::getValueAsObject));
  t14.method("getValueAsObject", [](OpenSim::AbstractProperty const& a)->const OpenSim::Object &{ return a.getValueAsObject(); });
  t14.method("getValueAsObject", [](OpenSim::AbstractProperty const* a)->const OpenSim::Object &{ return a->getValueAsObject(); });

  DEBUG_MSG("Adding wrapper for OpenSim::Object & OpenSim::AbstractProperty::updValueAsObject(int) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::Object & OpenSim::AbstractProperty::updValueAsObject(int)
  // defined in /opt/opensim-core/OpenSim/Common/AbstractProperty.h:212:21
  t14.method("updValueAsObject", static_cast<OpenSim::Object & (OpenSim::AbstractProperty::*)(int) >(&OpenSim::AbstractProperty::updValueAsObject));
  t14.method("updValueAsObject", [](OpenSim::AbstractProperty& a)->OpenSim::Object &{ return a.updValueAsObject(); });
  t14.method("updValueAsObject", [](OpenSim::AbstractProperty* a)->OpenSim::Object &{ return a->updValueAsObject(); });

  DEBUG_MSG("Adding wrapper for void OpenSim::AbstractProperty::setValueAsObject(const OpenSim::Object &, int) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::AbstractProperty::setValueAsObject(const OpenSim::Object &, int)
  // defined in /opt/opensim-core/OpenSim/Common/AbstractProperty.h:216:18
  t14.method("setValueAsObject", static_cast<void (OpenSim::AbstractProperty::*)(const OpenSim::Object &, int) >(&OpenSim::AbstractProperty::setValueAsObject));
  t14.method("setValueAsObject", [](OpenSim::AbstractProperty& a, const OpenSim::Object & arg0)->void{ a.setValueAsObject(arg0); });
  t14.method("setValueAsObject", [](OpenSim::AbstractProperty* a, const OpenSim::Object & arg0)->void{ a->setValueAsObject(arg0); });

  DEBUG_MSG("Adding wrapper for void OpenSim::AbstractProperty::assign(const OpenSim::AbstractProperty &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::AbstractProperty::assign(const OpenSim::AbstractProperty &)
  // defined in /opt/opensim-core/OpenSim/Common/AbstractProperty.h:237:18
  t14.method("assign", static_cast<void (OpenSim::AbstractProperty::*)(const OpenSim::AbstractProperty &) >(&OpenSim::AbstractProperty::assign));

  DEBUG_MSG("Adding wrapper for void OpenSim::AbstractProperty::setAllPropertiesUseDefault(bool) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::AbstractProperty::setAllPropertiesUseDefault(bool)
  // defined in /opt/opensim-core/OpenSim/Common/AbstractProperty.h:242:10
  t14.method("setAllPropertiesUseDefault", static_cast<void (OpenSim::AbstractProperty::*)(bool) >(&OpenSim::AbstractProperty::setAllPropertiesUseDefault));

  DEBUG_MSG("Adding wrapper for void OpenSim::AbstractProperty::readFromXMLParentElement(SimTK::Xml::Element &, int) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::AbstractProperty::readFromXMLParentElement(SimTK::Xml::Element &, int)
  // defined in /opt/opensim-core/OpenSim/Common/AbstractProperty.h:251:10
  t14.method("readFromXMLParentElement", static_cast<void (OpenSim::AbstractProperty::*)(SimTK::Xml::Element &, int) >(&OpenSim::AbstractProperty::readFromXMLParentElement));

  DEBUG_MSG("Adding wrapper for void OpenSim::AbstractProperty::writeToXMLParentElement(SimTK::Xml::Element &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::AbstractProperty::writeToXMLParentElement(SimTK::Xml::Element &)
  // defined in /opt/opensim-core/OpenSim/Common/AbstractProperty.h:256:10
  t14.method("writeToXMLParentElement", static_cast<void (OpenSim::AbstractProperty::*)(SimTK::Xml::Element &)  const>(&OpenSim::AbstractProperty::writeToXMLParentElement));

  DEBUG_MSG("Adding wrapper for void OpenSim::AbstractProperty::setName(const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::AbstractProperty::setName(const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/AbstractProperty.h:260:10
  t14.method("setName", static_cast<void (OpenSim::AbstractProperty::*)(const std::string &) >(&OpenSim::AbstractProperty::setName));

  DEBUG_MSG("Adding wrapper for void OpenSim::AbstractProperty::setComment(const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::AbstractProperty::setComment(const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/AbstractProperty.h:264:10
  t14.method("setComment", static_cast<void (OpenSim::AbstractProperty::*)(const std::string &) >(&OpenSim::AbstractProperty::setComment));

  DEBUG_MSG("Adding wrapper for void OpenSim::AbstractProperty::setValueIsDefault(bool) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::AbstractProperty::setValueIsDefault(bool)
  // defined in /opt/opensim-core/OpenSim/Common/AbstractProperty.h:269:10
  t14.method("setValueIsDefault", static_cast<void (OpenSim::AbstractProperty::*)(bool) >(&OpenSim::AbstractProperty::setValueIsDefault));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::AbstractProperty::getName() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::AbstractProperty::getName()
  // defined in /opt/opensim-core/OpenSim/Common/AbstractProperty.h:272:24
  t14.method("getName", static_cast<const std::string & (OpenSim::AbstractProperty::*)()  const>(&OpenSim::AbstractProperty::getName));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::AbstractProperty::getComment() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::AbstractProperty::getComment()
  // defined in /opt/opensim-core/OpenSim/Common/AbstractProperty.h:274:24
  t14.method("getComment", static_cast<const std::string & (OpenSim::AbstractProperty::*)()  const>(&OpenSim::AbstractProperty::getComment));

  DEBUG_MSG("Adding wrapper for bool OpenSim::AbstractProperty::getValueIsDefault() (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::AbstractProperty::getValueIsDefault()
  // defined in /opt/opensim-core/OpenSim/Common/AbstractProperty.h:278:10
  t14.method("getValueIsDefault", static_cast<bool (OpenSim::AbstractProperty::*)()  const>(&OpenSim::AbstractProperty::getValueIsDefault));

  DEBUG_MSG("Adding wrapper for int OpenSim::AbstractProperty::getMinListSize() (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::AbstractProperty::getMinListSize()
  // defined in /opt/opensim-core/OpenSim/Common/AbstractProperty.h:283:9
  t14.method("getMinListSize", static_cast<int (OpenSim::AbstractProperty::*)()  const>(&OpenSim::AbstractProperty::getMinListSize));

  DEBUG_MSG("Adding wrapper for int OpenSim::AbstractProperty::getMaxListSize() (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::AbstractProperty::getMaxListSize()
  // defined in /opt/opensim-core/OpenSim/Common/AbstractProperty.h:287:9
  t14.method("getMaxListSize", static_cast<int (OpenSim::AbstractProperty::*)()  const>(&OpenSim::AbstractProperty::getMaxListSize));

  DEBUG_MSG("Adding wrapper for bool OpenSim::AbstractProperty::isOptionalProperty() (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::AbstractProperty::isOptionalProperty()
  // defined in /opt/opensim-core/OpenSim/Common/AbstractProperty.h:292:10
  t14.method("isOptionalProperty", static_cast<bool (OpenSim::AbstractProperty::*)()  const>(&OpenSim::AbstractProperty::isOptionalProperty));

  DEBUG_MSG("Adding wrapper for bool OpenSim::AbstractProperty::isListProperty() (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::AbstractProperty::isListProperty()
  // defined in /opt/opensim-core/OpenSim/Common/AbstractProperty.h:298:10
  t14.method("isListProperty", static_cast<bool (OpenSim::AbstractProperty::*)()  const>(&OpenSim::AbstractProperty::isListProperty));

  DEBUG_MSG("Adding wrapper for bool OpenSim::AbstractProperty::isOneValueProperty() (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::AbstractProperty::isOneValueProperty()
  // defined in /opt/opensim-core/OpenSim/Common/AbstractProperty.h:304:10
  t14.method("isOneValueProperty", static_cast<bool (OpenSim::AbstractProperty::*)()  const>(&OpenSim::AbstractProperty::isOneValueProperty));

  DEBUG_MSG("Adding wrapper for bool OpenSim::AbstractProperty::isOneObjectProperty() (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::AbstractProperty::isOneObjectProperty()
  // defined in /opt/opensim-core/OpenSim/Common/AbstractProperty.h:312:10
  t14.method("isOneObjectProperty", static_cast<bool (OpenSim::AbstractProperty::*)()  const>(&OpenSim::AbstractProperty::isOneObjectProperty));

  /* End of OpenSim::AbstractProperty class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class OpenSim::Object
   */

  DEBUG_MSG("Adding wrapper for OpenSim::Object * OpenSim::Object::clone() (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::Object * OpenSim::Object::clone()
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:215:21
  t15.method("clone", static_cast<OpenSim::Object * (OpenSim::Object::*)()  const>(&OpenSim::Object::clone));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::Object::getConcreteClassName() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::Object::getConcreteClassName()
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:225:32
  t15.method("getConcreteClassName", static_cast<const std::string & (OpenSim::Object::*)()  const>(&OpenSim::Object::getConcreteClassName));

  DEBUG_MSG("Adding wrapper for void OpenSim::Object::assign(OpenSim::Object &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Object::assign(OpenSim::Object &)
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:229:18
  t15.method("assign", static_cast<void (OpenSim::Object::*)(OpenSim::Object &) >(&OpenSim::Object::assign));

  DEBUG_MSG("Adding wrapper for bool OpenSim::Object::isEqualTo(const OpenSim::Object &) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::Object::isEqualTo(const OpenSim::Object &)
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:239:10
  t15.method("isEqualTo", static_cast<bool (OpenSim::Object::*)(const OpenSim::Object &)  const>(&OpenSim::Object::isEqualTo));

  DEBUG_MSG("Adding wrapper for OpenSim::Object & OpenSim::Object::operator=(const OpenSim::Object &) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::Object & OpenSim::Object::operator=(const OpenSim::Object &)
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:247:13
  t15.method("assign", static_cast<OpenSim::Object & (OpenSim::Object::*)(const OpenSim::Object &) >(&OpenSim::Object::operator=));
  types.set_override_module(jl_base_module);

  DEBUG_MSG("Adding wrapper for bool OpenSim::Object::operator==(const OpenSim::Object &) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::Object::operator==(const OpenSim::Object &)
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:256:18
  t15.method("==", static_cast<bool (OpenSim::Object::*)(const OpenSim::Object &)  const>(&OpenSim::Object::operator==));

  DEBUG_MSG("Adding wrapper for bool OpenSim::Object::operator<(const OpenSim::Object &) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::Object::operator<(const OpenSim::Object &)
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:259:18
  t15.method("<", static_cast<bool (OpenSim::Object::*)(const OpenSim::Object &)  const>(&OpenSim::Object::operator<));

  types.unset_override_module();

  DEBUG_MSG("Adding wrapper for void OpenSim::Object::setName(const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Object::setName(const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:272:10
  t15.method("setName", static_cast<void (OpenSim::Object::*)(const std::string &) >(&OpenSim::Object::setName));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::Object::getName() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::Object::getName()
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:274:24
  t15.method("getName", static_cast<const std::string & (OpenSim::Object::*)()  const>(&OpenSim::Object::getName));

  DEBUG_MSG("Adding wrapper for void OpenSim::Object::setDescription(const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Object::setDescription(const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:276:10
  t15.method("setDescription", static_cast<void (OpenSim::Object::*)(const std::string &) >(&OpenSim::Object::setDescription));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::Object::getDescription() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::Object::getDescription()
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:278:24
  t15.method("getDescription", static_cast<const std::string & (OpenSim::Object::*)()  const>(&OpenSim::Object::getDescription));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::Object::getAuthors() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::Object::getAuthors()
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:281:24
  t15.method("getAuthors", static_cast<const std::string & (OpenSim::Object::*)()  const>(&OpenSim::Object::getAuthors));

  DEBUG_MSG("Adding wrapper for void OpenSim::Object::setAuthors(const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Object::setAuthors(const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:283:10
  t15.method("setAuthors", static_cast<void (OpenSim::Object::*)(const std::string &) >(&OpenSim::Object::setAuthors));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::Object::getReferences() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::Object::getReferences()
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:286:24
  t15.method("getReferences", static_cast<const std::string & (OpenSim::Object::*)()  const>(&OpenSim::Object::getReferences));

  DEBUG_MSG("Adding wrapper for void OpenSim::Object::setReferences(const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Object::setReferences(const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:288:10
  t15.method("setReferences", static_cast<void (OpenSim::Object::*)(const std::string &) >(&OpenSim::Object::setReferences));

  DEBUG_MSG("Adding wrapper for int OpenSim::Object::getNumProperties() (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::Object::getNumProperties()
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:313:9
  t15.method("getNumProperties", static_cast<int (OpenSim::Object::*)()  const>(&OpenSim::Object::getNumProperties));

  DEBUG_MSG("Adding wrapper for const OpenSim::AbstractProperty & OpenSim::Object::getPropertyByIndex(int) (" __HERE__ ")");
  // signature to use in the veto list: const OpenSim::AbstractProperty & OpenSim::Object::getPropertyByIndex(int)
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:316:29
  t15.method("getPropertyByIndex", static_cast<const OpenSim::AbstractProperty & (OpenSim::Object::*)(int)  const>(&OpenSim::Object::getPropertyByIndex));

  DEBUG_MSG("Adding wrapper for OpenSim::AbstractProperty & OpenSim::Object::updPropertyByIndex(int) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::AbstractProperty & OpenSim::Object::updPropertyByIndex(int)
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:319:23
  t15.method("updPropertyByIndex", static_cast<OpenSim::AbstractProperty & (OpenSim::Object::*)(int) >(&OpenSim::Object::updPropertyByIndex));

  DEBUG_MSG("Adding wrapper for bool OpenSim::Object::hasProperty(const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::Object::hasProperty(const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:323:10
  t15.method("hasProperty", static_cast<bool (OpenSim::Object::*)(const std::string &)  const>(&OpenSim::Object::hasProperty));

  DEBUG_MSG("Adding wrapper for const OpenSim::AbstractProperty & OpenSim::Object::getPropertyByName(const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: const OpenSim::AbstractProperty & OpenSim::Object::getPropertyByName(const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:327:29
  t15.method("getPropertyByName", static_cast<const OpenSim::AbstractProperty & (OpenSim::Object::*)(const std::string &)  const>(&OpenSim::Object::getPropertyByName));

  DEBUG_MSG("Adding wrapper for OpenSim::AbstractProperty & OpenSim::Object::updPropertyByName(const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::AbstractProperty & OpenSim::Object::updPropertyByName(const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:331:23
  t15.method("updPropertyByName", static_cast<OpenSim::AbstractProperty & (OpenSim::Object::*)(const std::string &) >(&OpenSim::Object::updPropertyByName));

  DEBUG_MSG("Adding wrapper for bool OpenSim::Object::isObjectUpToDateWithProperties() (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::Object::isObjectUpToDateWithProperties()
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:353:10
  t15.method("isObjectUpToDateWithProperties", static_cast<bool (OpenSim::Object::*)()  const>(&OpenSim::Object::isObjectUpToDateWithProperties));

  DEBUG_MSG("Adding wrapper for void OpenSim::Object::registerType(const OpenSim::Object &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Object::registerType(const OpenSim::Object &)
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:411:17
  t15.method("OpenSim!Object!registerType", static_cast<void (*)(const OpenSim::Object &) >(&OpenSim::Object::registerType));

  DEBUG_MSG("Adding wrapper for void OpenSim::Object::renameType(const std::string &, const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Object::renameType(const std::string &, const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:418:17
  t15.method("OpenSim!Object!renameType", static_cast<void (*)(const std::string &, const std::string &) >(&OpenSim::Object::renameType));

  DEBUG_MSG("Adding wrapper for const OpenSim::Object * OpenSim::Object::getDefaultInstanceOfType(const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: const OpenSim::Object * OpenSim::Object::getDefaultInstanceOfType(const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:432:5
  t15.method("OpenSim!Object!getDefaultInstanceOfType", static_cast<const OpenSim::Object * (*)(const std::string &) >(&OpenSim::Object::getDefaultInstanceOfType));

  DEBUG_MSG("Adding wrapper for OpenSim::Object * OpenSim::Object::newInstanceOfType(const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::Object * OpenSim::Object::newInstanceOfType(const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:455:20
  t15.method("OpenSim!Object!newInstanceOfType", static_cast<OpenSim::Object * (*)(const std::string &) >(&OpenSim::Object::newInstanceOfType));

  DEBUG_MSG("Adding wrapper for OpenSim::Object * OpenSim::Object::makeObjectFromFile(const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::Object * OpenSim::Object::makeObjectFromFile(const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:495:20
  t15.method("OpenSim!Object!makeObjectFromFile", static_cast<OpenSim::Object * (*)(const std::string &) >(&OpenSim::Object::makeObjectFromFile));

  DEBUG_MSG("Adding wrapper for void OpenSim::Object::readObjectFromXMLNodeOrFile(SimTK::Xml::Element &, int) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Object::readObjectFromXMLNodeOrFile(SimTK::Xml::Element &, int)
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:504:10
  t15.method("readObjectFromXMLNodeOrFile", static_cast<void (OpenSim::Object::*)(SimTK::Xml::Element &, int) >(&OpenSim::Object::readObjectFromXMLNodeOrFile));

  DEBUG_MSG("Adding wrapper for void OpenSim::Object::updateFromXMLNode(SimTK::Xml::Element &, int) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Object::updateFromXMLNode(SimTK::Xml::Element &, int)
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:513:18
  t15.method("updateFromXMLNode", static_cast<void (OpenSim::Object::*)(SimTK::Xml::Element &, int) >(&OpenSim::Object::updateFromXMLNode));

  DEBUG_MSG("Adding wrapper for void OpenSim::Object::updateXMLNode(SimTK::Xml::Element &, const OpenSim::AbstractProperty *) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Object::updateXMLNode(SimTK::Xml::Element &, const OpenSim::AbstractProperty *)
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:528:10
  t15.method("updateXMLNode", static_cast<void (OpenSim::Object::*)(SimTK::Xml::Element &, const OpenSim::AbstractProperty *)  const>(&OpenSim::Object::updateXMLNode));
  t15.method("updateXMLNode", [](OpenSim::Object const& a, SimTK::Xml::Element & arg0)->void{ a.updateXMLNode(arg0); });
  t15.method("updateXMLNode", [](OpenSim::Object const* a, SimTK::Xml::Element & arg0)->void{ a->updateXMLNode(arg0); });

  DEBUG_MSG("Adding wrapper for bool OpenSim::Object::getInlined() (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::Object::getInlined()
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:533:10
  t15.method("getInlined", static_cast<bool (OpenSim::Object::*)()  const>(&OpenSim::Object::getInlined));

  DEBUG_MSG("Adding wrapper for void OpenSim::Object::setInlined(bool, const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Object::setInlined(bool, const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:538:10
  t15.method("setInlined", static_cast<void (OpenSim::Object::*)(bool, const std::string &) >(&OpenSim::Object::setInlined));
  t15.method("setInlined", [](OpenSim::Object& a, bool arg0)->void{ a.setInlined(arg0); });
  t15.method("setInlined", [](OpenSim::Object* a, bool arg0)->void{ a->setInlined(arg0); });

  DEBUG_MSG("Adding wrapper for std::string OpenSim::Object::getDocumentFileName() (" __HERE__ ")");
  // signature to use in the veto list: std::string OpenSim::Object::getDocumentFileName()
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:586:17
  t15.method("getDocumentFileName", static_cast<std::string (OpenSim::Object::*)()  const>(&OpenSim::Object::getDocumentFileName));

  DEBUG_MSG("Adding wrapper for int OpenSim::Object::getDocumentFileVersion() (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::Object::getDocumentFileVersion()
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:592:9
  t15.method("getDocumentFileVersion", static_cast<int (OpenSim::Object::*)()  const>(&OpenSim::Object::getDocumentFileVersion));

  DEBUG_MSG("Adding wrapper for void OpenSim::Object::setAllPropertiesUseDefault(bool) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Object::setAllPropertiesUseDefault(bool)
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:594:10
  t15.method("setAllPropertiesUseDefault", static_cast<void (OpenSim::Object::*)(bool) >(&OpenSim::Object::setAllPropertiesUseDefault));

  DEBUG_MSG("Adding wrapper for bool OpenSim::Object::print(const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::Object::print(const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:602:10
  t15.method("print", static_cast<bool (OpenSim::Object::*)(const std::string &)  const>(&OpenSim::Object::print));

  DEBUG_MSG("Adding wrapper for std::string OpenSim::Object::dump() (" __HERE__ ")");
  // signature to use in the veto list: std::string OpenSim::Object::dump()
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:606:17
  t15.method("dump", static_cast<std::string (OpenSim::Object::*)()  const>(&OpenSim::Object::dump));

  /* End of OpenSim::Object class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class OpenSim::Property::TypeHelper
   */

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::Property::TypeHelper::getTypeName() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::Property::TypeHelper::getTypeName()
  // defined in /opt/opensim-core/OpenSim/Common/Property.h:611:31
  t22.method("OpenSim!Property!TypeHelper!getTypeName", static_cast<const std::string & (*)() >(&OpenSim::Property::TypeHelper::getTypeName));

  /* End of OpenSim::Property::TypeHelper class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class OpenSim::PropertyIndex
   */


  DEBUG_MSG("Adding wrapper for void OpenSim::PropertyIndex::PropertyIndex(int) (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Property.h:1234:32
  t26.constructor<int>(/*finalize=*/true);


  DEBUG_MSG("Adding wrapper for void OpenSim::PropertyIndex::PropertyIndex(long) (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Property.h:1234:32
  t26.constructor<long>(/*finalize=*/true);


  DEBUG_MSG("Adding wrapper for void OpenSim::PropertyIndex::PropertyIndex(long long) (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Property.h:1234:32
  t26.constructor<long long>(/*finalize=*/true);


  DEBUG_MSG("Adding wrapper for void OpenSim::PropertyIndex::PropertyIndex(unsigned int) (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Property.h:1234:32
  t26.constructor<unsigned int>(/*finalize=*/true);


  DEBUG_MSG("Adding wrapper for void OpenSim::PropertyIndex::PropertyIndex(unsigned long) (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Property.h:1234:32
  t26.constructor<unsigned long>(/*finalize=*/true);


  DEBUG_MSG("Adding wrapper for void OpenSim::PropertyIndex::PropertyIndex(unsigned long long) (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Property.h:1234:32
  t26.constructor<unsigned long long>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for bool OpenSim::PropertyIndex::isValid() (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::PropertyIndex::isValid()
  // defined in /opt/opensim-core/OpenSim/Common/Property.h:1234:1
  t26.method("isValid", static_cast<bool (OpenSim::PropertyIndex::*)()  const>(&OpenSim::PropertyIndex::isValid));

  DEBUG_MSG("Adding wrapper for bool OpenSim::PropertyIndex::isValidExtended() (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::PropertyIndex::isValidExtended()
  // defined in /opt/opensim-core/OpenSim/Common/Property.h:1234:1
  t26.method("isValidExtended", static_cast<bool (OpenSim::PropertyIndex::*)()  const>(&OpenSim::PropertyIndex::isValidExtended));

  DEBUG_MSG("Adding wrapper for void OpenSim::PropertyIndex::invalidate() (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::PropertyIndex::invalidate()
  // defined in /opt/opensim-core/OpenSim/Common/Property.h:1234:1
  t26.method("invalidate", static_cast<void (OpenSim::PropertyIndex::*)() >(&OpenSim::PropertyIndex::invalidate));

  DEBUG_MSG("Adding wrapper for void OpenSim::PropertyIndex::clear() (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::PropertyIndex::clear()
  // defined in /opt/opensim-core/OpenSim/Common/Property.h:1234:1
  t26.method("clear", static_cast<void (OpenSim::PropertyIndex::*)() >(&OpenSim::PropertyIndex::clear));
  types.set_override_module(jl_base_module);

  DEBUG_MSG("Adding wrapper for bool OpenSim::PropertyIndex::operator==(const OpenSim::PropertyIndex &) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::PropertyIndex::operator==(const OpenSim::PropertyIndex &)
  // defined in /opt/opensim-core/OpenSim/Common/Property.h:1234:1
  t26.method("==", static_cast<bool (OpenSim::PropertyIndex::*)(const OpenSim::PropertyIndex &)  const>(&OpenSim::PropertyIndex::operator==));

  DEBUG_MSG("Adding wrapper for bool OpenSim::PropertyIndex::operator==(int) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::PropertyIndex::operator==(int)
  // defined in /opt/opensim-core/OpenSim/Common/Property.h:1234:1
  t26.method("==", static_cast<bool (OpenSim::PropertyIndex::*)(int)  const>(&OpenSim::PropertyIndex::operator==));

  DEBUG_MSG("Adding wrapper for bool OpenSim::PropertyIndex::operator==(short) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::PropertyIndex::operator==(short)
  // defined in /opt/opensim-core/OpenSim/Common/Property.h:1234:1
  t26.method("==", static_cast<bool (OpenSim::PropertyIndex::*)(short)  const>(&OpenSim::PropertyIndex::operator==));

  DEBUG_MSG("Adding wrapper for bool OpenSim::PropertyIndex::operator==(long) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::PropertyIndex::operator==(long)
  // defined in /opt/opensim-core/OpenSim/Common/Property.h:1234:1
  t26.method("==", static_cast<bool (OpenSim::PropertyIndex::*)(long)  const>(&OpenSim::PropertyIndex::operator==));

  DEBUG_MSG("Adding wrapper for bool OpenSim::PropertyIndex::operator==(long long) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::PropertyIndex::operator==(long long)
  // defined in /opt/opensim-core/OpenSim/Common/Property.h:1234:1
  t26.method("==", static_cast<bool (OpenSim::PropertyIndex::*)(long long)  const>(&OpenSim::PropertyIndex::operator==));

  DEBUG_MSG("Adding wrapper for bool OpenSim::PropertyIndex::operator==(unsigned int) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::PropertyIndex::operator==(unsigned int)
  // defined in /opt/opensim-core/OpenSim/Common/Property.h:1234:1
  t26.method("==", static_cast<bool (OpenSim::PropertyIndex::*)(unsigned int)  const>(&OpenSim::PropertyIndex::operator==));

  DEBUG_MSG("Adding wrapper for bool OpenSim::PropertyIndex::operator==(unsigned short) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::PropertyIndex::operator==(unsigned short)
  // defined in /opt/opensim-core/OpenSim/Common/Property.h:1234:1
  t26.method("==", static_cast<bool (OpenSim::PropertyIndex::*)(unsigned short)  const>(&OpenSim::PropertyIndex::operator==));

  DEBUG_MSG("Adding wrapper for bool OpenSim::PropertyIndex::operator==(unsigned long) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::PropertyIndex::operator==(unsigned long)
  // defined in /opt/opensim-core/OpenSim/Common/Property.h:1234:1
  t26.method("==", static_cast<bool (OpenSim::PropertyIndex::*)(unsigned long)  const>(&OpenSim::PropertyIndex::operator==));

  DEBUG_MSG("Adding wrapper for bool OpenSim::PropertyIndex::operator==(unsigned long long) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::PropertyIndex::operator==(unsigned long long)
  // defined in /opt/opensim-core/OpenSim/Common/Property.h:1234:1
  t26.method("==", static_cast<bool (OpenSim::PropertyIndex::*)(unsigned long long)  const>(&OpenSim::PropertyIndex::operator==));

  DEBUG_MSG("Adding wrapper for bool OpenSim::PropertyIndex::operator<(int) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::PropertyIndex::operator<(int)
  // defined in /opt/opensim-core/OpenSim/Common/Property.h:1234:1
  t26.method("<", static_cast<bool (OpenSim::PropertyIndex::*)(int)  const>(&OpenSim::PropertyIndex::operator<));

  DEBUG_MSG("Adding wrapper for bool OpenSim::PropertyIndex::operator<(short) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::PropertyIndex::operator<(short)
  // defined in /opt/opensim-core/OpenSim/Common/Property.h:1234:1
  t26.method("<", static_cast<bool (OpenSim::PropertyIndex::*)(short)  const>(&OpenSim::PropertyIndex::operator<));

  DEBUG_MSG("Adding wrapper for bool OpenSim::PropertyIndex::operator<(long) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::PropertyIndex::operator<(long)
  // defined in /opt/opensim-core/OpenSim/Common/Property.h:1234:1
  t26.method("<", static_cast<bool (OpenSim::PropertyIndex::*)(long)  const>(&OpenSim::PropertyIndex::operator<));

  DEBUG_MSG("Adding wrapper for bool OpenSim::PropertyIndex::operator<(long long) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::PropertyIndex::operator<(long long)
  // defined in /opt/opensim-core/OpenSim/Common/Property.h:1234:1
  t26.method("<", static_cast<bool (OpenSim::PropertyIndex::*)(long long)  const>(&OpenSim::PropertyIndex::operator<));

  DEBUG_MSG("Adding wrapper for bool OpenSim::PropertyIndex::operator<(unsigned int) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::PropertyIndex::operator<(unsigned int)
  // defined in /opt/opensim-core/OpenSim/Common/Property.h:1234:1
  t26.method("<", static_cast<bool (OpenSim::PropertyIndex::*)(unsigned int)  const>(&OpenSim::PropertyIndex::operator<));

  DEBUG_MSG("Adding wrapper for bool OpenSim::PropertyIndex::operator<(unsigned short) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::PropertyIndex::operator<(unsigned short)
  // defined in /opt/opensim-core/OpenSim/Common/Property.h:1234:1
  t26.method("<", static_cast<bool (OpenSim::PropertyIndex::*)(unsigned short)  const>(&OpenSim::PropertyIndex::operator<));

  DEBUG_MSG("Adding wrapper for bool OpenSim::PropertyIndex::operator<(unsigned long) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::PropertyIndex::operator<(unsigned long)
  // defined in /opt/opensim-core/OpenSim/Common/Property.h:1234:1
  t26.method("<", static_cast<bool (OpenSim::PropertyIndex::*)(unsigned long)  const>(&OpenSim::PropertyIndex::operator<));

  DEBUG_MSG("Adding wrapper for bool OpenSim::PropertyIndex::operator<(unsigned long long) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::PropertyIndex::operator<(unsigned long long)
  // defined in /opt/opensim-core/OpenSim/Common/Property.h:1234:1
  t26.method("<", static_cast<bool (OpenSim::PropertyIndex::*)(unsigned long long)  const>(&OpenSim::PropertyIndex::operator<));

  types.unset_override_module();

  DEBUG_MSG("Adding wrapper for OpenSim::PropertyIndex OpenSim::PropertyIndex::next() (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::PropertyIndex OpenSim::PropertyIndex::next()
  // defined in /opt/opensim-core/OpenSim/Common/Property.h:1234:1
  t26.method("next", static_cast<OpenSim::PropertyIndex (OpenSim::PropertyIndex::*)()  const>(&OpenSim::PropertyIndex::next));

  DEBUG_MSG("Adding wrapper for OpenSim::PropertyIndex OpenSim::PropertyIndex::prev() (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::PropertyIndex OpenSim::PropertyIndex::prev()
  // defined in /opt/opensim-core/OpenSim/Common/Property.h:1234:1
  t26.method("prev", static_cast<OpenSim::PropertyIndex (OpenSim::PropertyIndex::*)()  const>(&OpenSim::PropertyIndex::prev));

  DEBUG_MSG("Adding wrapper for OpenSim::PropertyIndex & OpenSim::PropertyIndex::operator+=(int) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::PropertyIndex & OpenSim::PropertyIndex::operator+=(int)
  // defined in /opt/opensim-core/OpenSim/Common/Property.h:1234:1
  t26.method("add!", static_cast<OpenSim::PropertyIndex & (OpenSim::PropertyIndex::*)(int) >(&OpenSim::PropertyIndex::operator+=));

  DEBUG_MSG("Adding wrapper for OpenSim::PropertyIndex & OpenSim::PropertyIndex::operator-=(int) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::PropertyIndex & OpenSim::PropertyIndex::operator-=(int)
  // defined in /opt/opensim-core/OpenSim/Common/Property.h:1234:1
  t26.method("sub!", static_cast<OpenSim::PropertyIndex & (OpenSim::PropertyIndex::*)(int) >(&OpenSim::PropertyIndex::operator-=));

  DEBUG_MSG("Adding wrapper for OpenSim::PropertyIndex & OpenSim::PropertyIndex::operator+=(short) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::PropertyIndex & OpenSim::PropertyIndex::operator+=(short)
  // defined in /opt/opensim-core/OpenSim/Common/Property.h:1234:1
  t26.method("add!", static_cast<OpenSim::PropertyIndex & (OpenSim::PropertyIndex::*)(short) >(&OpenSim::PropertyIndex::operator+=));

  DEBUG_MSG("Adding wrapper for OpenSim::PropertyIndex & OpenSim::PropertyIndex::operator-=(short) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::PropertyIndex & OpenSim::PropertyIndex::operator-=(short)
  // defined in /opt/opensim-core/OpenSim/Common/Property.h:1234:1
  t26.method("sub!", static_cast<OpenSim::PropertyIndex & (OpenSim::PropertyIndex::*)(short) >(&OpenSim::PropertyIndex::operator-=));

  DEBUG_MSG("Adding wrapper for OpenSim::PropertyIndex & OpenSim::PropertyIndex::operator+=(long) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::PropertyIndex & OpenSim::PropertyIndex::operator+=(long)
  // defined in /opt/opensim-core/OpenSim/Common/Property.h:1234:1
  t26.method("add!", static_cast<OpenSim::PropertyIndex & (OpenSim::PropertyIndex::*)(long) >(&OpenSim::PropertyIndex::operator+=));

  DEBUG_MSG("Adding wrapper for OpenSim::PropertyIndex & OpenSim::PropertyIndex::operator-=(long) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::PropertyIndex & OpenSim::PropertyIndex::operator-=(long)
  // defined in /opt/opensim-core/OpenSim/Common/Property.h:1234:1
  t26.method("sub!", static_cast<OpenSim::PropertyIndex & (OpenSim::PropertyIndex::*)(long) >(&OpenSim::PropertyIndex::operator-=));

  DEBUG_MSG("Adding wrapper for OpenSim::PropertyIndex & OpenSim::PropertyIndex::operator+=(long long) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::PropertyIndex & OpenSim::PropertyIndex::operator+=(long long)
  // defined in /opt/opensim-core/OpenSim/Common/Property.h:1234:1
  t26.method("add!", static_cast<OpenSim::PropertyIndex & (OpenSim::PropertyIndex::*)(long long) >(&OpenSim::PropertyIndex::operator+=));

  DEBUG_MSG("Adding wrapper for OpenSim::PropertyIndex & OpenSim::PropertyIndex::operator-=(long long) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::PropertyIndex & OpenSim::PropertyIndex::operator-=(long long)
  // defined in /opt/opensim-core/OpenSim/Common/Property.h:1234:1
  t26.method("sub!", static_cast<OpenSim::PropertyIndex & (OpenSim::PropertyIndex::*)(long long) >(&OpenSim::PropertyIndex::operator-=));

  DEBUG_MSG("Adding wrapper for OpenSim::PropertyIndex & OpenSim::PropertyIndex::operator+=(unsigned int) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::PropertyIndex & OpenSim::PropertyIndex::operator+=(unsigned int)
  // defined in /opt/opensim-core/OpenSim/Common/Property.h:1234:1
  t26.method("add!", static_cast<OpenSim::PropertyIndex & (OpenSim::PropertyIndex::*)(unsigned int) >(&OpenSim::PropertyIndex::operator+=));

  DEBUG_MSG("Adding wrapper for OpenSim::PropertyIndex & OpenSim::PropertyIndex::operator-=(unsigned int) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::PropertyIndex & OpenSim::PropertyIndex::operator-=(unsigned int)
  // defined in /opt/opensim-core/OpenSim/Common/Property.h:1234:1
  t26.method("sub!", static_cast<OpenSim::PropertyIndex & (OpenSim::PropertyIndex::*)(unsigned int) >(&OpenSim::PropertyIndex::operator-=));

  DEBUG_MSG("Adding wrapper for OpenSim::PropertyIndex & OpenSim::PropertyIndex::operator+=(unsigned short) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::PropertyIndex & OpenSim::PropertyIndex::operator+=(unsigned short)
  // defined in /opt/opensim-core/OpenSim/Common/Property.h:1234:1
  t26.method("add!", static_cast<OpenSim::PropertyIndex & (OpenSim::PropertyIndex::*)(unsigned short) >(&OpenSim::PropertyIndex::operator+=));

  DEBUG_MSG("Adding wrapper for OpenSim::PropertyIndex & OpenSim::PropertyIndex::operator-=(unsigned short) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::PropertyIndex & OpenSim::PropertyIndex::operator-=(unsigned short)
  // defined in /opt/opensim-core/OpenSim/Common/Property.h:1234:1
  t26.method("sub!", static_cast<OpenSim::PropertyIndex & (OpenSim::PropertyIndex::*)(unsigned short) >(&OpenSim::PropertyIndex::operator-=));

  DEBUG_MSG("Adding wrapper for OpenSim::PropertyIndex & OpenSim::PropertyIndex::operator+=(unsigned long) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::PropertyIndex & OpenSim::PropertyIndex::operator+=(unsigned long)
  // defined in /opt/opensim-core/OpenSim/Common/Property.h:1234:1
  t26.method("add!", static_cast<OpenSim::PropertyIndex & (OpenSim::PropertyIndex::*)(unsigned long) >(&OpenSim::PropertyIndex::operator+=));

  DEBUG_MSG("Adding wrapper for OpenSim::PropertyIndex & OpenSim::PropertyIndex::operator-=(unsigned long) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::PropertyIndex & OpenSim::PropertyIndex::operator-=(unsigned long)
  // defined in /opt/opensim-core/OpenSim/Common/Property.h:1234:1
  t26.method("sub!", static_cast<OpenSim::PropertyIndex & (OpenSim::PropertyIndex::*)(unsigned long) >(&OpenSim::PropertyIndex::operator-=));

  DEBUG_MSG("Adding wrapper for OpenSim::PropertyIndex & OpenSim::PropertyIndex::operator+=(unsigned long long) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::PropertyIndex & OpenSim::PropertyIndex::operator+=(unsigned long long)
  // defined in /opt/opensim-core/OpenSim/Common/Property.h:1234:1
  t26.method("add!", static_cast<OpenSim::PropertyIndex & (OpenSim::PropertyIndex::*)(unsigned long long) >(&OpenSim::PropertyIndex::operator+=));

  DEBUG_MSG("Adding wrapper for OpenSim::PropertyIndex & OpenSim::PropertyIndex::operator-=(unsigned long long) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::PropertyIndex & OpenSim::PropertyIndex::operator-=(unsigned long long)
  // defined in /opt/opensim-core/OpenSim/Common/Property.h:1234:1
  t26.method("sub!", static_cast<OpenSim::PropertyIndex & (OpenSim::PropertyIndex::*)(unsigned long long) >(&OpenSim::PropertyIndex::operator-=));

  DEBUG_MSG("Adding wrapper for const OpenSim::PropertyIndex & OpenSim::PropertyIndex::Invalid() (" __HERE__ ")");
  // signature to use in the veto list: const OpenSim::PropertyIndex & OpenSim::PropertyIndex::Invalid()
  // defined in /opt/opensim-core/OpenSim/Common/Property.h:1234:1
  t26.method("OpenSim!PropertyIndex!Invalid", static_cast<const OpenSim::PropertyIndex & (*)() >(&OpenSim::PropertyIndex::Invalid));

  DEBUG_MSG("Adding wrapper for bool OpenSim::PropertyIndex::isValid(int) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::PropertyIndex::isValid(int)
  // defined in /opt/opensim-core/OpenSim/Common/Property.h:1234:1
  t26.method("OpenSim!PropertyIndex!isValid", static_cast<bool (*)(int) >(&OpenSim::PropertyIndex::isValid));

  DEBUG_MSG("Adding wrapper for bool OpenSim::PropertyIndex::isValid(short) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::PropertyIndex::isValid(short)
  // defined in /opt/opensim-core/OpenSim/Common/Property.h:1234:1
  t26.method("OpenSim!PropertyIndex!isValid", static_cast<bool (*)(short) >(&OpenSim::PropertyIndex::isValid));

  DEBUG_MSG("Adding wrapper for bool OpenSim::PropertyIndex::isValid(long) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::PropertyIndex::isValid(long)
  // defined in /opt/opensim-core/OpenSim/Common/Property.h:1234:1
  t26.method("OpenSim!PropertyIndex!isValid", static_cast<bool (*)(long) >(&OpenSim::PropertyIndex::isValid));

  DEBUG_MSG("Adding wrapper for bool OpenSim::PropertyIndex::isValid(long long) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::PropertyIndex::isValid(long long)
  // defined in /opt/opensim-core/OpenSim/Common/Property.h:1234:1
  t26.method("OpenSim!PropertyIndex!isValid", static_cast<bool (*)(long long) >(&OpenSim::PropertyIndex::isValid));

  DEBUG_MSG("Adding wrapper for bool OpenSim::PropertyIndex::isValid(unsigned int) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::PropertyIndex::isValid(unsigned int)
  // defined in /opt/opensim-core/OpenSim/Common/Property.h:1234:1
  t26.method("OpenSim!PropertyIndex!isValid", static_cast<bool (*)(unsigned int) >(&OpenSim::PropertyIndex::isValid));

  DEBUG_MSG("Adding wrapper for bool OpenSim::PropertyIndex::isValid(unsigned short) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::PropertyIndex::isValid(unsigned short)
  // defined in /opt/opensim-core/OpenSim/Common/Property.h:1234:1
  t26.method("OpenSim!PropertyIndex!isValid", static_cast<bool (*)(unsigned short) >(&OpenSim::PropertyIndex::isValid));

  DEBUG_MSG("Adding wrapper for bool OpenSim::PropertyIndex::isValid(unsigned long) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::PropertyIndex::isValid(unsigned long)
  // defined in /opt/opensim-core/OpenSim/Common/Property.h:1234:1
  t26.method("OpenSim!PropertyIndex!isValid", static_cast<bool (*)(unsigned long) >(&OpenSim::PropertyIndex::isValid));

  DEBUG_MSG("Adding wrapper for bool OpenSim::PropertyIndex::isValid(unsigned long long) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::PropertyIndex::isValid(unsigned long long)
  // defined in /opt/opensim-core/OpenSim/Common/Property.h:1234:1
  t26.method("OpenSim!PropertyIndex!isValid", static_cast<bool (*)(unsigned long long) >(&OpenSim::PropertyIndex::isValid));

  DEBUG_MSG("Adding wrapper for bool OpenSim::PropertyIndex::isValidExtended(int) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::PropertyIndex::isValidExtended(int)
  // defined in /opt/opensim-core/OpenSim/Common/Property.h:1234:1
  t26.method("OpenSim!PropertyIndex!isValidExtended", static_cast<bool (*)(int) >(&OpenSim::PropertyIndex::isValidExtended));

  DEBUG_MSG("Adding wrapper for bool OpenSim::PropertyIndex::isValidExtended(short) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::PropertyIndex::isValidExtended(short)
  // defined in /opt/opensim-core/OpenSim/Common/Property.h:1234:1
  t26.method("OpenSim!PropertyIndex!isValidExtended", static_cast<bool (*)(short) >(&OpenSim::PropertyIndex::isValidExtended));

  DEBUG_MSG("Adding wrapper for bool OpenSim::PropertyIndex::isValidExtended(long) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::PropertyIndex::isValidExtended(long)
  // defined in /opt/opensim-core/OpenSim/Common/Property.h:1234:1
  t26.method("OpenSim!PropertyIndex!isValidExtended", static_cast<bool (*)(long) >(&OpenSim::PropertyIndex::isValidExtended));

  DEBUG_MSG("Adding wrapper for bool OpenSim::PropertyIndex::isValidExtended(long long) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::PropertyIndex::isValidExtended(long long)
  // defined in /opt/opensim-core/OpenSim/Common/Property.h:1234:1
  t26.method("OpenSim!PropertyIndex!isValidExtended", static_cast<bool (*)(long long) >(&OpenSim::PropertyIndex::isValidExtended));

  DEBUG_MSG("Adding wrapper for OpenSim::PropertyIndex::size_type OpenSim::PropertyIndex::max_size() (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::PropertyIndex::size_type OpenSim::PropertyIndex::max_size()
  // defined in /opt/opensim-core/OpenSim/Common/Property.h:1234:1
  t26.method("OpenSim!PropertyIndex!max_size", static_cast<OpenSim::PropertyIndex::size_type (*)() >(&OpenSim::PropertyIndex::max_size));

  /* End of OpenSim::PropertyIndex class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class OpenSim::ExperimentalSensor
   */

  DEBUG_MSG("Adding wrapper for OpenSim::ExperimentalSensor * OpenSim::ExperimentalSensor::safeDownCast(OpenSim::Object *) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::ExperimentalSensor * OpenSim::ExperimentalSensor::safeDownCast(OpenSim::Object *)
  // defined in /opt/opensim-core/OpenSim/Common/ExperimentalSensor.h:36:1
  t28.method("OpenSim!ExperimentalSensor!safeDownCast", static_cast<OpenSim::ExperimentalSensor * (*)(OpenSim::Object *) >(&OpenSim::ExperimentalSensor::safeDownCast));

  DEBUG_MSG("Adding wrapper for void OpenSim::ExperimentalSensor::assign(OpenSim::Object &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::ExperimentalSensor::assign(OpenSim::Object &)
  // defined in /opt/opensim-core/OpenSim/Common/ExperimentalSensor.h:36:1
  t28.method("assign", static_cast<void (OpenSim::ExperimentalSensor::*)(OpenSim::Object &) >(&OpenSim::ExperimentalSensor::assign));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::ExperimentalSensor::getClassName() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::ExperimentalSensor::getClassName()
  // defined in /opt/opensim-core/OpenSim/Common/ExperimentalSensor.h:36:1
  t28.method("OpenSim!ExperimentalSensor!getClassName", static_cast<const std::string & (*)() >(&OpenSim::ExperimentalSensor::getClassName));

  DEBUG_MSG("Adding wrapper for OpenSim::ExperimentalSensor * OpenSim::ExperimentalSensor::clone() (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::ExperimentalSensor * OpenSim::ExperimentalSensor::clone()
  // defined in /opt/opensim-core/OpenSim/Common/ExperimentalSensor.h:36:1
  t28.method("clone", static_cast<OpenSim::ExperimentalSensor * (OpenSim::ExperimentalSensor::*)()  const>(&OpenSim::ExperimentalSensor::clone));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::ExperimentalSensor::getConcreteClassName() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::ExperimentalSensor::getConcreteClassName()
  // defined in /opt/opensim-core/OpenSim/Common/ExperimentalSensor.h:36:1
  t28.method("getConcreteClassName", static_cast<const std::string & (OpenSim::ExperimentalSensor::*)()  const>(&OpenSim::ExperimentalSensor::getConcreteClassName));

  DEBUG_MSG("Adding wrapper for void OpenSim::ExperimentalSensor::copyProperty_name_in_model(const OpenSim::ExperimentalSensor::Self &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::ExperimentalSensor::copyProperty_name_in_model(const OpenSim::ExperimentalSensor::Self &)
  // defined in /opt/opensim-core/OpenSim/Common/ExperimentalSensor.h:38:5
  t28.method("copyProperty_name_in_model", static_cast<void (OpenSim::ExperimentalSensor::*)(const OpenSim::ExperimentalSensor::Self &) >(&OpenSim::ExperimentalSensor::copyProperty_name_in_model));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::ExperimentalSensor::get_name_in_model(int) (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::ExperimentalSensor::get_name_in_model(int)
  // defined in /opt/opensim-core/OpenSim/Common/ExperimentalSensor.h:38:5
  t28.method("get_name_in_model", static_cast<const std::string & (OpenSim::ExperimentalSensor::*)(int)  const>(&OpenSim::ExperimentalSensor::get_name_in_model));

  DEBUG_MSG("Adding wrapper for std::string & OpenSim::ExperimentalSensor::upd_name_in_model(int) (" __HERE__ ")");
  // signature to use in the veto list: std::string & OpenSim::ExperimentalSensor::upd_name_in_model(int)
  // defined in /opt/opensim-core/OpenSim/Common/ExperimentalSensor.h:38:5
  t28.method("upd_name_in_model", static_cast<std::string & (OpenSim::ExperimentalSensor::*)(int) >(&OpenSim::ExperimentalSensor::upd_name_in_model));

  DEBUG_MSG("Adding wrapper for void OpenSim::ExperimentalSensor::set_name_in_model(int, const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::ExperimentalSensor::set_name_in_model(int, const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/ExperimentalSensor.h:38:5
  t28.method("set_name_in_model", static_cast<void (OpenSim::ExperimentalSensor::*)(int, const std::string &) >(&OpenSim::ExperimentalSensor::set_name_in_model));

  DEBUG_MSG("Adding wrapper for int OpenSim::ExperimentalSensor::append_name_in_model(const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::ExperimentalSensor::append_name_in_model(const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/ExperimentalSensor.h:38:5
  t28.method("append_name_in_model", static_cast<int (OpenSim::ExperimentalSensor::*)(const std::string &) >(&OpenSim::ExperimentalSensor::append_name_in_model));

  DEBUG_MSG("Adding wrapper for void OpenSim::ExperimentalSensor::constructProperty_name_in_model(const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::ExperimentalSensor::constructProperty_name_in_model(const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/ExperimentalSensor.h:38:5
  t28.method("constructProperty_name_in_model", static_cast<void (OpenSim::ExperimentalSensor::*)(const std::string &) >(&OpenSim::ExperimentalSensor::constructProperty_name_in_model));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::ExperimentalSensor::get_name_in_model() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::ExperimentalSensor::get_name_in_model()
  // defined in /opt/opensim-core/OpenSim/Common/ExperimentalSensor.h:38:5
  t28.method("get_name_in_model", static_cast<const std::string & (OpenSim::ExperimentalSensor::*)()  const>(&OpenSim::ExperimentalSensor::get_name_in_model));

  DEBUG_MSG("Adding wrapper for std::string & OpenSim::ExperimentalSensor::upd_name_in_model() (" __HERE__ ")");
  // signature to use in the veto list: std::string & OpenSim::ExperimentalSensor::upd_name_in_model()
  // defined in /opt/opensim-core/OpenSim/Common/ExperimentalSensor.h:38:5
  t28.method("upd_name_in_model", static_cast<std::string & (OpenSim::ExperimentalSensor::*)() >(&OpenSim::ExperimentalSensor::upd_name_in_model));

  DEBUG_MSG("Adding wrapper for void OpenSim::ExperimentalSensor::set_name_in_model(const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::ExperimentalSensor::set_name_in_model(const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/ExperimentalSensor.h:38:5
  t28.method("set_name_in_model", static_cast<void (OpenSim::ExperimentalSensor::*)(const std::string &) >(&OpenSim::ExperimentalSensor::set_name_in_model));


  DEBUG_MSG("Adding wrapper for void OpenSim::ExperimentalSensor::ExperimentalSensor(const std::string &, const std::string &) (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/ExperimentalSensor.h:42:5
  t28.constructor<const std::string &, const std::string &>(/*finalize=*/true);

  DEBUG_MSG("Adding PropertyIndex_name_in_model methods  to provide read access to the field PropertyIndex_name_in_model (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/ExperimentalSensor.h:38:5
  // signature to use in the veto list: OpenSim::ExperimentalSensor::PropertyIndex_name_in_model
  t28.method("PropertyIndex_name_in_model", [](const OpenSim::ExperimentalSensor& a) -> const OpenSim::PropertyIndex& { return a.PropertyIndex_name_in_model; });
  t28.method("PropertyIndex_name_in_model", [](OpenSim::ExperimentalSensor& a) -> OpenSim::PropertyIndex& { return a.PropertyIndex_name_in_model; });
  t28.method("PropertyIndex_name_in_model", [](const OpenSim::ExperimentalSensor* a) -> const OpenSim::PropertyIndex& { return a->PropertyIndex_name_in_model; });
  t28.method("PropertyIndex_name_in_model", [](OpenSim::ExperimentalSensor* a) -> OpenSim::PropertyIndex& { return a->PropertyIndex_name_in_model; });
  // defined in /opt/opensim-core/OpenSim/Common/ExperimentalSensor.h:38:5
  // signature to use in the veto list: OpenSim::ExperimentalSensor::PropertyIndex_name_in_model
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding PropertyIndex_name_in_model! methods to provide write access to the field PropertyIndex_name_in_model (" __HERE__ ")");
  t28.method("PropertyIndex_name_in_model!", [](OpenSim::ExperimentalSensor& a, const OpenSim::PropertyIndex& val) -> OpenSim::PropertyIndex& { return a.PropertyIndex_name_in_model = val; });

  DEBUG_MSG("Adding PropertyIndex_name_in_model! methods to provide write access to the field PropertyIndex_name_in_model (" __HERE__ ")");
  t28.method("PropertyIndex_name_in_model!", [](OpenSim::ExperimentalSensor* a, const OpenSim::PropertyIndex& val) -> OpenSim::PropertyIndex& { return a->PropertyIndex_name_in_model = val; });

  /* End of OpenSim::ExperimentalSensor class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class OpenSim::APDMDataReaderSettings
   */

  DEBUG_MSG("Adding wrapper for OpenSim::APDMDataReaderSettings * OpenSim::APDMDataReaderSettings::safeDownCast(OpenSim::Object *) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::APDMDataReaderSettings * OpenSim::APDMDataReaderSettings::safeDownCast(OpenSim::Object *)
  // defined in /opt/opensim-core/OpenSim/Common/APDMDataReaderSettings.h:37:1
  t29.method("OpenSim!APDMDataReaderSettings!safeDownCast", static_cast<OpenSim::APDMDataReaderSettings * (*)(OpenSim::Object *) >(&OpenSim::APDMDataReaderSettings::safeDownCast));

  DEBUG_MSG("Adding wrapper for void OpenSim::APDMDataReaderSettings::assign(OpenSim::Object &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::APDMDataReaderSettings::assign(OpenSim::Object &)
  // defined in /opt/opensim-core/OpenSim/Common/APDMDataReaderSettings.h:37:1
  t29.method("assign", static_cast<void (OpenSim::APDMDataReaderSettings::*)(OpenSim::Object &) >(&OpenSim::APDMDataReaderSettings::assign));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::APDMDataReaderSettings::getClassName() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::APDMDataReaderSettings::getClassName()
  // defined in /opt/opensim-core/OpenSim/Common/APDMDataReaderSettings.h:37:1
  t29.method("OpenSim!APDMDataReaderSettings!getClassName", static_cast<const std::string & (*)() >(&OpenSim::APDMDataReaderSettings::getClassName));

  DEBUG_MSG("Adding wrapper for OpenSim::APDMDataReaderSettings * OpenSim::APDMDataReaderSettings::clone() (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::APDMDataReaderSettings * OpenSim::APDMDataReaderSettings::clone()
  // defined in /opt/opensim-core/OpenSim/Common/APDMDataReaderSettings.h:37:1
  t29.method("clone", static_cast<OpenSim::APDMDataReaderSettings * (OpenSim::APDMDataReaderSettings::*)()  const>(&OpenSim::APDMDataReaderSettings::clone));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::APDMDataReaderSettings::getConcreteClassName() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::APDMDataReaderSettings::getConcreteClassName()
  // defined in /opt/opensim-core/OpenSim/Common/APDMDataReaderSettings.h:37:1
  t29.method("getConcreteClassName", static_cast<const std::string & (OpenSim::APDMDataReaderSettings::*)()  const>(&OpenSim::APDMDataReaderSettings::getConcreteClassName));

  DEBUG_MSG("Adding wrapper for void OpenSim::APDMDataReaderSettings::copyProperty_ExperimentalSensors(const OpenSim::APDMDataReaderSettings::Self &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::APDMDataReaderSettings::copyProperty_ExperimentalSensors(const OpenSim::APDMDataReaderSettings::Self &)
  // defined in /opt/opensim-core/OpenSim/Common/APDMDataReaderSettings.h:39:5
  t29.method("copyProperty_ExperimentalSensors", static_cast<void (OpenSim::APDMDataReaderSettings::*)(const OpenSim::APDMDataReaderSettings::Self &) >(&OpenSim::APDMDataReaderSettings::copyProperty_ExperimentalSensors));

  DEBUG_MSG("Adding wrapper for const OpenSim::ExperimentalSensor & OpenSim::APDMDataReaderSettings::get_ExperimentalSensors(int) (" __HERE__ ")");
  // signature to use in the veto list: const OpenSim::ExperimentalSensor & OpenSim::APDMDataReaderSettings::get_ExperimentalSensors(int)
  // defined in /opt/opensim-core/OpenSim/Common/APDMDataReaderSettings.h:39:5
  t29.method("get_ExperimentalSensors", static_cast<const OpenSim::ExperimentalSensor & (OpenSim::APDMDataReaderSettings::*)(int)  const>(&OpenSim::APDMDataReaderSettings::get_ExperimentalSensors));

  DEBUG_MSG("Adding wrapper for OpenSim::ExperimentalSensor & OpenSim::APDMDataReaderSettings::upd_ExperimentalSensors(int) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::ExperimentalSensor & OpenSim::APDMDataReaderSettings::upd_ExperimentalSensors(int)
  // defined in /opt/opensim-core/OpenSim/Common/APDMDataReaderSettings.h:39:5
  t29.method("upd_ExperimentalSensors", static_cast<OpenSim::ExperimentalSensor & (OpenSim::APDMDataReaderSettings::*)(int) >(&OpenSim::APDMDataReaderSettings::upd_ExperimentalSensors));

  DEBUG_MSG("Adding wrapper for void OpenSim::APDMDataReaderSettings::set_ExperimentalSensors(int, const OpenSim::ExperimentalSensor &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::APDMDataReaderSettings::set_ExperimentalSensors(int, const OpenSim::ExperimentalSensor &)
  // defined in /opt/opensim-core/OpenSim/Common/APDMDataReaderSettings.h:39:5
  t29.method("set_ExperimentalSensors", static_cast<void (OpenSim::APDMDataReaderSettings::*)(int, const OpenSim::ExperimentalSensor &) >(&OpenSim::APDMDataReaderSettings::set_ExperimentalSensors));

  DEBUG_MSG("Adding wrapper for int OpenSim::APDMDataReaderSettings::append_ExperimentalSensors(const OpenSim::ExperimentalSensor &) (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::APDMDataReaderSettings::append_ExperimentalSensors(const OpenSim::ExperimentalSensor &)
  // defined in /opt/opensim-core/OpenSim/Common/APDMDataReaderSettings.h:39:5
  t29.method("append_ExperimentalSensors", static_cast<int (OpenSim::APDMDataReaderSettings::*)(const OpenSim::ExperimentalSensor &) >(&OpenSim::APDMDataReaderSettings::append_ExperimentalSensors));

  DEBUG_MSG("Adding wrapper for void OpenSim::APDMDataReaderSettings::constructProperty_ExperimentalSensors() (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::APDMDataReaderSettings::constructProperty_ExperimentalSensors()
  // defined in /opt/opensim-core/OpenSim/Common/APDMDataReaderSettings.h:39:5
  t29.method("constructProperty_ExperimentalSensors", static_cast<void (OpenSim::APDMDataReaderSettings::*)() >(&OpenSim::APDMDataReaderSettings::constructProperty_ExperimentalSensors));


  DEBUG_MSG("Adding wrapper for void OpenSim::APDMDataReaderSettings::APDMDataReaderSettings(const std::string &) (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/APDMDataReaderSettings.h:48:5
  t29.constructor<const std::string &>(/*finalize=*/true);

  DEBUG_MSG("Adding PropertyIndex_ExperimentalSensors methods  to provide read access to the field PropertyIndex_ExperimentalSensors (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/APDMDataReaderSettings.h:39:5
  // signature to use in the veto list: OpenSim::APDMDataReaderSettings::PropertyIndex_ExperimentalSensors
  t29.method("PropertyIndex_ExperimentalSensors", [](const OpenSim::APDMDataReaderSettings& a) -> const OpenSim::PropertyIndex& { return a.PropertyIndex_ExperimentalSensors; });
  t29.method("PropertyIndex_ExperimentalSensors", [](OpenSim::APDMDataReaderSettings& a) -> OpenSim::PropertyIndex& { return a.PropertyIndex_ExperimentalSensors; });
  t29.method("PropertyIndex_ExperimentalSensors", [](const OpenSim::APDMDataReaderSettings* a) -> const OpenSim::PropertyIndex& { return a->PropertyIndex_ExperimentalSensors; });
  t29.method("PropertyIndex_ExperimentalSensors", [](OpenSim::APDMDataReaderSettings* a) -> OpenSim::PropertyIndex& { return a->PropertyIndex_ExperimentalSensors; });
  // defined in /opt/opensim-core/OpenSim/Common/APDMDataReaderSettings.h:39:5
  // signature to use in the veto list: OpenSim::APDMDataReaderSettings::PropertyIndex_ExperimentalSensors
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding PropertyIndex_ExperimentalSensors! methods to provide write access to the field PropertyIndex_ExperimentalSensors (" __HERE__ ")");
  t29.method("PropertyIndex_ExperimentalSensors!", [](OpenSim::APDMDataReaderSettings& a, const OpenSim::PropertyIndex& val) -> OpenSim::PropertyIndex& { return a.PropertyIndex_ExperimentalSensors = val; });

  DEBUG_MSG("Adding PropertyIndex_ExperimentalSensors! methods to provide write access to the field PropertyIndex_ExperimentalSensors (" __HERE__ ")");
  t29.method("PropertyIndex_ExperimentalSensors!", [](OpenSim::APDMDataReaderSettings* a, const OpenSim::PropertyIndex& val) -> OpenSim::PropertyIndex& { return a->PropertyIndex_ExperimentalSensors = val; });

  /* End of OpenSim::APDMDataReaderSettings class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class OpenSim::IncorrectNumColumns
   */


  DEBUG_MSG("Adding wrapper for void OpenSim::IncorrectNumColumns::IncorrectNumColumns(const std::string &, size_t, const std::string &, size_t, size_t) (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/AbstractDataTable.h:57:5
  t33.constructor<const std::string &, size_t, const std::string &, size_t, size_t>(/*finalize=*/true);

  /* End of OpenSim::IncorrectNumColumns class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class OpenSim::IncorrectNumRows
   */


  DEBUG_MSG("Adding wrapper for void OpenSim::IncorrectNumRows::IncorrectNumRows(const std::string &, size_t, const std::string &, size_t, size_t) (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/AbstractDataTable.h:73:5
  t34.constructor<const std::string &, size_t, const std::string &, size_t, size_t>(/*finalize=*/true);

  /* End of OpenSim::IncorrectNumRows class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class OpenSim::MissingMetaData
   */


  DEBUG_MSG("Adding wrapper for void OpenSim::MissingMetaData::MissingMetaData(const std::string &, size_t, const std::string &, const std::string &) (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/AbstractDataTable.h:99:5
  t37.constructor<const std::string &, size_t, const std::string &, const std::string &>(/*finalize=*/true);

  /* End of OpenSim::MissingMetaData class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class OpenSim::NoColumnLabels
   */


  DEBUG_MSG("Adding wrapper for void OpenSim::NoColumnLabels::NoColumnLabels(const std::string &, size_t, const std::string &) (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/AbstractDataTable.h:112:5
  t38.constructor<const std::string &, size_t, const std::string &>(/*finalize=*/true);

  /* End of OpenSim::NoColumnLabels class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class OpenSim::IncorrectMetaDataLength
   */


  DEBUG_MSG("Adding wrapper for void OpenSim::IncorrectMetaDataLength::IncorrectMetaDataLength(const std::string &, size_t, const std::string &, const std::string &, size_t, size_t) (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/AbstractDataTable.h:125:5
  t39.constructor<const std::string &, size_t, const std::string &, const std::string &, size_t, size_t>(/*finalize=*/true);

  /* End of OpenSim::IncorrectMetaDataLength class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class OpenSim::EmptyTable
   */


  DEBUG_MSG("Adding wrapper for void OpenSim::EmptyTable::EmptyTable(const std::string &, size_t, const std::string &) (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/AbstractDataTable.h:142:5
  t40.constructor<const std::string &, size_t, const std::string &>(/*finalize=*/true);

  /* End of OpenSim::EmptyTable class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class OpenSim::KeyExists
   */


  DEBUG_MSG("Adding wrapper for void OpenSim::KeyExists::KeyExists(const std::string &, size_t, const std::string &, const std::string &) (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/AbstractDataTable.h:152:5
  t41.constructor<const std::string &, size_t, const std::string &, const std::string &>(/*finalize=*/true);

  /* End of OpenSim::KeyExists class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class OpenSim::AbstractDataTable
   */



  DEBUG_MSG("Adding wrapper for OpenSim::AbstractDataTable & OpenSim::AbstractDataTable::operator=(const OpenSim::AbstractDataTable &) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::AbstractDataTable & OpenSim::AbstractDataTable::operator=(const OpenSim::AbstractDataTable &)
  // defined in /opt/opensim-core/OpenSim/Common/AbstractDataTable.h:185:24
  t42.method("assign", static_cast<OpenSim::AbstractDataTable & (OpenSim::AbstractDataTable::*)(const OpenSim::AbstractDataTable &) >(&OpenSim::AbstractDataTable::operator=));


  DEBUG_MSG("Adding wrapper for unsigned int OpenSim::AbstractDataTable::numComponentsPerElement() (" __HERE__ ")");
  // signature to use in the veto list: unsigned int OpenSim::AbstractDataTable::numComponentsPerElement()
  // defined in /opt/opensim-core/OpenSim/Common/AbstractDataTable.h:192:22
  t42.method("numComponentsPerElement", static_cast<unsigned int (OpenSim::AbstractDataTable::*)()  const>(&OpenSim::AbstractDataTable::numComponentsPerElement));

  DEBUG_MSG("Adding wrapper for size_t OpenSim::AbstractDataTable::getNumRows() (" __HERE__ ")");
  // signature to use in the veto list: size_t OpenSim::AbstractDataTable::getNumRows()
  // defined in /opt/opensim-core/OpenSim/Common/AbstractDataTable.h:195:12
  t42.method("getNumRows", static_cast<size_t (OpenSim::AbstractDataTable::*)()  const>(&OpenSim::AbstractDataTable::getNumRows));

  DEBUG_MSG("Adding wrapper for size_t OpenSim::AbstractDataTable::getNumColumns() (" __HERE__ ")");
  // signature to use in the veto list: size_t OpenSim::AbstractDataTable::getNumColumns()
  // defined in /opt/opensim-core/OpenSim/Common/AbstractDataTable.h:198:12
  t42.method("getNumColumns", static_cast<size_t (OpenSim::AbstractDataTable::*)()  const>(&OpenSim::AbstractDataTable::getNumColumns));

  DEBUG_MSG("Adding wrapper for bool OpenSim::AbstractDataTable::hasTableMetaDataKey(const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::AbstractDataTable::hasTableMetaDataKey(const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/AbstractDataTable.h:227:10
  t42.method("hasTableMetaDataKey", static_cast<bool (OpenSim::AbstractDataTable::*)(const std::string &)  const>(&OpenSim::AbstractDataTable::hasTableMetaDataKey));

  DEBUG_MSG("Adding wrapper for std::string OpenSim::AbstractDataTable::getTableMetaDataAsString(const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: std::string OpenSim::AbstractDataTable::getTableMetaDataAsString(const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/AbstractDataTable.h:285:17
  t42.method("getTableMetaDataAsString", static_cast<std::string (OpenSim::AbstractDataTable::*)(const std::string &)  const>(&OpenSim::AbstractDataTable::getTableMetaDataAsString));

  DEBUG_MSG("Adding wrapper for void OpenSim::AbstractDataTable::removeTableMetaDataKey(const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::AbstractDataTable::removeTableMetaDataKey(const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/AbstractDataTable.h:291:10
  t42.method("removeTableMetaDataKey", static_cast<void (OpenSim::AbstractDataTable::*)(const std::string &) >(&OpenSim::AbstractDataTable::removeTableMetaDataKey));

  DEBUG_MSG("Adding wrapper for std::vector<std::string> OpenSim::AbstractDataTable::getTableMetaDataKeys() (" __HERE__ ")");
  // signature to use in the veto list: std::vector<std::string> OpenSim::AbstractDataTable::getTableMetaDataKeys()
  // defined in /opt/opensim-core/OpenSim/Common/AbstractDataTable.h:294:30
  t42.method("getTableMetaDataKeys", static_cast<std::vector<std::string> (OpenSim::AbstractDataTable::*)()  const>(&OpenSim::AbstractDataTable::getTableMetaDataKeys));

  DEBUG_MSG("Adding wrapper for const OpenSim::AbstractDataTable::TableMetaData & OpenSim::AbstractDataTable::getTableMetaData() (" __HERE__ ")");
  // signature to use in the veto list: const OpenSim::AbstractDataTable::TableMetaData & OpenSim::AbstractDataTable::getTableMetaData()
  // defined in /opt/opensim-core/OpenSim/Common/AbstractDataTable.h:297:26
  t42.method("getTableMetaData", static_cast<const OpenSim::AbstractDataTable::TableMetaData & (OpenSim::AbstractDataTable::*)()  const>(&OpenSim::AbstractDataTable::getTableMetaData));

  DEBUG_MSG("Adding wrapper for OpenSim::AbstractDataTable::TableMetaData & OpenSim::AbstractDataTable::updTableMetaData() (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::AbstractDataTable::TableMetaData & OpenSim::AbstractDataTable::updTableMetaData()
  // defined in /opt/opensim-core/OpenSim/Common/AbstractDataTable.h:300:20
  t42.method("updTableMetaData", static_cast<OpenSim::AbstractDataTable::TableMetaData & (OpenSim::AbstractDataTable::*)() >(&OpenSim::AbstractDataTable::updTableMetaData));

  DEBUG_MSG("Adding wrapper for const OpenSim::AbstractDataTable::IndependentMetaData & OpenSim::AbstractDataTable::getIndependentMetaData() (" __HERE__ ")");
  // signature to use in the veto list: const OpenSim::AbstractDataTable::IndependentMetaData & OpenSim::AbstractDataTable::getIndependentMetaData()
  // defined in /opt/opensim-core/OpenSim/Common/AbstractDataTable.h:303:32
  t42.method("getIndependentMetaData", static_cast<const OpenSim::AbstractDataTable::IndependentMetaData & (OpenSim::AbstractDataTable::*)()  const>(&OpenSim::AbstractDataTable::getIndependentMetaData));

  DEBUG_MSG("Adding wrapper for void OpenSim::AbstractDataTable::setIndependentMetaData(const OpenSim::AbstractDataTable::IndependentMetaData &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::AbstractDataTable::setIndependentMetaData(const OpenSim::AbstractDataTable::IndependentMetaData &)
  // defined in /opt/opensim-core/OpenSim/Common/AbstractDataTable.h:307:5
  t42.method("setIndependentMetaData", static_cast<void (OpenSim::AbstractDataTable::*)(const OpenSim::AbstractDataTable::IndependentMetaData &) >(&OpenSim::AbstractDataTable::setIndependentMetaData));

  DEBUG_MSG("Adding wrapper for const OpenSim::AbstractDataTable::DependentsMetaData & OpenSim::AbstractDataTable::getDependentsMetaData() (" __HERE__ ")");
  // signature to use in the veto list: const OpenSim::AbstractDataTable::DependentsMetaData & OpenSim::AbstractDataTable::getDependentsMetaData()
  // defined in /opt/opensim-core/OpenSim/Common/AbstractDataTable.h:310:31
  t42.method("getDependentsMetaData", static_cast<const OpenSim::AbstractDataTable::DependentsMetaData & (OpenSim::AbstractDataTable::*)()  const>(&OpenSim::AbstractDataTable::getDependentsMetaData));

  DEBUG_MSG("Adding wrapper for void OpenSim::AbstractDataTable::setDependentsMetaData(const OpenSim::AbstractDataTable::DependentsMetaData &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::AbstractDataTable::setDependentsMetaData(const OpenSim::AbstractDataTable::DependentsMetaData &)
  // defined in /opt/opensim-core/OpenSim/Common/AbstractDataTable.h:314:5
  t42.method("setDependentsMetaData", static_cast<void (OpenSim::AbstractDataTable::*)(const OpenSim::AbstractDataTable::DependentsMetaData &) >(&OpenSim::AbstractDataTable::setDependentsMetaData));

  DEBUG_MSG("Adding wrapper for void OpenSim::AbstractDataTable::removeDependentsMetaDataForKey(const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::AbstractDataTable::removeDependentsMetaDataForKey(const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/AbstractDataTable.h:318:10
  t42.method("removeDependentsMetaDataForKey", static_cast<void (OpenSim::AbstractDataTable::*)(const std::string &) >(&OpenSim::AbstractDataTable::removeDependentsMetaDataForKey));

  DEBUG_MSG("Adding wrapper for bool OpenSim::AbstractDataTable::hasColumnLabels() (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::AbstractDataTable::hasColumnLabels()
  // defined in /opt/opensim-core/OpenSim/Common/AbstractDataTable.h:352:10
  t42.method("hasColumnLabels", static_cast<bool (OpenSim::AbstractDataTable::*)()  const>(&OpenSim::AbstractDataTable::hasColumnLabels));

  DEBUG_MSG("Adding wrapper for std::vector<std::string> OpenSim::AbstractDataTable::getColumnLabels() (" __HERE__ ")");
  // signature to use in the veto list: std::vector<std::string> OpenSim::AbstractDataTable::getColumnLabels()
  // defined in /opt/opensim-core/OpenSim/Common/AbstractDataTable.h:357:30
  t42.method("getColumnLabels", static_cast<std::vector<std::string> (OpenSim::AbstractDataTable::*)()  const>(&OpenSim::AbstractDataTable::getColumnLabels));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::AbstractDataTable::getColumnLabel(const size_t) (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::AbstractDataTable::getColumnLabel(const size_t)
  // defined in /opt/opensim-core/OpenSim/Common/AbstractDataTable.h:364:24
  t42.method("getColumnLabel", static_cast<const std::string & (OpenSim::AbstractDataTable::*)(const size_t)  const>(&OpenSim::AbstractDataTable::getColumnLabel));

  DEBUG_MSG("Adding wrapper for void OpenSim::AbstractDataTable::setColumnLabel(const size_t, const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::AbstractDataTable::setColumnLabel(const size_t, const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/AbstractDataTable.h:449:10
  t42.method("setColumnLabel", static_cast<void (OpenSim::AbstractDataTable::*)(const size_t, const std::string &) >(&OpenSim::AbstractDataTable::setColumnLabel));

  DEBUG_MSG("Adding wrapper for size_t OpenSim::AbstractDataTable::getColumnIndex(const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: size_t OpenSim::AbstractDataTable::getColumnIndex(const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/AbstractDataTable.h:456:12
  t42.method("getColumnIndex", static_cast<size_t (OpenSim::AbstractDataTable::*)(const std::string &)  const>(&OpenSim::AbstractDataTable::getColumnIndex));

  DEBUG_MSG("Adding wrapper for bool OpenSim::AbstractDataTable::hasColumn(const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::AbstractDataTable::hasColumn(const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/AbstractDataTable.h:461:10
  t42.method("hasColumn", static_cast<bool (OpenSim::AbstractDataTable::*)(const std::string &)  const>(&OpenSim::AbstractDataTable::hasColumn));

  DEBUG_MSG("Adding wrapper for bool OpenSim::AbstractDataTable::hasColumn(const size_t) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::AbstractDataTable::hasColumn(const size_t)
  // defined in /opt/opensim-core/OpenSim/Common/AbstractDataTable.h:466:10
  t42.method("hasColumn", static_cast<bool (OpenSim::AbstractDataTable::*)(const size_t)  const>(&OpenSim::AbstractDataTable::hasColumn));

  /* End of OpenSim::AbstractDataTable class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class OpenSim::DataAdapter
   */

  DEBUG_MSG("Adding wrapper for OpenSim::DataAdapter * OpenSim::DataAdapter::clone() (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::DataAdapter * OpenSim::DataAdapter::clone()
  // defined in /opt/opensim-core/OpenSim/Common/DataAdapter.h:99:26
  t51.method("clone", static_cast<OpenSim::DataAdapter * (OpenSim::DataAdapter::*)()  const>(&OpenSim::DataAdapter::clone));



  DEBUG_MSG("Adding wrapper for OpenSim::DataAdapter & OpenSim::DataAdapter::operator=(const OpenSim::DataAdapter &) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::DataAdapter & OpenSim::DataAdapter::operator=(const OpenSim::DataAdapter &)
  // defined in /opt/opensim-core/OpenSim/Common/DataAdapter.h:104:18
  t51.method("assign", static_cast<OpenSim::DataAdapter & (OpenSim::DataAdapter::*)(const OpenSim::DataAdapter &) >(&OpenSim::DataAdapter::operator=));


  DEBUG_MSG("Adding wrapper for bool OpenSim::DataAdapter::registerDataAdapter(const std::string &, const OpenSim::DataAdapter &) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::DataAdapter::registerDataAdapter(const std::string &, const OpenSim::DataAdapter &)
  // defined in /opt/opensim-core/OpenSim/Common/DataAdapter.h:118:10
  t51.method("OpenSim!DataAdapter!registerDataAdapter", static_cast<bool (*)(const std::string &, const OpenSim::DataAdapter &) >(&OpenSim::DataAdapter::registerDataAdapter));

  /* End of OpenSim::DataAdapter class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class OpenSim::FileAdapter
   */



  DEBUG_MSG("Adding wrapper for OpenSim::FileAdapter & OpenSim::FileAdapter::operator=(const OpenSim::FileAdapter &) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::FileAdapter & OpenSim::FileAdapter::operator=(const OpenSim::FileAdapter &)
  // defined in /opt/opensim-core/OpenSim/Common/FileAdapter.h:191:18
  t62.method("assign", static_cast<OpenSim::FileAdapter & (OpenSim::FileAdapter::*)(const OpenSim::FileAdapter &) >(&OpenSim::FileAdapter::operator=));


  DEBUG_MSG("Adding wrapper for std::string OpenSim::FileAdapter::findExtension(const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: std::string OpenSim::FileAdapter::findExtension(const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/FileAdapter.h:203:17
  t62.method("OpenSim!FileAdapter!findExtension", static_cast<std::string (*)(const std::string &) >(&OpenSim::FileAdapter::findExtension));

  DEBUG_MSG("Adding wrapper for std::vector<std::string> OpenSim::FileAdapter::tokenize(const std::string &, const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: std::vector<std::string> OpenSim::FileAdapter::tokenize(const std::string &, const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/FileAdapter.h:214:37
  t62.method("OpenSim!FileAdapter!tokenize", static_cast<std::vector<std::string> (*)(const std::string &, const std::string &) >(&OpenSim::FileAdapter::tokenize));

  /* End of OpenSim::FileAdapter class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class OpenSim::IO
   */

  DEBUG_MSG("Adding wrapper for char * OpenSim::IO::ConstructDateAndTimeStamp() (" __HERE__ ")");
  // signature to use in the veto list: char * OpenSim::IO::ConstructDateAndTimeStamp()
  // defined in /opt/opensim-core/OpenSim/Common/IO.h:75:18
  t63.method("OpenSim!IO!ConstructDateAndTimeStamp", static_cast<char * (*)() >(&OpenSim::IO::ConstructDateAndTimeStamp));

  DEBUG_MSG("Adding wrapper for std::string OpenSim::IO::FixSlashesInFilePath(const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: std::string OpenSim::IO::FixSlashesInFilePath(const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/IO.h:76:24
  t63.method("OpenSim!IO!FixSlashesInFilePath", static_cast<std::string (*)(const std::string &) >(&OpenSim::IO::FixSlashesInFilePath));

  DEBUG_MSG("Adding wrapper for void OpenSim::IO::SetScientific(bool) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::IO::SetScientific(bool)
  // defined in /opt/opensim-core/OpenSim/Common/IO.h:78:17
  t63.method("OpenSim!IO!SetScientific", static_cast<void (*)(bool) >(&OpenSim::IO::SetScientific));

  DEBUG_MSG("Adding wrapper for bool OpenSim::IO::GetScientific() (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::IO::GetScientific()
  // defined in /opt/opensim-core/OpenSim/Common/IO.h:79:17
  t63.method("OpenSim!IO!GetScientific", static_cast<bool (*)() >(&OpenSim::IO::GetScientific));

  DEBUG_MSG("Adding wrapper for void OpenSim::IO::SetGFormatForDoubleOutput(bool) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::IO::SetGFormatForDoubleOutput(bool)
  // defined in /opt/opensim-core/OpenSim/Common/IO.h:80:17
  t63.method("OpenSim!IO!SetGFormatForDoubleOutput", static_cast<void (*)(bool) >(&OpenSim::IO::SetGFormatForDoubleOutput));

  DEBUG_MSG("Adding wrapper for bool OpenSim::IO::GetGFormatForDoubleOutput() (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::IO::GetGFormatForDoubleOutput()
  // defined in /opt/opensim-core/OpenSim/Common/IO.h:81:17
  t63.method("OpenSim!IO!GetGFormatForDoubleOutput", static_cast<bool (*)() >(&OpenSim::IO::GetGFormatForDoubleOutput));

  DEBUG_MSG("Adding wrapper for void OpenSim::IO::SetDigitsPad(int) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::IO::SetDigitsPad(int)
  // defined in /opt/opensim-core/OpenSim/Common/IO.h:82:17
  t63.method("OpenSim!IO!SetDigitsPad", static_cast<void (*)(int) >(&OpenSim::IO::SetDigitsPad));

  DEBUG_MSG("Adding wrapper for int OpenSim::IO::GetDigitsPad() (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::IO::GetDigitsPad()
  // defined in /opt/opensim-core/OpenSim/Common/IO.h:83:16
  t63.method("OpenSim!IO!GetDigitsPad", static_cast<int (*)() >(&OpenSim::IO::GetDigitsPad));

  DEBUG_MSG("Adding wrapper for void OpenSim::IO::SetPrecision(int) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::IO::SetPrecision(int)
  // defined in /opt/opensim-core/OpenSim/Common/IO.h:84:17
  t63.method("OpenSim!IO!SetPrecision", static_cast<void (*)(int) >(&OpenSim::IO::SetPrecision));

  DEBUG_MSG("Adding wrapper for int OpenSim::IO::GetPrecision() (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::IO::GetPrecision()
  // defined in /opt/opensim-core/OpenSim/Common/IO.h:85:16
  t63.method("OpenSim!IO!GetPrecision", static_cast<int (*)() >(&OpenSim::IO::GetPrecision));

  DEBUG_MSG("Adding wrapper for const char * OpenSim::IO::GetDoubleOutputFormat() (" __HERE__ ")");
  // signature to use in the veto list: const char * OpenSim::IO::GetDoubleOutputFormat()
  // defined in /opt/opensim-core/OpenSim/Common/IO.h:87:9
  t63.method("OpenSim!IO!GetDoubleOutputFormat", static_cast<const char * (*)() >(&OpenSim::IO::GetDoubleOutputFormat));

  DEBUG_MSG("Adding wrapper for void OpenSim::IO::SetPrintOfflineDocuments(bool) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::IO::SetPrintOfflineDocuments(bool)
  // defined in /opt/opensim-core/OpenSim/Common/IO.h:93:17
  t63.method("OpenSim!IO!SetPrintOfflineDocuments", static_cast<void (*)(bool) >(&OpenSim::IO::SetPrintOfflineDocuments));

  DEBUG_MSG("Adding wrapper for bool OpenSim::IO::GetPrintOfflineDocuments() (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::IO::GetPrintOfflineDocuments()
  // defined in /opt/opensim-core/OpenSim/Common/IO.h:94:17
  t63.method("OpenSim!IO!GetPrintOfflineDocuments", static_cast<bool (*)() >(&OpenSim::IO::GetPrintOfflineDocuments));

  DEBUG_MSG("Adding wrapper for int OpenSim::IO::ComputeNumberOfSteps(double, double, double) (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::IO::ComputeNumberOfSteps(double, double, double)
  // defined in /opt/opensim-core/OpenSim/Common/IO.h:99:16
  t63.method("OpenSim!IO!ComputeNumberOfSteps", static_cast<int (*)(double, double, double) >(&OpenSim::IO::ComputeNumberOfSteps));

  DEBUG_MSG("Adding wrapper for std::string OpenSim::IO::formatText(const std::string &, const std::string &, int, const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: std::string OpenSim::IO::formatText(const std::string &, const std::string &, int, const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/IO.h:112:24
  t63.method("OpenSim!IO!formatText", static_cast<std::string (*)(const std::string &, const std::string &, int, const std::string &) >(&OpenSim::IO::formatText));
  t63.method("OpenSim!IO!formatText", [](const std::string & arg0, const std::string & arg1, int arg2)->std::string{ return OpenSim::IO::formatText(arg0, arg1, arg2); });

  DEBUG_MSG("Adding wrapper for void OpenSim::IO::eraseEmptyElements(std::vector<std::string> &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::IO::eraseEmptyElements(std::vector<std::string> &)
  // defined in /opt/opensim-core/OpenSim/Common/IO.h:135:17
  t63.method("OpenSim!IO!eraseEmptyElements", static_cast<void (*)(std::vector<std::string> &) >(&OpenSim::IO::eraseEmptyElements));

  /* End of OpenSim::IO class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class OpenSim::IO::CwdChanger
   */

  DEBUG_MSG("Adding wrapper for OpenSim::IO::CwdChanger OpenSim::IO::CwdChanger::noop() (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::IO::CwdChanger OpenSim::IO::CwdChanger::noop()
  // defined in /opt/opensim-core/OpenSim/Common/IO.h:168:27
  t65.method("OpenSim!IO!CwdChanger!noop", static_cast<OpenSim::IO::CwdChanger (*)() >(&OpenSim::IO::CwdChanger::noop));

  DEBUG_MSG("Adding wrapper for OpenSim::IO::CwdChanger OpenSim::IO::CwdChanger::changeTo(const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::IO::CwdChanger OpenSim::IO::CwdChanger::changeTo(const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/IO.h:173:27
  t65.method("OpenSim!IO!CwdChanger!changeTo", static_cast<OpenSim::IO::CwdChanger (*)(const std::string &) >(&OpenSim::IO::CwdChanger::changeTo));

  DEBUG_MSG("Adding wrapper for OpenSim::IO::CwdChanger OpenSim::IO::CwdChanger::changeToParentOf(const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::IO::CwdChanger OpenSim::IO::CwdChanger::changeToParentOf(const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/IO.h:182:27
  t65.method("OpenSim!IO!CwdChanger!changeToParentOf", static_cast<OpenSim::IO::CwdChanger (*)(const std::string &) >(&OpenSim::IO::CwdChanger::changeToParentOf));



  DEBUG_MSG("Adding wrapper for void OpenSim::IO::CwdChanger::restore() (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::IO::CwdChanger::restore()
  // defined in /opt/opensim-core/OpenSim/Common/IO.h:198:14
  t65.method("restore", static_cast<void (OpenSim::IO::CwdChanger::*)() >(&OpenSim::IO::CwdChanger::restore));

  DEBUG_MSG("Adding wrapper for void OpenSim::IO::CwdChanger::stay() (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::IO::CwdChanger::stay()
  // defined in /opt/opensim-core/OpenSim/Common/IO.h:205:14
  t65.method("stay", static_cast<void (OpenSim::IO::CwdChanger::*)() >(&OpenSim::IO::CwdChanger::stay));

  /* End of OpenSim::IO::CwdChanger class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class OpenSim::IMUDataReader
   */



  DEBUG_MSG("Adding wrapper for OpenSim::IMUDataReader & OpenSim::IMUDataReader::operator=(const OpenSim::IMUDataReader &) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::IMUDataReader & OpenSim::IMUDataReader::operator=(const OpenSim::IMUDataReader &)
  // defined in /opt/opensim-core/OpenSim/Common/IMUDataReader.h:43:20
  t75.method("assign", static_cast<OpenSim::IMUDataReader & (OpenSim::IMUDataReader::*)(const OpenSim::IMUDataReader &) >(&OpenSim::IMUDataReader::operator=));


  /* End of OpenSim::IMUDataReader class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class OpenSim::APDMDataReader
   */


  DEBUG_MSG("Adding wrapper for void OpenSim::APDMDataReader::APDMDataReader(const OpenSim::APDMDataReaderSettings &) (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/APDMDataReader.h:46:5
  t76.constructor<const OpenSim::APDMDataReaderSettings &>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for OpenSim::APDMDataReader * OpenSim::APDMDataReader::clone() (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::APDMDataReader * OpenSim::APDMDataReader::clone()
  // defined in /opt/opensim-core/OpenSim/Common/APDMDataReader.h:51:21
  t76.method("clone", static_cast<OpenSim::APDMDataReader * (OpenSim::APDMDataReader::*)()  const>(&OpenSim::APDMDataReader::clone));

  /* End of OpenSim::APDMDataReader class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class OpenSim::CSVFileAdapter
   */


  DEBUG_MSG("Adding wrapper for void OpenSim::CSVFileAdapter::CSVFileAdapter(const OpenSim::CSVFileAdapter &) (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/CSVFileAdapter.h:35:5
  t81.constructor<const OpenSim::CSVFileAdapter &>(/*finalize=*/true);


  DEBUG_MSG("Adding wrapper for OpenSim::CSVFileAdapter * OpenSim::CSVFileAdapter::clone() (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::CSVFileAdapter * OpenSim::CSVFileAdapter::clone()
  // defined in /opt/opensim-core/OpenSim/Common/CSVFileAdapter.h:39:21
  t81.method("clone", static_cast<OpenSim::CSVFileAdapter * (OpenSim::CSVFileAdapter::*)()  const>(&OpenSim::CSVFileAdapter::clone));

  /* End of OpenSim::CSVFileAdapter class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class OpenSim::FileRemover
   */


  DEBUG_MSG("Adding wrapper for void OpenSim::FileRemover::FileRemover(std::string) (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/CommonUtilities.h:63:5
  t82.constructor<std::string>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for void OpenSim::FileRemover::remove() (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::FileRemover::remove()
  // defined in /opt/opensim-core/OpenSim/Common/CommonUtilities.h:66:10
  t82.method("remove", static_cast<void (OpenSim::FileRemover::*)()  const>(&OpenSim::FileRemover::remove));

  /* End of OpenSim::FileRemover class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class OpenSim::ComponentPath
   */


  DEBUG_MSG("Adding wrapper for void OpenSim::ComponentPath::ComponentPath(std::string) (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/ComponentPath.h:63:5
  t84.constructor<std::string>(/*finalize=*/true);


  DEBUG_MSG("Adding wrapper for void OpenSim::ComponentPath::ComponentPath(const std::vector<std::string> &, bool) (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/ComponentPath.h:70:5
  t84.constructor<const std::vector<std::string> &, bool>(/*finalize=*/true);
  types.set_override_module(jl_base_module);

  DEBUG_MSG("Adding wrapper for bool OpenSim::ComponentPath::operator==(const OpenSim::ComponentPath &) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::ComponentPath::operator==(const OpenSim::ComponentPath &)
  // defined in /opt/opensim-core/OpenSim/Common/ComponentPath.h:72:10
  t84.method("==", static_cast<bool (OpenSim::ComponentPath::*)(const OpenSim::ComponentPath &)  const>(&OpenSim::ComponentPath::operator==));

  types.unset_override_module();

  DEBUG_MSG("Adding wrapper for char OpenSim::ComponentPath::getSeparator() (" __HERE__ ")");
  // signature to use in the veto list: char OpenSim::ComponentPath::getSeparator()
  // defined in /opt/opensim-core/OpenSim/Common/ComponentPath.h:75:10
  t84.method("getSeparator", static_cast<char (OpenSim::ComponentPath::*)()  const>(&OpenSim::ComponentPath::getSeparator));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::ComponentPath::getInvalidChars() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::ComponentPath::getInvalidChars()
  // defined in /opt/opensim-core/OpenSim/Common/ComponentPath.h:80:24
  t84.method("getInvalidChars", static_cast<const std::string & (OpenSim::ComponentPath::*)()  const>(&OpenSim::ComponentPath::getInvalidChars));

  DEBUG_MSG("Adding wrapper for OpenSim::ComponentPath OpenSim::ComponentPath::formAbsolutePath(const OpenSim::ComponentPath &) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::ComponentPath OpenSim::ComponentPath::formAbsolutePath(const OpenSim::ComponentPath &)
  // defined in /opt/opensim-core/OpenSim/Common/ComponentPath.h:95:19
  t84.method("formAbsolutePath", static_cast<OpenSim::ComponentPath (OpenSim::ComponentPath::*)(const OpenSim::ComponentPath &)  const>(&OpenSim::ComponentPath::formAbsolutePath));

  DEBUG_MSG("Adding wrapper for OpenSim::ComponentPath OpenSim::ComponentPath::formRelativePath(const OpenSim::ComponentPath &) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::ComponentPath OpenSim::ComponentPath::formRelativePath(const OpenSim::ComponentPath &)
  // defined in /opt/opensim-core/OpenSim/Common/ComponentPath.h:102:19
  t84.method("formRelativePath", static_cast<OpenSim::ComponentPath (OpenSim::ComponentPath::*)(const OpenSim::ComponentPath &)  const>(&OpenSim::ComponentPath::formRelativePath));

  DEBUG_MSG("Adding wrapper for OpenSim::ComponentPath OpenSim::ComponentPath::getParentPath() (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::ComponentPath OpenSim::ComponentPath::getParentPath()
  // defined in /opt/opensim-core/OpenSim/Common/ComponentPath.h:108:19
  t84.method("getParentPath", static_cast<OpenSim::ComponentPath (OpenSim::ComponentPath::*)()  const>(&OpenSim::ComponentPath::getParentPath));

  DEBUG_MSG("Adding wrapper for std::string OpenSim::ComponentPath::getParentPathString() (" __HERE__ ")");
  // signature to use in the veto list: std::string OpenSim::ComponentPath::getParentPathString()
  // defined in /opt/opensim-core/OpenSim/Common/ComponentPath.h:113:17
  t84.method("getParentPathString", static_cast<std::string (OpenSim::ComponentPath::*)()  const>(&OpenSim::ComponentPath::getParentPathString));

  DEBUG_MSG("Adding wrapper for std::string OpenSim::ComponentPath::getSubcomponentNameAtLevel(size_t) (" __HERE__ ")");
  // signature to use in the veto list: std::string OpenSim::ComponentPath::getSubcomponentNameAtLevel(size_t)
  // defined in /opt/opensim-core/OpenSim/Common/ComponentPath.h:119:17
  t84.method("getSubcomponentNameAtLevel", static_cast<std::string (OpenSim::ComponentPath::*)(size_t)  const>(&OpenSim::ComponentPath::getSubcomponentNameAtLevel));

  DEBUG_MSG("Adding wrapper for std::string OpenSim::ComponentPath::getComponentName() (" __HERE__ ")");
  // signature to use in the veto list: std::string OpenSim::ComponentPath::getComponentName()
  // defined in /opt/opensim-core/OpenSim/Common/ComponentPath.h:125:17
  t84.method("getComponentName", static_cast<std::string (OpenSim::ComponentPath::*)()  const>(&OpenSim::ComponentPath::getComponentName));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::ComponentPath::toString() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::ComponentPath::toString()
  // defined in /opt/opensim-core/OpenSim/Common/ComponentPath.h:131:24
  t84.method("toString", static_cast<const std::string & (OpenSim::ComponentPath::*)()  const>(&OpenSim::ComponentPath::toString));

  DEBUG_MSG("Adding wrapper for bool OpenSim::ComponentPath::isAbsolute() (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::ComponentPath::isAbsolute()
  // defined in /opt/opensim-core/OpenSim/Common/ComponentPath.h:137:10
  t84.method("isAbsolute", static_cast<bool (OpenSim::ComponentPath::*)()  const>(&OpenSim::ComponentPath::isAbsolute));

  DEBUG_MSG("Adding wrapper for size_t OpenSim::ComponentPath::getNumPathLevels() (" __HERE__ ")");
  // signature to use in the veto list: size_t OpenSim::ComponentPath::getNumPathLevels()
  // defined in /opt/opensim-core/OpenSim/Common/ComponentPath.h:142:12
  t84.method("getNumPathLevels", static_cast<size_t (OpenSim::ComponentPath::*)()  const>(&OpenSim::ComponentPath::getNumPathLevels));

  DEBUG_MSG("Adding wrapper for void OpenSim::ComponentPath::pushBack(const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::ComponentPath::pushBack(const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/ComponentPath.h:149:10
  t84.method("pushBack", static_cast<void (OpenSim::ComponentPath::*)(const std::string &) >(&OpenSim::ComponentPath::pushBack));

  DEBUG_MSG("Adding wrapper for bool OpenSim::ComponentPath::isLegalPathElement(const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::ComponentPath::isLegalPathElement(const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/ComponentPath.h:154:10
  t84.method("isLegalPathElement", static_cast<bool (OpenSim::ComponentPath::*)(const std::string &)  const>(&OpenSim::ComponentPath::isLegalPathElement));

  DEBUG_MSG("Adding wrapper for void OpenSim::ComponentPath::trimDotAndDotDotElements() (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::ComponentPath::trimDotAndDotDotElements()
  // defined in /opt/opensim-core/OpenSim/Common/ComponentPath.h:163:10
  t84.method("trimDotAndDotDotElements", static_cast<void (OpenSim::ComponentPath::*)() >(&OpenSim::ComponentPath::trimDotAndDotDotElements));

  /* End of OpenSim::ComponentPath class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class OpenSim::Component
   */

  DEBUG_MSG("Adding wrapper for OpenSim::Component * OpenSim::Component::safeDownCast(OpenSim::Object *) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::Component * OpenSim::Component::safeDownCast(OpenSim::Object *)
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:403:1
  t96.method("OpenSim!Component!safeDownCast", static_cast<OpenSim::Component * (*)(OpenSim::Object *) >(&OpenSim::Component::safeDownCast));

  DEBUG_MSG("Adding wrapper for void OpenSim::Component::assign(OpenSim::Object &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Component::assign(OpenSim::Object &)
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:403:1
  t96.method("assign", static_cast<void (OpenSim::Component::*)(OpenSim::Object &) >(&OpenSim::Component::assign));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::Component::getClassName() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::Component::getClassName()
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:403:1
  t96.method("OpenSim!Component!getClassName", static_cast<const std::string & (*)() >(&OpenSim::Component::getClassName));

  DEBUG_MSG("Adding wrapper for OpenSim::Component * OpenSim::Component::clone() (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::Component * OpenSim::Component::clone()
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:403:1
  t96.method("clone", static_cast<OpenSim::Component * (OpenSim::Component::*)()  const>(&OpenSim::Component::clone));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::Component::getConcreteClassName() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::Component::getConcreteClassName()
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:403:1
  t96.method("getConcreteClassName", static_cast<const std::string & (OpenSim::Component::*)()  const>(&OpenSim::Component::getConcreteClassName));




  DEBUG_MSG("Adding wrapper for OpenSim::Component & OpenSim::Component::operator=(const OpenSim::Component &) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::Component & OpenSim::Component::operator=(const OpenSim::Component &)
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:429:16
  t96.method("assign", static_cast<OpenSim::Component & (OpenSim::Component::*)(const OpenSim::Component &) >(&OpenSim::Component::operator=));

  DEBUG_MSG("Adding wrapper for void OpenSim::Component::finalizeFromProperties() (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Component::finalizeFromProperties()
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:456:10
  t96.method("finalizeFromProperties", static_cast<void (OpenSim::Component::*)() >(&OpenSim::Component::finalizeFromProperties));

  DEBUG_MSG("Adding wrapper for void OpenSim::Component::finalizeConnections(OpenSim::Component &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Component::finalizeConnections(OpenSim::Component &)
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:462:10
  t96.method("finalizeConnections", static_cast<void (OpenSim::Component::*)(OpenSim::Component &) >(&OpenSim::Component::finalizeConnections));

  DEBUG_MSG("Adding wrapper for void OpenSim::Component::clearConnections() (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Component::clearConnections()
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:466:10
  t96.method("clearConnections", static_cast<void (OpenSim::Component::*)() >(&OpenSim::Component::clearConnections));

  DEBUG_MSG("Adding wrapper for void OpenSim::Component::addToSystem(SimTK::MultibodySystem &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Component::addToSystem(SimTK::MultibodySystem &)
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:469:10
  t96.method("addToSystem", static_cast<void (OpenSim::Component::*)(SimTK::MultibodySystem &)  const>(&OpenSim::Component::addToSystem));

  DEBUG_MSG("Adding wrapper for void OpenSim::Component::initStateFromProperties(SimTK::State &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Component::initStateFromProperties(SimTK::State &)
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:472:10
  t96.method("initStateFromProperties", static_cast<void (OpenSim::Component::*)(SimTK::State &)  const>(&OpenSim::Component::initStateFromProperties));

  DEBUG_MSG("Adding wrapper for void OpenSim::Component::setPropertiesFromState(const SimTK::State &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Component::setPropertiesFromState(const SimTK::State &)
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:475:10
  t96.method("setPropertiesFromState", static_cast<void (OpenSim::Component::*)(const SimTK::State &) >(&OpenSim::Component::setPropertiesFromState));

  DEBUG_MSG("Adding wrapper for const SimTK::MultibodySystem & OpenSim::Component::getSystem() (" __HERE__ ")");
  // signature to use in the veto list: const SimTK::MultibodySystem & OpenSim::Component::getSystem()
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:554:35
  t96.method("getSystem", static_cast<const SimTK::MultibodySystem & (OpenSim::Component::*)()  const>(&OpenSim::Component::getSystem));

  DEBUG_MSG("Adding wrapper for bool OpenSim::Component::hasSystem() (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::Component::hasSystem()
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:566:10
  t96.method("hasSystem", static_cast<bool (OpenSim::Component::*)()  const>(&OpenSim::Component::hasSystem));

  DEBUG_MSG("Adding wrapper for bool OpenSim::Component::isComponentInOwnershipTree(const OpenSim::Component *) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::Component::isComponentInOwnershipTree(const OpenSim::Component *)
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:570:10
  t96.method("isComponentInOwnershipTree", static_cast<bool (OpenSim::Component::*)(const OpenSim::Component *)  const>(&OpenSim::Component::isComponentInOwnershipTree));

  DEBUG_MSG("Adding wrapper for void OpenSim::Component::addComponent(OpenSim::Component *) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Component::addComponent(OpenSim::Component *)
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:603:10
  t96.method("addComponent", static_cast<void (OpenSim::Component::*)(OpenSim::Component *) >(&OpenSim::Component::addComponent));

  DEBUG_MSG("Adding wrapper for std::string OpenSim::Component::getAbsolutePathString() (" __HERE__ ")");
  // signature to use in the veto list: std::string OpenSim::Component::getAbsolutePathString()
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:688:17
  t96.method("getAbsolutePathString", static_cast<std::string (OpenSim::Component::*)()  const>(&OpenSim::Component::getAbsolutePathString));

  DEBUG_MSG("Adding wrapper for OpenSim::ComponentPath OpenSim::Component::getAbsolutePath() (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::ComponentPath OpenSim::Component::getAbsolutePath()
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:697:19
  t96.method("getAbsolutePath", static_cast<OpenSim::ComponentPath (OpenSim::Component::*)()  const>(&OpenSim::Component::getAbsolutePath));

  DEBUG_MSG("Adding wrapper for std::string OpenSim::Component::getRelativePathString(const OpenSim::Component &) (" __HERE__ ")");
  // signature to use in the veto list: std::string OpenSim::Component::getRelativePathString(const OpenSim::Component &)
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:701:17
  t96.method("getRelativePathString", static_cast<std::string (OpenSim::Component::*)(const OpenSim::Component &)  const>(&OpenSim::Component::getRelativePathString));

  DEBUG_MSG("Adding wrapper for OpenSim::ComponentPath OpenSim::Component::getRelativePath(const OpenSim::Component &) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::ComponentPath OpenSim::Component::getRelativePath(const OpenSim::Component &)
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:705:19
  t96.method("getRelativePath", static_cast<OpenSim::ComponentPath (OpenSim::Component::*)(const OpenSim::Component &)  const>(&OpenSim::Component::getRelativePath));

  DEBUG_MSG("Adding wrapper for bool OpenSim::Component::hasComponent(const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::Component::hasComponent(const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:714:10
  t96.method("hasComponent", static_cast<bool (OpenSim::Component::*)(const std::string &)  const>(&OpenSim::Component::hasComponent));

  DEBUG_MSG("Adding wrapper for const OpenSim::Component & OpenSim::Component::getComponent(const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: const OpenSim::Component & OpenSim::Component::getComponent(const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:791:22
  t96.method("getComponent", static_cast<const OpenSim::Component & (OpenSim::Component::*)(const std::string &)  const>(&OpenSim::Component::getComponent));

  DEBUG_MSG("Adding wrapper for OpenSim::Component & OpenSim::Component::updComponent(const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::Component & OpenSim::Component::updComponent(const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:822:16
  t96.method("updComponent", static_cast<OpenSim::Component & (OpenSim::Component::*)(const std::string &) >(&OpenSim::Component::updComponent));

  DEBUG_MSG("Adding wrapper for unsigned int OpenSim::Component::printComponentsMatching(const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: unsigned int OpenSim::Component::printComponentsMatching(const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:845:14
  t96.method("printComponentsMatching", static_cast<unsigned int (OpenSim::Component::*)(const std::string &)  const>(&OpenSim::Component::printComponentsMatching));

  DEBUG_MSG("Adding wrapper for int OpenSim::Component::getNumStateVariables() (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::Component::getNumStateVariables()
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:853:9
  t96.method("getNumStateVariables", static_cast<int (OpenSim::Component::*)()  const>(&OpenSim::Component::getNumStateVariables));

  DEBUG_MSG("Adding wrapper for int OpenSim::Component::getNumSockets() (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::Component::getNumSockets()
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:868:9
  t96.method("getNumSockets", static_cast<int (OpenSim::Component::*)()  const>(&OpenSim::Component::getNumSockets));

  DEBUG_MSG("Adding wrapper for std::vector<std::string> OpenSim::Component::getSocketNames() (" __HERE__ ")");
  // signature to use in the veto list: std::vector<std::string> OpenSim::Component::getSocketNames()
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:879:30
  t96.method("getSocketNames", static_cast<std::vector<std::string> (OpenSim::Component::*)()  const>(&OpenSim::Component::getSocketNames));

  DEBUG_MSG("Adding wrapper for const OpenSim::Object & OpenSim::Component::getConnectee(const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: const OpenSim::Object & OpenSim::Component::getConnectee(const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:941:19
  t96.method("getConnectee", static_cast<const OpenSim::Object & (OpenSim::Component::*)(const std::string &)  const>(&OpenSim::Component::getConnectee));

  DEBUG_MSG("Adding wrapper for const OpenSim::AbstractSocket & OpenSim::Component::getSocket(const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: const OpenSim::AbstractSocket & OpenSim::Component::getSocket(const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:962:27
  t96.method("getSocket", static_cast<const OpenSim::AbstractSocket & (OpenSim::Component::*)(const std::string &)  const>(&OpenSim::Component::getSocket));

  DEBUG_MSG("Adding wrapper for OpenSim::AbstractSocket & OpenSim::Component::updSocket(const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::AbstractSocket & OpenSim::Component::updSocket(const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:996:21
  t96.method("updSocket", static_cast<OpenSim::AbstractSocket & (OpenSim::Component::*)(const std::string &) >(&OpenSim::Component::updSocket));

  DEBUG_MSG("Adding wrapper for int OpenSim::Component::getNumInputs() (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::Component::getNumInputs()
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:1038:9
  t96.method("getNumInputs", static_cast<int (OpenSim::Component::*)()  const>(&OpenSim::Component::getNumInputs));

  DEBUG_MSG("Adding wrapper for int OpenSim::Component::getNumOutputs() (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::Component::getNumOutputs()
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:1043:9
  t96.method("getNumOutputs", static_cast<int (OpenSim::Component::*)()  const>(&OpenSim::Component::getNumOutputs));

  DEBUG_MSG("Adding wrapper for std::vector<std::string> OpenSim::Component::getInputNames() (" __HERE__ ")");
  // signature to use in the veto list: std::vector<std::string> OpenSim::Component::getInputNames()
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:1049:30
  t96.method("getInputNames", static_cast<std::vector<std::string> (OpenSim::Component::*)()  const>(&OpenSim::Component::getInputNames));

  DEBUG_MSG("Adding wrapper for std::vector<std::string> OpenSim::Component::getOutputNames() (" __HERE__ ")");
  // signature to use in the veto list: std::vector<std::string> OpenSim::Component::getOutputNames()
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:1059:30
  t96.method("getOutputNames", static_cast<std::vector<std::string> (OpenSim::Component::*)()  const>(&OpenSim::Component::getOutputNames));

  DEBUG_MSG("Adding wrapper for const OpenSim::AbstractInput & OpenSim::Component::getInput(const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: const OpenSim::AbstractInput & OpenSim::Component::getInput(const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:1082:26
  t96.method("getInput", static_cast<const OpenSim::AbstractInput & (OpenSim::Component::*)(const std::string &)  const>(&OpenSim::Component::getInput));

  DEBUG_MSG("Adding wrapper for OpenSim::AbstractInput & OpenSim::Component::updInput(const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::AbstractInput & OpenSim::Component::updInput(const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:1122:20
  t96.method("updInput", static_cast<OpenSim::AbstractInput & (OpenSim::Component::*)(const std::string &) >(&OpenSim::Component::updInput));

  DEBUG_MSG("Adding wrapper for const OpenSim::AbstractOutput & OpenSim::Component::getOutput(const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: const OpenSim::AbstractOutput & OpenSim::Component::getOutput(const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:1155:27
  t96.method("getOutput", static_cast<const OpenSim::AbstractOutput & (OpenSim::Component::*)(const std::string &)  const>(&OpenSim::Component::getOutput));

  DEBUG_MSG("Adding wrapper for OpenSim::AbstractOutput & OpenSim::Component::updOutput(const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::AbstractOutput & OpenSim::Component::updOutput(const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:1178:21
  t96.method("updOutput", static_cast<OpenSim::AbstractOutput & (OpenSim::Component::*)(const std::string &) >(&OpenSim::Component::updOutput));

  DEBUG_MSG("Adding wrapper for int OpenSim::Component::getModelingOption(const SimTK::State &, const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::Component::getModelingOption(const SimTK::State &, const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:1224:9
  t96.method("getModelingOption", static_cast<int (OpenSim::Component::*)(const SimTK::State &, const std::string &)  const>(&OpenSim::Component::getModelingOption));

  DEBUG_MSG("Adding wrapper for void OpenSim::Component::setModelingOption(SimTK::State &, const std::string &, int) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Component::setModelingOption(SimTK::State &, const std::string &, int)
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:1236:10
  t96.method("setModelingOption", static_cast<void (OpenSim::Component::*)(SimTK::State &, const std::string &, int)  const>(&OpenSim::Component::setModelingOption));

  DEBUG_MSG("Adding wrapper for double OpenSim::Component::getStateVariableValue(const SimTK::State &, const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: double OpenSim::Component::getStateVariableValue(const SimTK::State &, const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:1296:12
  t96.method("getStateVariableValue", static_cast<double (OpenSim::Component::*)(const SimTK::State &, const std::string &)  const>(&OpenSim::Component::getStateVariableValue));

  DEBUG_MSG("Adding wrapper for double OpenSim::Component::getStateVariableValue(const SimTK::State &, const OpenSim::ComponentPath &) (" __HERE__ ")");
  // signature to use in the veto list: double OpenSim::Component::getStateVariableValue(const SimTK::State &, const OpenSim::ComponentPath &)
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:1314:12
  t96.method("getStateVariableValue", static_cast<double (OpenSim::Component::*)(const SimTK::State &, const OpenSim::ComponentPath &)  const>(&OpenSim::Component::getStateVariableValue));

  DEBUG_MSG("Adding wrapper for void OpenSim::Component::setStateVariableValue(SimTK::State &, const std::string &, double) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Component::setStateVariableValue(SimTK::State &, const std::string &, double)
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:1325:10
  t96.method("setStateVariableValue", static_cast<void (OpenSim::Component::*)(SimTK::State &, const std::string &, double)  const>(&OpenSim::Component::setStateVariableValue));

  DEBUG_MSG("Adding wrapper for double OpenSim::Component::getStateVariableDerivativeValue(const SimTK::State &, const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: double OpenSim::Component::getStateVariableDerivativeValue(const SimTK::State &, const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:1368:12
  t96.method("getStateVariableDerivativeValue", static_cast<double (OpenSim::Component::*)(const SimTK::State &, const std::string &)  const>(&OpenSim::Component::getStateVariableDerivativeValue));

  DEBUG_MSG("Adding wrapper for double OpenSim::Component::getDiscreteVariableValue(const SimTK::State &, const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: double OpenSim::Component::getDiscreteVariableValue(const SimTK::State &, const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:1380:12
  t96.method("getDiscreteVariableValue", static_cast<double (OpenSim::Component::*)(const SimTK::State &, const std::string &)  const>(&OpenSim::Component::getDiscreteVariableValue));

  DEBUG_MSG("Adding wrapper for void OpenSim::Component::setDiscreteVariableValue(SimTK::State &, const std::string &, double) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Component::setDiscreteVariableValue(SimTK::State &, const std::string &, double)
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:1392:10
  t96.method("setDiscreteVariableValue", static_cast<void (OpenSim::Component::*)(SimTK::State &, const std::string &, double)  const>(&OpenSim::Component::setDiscreteVariableValue));

  DEBUG_MSG("Adding wrapper for SimTK::CacheEntryIndex OpenSim::Component::getCacheVariableIndex(const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: SimTK::CacheEntryIndex OpenSim::Component::getCacheVariableIndex(const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:1557:28
  t96.method("getCacheVariableIndex", static_cast<SimTK::CacheEntryIndex (OpenSim::Component::*)(const std::string &)  const>(&OpenSim::Component::getCacheVariableIndex));

  DEBUG_MSG("Adding wrapper for bool OpenSim::Component::isCacheVariableValid(const SimTK::State &, const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::Component::isCacheVariableValid(const SimTK::State &, const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:1733:10
  t96.method("isCacheVariableValid", static_cast<bool (OpenSim::Component::*)(const SimTK::State &, const std::string &)  const>(&OpenSim::Component::isCacheVariableValid));

  DEBUG_MSG("Adding wrapper for void OpenSim::Component::markCacheVariableValid(const SimTK::State &, const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Component::markCacheVariableValid(const SimTK::State &, const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:1785:10
  t96.method("markCacheVariableValid", static_cast<void (OpenSim::Component::*)(const SimTK::State &, const std::string &)  const>(&OpenSim::Component::markCacheVariableValid));

  DEBUG_MSG("Adding wrapper for void OpenSim::Component::markCacheVariableInvalid(const SimTK::State &, const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Component::markCacheVariableInvalid(const SimTK::State &, const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:1849:10
  t96.method("markCacheVariableInvalid", static_cast<void (OpenSim::Component::*)(const SimTK::State &, const std::string &)  const>(&OpenSim::Component::markCacheVariableInvalid));

  DEBUG_MSG("Adding wrapper for void OpenSim::Component::printSubcomponentInfo() (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Component::printSubcomponentInfo()
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:1893:10
  t96.method("printSubcomponentInfo", static_cast<void (OpenSim::Component::*)()  const>(&OpenSim::Component::printSubcomponentInfo));

  DEBUG_MSG("Adding wrapper for void OpenSim::Component::printSocketInfo() (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Component::printSocketInfo()
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:1897:10
  t96.method("printSocketInfo", static_cast<void (OpenSim::Component::*)()  const>(&OpenSim::Component::printSocketInfo));

  DEBUG_MSG("Adding wrapper for void OpenSim::Component::printInputInfo() (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Component::printInputInfo()
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:1901:10
  t96.method("printInputInfo", static_cast<void (OpenSim::Component::*)()  const>(&OpenSim::Component::printInputInfo));

  DEBUG_MSG("Adding wrapper for void OpenSim::Component::printOutputInfo(const bool) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Component::printOutputInfo(const bool)
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:1954:10
  t96.method("printOutputInfo", static_cast<void (OpenSim::Component::*)(const bool)  const>(&OpenSim::Component::printOutputInfo));
  t96.method("printOutputInfo", [](OpenSim::Component const& a)->void{ a.printOutputInfo(); });
  t96.method("printOutputInfo", [](OpenSim::Component const* a)->void{ a->printOutputInfo(); });

  DEBUG_MSG("Adding wrapper for const OpenSim::Component & OpenSim::Component::getOwner() (" __HERE__ ")");
  // signature to use in the veto list: const OpenSim::Component & OpenSim::Component::getOwner()
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:2668:22
  t96.method("getOwner", static_cast<const OpenSim::Component & (OpenSim::Component::*)()  const>(&OpenSim::Component::getOwner));

  DEBUG_MSG("Adding wrapper for bool OpenSim::Component::hasOwner() (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::Component::hasOwner()
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:2674:10
  t96.method("hasOwner", static_cast<bool (OpenSim::Component::*)()  const>(&OpenSim::Component::hasOwner));

  DEBUG_MSG("Adding wrapper for const OpenSim::Component & OpenSim::Component::getRoot() (" __HERE__ ")");
  // signature to use in the veto list: const OpenSim::Component & OpenSim::Component::getRoot()
  // defined in /opt/opensim-core/OpenSim/Common/Component.h:2678:22
  t96.method("getRoot", static_cast<const OpenSim::Component & (OpenSim::Component::*)()  const>(&OpenSim::Component::getRoot));

  /* End of OpenSim::Component class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class OpenSim::Function
   */

  DEBUG_MSG("Adding wrapper for OpenSim::Function * OpenSim::Function::safeDownCast(OpenSim::Object *) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::Function * OpenSim::Function::safeDownCast(OpenSim::Object *)
  // defined in /opt/opensim-core/OpenSim/Common/Function.h:55:1
  t106.method("OpenSim!Function!safeDownCast", static_cast<OpenSim::Function * (*)(OpenSim::Object *) >(&OpenSim::Function::safeDownCast));

  DEBUG_MSG("Adding wrapper for void OpenSim::Function::assign(OpenSim::Object &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Function::assign(OpenSim::Object &)
  // defined in /opt/opensim-core/OpenSim/Common/Function.h:55:1
  t106.method("assign", static_cast<void (OpenSim::Function::*)(OpenSim::Object &) >(&OpenSim::Function::assign));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::Function::getClassName() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::Function::getClassName()
  // defined in /opt/opensim-core/OpenSim/Common/Function.h:55:1
  t106.method("OpenSim!Function!getClassName", static_cast<const std::string & (*)() >(&OpenSim::Function::getClassName));

  DEBUG_MSG("Adding wrapper for OpenSim::Function * OpenSim::Function::clone() (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::Function * OpenSim::Function::clone()
  // defined in /opt/opensim-core/OpenSim/Common/Function.h:55:1
  t106.method("clone", static_cast<OpenSim::Function * (OpenSim::Function::*)()  const>(&OpenSim::Function::clone));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::Function::getConcreteClassName() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::Function::getConcreteClassName()
  // defined in /opt/opensim-core/OpenSim/Common/Function.h:55:1
  t106.method("getConcreteClassName", static_cast<const std::string & (OpenSim::Function::*)()  const>(&OpenSim::Function::getConcreteClassName));


  DEBUG_MSG("Adding wrapper for void OpenSim::Function::init(OpenSim::Function *) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Function::init(OpenSim::Function *)
  // defined in /opt/opensim-core/OpenSim/Common/Function.h:74:18
  t106.method("init", static_cast<void (OpenSim::Function::*)(OpenSim::Function *) >(&OpenSim::Function::init));

  DEBUG_MSG("Adding wrapper for OpenSim::Function & OpenSim::Function::operator=(const OpenSim::Function &) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::Function & OpenSim::Function::operator=(const OpenSim::Function &)
  // defined in /opt/opensim-core/OpenSim/Common/Function.h:84:15
  t106.method("assign", static_cast<OpenSim::Function & (OpenSim::Function::*)(const OpenSim::Function &) >(&OpenSim::Function::operator=));

  DEBUG_MSG("Adding wrapper for OpenSim::Function * OpenSim::Function::makeFunctionOfType(OpenSim::Function *, const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::Function * OpenSim::Function::makeFunctionOfType(OpenSim::Function *, const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/Function.h:93:22
  t106.method("OpenSim!Function!makeFunctionOfType", static_cast<OpenSim::Function * (*)(OpenSim::Function *, const std::string &) >(&OpenSim::Function::makeFunctionOfType));

  DEBUG_MSG("Adding wrapper for int OpenSim::Function::getArgumentSize() (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::Function::getArgumentSize()
  // defined in /opt/opensim-core/OpenSim/Common/Function.h:120:17
  t106.method("getArgumentSize", static_cast<int (OpenSim::Function::*)()  const>(&OpenSim::Function::getArgumentSize));

  DEBUG_MSG("Adding wrapper for int OpenSim::Function::getMaxDerivativeOrder() (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::Function::getMaxDerivativeOrder()
  // defined in /opt/opensim-core/OpenSim/Common/Function.h:124:17
  t106.method("getMaxDerivativeOrder", static_cast<int (OpenSim::Function::*)()  const>(&OpenSim::Function::getMaxDerivativeOrder));

  /* End of OpenSim::Function class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class OpenSim::Constant
   */

  DEBUG_MSG("Adding wrapper for OpenSim::Constant * OpenSim::Constant::safeDownCast(OpenSim::Object *) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::Constant * OpenSim::Constant::safeDownCast(OpenSim::Object *)
  // defined in /opt/opensim-core/OpenSim/Common/Constant.h:45:1
  t107.method("OpenSim!Constant!safeDownCast", static_cast<OpenSim::Constant * (*)(OpenSim::Object *) >(&OpenSim::Constant::safeDownCast));

  DEBUG_MSG("Adding wrapper for void OpenSim::Constant::assign(OpenSim::Object &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Constant::assign(OpenSim::Object &)
  // defined in /opt/opensim-core/OpenSim/Common/Constant.h:45:1
  t107.method("assign", static_cast<void (OpenSim::Constant::*)(OpenSim::Object &) >(&OpenSim::Constant::assign));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::Constant::getClassName() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::Constant::getClassName()
  // defined in /opt/opensim-core/OpenSim/Common/Constant.h:45:1
  t107.method("OpenSim!Constant!getClassName", static_cast<const std::string & (*)() >(&OpenSim::Constant::getClassName));

  DEBUG_MSG("Adding wrapper for OpenSim::Constant * OpenSim::Constant::clone() (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::Constant * OpenSim::Constant::clone()
  // defined in /opt/opensim-core/OpenSim/Common/Constant.h:45:1
  t107.method("clone", static_cast<OpenSim::Constant * (OpenSim::Constant::*)()  const>(&OpenSim::Constant::clone));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::Constant::getConcreteClassName() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::Constant::getConcreteClassName()
  // defined in /opt/opensim-core/OpenSim/Common/Constant.h:45:1
  t107.method("getConcreteClassName", static_cast<const std::string & (OpenSim::Constant::*)()  const>(&OpenSim::Constant::getConcreteClassName));


  DEBUG_MSG("Adding wrapper for void OpenSim::Constant::Constant(double) (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Constant.h:62:5
  t107.constructor<double>(/*finalize=*/true);


  DEBUG_MSG("Adding wrapper for void OpenSim::Constant::Constant(const OpenSim::Constant &) (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Constant.h:63:5
  t107.constructor<const OpenSim::Constant &>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for OpenSim::Constant & OpenSim::Constant::operator=(const OpenSim::Constant &) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::Constant & OpenSim::Constant::operator=(const OpenSim::Constant &)
  // defined in /opt/opensim-core/OpenSim/Common/Constant.h:76:15
  t107.method("assign", static_cast<OpenSim::Constant & (OpenSim::Constant::*)(const OpenSim::Constant &) >(&OpenSim::Constant::operator=));

  DEBUG_MSG("Adding wrapper for void OpenSim::Constant::setValue(double) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Constant::setValue(double)
  // defined in /opt/opensim-core/OpenSim/Common/Constant.h:83:10
  t107.method("setValue", static_cast<void (OpenSim::Constant::*)(double) >(&OpenSim::Constant::setValue));

  DEBUG_MSG("Adding wrapper for double OpenSim::Constant::getValue() (" __HERE__ ")");
  // signature to use in the veto list: double OpenSim::Constant::getValue()
  // defined in /opt/opensim-core/OpenSim/Common/Constant.h:92:12
  t107.method("getValue", static_cast<double (OpenSim::Constant::*)()  const>(&OpenSim::Constant::getValue));

  /* End of OpenSim::Constant class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class OpenSim::Event
   */

  DEBUG_MSG("Adding label methods  to provide read access to the field label (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Event.h:29:17
  // signature to use in the veto list: OpenSim::Event::label
  t108.method("label", [](const OpenSim::Event& a) -> const std::string& { return a.label; });
  t108.method("label", [](OpenSim::Event& a) -> std::string& { return a.label; });
  t108.method("label", [](const OpenSim::Event* a) -> const std::string& { return a->label; });
  t108.method("label", [](OpenSim::Event* a) -> std::string& { return a->label; });
  // defined in /opt/opensim-core/OpenSim/Common/Event.h:29:17
  // signature to use in the veto list: OpenSim::Event::label
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding label! methods to provide write access to the field label (" __HERE__ ")");
  t108.method("label!", [](OpenSim::Event& a, const std::string& val) -> std::string& { return a.label = val; });

  DEBUG_MSG("Adding label! methods to provide write access to the field label (" __HERE__ ")");
  t108.method("label!", [](OpenSim::Event* a, const std::string& val) -> std::string& { return a->label = val; });

  DEBUG_MSG("Adding time methods  to provide read access to the field time (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Event.h:30:17
  // signature to use in the veto list: OpenSim::Event::time
  t108.method("time", [](const OpenSim::Event& a) -> double { return a.time; });
  t108.method("time", [](OpenSim::Event& a) -> double { return a.time; });
  t108.method("time", [](const OpenSim::Event* a) -> double { return a->time; });
  t108.method("time", [](OpenSim::Event* a) -> double { return a->time; });
  // defined in /opt/opensim-core/OpenSim/Common/Event.h:30:17
  // signature to use in the veto list: OpenSim::Event::time
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding time! methods to provide write access to the field time (" __HERE__ ")");
  t108.method("time!", [](OpenSim::Event& a, double val) -> double { return a.time = val; });

  DEBUG_MSG("Adding time! methods to provide write access to the field time (" __HERE__ ")");
  t108.method("time!", [](OpenSim::Event* a, double val) -> double { return a->time = val; });

  DEBUG_MSG("Adding frame methods  to provide read access to the field frame (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Event.h:31:17
  // signature to use in the veto list: OpenSim::Event::frame
  t108.method("frame", [](const OpenSim::Event& a) -> int { return a.frame; });
  t108.method("frame", [](OpenSim::Event& a) -> int { return a.frame; });
  t108.method("frame", [](const OpenSim::Event* a) -> int { return a->frame; });
  t108.method("frame", [](OpenSim::Event* a) -> int { return a->frame; });
  // defined in /opt/opensim-core/OpenSim/Common/Event.h:31:17
  // signature to use in the veto list: OpenSim::Event::frame
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding frame! methods to provide write access to the field frame (" __HERE__ ")");
  t108.method("frame!", [](OpenSim::Event& a, int val) -> int { return a.frame = val; });

  DEBUG_MSG("Adding frame! methods to provide write access to the field frame (" __HERE__ ")");
  t108.method("frame!", [](OpenSim::Event* a, int val) -> int { return a->frame = val; });

  DEBUG_MSG("Adding description methods  to provide read access to the field description (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Event.h:32:17
  // signature to use in the veto list: OpenSim::Event::description
  t108.method("description", [](const OpenSim::Event& a) -> const std::string& { return a.description; });
  t108.method("description", [](OpenSim::Event& a) -> std::string& { return a.description; });
  t108.method("description", [](const OpenSim::Event* a) -> const std::string& { return a->description; });
  t108.method("description", [](OpenSim::Event* a) -> std::string& { return a->description; });
  // defined in /opt/opensim-core/OpenSim/Common/Event.h:32:17
  // signature to use in the veto list: OpenSim::Event::description
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding description! methods to provide write access to the field description (" __HERE__ ")");
  t108.method("description!", [](OpenSim::Event& a, const std::string& val) -> std::string& { return a.description = val; });

  DEBUG_MSG("Adding description! methods to provide write access to the field description (" __HERE__ ")");
  t108.method("description!", [](OpenSim::Event* a, const std::string& val) -> std::string& { return a->description = val; });

  /* End of OpenSim::Event class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class OpenSim::ObjectGroup
   */

  DEBUG_MSG("Adding wrapper for OpenSim::ObjectGroup * OpenSim::ObjectGroup::safeDownCast(OpenSim::Object *) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::ObjectGroup * OpenSim::ObjectGroup::safeDownCast(OpenSim::Object *)
  // defined in /opt/opensim-core/OpenSim/Common/ObjectGroup.h:54:1
  t110.method("OpenSim!ObjectGroup!safeDownCast", static_cast<OpenSim::ObjectGroup * (*)(OpenSim::Object *) >(&OpenSim::ObjectGroup::safeDownCast));

  DEBUG_MSG("Adding wrapper for void OpenSim::ObjectGroup::assign(OpenSim::Object &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::ObjectGroup::assign(OpenSim::Object &)
  // defined in /opt/opensim-core/OpenSim/Common/ObjectGroup.h:54:1
  t110.method("assign", static_cast<void (OpenSim::ObjectGroup::*)(OpenSim::Object &) >(&OpenSim::ObjectGroup::assign));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::ObjectGroup::getClassName() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::ObjectGroup::getClassName()
  // defined in /opt/opensim-core/OpenSim/Common/ObjectGroup.h:54:1
  t110.method("OpenSim!ObjectGroup!getClassName", static_cast<const std::string & (*)() >(&OpenSim::ObjectGroup::getClassName));

  DEBUG_MSG("Adding wrapper for OpenSim::ObjectGroup * OpenSim::ObjectGroup::clone() (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::ObjectGroup * OpenSim::ObjectGroup::clone()
  // defined in /opt/opensim-core/OpenSim/Common/ObjectGroup.h:54:1
  t110.method("clone", static_cast<OpenSim::ObjectGroup * (OpenSim::ObjectGroup::*)()  const>(&OpenSim::ObjectGroup::clone));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::ObjectGroup::getConcreteClassName() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::ObjectGroup::getConcreteClassName()
  // defined in /opt/opensim-core/OpenSim/Common/ObjectGroup.h:54:1
  t110.method("getConcreteClassName", static_cast<const std::string & (OpenSim::ObjectGroup::*)()  const>(&OpenSim::ObjectGroup::getConcreteClassName));


  DEBUG_MSG("Adding wrapper for void OpenSim::ObjectGroup::ObjectGroup(const std::string &) (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/ObjectGroup.h:75:5
  t110.constructor<const std::string &>(/*finalize=*/true);


  DEBUG_MSG("Adding wrapper for void OpenSim::ObjectGroup::ObjectGroup(const OpenSim::ObjectGroup &) (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/ObjectGroup.h:76:5
  t110.constructor<const OpenSim::ObjectGroup &>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for OpenSim::ObjectGroup & OpenSim::ObjectGroup::operator=(const OpenSim::ObjectGroup &) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::ObjectGroup & OpenSim::ObjectGroup::operator=(const OpenSim::ObjectGroup &)
  // defined in /opt/opensim-core/OpenSim/Common/ObjectGroup.h:80:18
  t110.method("assign", static_cast<OpenSim::ObjectGroup & (OpenSim::ObjectGroup::*)(const OpenSim::ObjectGroup &) >(&OpenSim::ObjectGroup::operator=));

  DEBUG_MSG("Adding wrapper for void OpenSim::ObjectGroup::copyData(const OpenSim::ObjectGroup &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::ObjectGroup::copyData(const OpenSim::ObjectGroup &)
  // defined in /opt/opensim-core/OpenSim/Common/ObjectGroup.h:82:9
  t110.method("copyData", static_cast<void (OpenSim::ObjectGroup::*)(const OpenSim::ObjectGroup &) >(&OpenSim::ObjectGroup::copyData));

  DEBUG_MSG("Adding wrapper for bool OpenSim::ObjectGroup::contains(const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::ObjectGroup::contains(const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/ObjectGroup.h:84:10
  t110.method("contains", static_cast<bool (OpenSim::ObjectGroup::*)(const std::string &)  const>(&OpenSim::ObjectGroup::contains));

  DEBUG_MSG("Adding wrapper for void OpenSim::ObjectGroup::add(const OpenSim::Object *) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::ObjectGroup::add(const OpenSim::Object *)
  // defined in /opt/opensim-core/OpenSim/Common/ObjectGroup.h:85:10
  t110.method("add", static_cast<void (OpenSim::ObjectGroup::*)(const OpenSim::Object *) >(&OpenSim::ObjectGroup::add));

  DEBUG_MSG("Adding wrapper for void OpenSim::ObjectGroup::remove(const OpenSim::Object *) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::ObjectGroup::remove(const OpenSim::Object *)
  // defined in /opt/opensim-core/OpenSim/Common/ObjectGroup.h:86:10
  t110.method("remove", static_cast<void (OpenSim::ObjectGroup::*)(const OpenSim::Object *) >(&OpenSim::ObjectGroup::remove));

  DEBUG_MSG("Adding wrapper for void OpenSim::ObjectGroup::replace(const OpenSim::Object *, const OpenSim::Object *) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::ObjectGroup::replace(const OpenSim::Object *, const OpenSim::Object *)
  // defined in /opt/opensim-core/OpenSim/Common/ObjectGroup.h:87:10
  t110.method("replace", static_cast<void (OpenSim::ObjectGroup::*)(const OpenSim::Object *, const OpenSim::Object *) >(&OpenSim::ObjectGroup::replace));

  /* End of OpenSim::ObjectGroup class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class OpenSim::FunctionSet
   */

  DEBUG_MSG("Adding wrapper for OpenSim::FunctionSet * OpenSim::FunctionSet::safeDownCast(OpenSim::Object *) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::FunctionSet * OpenSim::FunctionSet::safeDownCast(OpenSim::Object *)
  // defined in /opt/opensim-core/OpenSim/Common/FunctionSet.h:48:1
  t113.method("OpenSim!FunctionSet!safeDownCast", static_cast<OpenSim::FunctionSet * (*)(OpenSim::Object *) >(&OpenSim::FunctionSet::safeDownCast));

  DEBUG_MSG("Adding wrapper for void OpenSim::FunctionSet::assign(OpenSim::Object &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::FunctionSet::assign(OpenSim::Object &)
  // defined in /opt/opensim-core/OpenSim/Common/FunctionSet.h:48:1
  t113.method("assign", static_cast<void (OpenSim::FunctionSet::*)(OpenSim::Object &) >(&OpenSim::FunctionSet::assign));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::FunctionSet::getClassName() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::FunctionSet::getClassName()
  // defined in /opt/opensim-core/OpenSim/Common/FunctionSet.h:48:1
  t113.method("OpenSim!FunctionSet!getClassName", static_cast<const std::string & (*)() >(&OpenSim::FunctionSet::getClassName));

  DEBUG_MSG("Adding wrapper for OpenSim::FunctionSet * OpenSim::FunctionSet::clone() (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::FunctionSet * OpenSim::FunctionSet::clone()
  // defined in /opt/opensim-core/OpenSim/Common/FunctionSet.h:48:1
  t113.method("clone", static_cast<OpenSim::FunctionSet * (OpenSim::FunctionSet::*)()  const>(&OpenSim::FunctionSet::clone));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::FunctionSet::getConcreteClassName() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::FunctionSet::getConcreteClassName()
  // defined in /opt/opensim-core/OpenSim/Common/FunctionSet.h:48:1
  t113.method("getConcreteClassName", static_cast<const std::string & (OpenSim::FunctionSet::*)()  const>(&OpenSim::FunctionSet::getConcreteClassName));


  DEBUG_MSG("Adding wrapper for void OpenSim::FunctionSet::FunctionSet(const std::string &) (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/FunctionSet.h:62:5
  t113.constructor<const std::string &>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for double OpenSim::FunctionSet::evaluate(int, int, double) (" __HERE__ ")");
  // signature to use in the veto list: double OpenSim::FunctionSet::evaluate(int, int, double)
  // defined in /opt/opensim-core/OpenSim/Common/FunctionSet.h:73:9
  t113.method("evaluate", static_cast<double (OpenSim::FunctionSet::*)(int, int, double)  const>(&OpenSim::FunctionSet::evaluate));
  t113.method("evaluate", [](OpenSim::FunctionSet const& a, int arg0, int arg1)->double{ return a.evaluate(arg0, arg1); });
  t113.method("evaluate", [](OpenSim::FunctionSet const* a, int arg0, int arg1)->double{ return a->evaluate(arg0, arg1); });

  /* End of OpenSim::FunctionSet class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class OpenSim::GCVSpline
   */

  DEBUG_MSG("Adding wrapper for OpenSim::GCVSpline * OpenSim::GCVSpline::safeDownCast(OpenSim::Object *) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::GCVSpline * OpenSim::GCVSpline::safeDownCast(OpenSim::Object *)
  // defined in /opt/opensim-core/OpenSim/Common/GCVSpline.h:71:1
  t115.method("OpenSim!GCVSpline!safeDownCast", static_cast<OpenSim::GCVSpline * (*)(OpenSim::Object *) >(&OpenSim::GCVSpline::safeDownCast));

  DEBUG_MSG("Adding wrapper for void OpenSim::GCVSpline::assign(OpenSim::Object &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::GCVSpline::assign(OpenSim::Object &)
  // defined in /opt/opensim-core/OpenSim/Common/GCVSpline.h:71:1
  t115.method("assign", static_cast<void (OpenSim::GCVSpline::*)(OpenSim::Object &) >(&OpenSim::GCVSpline::assign));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::GCVSpline::getClassName() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::GCVSpline::getClassName()
  // defined in /opt/opensim-core/OpenSim/Common/GCVSpline.h:71:1
  t115.method("OpenSim!GCVSpline!getClassName", static_cast<const std::string & (*)() >(&OpenSim::GCVSpline::getClassName));

  DEBUG_MSG("Adding wrapper for OpenSim::GCVSpline * OpenSim::GCVSpline::clone() (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::GCVSpline * OpenSim::GCVSpline::clone()
  // defined in /opt/opensim-core/OpenSim/Common/GCVSpline.h:71:1
  t115.method("clone", static_cast<OpenSim::GCVSpline * (OpenSim::GCVSpline::*)()  const>(&OpenSim::GCVSpline::clone));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::GCVSpline::getConcreteClassName() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::GCVSpline::getConcreteClassName()
  // defined in /opt/opensim-core/OpenSim/Common/GCVSpline.h:71:1
  t115.method("getConcreteClassName", static_cast<const std::string & (OpenSim::GCVSpline::*)()  const>(&OpenSim::GCVSpline::getConcreteClassName));


  DEBUG_MSG("Adding wrapper for void OpenSim::GCVSpline::GCVSpline(int, int, const double *, const double *, const std::string &, double) (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/GCVSpline.h:137:5
  t115.constructor<int, int, const double *, const double *>(/*finalize=*/true);
  t115.constructor<int, int, const double *, const double *, const std::string &>(/*finalize=*/true);
  t115.constructor<int, int, const double *, const double *, const std::string &, double>(/*finalize=*/true);


  DEBUG_MSG("Adding wrapper for void OpenSim::GCVSpline::GCVSpline(const OpenSim::GCVSpline &) (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/GCVSpline.h:139:5
  t115.constructor<const OpenSim::GCVSpline &>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for void OpenSim::GCVSpline::updateFromXMLNode(SimTK::Xml::Element &, int) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::GCVSpline::updateFromXMLNode(SimTK::Xml::Element &, int)
  // defined in /opt/opensim-core/OpenSim/Common/GCVSpline.h:142:10
  t115.method("updateFromXMLNode", static_cast<void (OpenSim::GCVSpline::*)(SimTK::Xml::Element &, int) >(&OpenSim::GCVSpline::updateFromXMLNode));
  t115.method("updateFromXMLNode", [](OpenSim::GCVSpline& a, SimTK::Xml::Element & arg0)->void{ a.updateFromXMLNode(arg0); });
  t115.method("updateFromXMLNode", [](OpenSim::GCVSpline* a, SimTK::Xml::Element & arg0)->void{ a->updateFromXMLNode(arg0); });

  DEBUG_MSG("Adding wrapper for OpenSim::GCVSpline & OpenSim::GCVSpline::operator=(const OpenSim::GCVSpline &) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::GCVSpline & OpenSim::GCVSpline::operator=(const OpenSim::GCVSpline &)
  // defined in /opt/opensim-core/OpenSim/Common/GCVSpline.h:153:16
  t115.method("assign", static_cast<OpenSim::GCVSpline & (OpenSim::GCVSpline::*)(const OpenSim::GCVSpline &) >(&OpenSim::GCVSpline::operator=));

  DEBUG_MSG("Adding wrapper for void OpenSim::GCVSpline::setDegree(int) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::GCVSpline::setDegree(int)
  // defined in /opt/opensim-core/OpenSim/Common/GCVSpline.h:164:10
  t115.method("setDegree", static_cast<void (OpenSim::GCVSpline::*)(int) >(&OpenSim::GCVSpline::setDegree));

  DEBUG_MSG("Adding wrapper for int OpenSim::GCVSpline::getDegree() (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::GCVSpline::getDegree()
  // defined in /opt/opensim-core/OpenSim/Common/GCVSpline.h:166:9
  t115.method("getDegree", static_cast<int (OpenSim::GCVSpline::*)()  const>(&OpenSim::GCVSpline::getDegree));

  DEBUG_MSG("Adding wrapper for int OpenSim::GCVSpline::getOrder() (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::GCVSpline::getOrder()
  // defined in /opt/opensim-core/OpenSim/Common/GCVSpline.h:172:9
  t115.method("getOrder", static_cast<int (OpenSim::GCVSpline::*)()  const>(&OpenSim::GCVSpline::getOrder));

  DEBUG_MSG("Adding wrapper for int OpenSim::GCVSpline::getHalfOrder() (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::GCVSpline::getHalfOrder()
  // defined in /opt/opensim-core/OpenSim/Common/GCVSpline.h:178:9
  t115.method("getHalfOrder", static_cast<int (OpenSim::GCVSpline::*)()  const>(&OpenSim::GCVSpline::getHalfOrder));

  DEBUG_MSG("Adding wrapper for int OpenSim::GCVSpline::getSize() (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::GCVSpline::getSize()
  // defined in /opt/opensim-core/OpenSim/Common/GCVSpline.h:185:9
  t115.method("getSize", static_cast<int (OpenSim::GCVSpline::*)()  const>(&OpenSim::GCVSpline::getSize));

  DEBUG_MSG("Adding wrapper for const double * OpenSim::GCVSpline::getXValues() (" __HERE__ ")");
  // signature to use in the veto list: const double * OpenSim::GCVSpline::getXValues()
  // defined in /opt/opensim-core/OpenSim/Common/GCVSpline.h:192:27
  t115.method("getXValues", static_cast<const double * (OpenSim::GCVSpline::*)()  const>(&OpenSim::GCVSpline::getXValues));

  DEBUG_MSG("Adding wrapper for const double * OpenSim::GCVSpline::getYValues() (" __HERE__ ")");
  // signature to use in the veto list: const double * OpenSim::GCVSpline::getYValues()
  // defined in /opt/opensim-core/OpenSim/Common/GCVSpline.h:198:27
  t115.method("getYValues", static_cast<const double * (OpenSim::GCVSpline::*)()  const>(&OpenSim::GCVSpline::getYValues));

  DEBUG_MSG("Adding wrapper for int OpenSim::GCVSpline::getNumberOfPoints() (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::GCVSpline::getNumberOfPoints()
  // defined in /opt/opensim-core/OpenSim/Common/GCVSpline.h:205:17
  t115.method("getNumberOfPoints", static_cast<int (OpenSim::GCVSpline::*)()  const>(&OpenSim::GCVSpline::getNumberOfPoints));

  DEBUG_MSG("Adding wrapper for double OpenSim::GCVSpline::getX(int) (" __HERE__ ")");
  // signature to use in the veto list: double OpenSim::GCVSpline::getX(int)
  // defined in /opt/opensim-core/OpenSim/Common/GCVSpline.h:211:20
  t115.method("getX", static_cast<double (OpenSim::GCVSpline::*)(int)  const>(&OpenSim::GCVSpline::getX));

  DEBUG_MSG("Adding wrapper for double OpenSim::GCVSpline::getY(int) (" __HERE__ ")");
  // signature to use in the veto list: double OpenSim::GCVSpline::getY(int)
  // defined in /opt/opensim-core/OpenSim/Common/GCVSpline.h:212:20
  t115.method("getY", static_cast<double (OpenSim::GCVSpline::*)(int)  const>(&OpenSim::GCVSpline::getY));

  DEBUG_MSG("Adding wrapper for double OpenSim::GCVSpline::getZ(int) (" __HERE__ ")");
  // signature to use in the veto list: double OpenSim::GCVSpline::getZ(int)
  // defined in /opt/opensim-core/OpenSim/Common/GCVSpline.h:213:20
  t115.method("getZ", static_cast<double (OpenSim::GCVSpline::*)(int)  const>(&OpenSim::GCVSpline::getZ));

  DEBUG_MSG("Adding wrapper for void OpenSim::GCVSpline::setX(int, double) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::GCVSpline::setX(int, double)
  // defined in /opt/opensim-core/OpenSim/Common/GCVSpline.h:214:18
  t115.method("setX", static_cast<void (OpenSim::GCVSpline::*)(int, double) >(&OpenSim::GCVSpline::setX));

  DEBUG_MSG("Adding wrapper for void OpenSim::GCVSpline::setY(int, double) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::GCVSpline::setY(int, double)
  // defined in /opt/opensim-core/OpenSim/Common/GCVSpline.h:215:18
  t115.method("setY", static_cast<void (OpenSim::GCVSpline::*)(int, double) >(&OpenSim::GCVSpline::setY));

  DEBUG_MSG("Adding wrapper for double OpenSim::GCVSpline::getMinX() (" __HERE__ ")");
  // signature to use in the veto list: double OpenSim::GCVSpline::getMinX()
  // defined in /opt/opensim-core/OpenSim/Common/GCVSpline.h:221:20
  t115.method("getMinX", static_cast<double (OpenSim::GCVSpline::*)()  const>(&OpenSim::GCVSpline::getMinX));

  DEBUG_MSG("Adding wrapper for double OpenSim::GCVSpline::getMaxX() (" __HERE__ ")");
  // signature to use in the veto list: double OpenSim::GCVSpline::getMaxX()
  // defined in /opt/opensim-core/OpenSim/Common/GCVSpline.h:227:20
  t115.method("getMaxX", static_cast<double (OpenSim::GCVSpline::*)()  const>(&OpenSim::GCVSpline::getMaxX));

  DEBUG_MSG("Adding wrapper for bool OpenSim::GCVSpline::deletePoint(int) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::GCVSpline::deletePoint(int)
  // defined in /opt/opensim-core/OpenSim/Common/GCVSpline.h:228:18
  t115.method("deletePoint", static_cast<bool (OpenSim::GCVSpline::*)(int) >(&OpenSim::GCVSpline::deletePoint));

  DEBUG_MSG("Adding wrapper for int OpenSim::GCVSpline::addPoint(double, double) (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::GCVSpline::addPoint(double, double)
  // defined in /opt/opensim-core/OpenSim/Common/GCVSpline.h:230:17
  t115.method("addPoint", static_cast<int (OpenSim::GCVSpline::*)(double, double) >(&OpenSim::GCVSpline::addPoint));

  /* End of OpenSim::GCVSpline class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class OpenSim::GCVSplineSet
   */

  DEBUG_MSG("Adding wrapper for OpenSim::GCVSplineSet * OpenSim::GCVSplineSet::safeDownCast(OpenSim::Object *) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::GCVSplineSet * OpenSim::GCVSplineSet::safeDownCast(OpenSim::Object *)
  // defined in /opt/opensim-core/OpenSim/Common/GCVSplineSet.h:51:1
  t116.method("OpenSim!GCVSplineSet!safeDownCast", static_cast<OpenSim::GCVSplineSet * (*)(OpenSim::Object *) >(&OpenSim::GCVSplineSet::safeDownCast));

  DEBUG_MSG("Adding wrapper for void OpenSim::GCVSplineSet::assign(OpenSim::Object &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::GCVSplineSet::assign(OpenSim::Object &)
  // defined in /opt/opensim-core/OpenSim/Common/GCVSplineSet.h:51:1
  t116.method("assign", static_cast<void (OpenSim::GCVSplineSet::*)(OpenSim::Object &) >(&OpenSim::GCVSplineSet::assign));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::GCVSplineSet::getClassName() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::GCVSplineSet::getClassName()
  // defined in /opt/opensim-core/OpenSim/Common/GCVSplineSet.h:51:1
  t116.method("OpenSim!GCVSplineSet!getClassName", static_cast<const std::string & (*)() >(&OpenSim::GCVSplineSet::getClassName));

  DEBUG_MSG("Adding wrapper for OpenSim::GCVSplineSet * OpenSim::GCVSplineSet::clone() (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::GCVSplineSet * OpenSim::GCVSplineSet::clone()
  // defined in /opt/opensim-core/OpenSim/Common/GCVSplineSet.h:51:1
  t116.method("clone", static_cast<OpenSim::GCVSplineSet * (OpenSim::GCVSplineSet::*)()  const>(&OpenSim::GCVSplineSet::clone));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::GCVSplineSet::getConcreteClassName() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::GCVSplineSet::getConcreteClassName()
  // defined in /opt/opensim-core/OpenSim/Common/GCVSplineSet.h:51:1
  t116.method("getConcreteClassName", static_cast<const std::string & (OpenSim::GCVSplineSet::*)()  const>(&OpenSim::GCVSplineSet::getConcreteClassName));


  DEBUG_MSG("Adding wrapper for void OpenSim::GCVSplineSet::GCVSplineSet(const char *) (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/GCVSplineSet.h:60:5
  t116.constructor<const char *>(/*finalize=*/true);


  DEBUG_MSG("Adding wrapper for void OpenSim::GCVSplineSet::GCVSplineSet(int, const OpenSim::Storage *, double) (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/GCVSplineSet.h:83:5
  t116.constructor<int, const OpenSim::Storage *>(/*finalize=*/true);
  t116.constructor<int, const OpenSim::Storage *, double>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for OpenSim::GCVSpline * OpenSim::GCVSplineSet::getGCVSpline(int) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::GCVSpline * OpenSim::GCVSplineSet::getGCVSpline(int)
  // defined in /opt/opensim-core/OpenSim/Common/GCVSplineSet.h:136:16
  t116.method("getGCVSpline", static_cast<OpenSim::GCVSpline * (OpenSim::GCVSplineSet::*)(int)  const>(&OpenSim::GCVSplineSet::getGCVSpline));

  DEBUG_MSG("Adding wrapper for double OpenSim::GCVSplineSet::getMinX() (" __HERE__ ")");
  // signature to use in the veto list: double OpenSim::GCVSplineSet::getMinX()
  // defined in /opt/opensim-core/OpenSim/Common/GCVSplineSet.h:137:12
  t116.method("getMinX", static_cast<double (OpenSim::GCVSplineSet::*)()  const>(&OpenSim::GCVSplineSet::getMinX));

  DEBUG_MSG("Adding wrapper for double OpenSim::GCVSplineSet::getMaxX() (" __HERE__ ")");
  // signature to use in the veto list: double OpenSim::GCVSplineSet::getMaxX()
  // defined in /opt/opensim-core/OpenSim/Common/GCVSplineSet.h:138:12
  t116.method("getMaxX", static_cast<double (OpenSim::GCVSplineSet::*)()  const>(&OpenSim::GCVSplineSet::getMaxX));

  DEBUG_MSG("Adding wrapper for OpenSim::Storage * OpenSim::GCVSplineSet::constructStorage(int, double) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::Storage * OpenSim::GCVSplineSet::constructStorage(int, double)
  // defined in /opt/opensim-core/OpenSim/Common/GCVSplineSet.h:155:14
  t116.method("constructStorage", static_cast<OpenSim::Storage * (OpenSim::GCVSplineSet::*)(int, double) >(&OpenSim::GCVSplineSet::constructStorage));
  t116.method("constructStorage", [](OpenSim::GCVSplineSet& a, int arg0)->OpenSim::Storage *{ return a.constructStorage(arg0); });
  t116.method("constructStorage", [](OpenSim::GCVSplineSet* a, int arg0)->OpenSim::Storage *{ return a->constructStorage(arg0); });

  /* End of OpenSim::GCVSplineSet class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class OpenSim::StorageInterface
   */

  DEBUG_MSG("Adding wrapper for OpenSim::StorageInterface * OpenSim::StorageInterface::safeDownCast(OpenSim::Object *) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::StorageInterface * OpenSim::StorageInterface::safeDownCast(OpenSim::Object *)
  // defined in /opt/opensim-core/OpenSim/Common/StorageInterface.h:44:1
  t149.method("OpenSim!StorageInterface!safeDownCast", static_cast<OpenSim::StorageInterface * (*)(OpenSim::Object *) >(&OpenSim::StorageInterface::safeDownCast));

  DEBUG_MSG("Adding wrapper for void OpenSim::StorageInterface::assign(OpenSim::Object &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::StorageInterface::assign(OpenSim::Object &)
  // defined in /opt/opensim-core/OpenSim/Common/StorageInterface.h:44:1
  t149.method("assign", static_cast<void (OpenSim::StorageInterface::*)(OpenSim::Object &) >(&OpenSim::StorageInterface::assign));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::StorageInterface::getClassName() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::StorageInterface::getClassName()
  // defined in /opt/opensim-core/OpenSim/Common/StorageInterface.h:44:1
  t149.method("OpenSim!StorageInterface!getClassName", static_cast<const std::string & (*)() >(&OpenSim::StorageInterface::getClassName));

  DEBUG_MSG("Adding wrapper for OpenSim::StorageInterface * OpenSim::StorageInterface::clone() (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::StorageInterface * OpenSim::StorageInterface::clone()
  // defined in /opt/opensim-core/OpenSim/Common/StorageInterface.h:44:1
  t149.method("clone", static_cast<OpenSim::StorageInterface * (OpenSim::StorageInterface::*)()  const>(&OpenSim::StorageInterface::clone));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::StorageInterface::getConcreteClassName() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::StorageInterface::getConcreteClassName()
  // defined in /opt/opensim-core/OpenSim/Common/StorageInterface.h:44:1
  t149.method("getConcreteClassName", static_cast<const std::string & (OpenSim::StorageInterface::*)()  const>(&OpenSim::StorageInterface::getConcreteClassName));


  DEBUG_MSG("Adding wrapper for int OpenSim::StorageInterface::getSize() (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::StorageInterface::getSize()
  // defined in /opt/opensim-core/OpenSim/Common/StorageInterface.h:57:17
  t149.method("getSize", static_cast<int (OpenSim::StorageInterface::*)()  const>(&OpenSim::StorageInterface::getSize));

  DEBUG_MSG("Adding wrapper for OpenSim::StateVector * OpenSim::StorageInterface::getStateVector(int) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::StateVector * OpenSim::StorageInterface::getStateVector(int)
  // defined in /opt/opensim-core/OpenSim/Common/StorageInterface.h:59:26
  t149.method("getStateVector", static_cast<OpenSim::StateVector * (OpenSim::StorageInterface::*)(int)  const>(&OpenSim::StorageInterface::getStateVector));

  DEBUG_MSG("Adding wrapper for OpenSim::StateVector * OpenSim::StorageInterface::getLastStateVector() (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::StateVector * OpenSim::StorageInterface::getLastStateVector()
  // defined in /opt/opensim-core/OpenSim/Common/StorageInterface.h:60:26
  t149.method("getLastStateVector", static_cast<OpenSim::StateVector * (OpenSim::StorageInterface::*)()  const>(&OpenSim::StorageInterface::getLastStateVector));

  DEBUG_MSG("Adding wrapper for double OpenSim::StorageInterface::getFirstTime() (" __HERE__ ")");
  // signature to use in the veto list: double OpenSim::StorageInterface::getFirstTime()
  // defined in /opt/opensim-core/OpenSim/Common/StorageInterface.h:62:20
  t149.method("getFirstTime", static_cast<double (OpenSim::StorageInterface::*)()  const>(&OpenSim::StorageInterface::getFirstTime));

  DEBUG_MSG("Adding wrapper for double OpenSim::StorageInterface::getLastTime() (" __HERE__ ")");
  // signature to use in the veto list: double OpenSim::StorageInterface::getLastTime()
  // defined in /opt/opensim-core/OpenSim/Common/StorageInterface.h:63:20
  t149.method("getLastTime", static_cast<double (OpenSim::StorageInterface::*)()  const>(&OpenSim::StorageInterface::getLastTime));

  DEBUG_MSG("Adding wrapper for int OpenSim::StorageInterface::append(const OpenSim::StateVector &, bool) (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::StorageInterface::append(const OpenSim::StateVector &, bool)
  // defined in /opt/opensim-core/OpenSim/Common/StorageInterface.h:73:17
  t149.method("append", static_cast<int (OpenSim::StorageInterface::*)(const OpenSim::StateVector &, bool) >(&OpenSim::StorageInterface::append));
  t149.method("append", [](OpenSim::StorageInterface& a, const OpenSim::StateVector & arg0)->int{ return a.append(arg0); });
  t149.method("append", [](OpenSim::StorageInterface* a, const OpenSim::StateVector & arg0)->int{ return a->append(arg0); });

  DEBUG_MSG("Adding wrapper for int OpenSim::StorageInterface::append(double, int, const double *, bool) (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::StorageInterface::append(double, int, const double *, bool)
  // defined in /opt/opensim-core/OpenSim/Common/StorageInterface.h:75:17
  t149.method("append", static_cast<int (OpenSim::StorageInterface::*)(double, int, const double *, bool) >(&OpenSim::StorageInterface::append));
  t149.method("append", [](OpenSim::StorageInterface& a, double arg0, int arg1, const double * arg2)->int{ return a.append(arg0, arg1, arg2); });
  t149.method("append", [](OpenSim::StorageInterface* a, double arg0, int arg1, const double * arg2)->int{ return a->append(arg0, arg1, arg2); });

  DEBUG_MSG("Adding wrapper for int OpenSim::StorageInterface::store(int, double, int, const double *) (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::StorageInterface::store(int, double, int, const double *)
  // defined in /opt/opensim-core/OpenSim/Common/StorageInterface.h:80:17
  t149.method("store", static_cast<int (OpenSim::StorageInterface::*)(int, double, int, const double *) >(&OpenSim::StorageInterface::store));

  DEBUG_MSG("Adding wrapper for int OpenSim::StorageInterface::findIndex(double) (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::StorageInterface::findIndex(double)
  // defined in /opt/opensim-core/OpenSim/Common/StorageInterface.h:85:17
  t149.method("findIndex", static_cast<int (OpenSim::StorageInterface::*)(double)  const>(&OpenSim::StorageInterface::findIndex));

  DEBUG_MSG("Adding wrapper for int OpenSim::StorageInterface::findIndex(int, double) (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::StorageInterface::findIndex(int, double)
  // defined in /opt/opensim-core/OpenSim/Common/StorageInterface.h:86:17
  t149.method("findIndex", static_cast<int (OpenSim::StorageInterface::*)(int, double)  const>(&OpenSim::StorageInterface::findIndex));

  DEBUG_MSG("Adding wrapper for void OpenSim::StorageInterface::setOutputFileName(const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::StorageInterface::setOutputFileName(const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/StorageInterface.h:90:18
  t149.method("setOutputFileName", static_cast<void (OpenSim::StorageInterface::*)(const std::string &) >(&OpenSim::StorageInterface::setOutputFileName));

  /* End of OpenSim::StorageInterface class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class OpenSim::LinearFunction
   */

  DEBUG_MSG("Adding wrapper for OpenSim::LinearFunction * OpenSim::LinearFunction::safeDownCast(OpenSim::Object *) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::LinearFunction * OpenSim::LinearFunction::safeDownCast(OpenSim::Object *)
  // defined in /opt/opensim-core/OpenSim/Common/LinearFunction.h:47:1
  t118.method("OpenSim!LinearFunction!safeDownCast", static_cast<OpenSim::LinearFunction * (*)(OpenSim::Object *) >(&OpenSim::LinearFunction::safeDownCast));

  DEBUG_MSG("Adding wrapper for void OpenSim::LinearFunction::assign(OpenSim::Object &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::LinearFunction::assign(OpenSim::Object &)
  // defined in /opt/opensim-core/OpenSim/Common/LinearFunction.h:47:1
  t118.method("assign", static_cast<void (OpenSim::LinearFunction::*)(OpenSim::Object &) >(&OpenSim::LinearFunction::assign));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::LinearFunction::getClassName() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::LinearFunction::getClassName()
  // defined in /opt/opensim-core/OpenSim/Common/LinearFunction.h:47:1
  t118.method("OpenSim!LinearFunction!getClassName", static_cast<const std::string & (*)() >(&OpenSim::LinearFunction::getClassName));

  DEBUG_MSG("Adding wrapper for OpenSim::LinearFunction * OpenSim::LinearFunction::clone() (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::LinearFunction * OpenSim::LinearFunction::clone()
  // defined in /opt/opensim-core/OpenSim/Common/LinearFunction.h:47:1
  t118.method("clone", static_cast<OpenSim::LinearFunction * (OpenSim::LinearFunction::*)()  const>(&OpenSim::LinearFunction::clone));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::LinearFunction::getConcreteClassName() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::LinearFunction::getConcreteClassName()
  // defined in /opt/opensim-core/OpenSim/Common/LinearFunction.h:47:1
  t118.method("getConcreteClassName", static_cast<const std::string & (OpenSim::LinearFunction::*)()  const>(&OpenSim::LinearFunction::getConcreteClassName));


  DEBUG_MSG("Adding wrapper for void OpenSim::LinearFunction::LinearFunction(double, double) (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/LinearFunction.h:65:5
  t118.constructor<double, double>(/*finalize=*/true);


  DEBUG_MSG("Adding wrapper for void OpenSim::LinearFunction::LinearFunction(const OpenSim::LinearFunction &) (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/LinearFunction.h:66:5
  t118.constructor<const OpenSim::LinearFunction &>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for OpenSim::LinearFunction & OpenSim::LinearFunction::operator=(const OpenSim::LinearFunction &) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::LinearFunction & OpenSim::LinearFunction::operator=(const OpenSim::LinearFunction &)
  // defined in /opt/opensim-core/OpenSim/Common/LinearFunction.h:80:21
  t118.method("assign", static_cast<OpenSim::LinearFunction & (OpenSim::LinearFunction::*)(const OpenSim::LinearFunction &) >(&OpenSim::LinearFunction::operator=));

  DEBUG_MSG("Adding wrapper for void OpenSim::LinearFunction::setSlope(double) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::LinearFunction::setSlope(double)
  // defined in /opt/opensim-core/OpenSim/Common/LinearFunction.h:90:10
  t118.method("setSlope", static_cast<void (OpenSim::LinearFunction::*)(double) >(&OpenSim::LinearFunction::setSlope));

  DEBUG_MSG("Adding wrapper for void OpenSim::LinearFunction::setIntercept(double) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::LinearFunction::setIntercept(double)
  // defined in /opt/opensim-core/OpenSim/Common/LinearFunction.h:92:10
  t118.method("setIntercept", static_cast<void (OpenSim::LinearFunction::*)(double) >(&OpenSim::LinearFunction::setIntercept));

  DEBUG_MSG("Adding wrapper for double OpenSim::LinearFunction::getSlope() (" __HERE__ ")");
  // signature to use in the veto list: double OpenSim::LinearFunction::getSlope()
  // defined in /opt/opensim-core/OpenSim/Common/LinearFunction.h:96:12
  t118.method("getSlope", static_cast<double (OpenSim::LinearFunction::*)()  const>(&OpenSim::LinearFunction::getSlope));

  DEBUG_MSG("Adding wrapper for double OpenSim::LinearFunction::getIntercept() (" __HERE__ ")");
  // signature to use in the veto list: double OpenSim::LinearFunction::getIntercept()
  // defined in /opt/opensim-core/OpenSim/Common/LinearFunction.h:98:12
  t118.method("getIntercept", static_cast<double (OpenSim::LinearFunction::*)()  const>(&OpenSim::LinearFunction::getIntercept));

  /* End of OpenSim::LinearFunction class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class OpenSim::StringLogSink
   */

  DEBUG_MSG("Adding wrapper for void OpenSim::StringLogSink::clear() (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::StringLogSink::clear()
  // defined in /opt/opensim-core/OpenSim/Common/LogSink.h:57:10
  t120.method("clear", static_cast<void (OpenSim::StringLogSink::*)() >(&OpenSim::StringLogSink::clear));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::StringLogSink::getString() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::StringLogSink::getString()
  // defined in /opt/opensim-core/OpenSim/Common/LogSink.h:61:24
  t120.method("getString", static_cast<const std::string & (OpenSim::StringLogSink::*)()  const>(&OpenSim::StringLogSink::getString));

  /* End of OpenSim::StringLogSink class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class OpenSim::Units
   */


  DEBUG_MSG("Adding wrapper for void OpenSim::Units::Units(const std::string) (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Units.h:72:5
  t121.constructor<const std::string>(/*finalize=*/true);


  DEBUG_MSG("Adding wrapper for void OpenSim::Units::Units(OpenSim::Units::UnitType) (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Units.h:73:5
  t121.constructor<OpenSim::Units::UnitType>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for double OpenSim::Units::convertTo(OpenSim::Units::UnitType, double) (" __HERE__ ")");
  // signature to use in the veto list: double OpenSim::Units::convertTo(OpenSim::Units::UnitType, double)
  // defined in /opt/opensim-core/OpenSim/Common/Units.h:75:12
  t121.method("convertTo", static_cast<double (OpenSim::Units::*)(OpenSim::Units::UnitType, double)  const>(&OpenSim::Units::convertTo));

  DEBUG_MSG("Adding wrapper for double OpenSim::Units::convertTo(OpenSim::Units::UnitType) (" __HERE__ ")");
  // signature to use in the veto list: double OpenSim::Units::convertTo(OpenSim::Units::UnitType)
  // defined in /opt/opensim-core/OpenSim/Common/Units.h:76:12
  t121.method("convertTo", static_cast<double (OpenSim::Units::*)(OpenSim::Units::UnitType)  const>(&OpenSim::Units::convertTo));

  DEBUG_MSG("Adding wrapper for double OpenSim::Units::convertTo(const OpenSim::Units &) (" __HERE__ ")");
  // signature to use in the veto list: double OpenSim::Units::convertTo(const OpenSim::Units &)
  // defined in /opt/opensim-core/OpenSim/Common/Units.h:77:12
  t121.method("convertTo", static_cast<double (OpenSim::Units::*)(const OpenSim::Units &)  const>(&OpenSim::Units::convertTo));

  DEBUG_MSG("Adding wrapper for OpenSim::Units::UnitType OpenSim::Units::getType() (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::Units::UnitType OpenSim::Units::getType()
  // defined in /opt/opensim-core/OpenSim/Common/Units.h:78:14
  t121.method("getType", static_cast<OpenSim::Units::UnitType (OpenSim::Units::*)()  const>(&OpenSim::Units::getType));

  DEBUG_MSG("Adding wrapper for std::string OpenSim::Units::getLabel() (" __HERE__ ")");
  // signature to use in the veto list: std::string OpenSim::Units::getLabel()
  // defined in /opt/opensim-core/OpenSim/Common/Units.h:79:17
  t121.method("getLabel", static_cast<std::string (OpenSim::Units::*)()  const>(&OpenSim::Units::getLabel));

  DEBUG_MSG("Adding wrapper for std::string OpenSim::Units::getAbbreviation() (" __HERE__ ")");
  // signature to use in the veto list: std::string OpenSim::Units::getAbbreviation()
  // defined in /opt/opensim-core/OpenSim/Common/Units.h:80:17
  t121.method("getAbbreviation", static_cast<std::string (OpenSim::Units::*)()  const>(&OpenSim::Units::getAbbreviation));

  /* End of OpenSim::Units class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class OpenSim::MarkerData
   */

  DEBUG_MSG("Adding wrapper for OpenSim::MarkerData * OpenSim::MarkerData::safeDownCast(OpenSim::Object *) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::MarkerData * OpenSim::MarkerData::safeDownCast(OpenSim::Object *)
  // defined in /opt/opensim-core/OpenSim/Common/MarkerData.h:49:1
  t123.method("OpenSim!MarkerData!safeDownCast", static_cast<OpenSim::MarkerData * (*)(OpenSim::Object *) >(&OpenSim::MarkerData::safeDownCast));

  DEBUG_MSG("Adding wrapper for void OpenSim::MarkerData::assign(OpenSim::Object &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::MarkerData::assign(OpenSim::Object &)
  // defined in /opt/opensim-core/OpenSim/Common/MarkerData.h:49:1
  t123.method("assign", static_cast<void (OpenSim::MarkerData::*)(OpenSim::Object &) >(&OpenSim::MarkerData::assign));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::MarkerData::getClassName() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::MarkerData::getClassName()
  // defined in /opt/opensim-core/OpenSim/Common/MarkerData.h:49:1
  t123.method("OpenSim!MarkerData!getClassName", static_cast<const std::string & (*)() >(&OpenSim::MarkerData::getClassName));

  DEBUG_MSG("Adding wrapper for OpenSim::MarkerData * OpenSim::MarkerData::clone() (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::MarkerData * OpenSim::MarkerData::clone()
  // defined in /opt/opensim-core/OpenSim/Common/MarkerData.h:49:1
  t123.method("clone", static_cast<OpenSim::MarkerData * (OpenSim::MarkerData::*)()  const>(&OpenSim::MarkerData::clone));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::MarkerData::getConcreteClassName() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::MarkerData::getConcreteClassName()
  // defined in /opt/opensim-core/OpenSim/Common/MarkerData.h:49:1
  t123.method("getConcreteClassName", static_cast<const std::string & (OpenSim::MarkerData::*)()  const>(&OpenSim::MarkerData::getConcreteClassName));


  DEBUG_MSG("Adding wrapper for void OpenSim::MarkerData::MarkerData(const std::string &) (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/MarkerData.h:76:14
  t123.constructor<const std::string &>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for void OpenSim::MarkerData::findFrameRange(double, double, int &, int &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::MarkerData::findFrameRange(double, double, int &, int &)
  // defined in /opt/opensim-core/OpenSim/Common/MarkerData.h:79:10
  t123.method("findFrameRange", static_cast<void (OpenSim::MarkerData::*)(double, double, int &, int &)  const>(&OpenSim::MarkerData::findFrameRange));

  DEBUG_MSG("Adding wrapper for void OpenSim::MarkerData::averageFrames(double, double, double) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::MarkerData::averageFrames(double, double, double)
  // defined in /opt/opensim-core/OpenSim/Common/MarkerData.h:80:10
  t123.method("averageFrames", static_cast<void (OpenSim::MarkerData::*)(double, double, double) >(&OpenSim::MarkerData::averageFrames));
  t123.method("averageFrames", [](OpenSim::MarkerData& a)->void{ a.averageFrames(); });
  t123.method("averageFrames", [](OpenSim::MarkerData& a, double arg0)->void{ a.averageFrames(arg0); });
  t123.method("averageFrames", [](OpenSim::MarkerData& a, double arg0, double arg1)->void{ a.averageFrames(arg0, arg1); });
  t123.method("averageFrames", [](OpenSim::MarkerData* a)->void{ a->averageFrames(); });
  t123.method("averageFrames", [](OpenSim::MarkerData* a, double arg0)->void{ a->averageFrames(arg0); });
  t123.method("averageFrames", [](OpenSim::MarkerData* a, double arg0, double arg1)->void{ a->averageFrames(arg0, arg1); });

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::MarkerData::getFileName() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::MarkerData::getFileName()
  // defined in /opt/opensim-core/OpenSim/Common/MarkerData.h:81:24
  t123.method("getFileName", static_cast<const std::string & (OpenSim::MarkerData::*)()  const>(&OpenSim::MarkerData::getFileName));

  DEBUG_MSG("Adding wrapper for void OpenSim::MarkerData::makeRdStorage(OpenSim::Storage &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::MarkerData::makeRdStorage(OpenSim::Storage &)
  // defined in /opt/opensim-core/OpenSim/Common/MarkerData.h:82:10
  t123.method("makeRdStorage", static_cast<void (OpenSim::MarkerData::*)(OpenSim::Storage &) >(&OpenSim::MarkerData::makeRdStorage));

  DEBUG_MSG("Adding wrapper for const OpenSim::MarkerFrame & OpenSim::MarkerData::getFrame(int) (" __HERE__ ")");
  // signature to use in the veto list: const OpenSim::MarkerFrame & OpenSim::MarkerData::getFrame(int)
  // defined in /opt/opensim-core/OpenSim/Common/MarkerData.h:83:24
  t123.method("getFrame", static_cast<const OpenSim::MarkerFrame & (OpenSim::MarkerData::*)(int)  const>(&OpenSim::MarkerData::getFrame));

  DEBUG_MSG("Adding wrapper for int OpenSim::MarkerData::getMarkerIndex(const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::MarkerData::getMarkerIndex(const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/MarkerData.h:84:9
  t123.method("getMarkerIndex", static_cast<int (OpenSim::MarkerData::*)(const std::string &)  const>(&OpenSim::MarkerData::getMarkerIndex));

  DEBUG_MSG("Adding wrapper for const OpenSim::Units & OpenSim::MarkerData::getUnits() (" __HERE__ ")");
  // signature to use in the veto list: const OpenSim::Units & OpenSim::MarkerData::getUnits()
  // defined in /opt/opensim-core/OpenSim/Common/MarkerData.h:85:18
  t123.method("getUnits", static_cast<const OpenSim::Units & (OpenSim::MarkerData::*)()  const>(&OpenSim::MarkerData::getUnits));

  DEBUG_MSG("Adding wrapper for void OpenSim::MarkerData::convertToUnits(const OpenSim::Units &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::MarkerData::convertToUnits(const OpenSim::Units &)
  // defined in /opt/opensim-core/OpenSim/Common/MarkerData.h:86:10
  t123.method("convertToUnits", static_cast<void (OpenSim::MarkerData::*)(const OpenSim::Units &) >(&OpenSim::MarkerData::convertToUnits));

  DEBUG_MSG("Adding wrapper for int OpenSim::MarkerData::getNumMarkers() (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::MarkerData::getNumMarkers()
  // defined in /opt/opensim-core/OpenSim/Common/MarkerData.h:88:9
  t123.method("getNumMarkers", static_cast<int (OpenSim::MarkerData::*)()  const>(&OpenSim::MarkerData::getNumMarkers));

  DEBUG_MSG("Adding wrapper for int OpenSim::MarkerData::getNumFrames() (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::MarkerData::getNumFrames()
  // defined in /opt/opensim-core/OpenSim/Common/MarkerData.h:89:9
  t123.method("getNumFrames", static_cast<int (OpenSim::MarkerData::*)()  const>(&OpenSim::MarkerData::getNumFrames));

  DEBUG_MSG("Adding wrapper for double OpenSim::MarkerData::getStartFrameTime() (" __HERE__ ")");
  // signature to use in the veto list: double OpenSim::MarkerData::getStartFrameTime()
  // defined in /opt/opensim-core/OpenSim/Common/MarkerData.h:90:12
  t123.method("getStartFrameTime", static_cast<double (OpenSim::MarkerData::*)()  const>(&OpenSim::MarkerData::getStartFrameTime));

  DEBUG_MSG("Adding wrapper for double OpenSim::MarkerData::getLastFrameTime() (" __HERE__ ")");
  // signature to use in the veto list: double OpenSim::MarkerData::getLastFrameTime()
  // defined in /opt/opensim-core/OpenSim/Common/MarkerData.h:91:12
  t123.method("getLastFrameTime", static_cast<double (OpenSim::MarkerData::*)()  const>(&OpenSim::MarkerData::getLastFrameTime));

  DEBUG_MSG("Adding wrapper for double OpenSim::MarkerData::getDataRate() (" __HERE__ ")");
  // signature to use in the veto list: double OpenSim::MarkerData::getDataRate()
  // defined in /opt/opensim-core/OpenSim/Common/MarkerData.h:92:12
  t123.method("getDataRate", static_cast<double (OpenSim::MarkerData::*)()  const>(&OpenSim::MarkerData::getDataRate));

  DEBUG_MSG("Adding wrapper for double OpenSim::MarkerData::getCameraRate() (" __HERE__ ")");
  // signature to use in the veto list: double OpenSim::MarkerData::getCameraRate()
  // defined in /opt/opensim-core/OpenSim/Common/MarkerData.h:93:12
  t123.method("getCameraRate", static_cast<double (OpenSim::MarkerData::*)()  const>(&OpenSim::MarkerData::getCameraRate));

  /* End of OpenSim::MarkerData class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class OpenSim::MultiplierFunction
   */

  DEBUG_MSG("Adding wrapper for OpenSim::MultiplierFunction * OpenSim::MultiplierFunction::safeDownCast(OpenSim::Object *) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::MultiplierFunction * OpenSim::MultiplierFunction::safeDownCast(OpenSim::Object *)
  // defined in /opt/opensim-core/OpenSim/Common/MultiplierFunction.h:48:1
  t125.method("OpenSim!MultiplierFunction!safeDownCast", static_cast<OpenSim::MultiplierFunction * (*)(OpenSim::Object *) >(&OpenSim::MultiplierFunction::safeDownCast));

  DEBUG_MSG("Adding wrapper for void OpenSim::MultiplierFunction::assign(OpenSim::Object &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::MultiplierFunction::assign(OpenSim::Object &)
  // defined in /opt/opensim-core/OpenSim/Common/MultiplierFunction.h:48:1
  t125.method("assign", static_cast<void (OpenSim::MultiplierFunction::*)(OpenSim::Object &) >(&OpenSim::MultiplierFunction::assign));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::MultiplierFunction::getClassName() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::MultiplierFunction::getClassName()
  // defined in /opt/opensim-core/OpenSim/Common/MultiplierFunction.h:48:1
  t125.method("OpenSim!MultiplierFunction!getClassName", static_cast<const std::string & (*)() >(&OpenSim::MultiplierFunction::getClassName));

  DEBUG_MSG("Adding wrapper for OpenSim::MultiplierFunction * OpenSim::MultiplierFunction::clone() (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::MultiplierFunction * OpenSim::MultiplierFunction::clone()
  // defined in /opt/opensim-core/OpenSim/Common/MultiplierFunction.h:48:1
  t125.method("clone", static_cast<OpenSim::MultiplierFunction * (OpenSim::MultiplierFunction::*)()  const>(&OpenSim::MultiplierFunction::clone));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::MultiplierFunction::getConcreteClassName() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::MultiplierFunction::getConcreteClassName()
  // defined in /opt/opensim-core/OpenSim/Common/MultiplierFunction.h:48:1
  t125.method("getConcreteClassName", static_cast<const std::string & (OpenSim::MultiplierFunction::*)()  const>(&OpenSim::MultiplierFunction::getConcreteClassName));


  DEBUG_MSG("Adding wrapper for void OpenSim::MultiplierFunction::MultiplierFunction(OpenSim::Function *) (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/MultiplierFunction.h:71:5
  t125.constructor<OpenSim::Function *>(/*finalize=*/true);


  DEBUG_MSG("Adding wrapper for void OpenSim::MultiplierFunction::MultiplierFunction(OpenSim::Function *, double) (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/MultiplierFunction.h:72:5
  t125.constructor<OpenSim::Function *, double>(/*finalize=*/true);


  DEBUG_MSG("Adding wrapper for void OpenSim::MultiplierFunction::MultiplierFunction(const OpenSim::MultiplierFunction &) (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/MultiplierFunction.h:73:5
  t125.constructor<const OpenSim::MultiplierFunction &>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for void OpenSim::MultiplierFunction::init(OpenSim::Function *) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::MultiplierFunction::init(OpenSim::Function *)
  // defined in /opt/opensim-core/OpenSim/Common/MultiplierFunction.h:76:10
  t125.method("init", static_cast<void (OpenSim::MultiplierFunction::*)(OpenSim::Function *) >(&OpenSim::MultiplierFunction::init));

  DEBUG_MSG("Adding wrapper for OpenSim::MultiplierFunction & OpenSim::MultiplierFunction::operator=(const OpenSim::MultiplierFunction &) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::MultiplierFunction & OpenSim::MultiplierFunction::operator=(const OpenSim::MultiplierFunction &)
  // defined in /opt/opensim-core/OpenSim/Common/MultiplierFunction.h:88:25
  t125.method("assign", static_cast<OpenSim::MultiplierFunction & (OpenSim::MultiplierFunction::*)(const OpenSim::MultiplierFunction &) >(&OpenSim::MultiplierFunction::operator=));

  DEBUG_MSG("Adding wrapper for void OpenSim::MultiplierFunction::setFunction(OpenSim::Function *) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::MultiplierFunction::setFunction(OpenSim::Function *)
  // defined in /opt/opensim-core/OpenSim/Common/MultiplierFunction.h:95:10
  t125.method("setFunction", static_cast<void (OpenSim::MultiplierFunction::*)(OpenSim::Function *) >(&OpenSim::MultiplierFunction::setFunction));

  DEBUG_MSG("Adding wrapper for void OpenSim::MultiplierFunction::setScale(double) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::MultiplierFunction::setScale(double)
  // defined in /opt/opensim-core/OpenSim/Common/MultiplierFunction.h:96:10
  t125.method("setScale", static_cast<void (OpenSim::MultiplierFunction::*)(double) >(&OpenSim::MultiplierFunction::setScale));

  DEBUG_MSG("Adding wrapper for OpenSim::Function * OpenSim::MultiplierFunction::getFunction() (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::Function * OpenSim::MultiplierFunction::getFunction()
  // defined in /opt/opensim-core/OpenSim/Common/MultiplierFunction.h:97:15
  t125.method("getFunction", static_cast<OpenSim::Function * (OpenSim::MultiplierFunction::*)()  const>(&OpenSim::MultiplierFunction::getFunction));

  DEBUG_MSG("Adding wrapper for double OpenSim::MultiplierFunction::getScale() (" __HERE__ ")");
  // signature to use in the veto list: double OpenSim::MultiplierFunction::getScale()
  // defined in /opt/opensim-core/OpenSim/Common/MultiplierFunction.h:98:12
  t125.method("getScale", static_cast<double (OpenSim::MultiplierFunction::*)()  const>(&OpenSim::MultiplierFunction::getScale));

  DEBUG_MSG("Adding wrapper for int OpenSim::MultiplierFunction::getArgumentSize() (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::MultiplierFunction::getArgumentSize()
  // defined in /opt/opensim-core/OpenSim/Common/MultiplierFunction.h:105:9
  t125.method("getArgumentSize", static_cast<int (OpenSim::MultiplierFunction::*)()  const>(&OpenSim::MultiplierFunction::getArgumentSize));

  DEBUG_MSG("Adding wrapper for int OpenSim::MultiplierFunction::getMaxDerivativeOrder() (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::MultiplierFunction::getMaxDerivativeOrder()
  // defined in /opt/opensim-core/OpenSim/Common/MultiplierFunction.h:106:9
  t125.method("getMaxDerivativeOrder", static_cast<int (OpenSim::MultiplierFunction::*)()  const>(&OpenSim::MultiplierFunction::getMaxDerivativeOrder));

  /* End of OpenSim::MultiplierFunction class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class OpenSim::MultivariatePolynomialFunction
   */

  DEBUG_MSG("Adding wrapper for OpenSim::MultivariatePolynomialFunction * OpenSim::MultivariatePolynomialFunction::safeDownCast(OpenSim::Object *) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::MultivariatePolynomialFunction * OpenSim::MultivariatePolynomialFunction::safeDownCast(OpenSim::Object *)
  // defined in /opt/opensim-core/OpenSim/Common/MultivariatePolynomialFunction.h:62:5
  t126.method("OpenSim!MultivariatePolynomialFunction!safeDownCast", static_cast<OpenSim::MultivariatePolynomialFunction * (*)(OpenSim::Object *) >(&OpenSim::MultivariatePolynomialFunction::safeDownCast));

  DEBUG_MSG("Adding wrapper for void OpenSim::MultivariatePolynomialFunction::assign(OpenSim::Object &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::MultivariatePolynomialFunction::assign(OpenSim::Object &)
  // defined in /opt/opensim-core/OpenSim/Common/MultivariatePolynomialFunction.h:62:5
  t126.method("assign", static_cast<void (OpenSim::MultivariatePolynomialFunction::*)(OpenSim::Object &) >(&OpenSim::MultivariatePolynomialFunction::assign));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::MultivariatePolynomialFunction::getClassName() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::MultivariatePolynomialFunction::getClassName()
  // defined in /opt/opensim-core/OpenSim/Common/MultivariatePolynomialFunction.h:62:5
  t126.method("OpenSim!MultivariatePolynomialFunction!getClassName", static_cast<const std::string & (*)() >(&OpenSim::MultivariatePolynomialFunction::getClassName));

  DEBUG_MSG("Adding wrapper for OpenSim::MultivariatePolynomialFunction * OpenSim::MultivariatePolynomialFunction::clone() (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::MultivariatePolynomialFunction * OpenSim::MultivariatePolynomialFunction::clone()
  // defined in /opt/opensim-core/OpenSim/Common/MultivariatePolynomialFunction.h:62:5
  t126.method("clone", static_cast<OpenSim::MultivariatePolynomialFunction * (OpenSim::MultivariatePolynomialFunction::*)()  const>(&OpenSim::MultivariatePolynomialFunction::clone));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::MultivariatePolynomialFunction::getConcreteClassName() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::MultivariatePolynomialFunction::getConcreteClassName()
  // defined in /opt/opensim-core/OpenSim/Common/MultivariatePolynomialFunction.h:62:5
  t126.method("getConcreteClassName", static_cast<const std::string & (OpenSim::MultivariatePolynomialFunction::*)()  const>(&OpenSim::MultivariatePolynomialFunction::getConcreteClassName));

  DEBUG_MSG("Adding wrapper for void OpenSim::MultivariatePolynomialFunction::copyProperty_coefficients(const OpenSim::MultivariatePolynomialFunction::Self &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::MultivariatePolynomialFunction::copyProperty_coefficients(const OpenSim::MultivariatePolynomialFunction::Self &)
  // defined in /opt/opensim-core/OpenSim/Common/MultivariatePolynomialFunction.h:65:5
  t126.method("copyProperty_coefficients", static_cast<void (OpenSim::MultivariatePolynomialFunction::*)(const OpenSim::MultivariatePolynomialFunction::Self &) >(&OpenSim::MultivariatePolynomialFunction::copyProperty_coefficients));

  DEBUG_MSG("Adding wrapper for void OpenSim::MultivariatePolynomialFunction::copyProperty_dimension(const OpenSim::MultivariatePolynomialFunction::Self &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::MultivariatePolynomialFunction::copyProperty_dimension(const OpenSim::MultivariatePolynomialFunction::Self &)
  // defined in /opt/opensim-core/OpenSim/Common/MultivariatePolynomialFunction.h:68:5
  t126.method("copyProperty_dimension", static_cast<void (OpenSim::MultivariatePolynomialFunction::*)(const OpenSim::MultivariatePolynomialFunction::Self &) >(&OpenSim::MultivariatePolynomialFunction::copyProperty_dimension));

  DEBUG_MSG("Adding wrapper for const int & OpenSim::MultivariatePolynomialFunction::get_dimension(int) (" __HERE__ ")");
  // signature to use in the veto list: const int & OpenSim::MultivariatePolynomialFunction::get_dimension(int)
  // defined in /opt/opensim-core/OpenSim/Common/MultivariatePolynomialFunction.h:68:5
  t126.method("get_dimension", static_cast<const int & (OpenSim::MultivariatePolynomialFunction::*)(int)  const>(&OpenSim::MultivariatePolynomialFunction::get_dimension));

  DEBUG_MSG("Adding wrapper for int & OpenSim::MultivariatePolynomialFunction::upd_dimension(int) (" __HERE__ ")");
  // signature to use in the veto list: int & OpenSim::MultivariatePolynomialFunction::upd_dimension(int)
  // defined in /opt/opensim-core/OpenSim/Common/MultivariatePolynomialFunction.h:68:5
  t126.method("upd_dimension", static_cast<int & (OpenSim::MultivariatePolynomialFunction::*)(int) >(&OpenSim::MultivariatePolynomialFunction::upd_dimension));

  DEBUG_MSG("Adding wrapper for void OpenSim::MultivariatePolynomialFunction::set_dimension(int, const int &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::MultivariatePolynomialFunction::set_dimension(int, const int &)
  // defined in /opt/opensim-core/OpenSim/Common/MultivariatePolynomialFunction.h:68:5
  t126.method("set_dimension", static_cast<void (OpenSim::MultivariatePolynomialFunction::*)(int, const int &) >(&OpenSim::MultivariatePolynomialFunction::set_dimension));

  DEBUG_MSG("Adding wrapper for int OpenSim::MultivariatePolynomialFunction::append_dimension(const int &) (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::MultivariatePolynomialFunction::append_dimension(const int &)
  // defined in /opt/opensim-core/OpenSim/Common/MultivariatePolynomialFunction.h:68:5
  t126.method("append_dimension", static_cast<int (OpenSim::MultivariatePolynomialFunction::*)(const int &) >(&OpenSim::MultivariatePolynomialFunction::append_dimension));

  DEBUG_MSG("Adding wrapper for void OpenSim::MultivariatePolynomialFunction::constructProperty_dimension(const int &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::MultivariatePolynomialFunction::constructProperty_dimension(const int &)
  // defined in /opt/opensim-core/OpenSim/Common/MultivariatePolynomialFunction.h:68:5
  t126.method("constructProperty_dimension", static_cast<void (OpenSim::MultivariatePolynomialFunction::*)(const int &) >(&OpenSim::MultivariatePolynomialFunction::constructProperty_dimension));

  DEBUG_MSG("Adding wrapper for const int & OpenSim::MultivariatePolynomialFunction::get_dimension() (" __HERE__ ")");
  // signature to use in the veto list: const int & OpenSim::MultivariatePolynomialFunction::get_dimension()
  // defined in /opt/opensim-core/OpenSim/Common/MultivariatePolynomialFunction.h:68:5
  t126.method("get_dimension", static_cast<const int & (OpenSim::MultivariatePolynomialFunction::*)()  const>(&OpenSim::MultivariatePolynomialFunction::get_dimension));

  DEBUG_MSG("Adding wrapper for int & OpenSim::MultivariatePolynomialFunction::upd_dimension() (" __HERE__ ")");
  // signature to use in the veto list: int & OpenSim::MultivariatePolynomialFunction::upd_dimension()
  // defined in /opt/opensim-core/OpenSim/Common/MultivariatePolynomialFunction.h:68:5
  t126.method("upd_dimension", static_cast<int & (OpenSim::MultivariatePolynomialFunction::*)() >(&OpenSim::MultivariatePolynomialFunction::upd_dimension));

  DEBUG_MSG("Adding wrapper for void OpenSim::MultivariatePolynomialFunction::set_dimension(const int &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::MultivariatePolynomialFunction::set_dimension(const int &)
  // defined in /opt/opensim-core/OpenSim/Common/MultivariatePolynomialFunction.h:68:5
  t126.method("set_dimension", static_cast<void (OpenSim::MultivariatePolynomialFunction::*)(const int &) >(&OpenSim::MultivariatePolynomialFunction::set_dimension));

  DEBUG_MSG("Adding wrapper for void OpenSim::MultivariatePolynomialFunction::copyProperty_order(const OpenSim::MultivariatePolynomialFunction::Self &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::MultivariatePolynomialFunction::copyProperty_order(const OpenSim::MultivariatePolynomialFunction::Self &)
  // defined in /opt/opensim-core/OpenSim/Common/MultivariatePolynomialFunction.h:70:5
  t126.method("copyProperty_order", static_cast<void (OpenSim::MultivariatePolynomialFunction::*)(const OpenSim::MultivariatePolynomialFunction::Self &) >(&OpenSim::MultivariatePolynomialFunction::copyProperty_order));

  DEBUG_MSG("Adding wrapper for const int & OpenSim::MultivariatePolynomialFunction::get_order(int) (" __HERE__ ")");
  // signature to use in the veto list: const int & OpenSim::MultivariatePolynomialFunction::get_order(int)
  // defined in /opt/opensim-core/OpenSim/Common/MultivariatePolynomialFunction.h:70:5
  t126.method("get_order", static_cast<const int & (OpenSim::MultivariatePolynomialFunction::*)(int)  const>(&OpenSim::MultivariatePolynomialFunction::get_order));

  DEBUG_MSG("Adding wrapper for int & OpenSim::MultivariatePolynomialFunction::upd_order(int) (" __HERE__ ")");
  // signature to use in the veto list: int & OpenSim::MultivariatePolynomialFunction::upd_order(int)
  // defined in /opt/opensim-core/OpenSim/Common/MultivariatePolynomialFunction.h:70:5
  t126.method("upd_order", static_cast<int & (OpenSim::MultivariatePolynomialFunction::*)(int) >(&OpenSim::MultivariatePolynomialFunction::upd_order));

  DEBUG_MSG("Adding wrapper for void OpenSim::MultivariatePolynomialFunction::set_order(int, const int &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::MultivariatePolynomialFunction::set_order(int, const int &)
  // defined in /opt/opensim-core/OpenSim/Common/MultivariatePolynomialFunction.h:70:5
  t126.method("set_order", static_cast<void (OpenSim::MultivariatePolynomialFunction::*)(int, const int &) >(&OpenSim::MultivariatePolynomialFunction::set_order));

  DEBUG_MSG("Adding wrapper for int OpenSim::MultivariatePolynomialFunction::append_order(const int &) (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::MultivariatePolynomialFunction::append_order(const int &)
  // defined in /opt/opensim-core/OpenSim/Common/MultivariatePolynomialFunction.h:70:5
  t126.method("append_order", static_cast<int (OpenSim::MultivariatePolynomialFunction::*)(const int &) >(&OpenSim::MultivariatePolynomialFunction::append_order));

  DEBUG_MSG("Adding wrapper for void OpenSim::MultivariatePolynomialFunction::constructProperty_order(const int &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::MultivariatePolynomialFunction::constructProperty_order(const int &)
  // defined in /opt/opensim-core/OpenSim/Common/MultivariatePolynomialFunction.h:70:5
  t126.method("constructProperty_order", static_cast<void (OpenSim::MultivariatePolynomialFunction::*)(const int &) >(&OpenSim::MultivariatePolynomialFunction::constructProperty_order));

  DEBUG_MSG("Adding wrapper for const int & OpenSim::MultivariatePolynomialFunction::get_order() (" __HERE__ ")");
  // signature to use in the veto list: const int & OpenSim::MultivariatePolynomialFunction::get_order()
  // defined in /opt/opensim-core/OpenSim/Common/MultivariatePolynomialFunction.h:70:5
  t126.method("get_order", static_cast<const int & (OpenSim::MultivariatePolynomialFunction::*)()  const>(&OpenSim::MultivariatePolynomialFunction::get_order));

  DEBUG_MSG("Adding wrapper for int & OpenSim::MultivariatePolynomialFunction::upd_order() (" __HERE__ ")");
  // signature to use in the veto list: int & OpenSim::MultivariatePolynomialFunction::upd_order()
  // defined in /opt/opensim-core/OpenSim/Common/MultivariatePolynomialFunction.h:70:5
  t126.method("upd_order", static_cast<int & (OpenSim::MultivariatePolynomialFunction::*)() >(&OpenSim::MultivariatePolynomialFunction::upd_order));

  DEBUG_MSG("Adding wrapper for void OpenSim::MultivariatePolynomialFunction::set_order(const int &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::MultivariatePolynomialFunction::set_order(const int &)
  // defined in /opt/opensim-core/OpenSim/Common/MultivariatePolynomialFunction.h:70:5
  t126.method("set_order", static_cast<void (OpenSim::MultivariatePolynomialFunction::*)(const int &) >(&OpenSim::MultivariatePolynomialFunction::set_order));

  DEBUG_MSG("Adding wrapper for void OpenSim::MultivariatePolynomialFunction::setDimension(int) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::MultivariatePolynomialFunction::setDimension(int)
  // defined in /opt/opensim-core/OpenSim/Common/MultivariatePolynomialFunction.h:90:10
  t126.method("setDimension", static_cast<void (OpenSim::MultivariatePolynomialFunction::*)(int) >(&OpenSim::MultivariatePolynomialFunction::setDimension));

  DEBUG_MSG("Adding wrapper for int OpenSim::MultivariatePolynomialFunction::getDimension() (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::MultivariatePolynomialFunction::getDimension()
  // defined in /opt/opensim-core/OpenSim/Common/MultivariatePolynomialFunction.h:92:9
  t126.method("getDimension", static_cast<int (OpenSim::MultivariatePolynomialFunction::*)()  const>(&OpenSim::MultivariatePolynomialFunction::getDimension));

  DEBUG_MSG("Adding wrapper for void OpenSim::MultivariatePolynomialFunction::setOrder(int) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::MultivariatePolynomialFunction::setOrder(int)
  // defined in /opt/opensim-core/OpenSim/Common/MultivariatePolynomialFunction.h:94:10
  t126.method("setOrder", static_cast<void (OpenSim::MultivariatePolynomialFunction::*)(int) >(&OpenSim::MultivariatePolynomialFunction::setOrder));

  DEBUG_MSG("Adding wrapper for int OpenSim::MultivariatePolynomialFunction::getOrder() (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::MultivariatePolynomialFunction::getOrder()
  // defined in /opt/opensim-core/OpenSim/Common/MultivariatePolynomialFunction.h:96:9
  t126.method("getOrder", static_cast<int (OpenSim::MultivariatePolynomialFunction::*)()  const>(&OpenSim::MultivariatePolynomialFunction::getOrder));

  DEBUG_MSG("Adding PropertyIndex_coefficients methods  to provide read access to the field PropertyIndex_coefficients (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/MultivariatePolynomialFunction.h:65:5
  // signature to use in the veto list: OpenSim::MultivariatePolynomialFunction::PropertyIndex_coefficients
  t126.method("PropertyIndex_coefficients", [](const OpenSim::MultivariatePolynomialFunction& a) -> const OpenSim::PropertyIndex& { return a.PropertyIndex_coefficients; });
  t126.method("PropertyIndex_coefficients", [](OpenSim::MultivariatePolynomialFunction& a) -> OpenSim::PropertyIndex& { return a.PropertyIndex_coefficients; });
  t126.method("PropertyIndex_coefficients", [](const OpenSim::MultivariatePolynomialFunction* a) -> const OpenSim::PropertyIndex& { return a->PropertyIndex_coefficients; });
  t126.method("PropertyIndex_coefficients", [](OpenSim::MultivariatePolynomialFunction* a) -> OpenSim::PropertyIndex& { return a->PropertyIndex_coefficients; });
  // defined in /opt/opensim-core/OpenSim/Common/MultivariatePolynomialFunction.h:65:5
  // signature to use in the veto list: OpenSim::MultivariatePolynomialFunction::PropertyIndex_coefficients
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding PropertyIndex_coefficients! methods to provide write access to the field PropertyIndex_coefficients (" __HERE__ ")");
  t126.method("PropertyIndex_coefficients!", [](OpenSim::MultivariatePolynomialFunction& a, const OpenSim::PropertyIndex& val) -> OpenSim::PropertyIndex& { return a.PropertyIndex_coefficients = val; });

  DEBUG_MSG("Adding PropertyIndex_coefficients! methods to provide write access to the field PropertyIndex_coefficients (" __HERE__ ")");
  t126.method("PropertyIndex_coefficients!", [](OpenSim::MultivariatePolynomialFunction* a, const OpenSim::PropertyIndex& val) -> OpenSim::PropertyIndex& { return a->PropertyIndex_coefficients = val; });

  DEBUG_MSG("Adding PropertyIndex_dimension methods  to provide read access to the field PropertyIndex_dimension (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/MultivariatePolynomialFunction.h:68:5
  // signature to use in the veto list: OpenSim::MultivariatePolynomialFunction::PropertyIndex_dimension
  t126.method("PropertyIndex_dimension", [](const OpenSim::MultivariatePolynomialFunction& a) -> const OpenSim::PropertyIndex& { return a.PropertyIndex_dimension; });
  t126.method("PropertyIndex_dimension", [](OpenSim::MultivariatePolynomialFunction& a) -> OpenSim::PropertyIndex& { return a.PropertyIndex_dimension; });
  t126.method("PropertyIndex_dimension", [](const OpenSim::MultivariatePolynomialFunction* a) -> const OpenSim::PropertyIndex& { return a->PropertyIndex_dimension; });
  t126.method("PropertyIndex_dimension", [](OpenSim::MultivariatePolynomialFunction* a) -> OpenSim::PropertyIndex& { return a->PropertyIndex_dimension; });
  // defined in /opt/opensim-core/OpenSim/Common/MultivariatePolynomialFunction.h:68:5
  // signature to use in the veto list: OpenSim::MultivariatePolynomialFunction::PropertyIndex_dimension
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding PropertyIndex_dimension! methods to provide write access to the field PropertyIndex_dimension (" __HERE__ ")");
  t126.method("PropertyIndex_dimension!", [](OpenSim::MultivariatePolynomialFunction& a, const OpenSim::PropertyIndex& val) -> OpenSim::PropertyIndex& { return a.PropertyIndex_dimension = val; });

  DEBUG_MSG("Adding PropertyIndex_dimension! methods to provide write access to the field PropertyIndex_dimension (" __HERE__ ")");
  t126.method("PropertyIndex_dimension!", [](OpenSim::MultivariatePolynomialFunction* a, const OpenSim::PropertyIndex& val) -> OpenSim::PropertyIndex& { return a->PropertyIndex_dimension = val; });

  DEBUG_MSG("Adding PropertyIndex_order methods  to provide read access to the field PropertyIndex_order (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/MultivariatePolynomialFunction.h:70:5
  // signature to use in the veto list: OpenSim::MultivariatePolynomialFunction::PropertyIndex_order
  t126.method("PropertyIndex_order", [](const OpenSim::MultivariatePolynomialFunction& a) -> const OpenSim::PropertyIndex& { return a.PropertyIndex_order; });
  t126.method("PropertyIndex_order", [](OpenSim::MultivariatePolynomialFunction& a) -> OpenSim::PropertyIndex& { return a.PropertyIndex_order; });
  t126.method("PropertyIndex_order", [](const OpenSim::MultivariatePolynomialFunction* a) -> const OpenSim::PropertyIndex& { return a->PropertyIndex_order; });
  t126.method("PropertyIndex_order", [](OpenSim::MultivariatePolynomialFunction* a) -> OpenSim::PropertyIndex& { return a->PropertyIndex_order; });
  // defined in /opt/opensim-core/OpenSim/Common/MultivariatePolynomialFunction.h:70:5
  // signature to use in the veto list: OpenSim::MultivariatePolynomialFunction::PropertyIndex_order
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding PropertyIndex_order! methods to provide write access to the field PropertyIndex_order (" __HERE__ ")");
  t126.method("PropertyIndex_order!", [](OpenSim::MultivariatePolynomialFunction& a, const OpenSim::PropertyIndex& val) -> OpenSim::PropertyIndex& { return a.PropertyIndex_order = val; });

  DEBUG_MSG("Adding PropertyIndex_order! methods to provide write access to the field PropertyIndex_order (" __HERE__ ")");
  t126.method("PropertyIndex_order!", [](OpenSim::MultivariatePolynomialFunction* a, const OpenSim::PropertyIndex& val) -> OpenSim::PropertyIndex& { return a->PropertyIndex_order = val; });

  /* End of OpenSim::MultivariatePolynomialFunction class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class OpenSim::PiecewiseConstantFunction
   */

  DEBUG_MSG("Adding wrapper for OpenSim::PiecewiseConstantFunction * OpenSim::PiecewiseConstantFunction::safeDownCast(OpenSim::Object *) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::PiecewiseConstantFunction * OpenSim::PiecewiseConstantFunction::safeDownCast(OpenSim::Object *)
  // defined in /opt/opensim-core/OpenSim/Common/PiecewiseConstantFunction.h:50:1
  t128.method("OpenSim!PiecewiseConstantFunction!safeDownCast", static_cast<OpenSim::PiecewiseConstantFunction * (*)(OpenSim::Object *) >(&OpenSim::PiecewiseConstantFunction::safeDownCast));

  DEBUG_MSG("Adding wrapper for void OpenSim::PiecewiseConstantFunction::assign(OpenSim::Object &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::PiecewiseConstantFunction::assign(OpenSim::Object &)
  // defined in /opt/opensim-core/OpenSim/Common/PiecewiseConstantFunction.h:50:1
  t128.method("assign", static_cast<void (OpenSim::PiecewiseConstantFunction::*)(OpenSim::Object &) >(&OpenSim::PiecewiseConstantFunction::assign));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::PiecewiseConstantFunction::getClassName() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::PiecewiseConstantFunction::getClassName()
  // defined in /opt/opensim-core/OpenSim/Common/PiecewiseConstantFunction.h:50:1
  t128.method("OpenSim!PiecewiseConstantFunction!getClassName", static_cast<const std::string & (*)() >(&OpenSim::PiecewiseConstantFunction::getClassName));

  DEBUG_MSG("Adding wrapper for OpenSim::PiecewiseConstantFunction * OpenSim::PiecewiseConstantFunction::clone() (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::PiecewiseConstantFunction * OpenSim::PiecewiseConstantFunction::clone()
  // defined in /opt/opensim-core/OpenSim/Common/PiecewiseConstantFunction.h:50:1
  t128.method("clone", static_cast<OpenSim::PiecewiseConstantFunction * (OpenSim::PiecewiseConstantFunction::*)()  const>(&OpenSim::PiecewiseConstantFunction::clone));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::PiecewiseConstantFunction::getConcreteClassName() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::PiecewiseConstantFunction::getConcreteClassName()
  // defined in /opt/opensim-core/OpenSim/Common/PiecewiseConstantFunction.h:50:1
  t128.method("getConcreteClassName", static_cast<const std::string & (OpenSim::PiecewiseConstantFunction::*)()  const>(&OpenSim::PiecewiseConstantFunction::getConcreteClassName));


  DEBUG_MSG("Adding wrapper for void OpenSim::PiecewiseConstantFunction::PiecewiseConstantFunction(int, const double *, const double *, const std::string &) (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/PiecewiseConstantFunction.h:74:5
  t128.constructor<int, const double *, const double *>(/*finalize=*/true);
  t128.constructor<int, const double *, const double *, const std::string &>(/*finalize=*/true);


  DEBUG_MSG("Adding wrapper for void OpenSim::PiecewiseConstantFunction::PiecewiseConstantFunction(const OpenSim::PiecewiseConstantFunction &) (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/PiecewiseConstantFunction.h:76:5
  t128.constructor<const OpenSim::PiecewiseConstantFunction &>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for void OpenSim::PiecewiseConstantFunction::init(OpenSim::Function *) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::PiecewiseConstantFunction::init(OpenSim::Function *)
  // defined in /opt/opensim-core/OpenSim/Common/PiecewiseConstantFunction.h:79:10
  t128.method("init", static_cast<void (OpenSim::PiecewiseConstantFunction::*)(OpenSim::Function *) >(&OpenSim::PiecewiseConstantFunction::init));

  DEBUG_MSG("Adding wrapper for OpenSim::PiecewiseConstantFunction & OpenSim::PiecewiseConstantFunction::operator=(const OpenSim::PiecewiseConstantFunction &) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::PiecewiseConstantFunction & OpenSim::PiecewiseConstantFunction::operator=(const OpenSim::PiecewiseConstantFunction &)
  // defined in /opt/opensim-core/OpenSim/Common/PiecewiseConstantFunction.h:91:32
  t128.method("assign", static_cast<OpenSim::PiecewiseConstantFunction & (OpenSim::PiecewiseConstantFunction::*)(const OpenSim::PiecewiseConstantFunction &) >(&OpenSim::PiecewiseConstantFunction::operator=));

  DEBUG_MSG("Adding wrapper for int OpenSim::PiecewiseConstantFunction::getSize() (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::PiecewiseConstantFunction::getSize()
  // defined in /opt/opensim-core/OpenSim/Common/PiecewiseConstantFunction.h:97:9
  t128.method("getSize", static_cast<int (OpenSim::PiecewiseConstantFunction::*)()  const>(&OpenSim::PiecewiseConstantFunction::getSize));

  DEBUG_MSG("Adding wrapper for const double * OpenSim::PiecewiseConstantFunction::getXValues() (" __HERE__ ")");
  // signature to use in the veto list: const double * OpenSim::PiecewiseConstantFunction::getXValues()
  // defined in /opt/opensim-core/OpenSim/Common/PiecewiseConstantFunction.h:100:27
  t128.method("getXValues", static_cast<const double * (OpenSim::PiecewiseConstantFunction::*)()  const>(&OpenSim::PiecewiseConstantFunction::getXValues));

  DEBUG_MSG("Adding wrapper for const double * OpenSim::PiecewiseConstantFunction::getYValues() (" __HERE__ ")");
  // signature to use in the veto list: const double * OpenSim::PiecewiseConstantFunction::getYValues()
  // defined in /opt/opensim-core/OpenSim/Common/PiecewiseConstantFunction.h:101:27
  t128.method("getYValues", static_cast<const double * (OpenSim::PiecewiseConstantFunction::*)()  const>(&OpenSim::PiecewiseConstantFunction::getYValues));

  DEBUG_MSG("Adding wrapper for int OpenSim::PiecewiseConstantFunction::getNumberOfPoints() (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::PiecewiseConstantFunction::getNumberOfPoints()
  // defined in /opt/opensim-core/OpenSim/Common/PiecewiseConstantFunction.h:102:17
  t128.method("getNumberOfPoints", static_cast<int (OpenSim::PiecewiseConstantFunction::*)()  const>(&OpenSim::PiecewiseConstantFunction::getNumberOfPoints));

  DEBUG_MSG("Adding wrapper for double OpenSim::PiecewiseConstantFunction::getX(int) (" __HERE__ ")");
  // signature to use in the veto list: double OpenSim::PiecewiseConstantFunction::getX(int)
  // defined in /opt/opensim-core/OpenSim/Common/PiecewiseConstantFunction.h:103:20
  t128.method("getX", static_cast<double (OpenSim::PiecewiseConstantFunction::*)(int)  const>(&OpenSim::PiecewiseConstantFunction::getX));

  DEBUG_MSG("Adding wrapper for double OpenSim::PiecewiseConstantFunction::getY(int) (" __HERE__ ")");
  // signature to use in the veto list: double OpenSim::PiecewiseConstantFunction::getY(int)
  // defined in /opt/opensim-core/OpenSim/Common/PiecewiseConstantFunction.h:104:20
  t128.method("getY", static_cast<double (OpenSim::PiecewiseConstantFunction::*)(int)  const>(&OpenSim::PiecewiseConstantFunction::getY));

  DEBUG_MSG("Adding wrapper for double OpenSim::PiecewiseConstantFunction::getZ(int) (" __HERE__ ")");
  // signature to use in the veto list: double OpenSim::PiecewiseConstantFunction::getZ(int)
  // defined in /opt/opensim-core/OpenSim/Common/PiecewiseConstantFunction.h:105:20
  t128.method("getZ", static_cast<double (OpenSim::PiecewiseConstantFunction::*)(int)  const>(&OpenSim::PiecewiseConstantFunction::getZ));

  DEBUG_MSG("Adding wrapper for void OpenSim::PiecewiseConstantFunction::setX(int, double) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::PiecewiseConstantFunction::setX(int, double)
  // defined in /opt/opensim-core/OpenSim/Common/PiecewiseConstantFunction.h:106:18
  t128.method("setX", static_cast<void (OpenSim::PiecewiseConstantFunction::*)(int, double) >(&OpenSim::PiecewiseConstantFunction::setX));

  DEBUG_MSG("Adding wrapper for void OpenSim::PiecewiseConstantFunction::setY(int, double) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::PiecewiseConstantFunction::setY(int, double)
  // defined in /opt/opensim-core/OpenSim/Common/PiecewiseConstantFunction.h:107:18
  t128.method("setY", static_cast<void (OpenSim::PiecewiseConstantFunction::*)(int, double) >(&OpenSim::PiecewiseConstantFunction::setY));

  DEBUG_MSG("Adding wrapper for bool OpenSim::PiecewiseConstantFunction::deletePoint(int) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::PiecewiseConstantFunction::deletePoint(int)
  // defined in /opt/opensim-core/OpenSim/Common/PiecewiseConstantFunction.h:108:18
  t128.method("deletePoint", static_cast<bool (OpenSim::PiecewiseConstantFunction::*)(int) >(&OpenSim::PiecewiseConstantFunction::deletePoint));

  DEBUG_MSG("Adding wrapper for int OpenSim::PiecewiseConstantFunction::addPoint(double, double) (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::PiecewiseConstantFunction::addPoint(double, double)
  // defined in /opt/opensim-core/OpenSim/Common/PiecewiseConstantFunction.h:110:17
  t128.method("addPoint", static_cast<int (OpenSim::PiecewiseConstantFunction::*)(double, double) >(&OpenSim::PiecewiseConstantFunction::addPoint));

  DEBUG_MSG("Adding wrapper for double OpenSim::PiecewiseConstantFunction::evaluateTotalFirstDerivative(double, double) (" __HERE__ ")");
  // signature to use in the veto list: double OpenSim::PiecewiseConstantFunction::evaluateTotalFirstDerivative(double, double)
  // defined in /opt/opensim-core/OpenSim/Common/PiecewiseConstantFunction.h:115:20
  t128.method("evaluateTotalFirstDerivative", static_cast<double (OpenSim::PiecewiseConstantFunction::*)(double, double)  const>(&OpenSim::PiecewiseConstantFunction::evaluateTotalFirstDerivative));

  DEBUG_MSG("Adding wrapper for double OpenSim::PiecewiseConstantFunction::evaluateTotalSecondDerivative(double, double, double) (" __HERE__ ")");
  // signature to use in the veto list: double OpenSim::PiecewiseConstantFunction::evaluateTotalSecondDerivative(double, double, double)
  // defined in /opt/opensim-core/OpenSim/Common/PiecewiseConstantFunction.h:116:20
  t128.method("evaluateTotalSecondDerivative", static_cast<double (OpenSim::PiecewiseConstantFunction::*)(double, double, double)  const>(&OpenSim::PiecewiseConstantFunction::evaluateTotalSecondDerivative));

  DEBUG_MSG("Adding wrapper for int OpenSim::PiecewiseConstantFunction::getArgumentSize() (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::PiecewiseConstantFunction::getArgumentSize()
  // defined in /opt/opensim-core/OpenSim/Common/PiecewiseConstantFunction.h:119:9
  t128.method("getArgumentSize", static_cast<int (OpenSim::PiecewiseConstantFunction::*)()  const>(&OpenSim::PiecewiseConstantFunction::getArgumentSize));

  DEBUG_MSG("Adding wrapper for int OpenSim::PiecewiseConstantFunction::getMaxDerivativeOrder() (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::PiecewiseConstantFunction::getMaxDerivativeOrder()
  // defined in /opt/opensim-core/OpenSim/Common/PiecewiseConstantFunction.h:120:9
  t128.method("getMaxDerivativeOrder", static_cast<int (OpenSim::PiecewiseConstantFunction::*)()  const>(&OpenSim::PiecewiseConstantFunction::getMaxDerivativeOrder));

  /* End of OpenSim::PiecewiseConstantFunction class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class OpenSim::PiecewiseLinearFunction
   */

  DEBUG_MSG("Adding wrapper for OpenSim::PiecewiseLinearFunction * OpenSim::PiecewiseLinearFunction::safeDownCast(OpenSim::Object *) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::PiecewiseLinearFunction * OpenSim::PiecewiseLinearFunction::safeDownCast(OpenSim::Object *)
  // defined in /opt/opensim-core/OpenSim/Common/PiecewiseLinearFunction.h:49:1
  t129.method("OpenSim!PiecewiseLinearFunction!safeDownCast", static_cast<OpenSim::PiecewiseLinearFunction * (*)(OpenSim::Object *) >(&OpenSim::PiecewiseLinearFunction::safeDownCast));

  DEBUG_MSG("Adding wrapper for void OpenSim::PiecewiseLinearFunction::assign(OpenSim::Object &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::PiecewiseLinearFunction::assign(OpenSim::Object &)
  // defined in /opt/opensim-core/OpenSim/Common/PiecewiseLinearFunction.h:49:1
  t129.method("assign", static_cast<void (OpenSim::PiecewiseLinearFunction::*)(OpenSim::Object &) >(&OpenSim::PiecewiseLinearFunction::assign));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::PiecewiseLinearFunction::getClassName() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::PiecewiseLinearFunction::getClassName()
  // defined in /opt/opensim-core/OpenSim/Common/PiecewiseLinearFunction.h:49:1
  t129.method("OpenSim!PiecewiseLinearFunction!getClassName", static_cast<const std::string & (*)() >(&OpenSim::PiecewiseLinearFunction::getClassName));

  DEBUG_MSG("Adding wrapper for OpenSim::PiecewiseLinearFunction * OpenSim::PiecewiseLinearFunction::clone() (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::PiecewiseLinearFunction * OpenSim::PiecewiseLinearFunction::clone()
  // defined in /opt/opensim-core/OpenSim/Common/PiecewiseLinearFunction.h:49:1
  t129.method("clone", static_cast<OpenSim::PiecewiseLinearFunction * (OpenSim::PiecewiseLinearFunction::*)()  const>(&OpenSim::PiecewiseLinearFunction::clone));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::PiecewiseLinearFunction::getConcreteClassName() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::PiecewiseLinearFunction::getConcreteClassName()
  // defined in /opt/opensim-core/OpenSim/Common/PiecewiseLinearFunction.h:49:1
  t129.method("getConcreteClassName", static_cast<const std::string & (OpenSim::PiecewiseLinearFunction::*)()  const>(&OpenSim::PiecewiseLinearFunction::getConcreteClassName));


  DEBUG_MSG("Adding wrapper for void OpenSim::PiecewiseLinearFunction::PiecewiseLinearFunction(int, const double *, const double *, const std::string &) (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/PiecewiseLinearFunction.h:76:5
  t129.constructor<int, const double *, const double *>(/*finalize=*/true);
  t129.constructor<int, const double *, const double *, const std::string &>(/*finalize=*/true);


  DEBUG_MSG("Adding wrapper for void OpenSim::PiecewiseLinearFunction::PiecewiseLinearFunction(const OpenSim::PiecewiseLinearFunction &) (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/PiecewiseLinearFunction.h:78:5
  t129.constructor<const OpenSim::PiecewiseLinearFunction &>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for void OpenSim::PiecewiseLinearFunction::init(OpenSim::Function *) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::PiecewiseLinearFunction::init(OpenSim::Function *)
  // defined in /opt/opensim-core/OpenSim/Common/PiecewiseLinearFunction.h:81:10
  t129.method("init", static_cast<void (OpenSim::PiecewiseLinearFunction::*)(OpenSim::Function *) >(&OpenSim::PiecewiseLinearFunction::init));

  DEBUG_MSG("Adding wrapper for OpenSim::PiecewiseLinearFunction & OpenSim::PiecewiseLinearFunction::operator=(const OpenSim::PiecewiseLinearFunction &) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::PiecewiseLinearFunction & OpenSim::PiecewiseLinearFunction::operator=(const OpenSim::PiecewiseLinearFunction &)
  // defined in /opt/opensim-core/OpenSim/Common/PiecewiseLinearFunction.h:93:30
  t129.method("assign", static_cast<OpenSim::PiecewiseLinearFunction & (OpenSim::PiecewiseLinearFunction::*)(const OpenSim::PiecewiseLinearFunction &) >(&OpenSim::PiecewiseLinearFunction::operator=));

  DEBUG_MSG("Adding wrapper for int OpenSim::PiecewiseLinearFunction::getSize() (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::PiecewiseLinearFunction::getSize()
  // defined in /opt/opensim-core/OpenSim/Common/PiecewiseLinearFunction.h:99:9
  t129.method("getSize", static_cast<int (OpenSim::PiecewiseLinearFunction::*)()  const>(&OpenSim::PiecewiseLinearFunction::getSize));

  DEBUG_MSG("Adding wrapper for const double * OpenSim::PiecewiseLinearFunction::getXValues() (" __HERE__ ")");
  // signature to use in the veto list: const double * OpenSim::PiecewiseLinearFunction::getXValues()
  // defined in /opt/opensim-core/OpenSim/Common/PiecewiseLinearFunction.h:102:27
  t129.method("getXValues", static_cast<const double * (OpenSim::PiecewiseLinearFunction::*)()  const>(&OpenSim::PiecewiseLinearFunction::getXValues));

  DEBUG_MSG("Adding wrapper for const double * OpenSim::PiecewiseLinearFunction::getYValues() (" __HERE__ ")");
  // signature to use in the veto list: const double * OpenSim::PiecewiseLinearFunction::getYValues()
  // defined in /opt/opensim-core/OpenSim/Common/PiecewiseLinearFunction.h:103:27
  t129.method("getYValues", static_cast<const double * (OpenSim::PiecewiseLinearFunction::*)()  const>(&OpenSim::PiecewiseLinearFunction::getYValues));

  DEBUG_MSG("Adding wrapper for int OpenSim::PiecewiseLinearFunction::getNumberOfPoints() (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::PiecewiseLinearFunction::getNumberOfPoints()
  // defined in /opt/opensim-core/OpenSim/Common/PiecewiseLinearFunction.h:104:17
  t129.method("getNumberOfPoints", static_cast<int (OpenSim::PiecewiseLinearFunction::*)()  const>(&OpenSim::PiecewiseLinearFunction::getNumberOfPoints));

  DEBUG_MSG("Adding wrapper for double OpenSim::PiecewiseLinearFunction::getX(int) (" __HERE__ ")");
  // signature to use in the veto list: double OpenSim::PiecewiseLinearFunction::getX(int)
  // defined in /opt/opensim-core/OpenSim/Common/PiecewiseLinearFunction.h:105:20
  t129.method("getX", static_cast<double (OpenSim::PiecewiseLinearFunction::*)(int)  const>(&OpenSim::PiecewiseLinearFunction::getX));

  DEBUG_MSG("Adding wrapper for double OpenSim::PiecewiseLinearFunction::getY(int) (" __HERE__ ")");
  // signature to use in the veto list: double OpenSim::PiecewiseLinearFunction::getY(int)
  // defined in /opt/opensim-core/OpenSim/Common/PiecewiseLinearFunction.h:106:20
  t129.method("getY", static_cast<double (OpenSim::PiecewiseLinearFunction::*)(int)  const>(&OpenSim::PiecewiseLinearFunction::getY));

  DEBUG_MSG("Adding wrapper for double OpenSim::PiecewiseLinearFunction::getZ(int) (" __HERE__ ")");
  // signature to use in the veto list: double OpenSim::PiecewiseLinearFunction::getZ(int)
  // defined in /opt/opensim-core/OpenSim/Common/PiecewiseLinearFunction.h:107:20
  t129.method("getZ", static_cast<double (OpenSim::PiecewiseLinearFunction::*)(int)  const>(&OpenSim::PiecewiseLinearFunction::getZ));

  DEBUG_MSG("Adding wrapper for void OpenSim::PiecewiseLinearFunction::setX(int, double) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::PiecewiseLinearFunction::setX(int, double)
  // defined in /opt/opensim-core/OpenSim/Common/PiecewiseLinearFunction.h:108:18
  t129.method("setX", static_cast<void (OpenSim::PiecewiseLinearFunction::*)(int, double) >(&OpenSim::PiecewiseLinearFunction::setX));

  DEBUG_MSG("Adding wrapper for void OpenSim::PiecewiseLinearFunction::setY(int, double) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::PiecewiseLinearFunction::setY(int, double)
  // defined in /opt/opensim-core/OpenSim/Common/PiecewiseLinearFunction.h:109:18
  t129.method("setY", static_cast<void (OpenSim::PiecewiseLinearFunction::*)(int, double) >(&OpenSim::PiecewiseLinearFunction::setY));

  DEBUG_MSG("Adding wrapper for bool OpenSim::PiecewiseLinearFunction::deletePoint(int) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::PiecewiseLinearFunction::deletePoint(int)
  // defined in /opt/opensim-core/OpenSim/Common/PiecewiseLinearFunction.h:110:18
  t129.method("deletePoint", static_cast<bool (OpenSim::PiecewiseLinearFunction::*)(int) >(&OpenSim::PiecewiseLinearFunction::deletePoint));

  DEBUG_MSG("Adding wrapper for int OpenSim::PiecewiseLinearFunction::addPoint(double, double) (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::PiecewiseLinearFunction::addPoint(double, double)
  // defined in /opt/opensim-core/OpenSim/Common/PiecewiseLinearFunction.h:112:17
  t129.method("addPoint", static_cast<int (OpenSim::PiecewiseLinearFunction::*)(double, double) >(&OpenSim::PiecewiseLinearFunction::addPoint));

  DEBUG_MSG("Adding wrapper for int OpenSim::PiecewiseLinearFunction::getArgumentSize() (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::PiecewiseLinearFunction::getArgumentSize()
  // defined in /opt/opensim-core/OpenSim/Common/PiecewiseLinearFunction.h:119:9
  t129.method("getArgumentSize", static_cast<int (OpenSim::PiecewiseLinearFunction::*)()  const>(&OpenSim::PiecewiseLinearFunction::getArgumentSize));

  DEBUG_MSG("Adding wrapper for int OpenSim::PiecewiseLinearFunction::getMaxDerivativeOrder() (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::PiecewiseLinearFunction::getMaxDerivativeOrder()
  // defined in /opt/opensim-core/OpenSim/Common/PiecewiseLinearFunction.h:120:9
  t129.method("getMaxDerivativeOrder", static_cast<int (OpenSim::PiecewiseLinearFunction::*)()  const>(&OpenSim::PiecewiseLinearFunction::getMaxDerivativeOrder));

  DEBUG_MSG("Adding wrapper for void OpenSim::PiecewiseLinearFunction::updateFromXMLNode(SimTK::Xml::Element &, int) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::PiecewiseLinearFunction::updateFromXMLNode(SimTK::Xml::Element &, int)
  // defined in /opt/opensim-core/OpenSim/Common/PiecewiseLinearFunction.h:123:10
  t129.method("updateFromXMLNode", static_cast<void (OpenSim::PiecewiseLinearFunction::*)(SimTK::Xml::Element &, int) >(&OpenSim::PiecewiseLinearFunction::updateFromXMLNode));
  t129.method("updateFromXMLNode", [](OpenSim::PiecewiseLinearFunction& a, SimTK::Xml::Element & arg0)->void{ a.updateFromXMLNode(arg0); });
  t129.method("updateFromXMLNode", [](OpenSim::PiecewiseLinearFunction* a, SimTK::Xml::Element & arg0)->void{ a->updateFromXMLNode(arg0); });

  /* End of OpenSim::PiecewiseLinearFunction class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class OpenSim::PolynomialFunction
   */

  DEBUG_MSG("Adding wrapper for OpenSim::PolynomialFunction * OpenSim::PolynomialFunction::safeDownCast(OpenSim::Object *) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::PolynomialFunction * OpenSim::PolynomialFunction::safeDownCast(OpenSim::Object *)
  // defined in /opt/opensim-core/OpenSim/Common/PolynomialFunction.h:44:1
  t130.method("OpenSim!PolynomialFunction!safeDownCast", static_cast<OpenSim::PolynomialFunction * (*)(OpenSim::Object *) >(&OpenSim::PolynomialFunction::safeDownCast));

  DEBUG_MSG("Adding wrapper for void OpenSim::PolynomialFunction::assign(OpenSim::Object &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::PolynomialFunction::assign(OpenSim::Object &)
  // defined in /opt/opensim-core/OpenSim/Common/PolynomialFunction.h:44:1
  t130.method("assign", static_cast<void (OpenSim::PolynomialFunction::*)(OpenSim::Object &) >(&OpenSim::PolynomialFunction::assign));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::PolynomialFunction::getClassName() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::PolynomialFunction::getClassName()
  // defined in /opt/opensim-core/OpenSim/Common/PolynomialFunction.h:44:1
  t130.method("OpenSim!PolynomialFunction!getClassName", static_cast<const std::string & (*)() >(&OpenSim::PolynomialFunction::getClassName));

  DEBUG_MSG("Adding wrapper for OpenSim::PolynomialFunction * OpenSim::PolynomialFunction::clone() (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::PolynomialFunction * OpenSim::PolynomialFunction::clone()
  // defined in /opt/opensim-core/OpenSim/Common/PolynomialFunction.h:44:1
  t130.method("clone", static_cast<OpenSim::PolynomialFunction * (OpenSim::PolynomialFunction::*)()  const>(&OpenSim::PolynomialFunction::clone));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::PolynomialFunction::getConcreteClassName() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::PolynomialFunction::getConcreteClassName()
  // defined in /opt/opensim-core/OpenSim/Common/PolynomialFunction.h:44:1
  t130.method("getConcreteClassName", static_cast<const std::string & (OpenSim::PolynomialFunction::*)()  const>(&OpenSim::PolynomialFunction::getConcreteClassName));

  /* End of OpenSim::PolynomialFunction class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class OpenSim::PropertyGroup
   */


  DEBUG_MSG("Adding wrapper for void OpenSim::PropertyGroup::PropertyGroup(std::string &) (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/PropertyGroup.h:74:5
  t131.constructor<std::string &>(/*finalize=*/true);


  DEBUG_MSG("Adding wrapper for void OpenSim::PropertyGroup::PropertyGroup(const OpenSim::PropertyGroup &) (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/PropertyGroup.h:75:5
  t131.constructor<const OpenSim::PropertyGroup &>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for OpenSim::PropertyGroup * OpenSim::PropertyGroup::clone() (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::PropertyGroup * OpenSim::PropertyGroup::clone()
  // defined in /opt/opensim-core/OpenSim/Common/PropertyGroup.h:77:28
  t131.method("clone", static_cast<OpenSim::PropertyGroup * (OpenSim::PropertyGroup::*)()  const>(&OpenSim::PropertyGroup::clone));

  DEBUG_MSG("Adding wrapper for OpenSim::PropertyGroup & OpenSim::PropertyGroup::operator=(const OpenSim::PropertyGroup &) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::PropertyGroup & OpenSim::PropertyGroup::operator=(const OpenSim::PropertyGroup &)
  // defined in /opt/opensim-core/OpenSim/Common/PropertyGroup.h:80:20
  t131.method("assign", static_cast<OpenSim::PropertyGroup & (OpenSim::PropertyGroup::*)(const OpenSim::PropertyGroup &) >(&OpenSim::PropertyGroup::operator=));
  types.set_override_module(jl_base_module);

  DEBUG_MSG("Adding wrapper for bool OpenSim::PropertyGroup::operator<(const OpenSim::PropertyGroup &) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::PropertyGroup::operator<(const OpenSim::PropertyGroup &)
  // defined in /opt/opensim-core/OpenSim/Common/PropertyGroup.h:81:10
  t131.method("<", static_cast<bool (OpenSim::PropertyGroup::*)(const OpenSim::PropertyGroup &)  const>(&OpenSim::PropertyGroup::operator<));

  DEBUG_MSG("Adding wrapper for bool OpenSim::PropertyGroup::operator==(const OpenSim::PropertyGroup &) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::PropertyGroup::operator==(const OpenSim::PropertyGroup &)
  // defined in /opt/opensim-core/OpenSim/Common/PropertyGroup.h:82:10
  t131.method("==", static_cast<bool (OpenSim::PropertyGroup::*)(const OpenSim::PropertyGroup &)  const>(&OpenSim::PropertyGroup::operator==));

  types.unset_override_module();

  DEBUG_MSG("Adding wrapper for void OpenSim::PropertyGroup::copyData(const OpenSim::PropertyGroup &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::PropertyGroup::copyData(const OpenSim::PropertyGroup &)
  // defined in /opt/opensim-core/OpenSim/Common/PropertyGroup.h:84:9
  t131.method("copyData", static_cast<void (OpenSim::PropertyGroup::*)(const OpenSim::PropertyGroup &) >(&OpenSim::PropertyGroup::copyData));

  DEBUG_MSG("Adding wrapper for void OpenSim::PropertyGroup::clear() (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::PropertyGroup::clear()
  // defined in /opt/opensim-core/OpenSim/Common/PropertyGroup.h:85:10
  t131.method("clear", static_cast<void (OpenSim::PropertyGroup::*)() >(&OpenSim::PropertyGroup::clear));

  DEBUG_MSG("Adding wrapper for bool OpenSim::PropertyGroup::contains(const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::PropertyGroup::contains(const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/PropertyGroup.h:87:10
  t131.method("contains", static_cast<bool (OpenSim::PropertyGroup::*)(const std::string &)  const>(&OpenSim::PropertyGroup::contains));

  DEBUG_MSG("Adding wrapper for void OpenSim::PropertyGroup::add(OpenSim::Property_Deprecated *) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::PropertyGroup::add(OpenSim::Property_Deprecated *)
  // defined in /opt/opensim-core/OpenSim/Common/PropertyGroup.h:88:10
  t131.method("add", static_cast<void (OpenSim::PropertyGroup::*)(OpenSim::Property_Deprecated *) >(&OpenSim::PropertyGroup::add));

  DEBUG_MSG("Adding wrapper for void OpenSim::PropertyGroup::remove(OpenSim::Property_Deprecated *) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::PropertyGroup::remove(OpenSim::Property_Deprecated *)
  // defined in /opt/opensim-core/OpenSim/Common/PropertyGroup.h:89:10
  t131.method("remove", static_cast<void (OpenSim::PropertyGroup::*)(OpenSim::Property_Deprecated *) >(&OpenSim::PropertyGroup::remove));

  DEBUG_MSG("Adding wrapper for OpenSim::Property_Deprecated * OpenSim::PropertyGroup::get(int) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::Property_Deprecated * OpenSim::PropertyGroup::get(int)
  // defined in /opt/opensim-core/OpenSim/Common/PropertyGroup.h:93:26
  t131.method("get", static_cast<OpenSim::Property_Deprecated * (OpenSim::PropertyGroup::*)(int) >(&OpenSim::PropertyGroup::get));

  DEBUG_MSG("Adding wrapper for int OpenSim::PropertyGroup::getPropertyIndex(OpenSim::Property_Deprecated *) (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::PropertyGroup::getPropertyIndex(OpenSim::Property_Deprecated *)
  // defined in /opt/opensim-core/OpenSim/Common/PropertyGroup.h:94:9
  t131.method("getPropertyIndex", static_cast<int (OpenSim::PropertyGroup::*)(OpenSim::Property_Deprecated *)  const>(&OpenSim::PropertyGroup::getPropertyIndex));

  DEBUG_MSG("Adding wrapper for void OpenSim::PropertyGroup::setName(const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::PropertyGroup::setName(const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/PropertyGroup.h:97:10
  t131.method("setName", static_cast<void (OpenSim::PropertyGroup::*)(const std::string &) >(&OpenSim::PropertyGroup::setName));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::PropertyGroup::getName() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::PropertyGroup::getName()
  // defined in /opt/opensim-core/OpenSim/Common/PropertyGroup.h:98:24
  t131.method("getName", static_cast<const std::string & (OpenSim::PropertyGroup::*)()  const>(&OpenSim::PropertyGroup::getName));

  /* End of OpenSim::PropertyGroup class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class OpenSim::AbstractReporter
   */

  DEBUG_MSG("Adding wrapper for OpenSim::AbstractReporter * OpenSim::AbstractReporter::safeDownCast(OpenSim::Object *) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::AbstractReporter * OpenSim::AbstractReporter::safeDownCast(OpenSim::Object *)
  // defined in /opt/opensim-core/OpenSim/Common/Reporter.h:47:1
  t133.method("OpenSim!AbstractReporter!safeDownCast", static_cast<OpenSim::AbstractReporter * (*)(OpenSim::Object *) >(&OpenSim::AbstractReporter::safeDownCast));

  DEBUG_MSG("Adding wrapper for void OpenSim::AbstractReporter::assign(OpenSim::Object &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::AbstractReporter::assign(OpenSim::Object &)
  // defined in /opt/opensim-core/OpenSim/Common/Reporter.h:47:1
  t133.method("assign", static_cast<void (OpenSim::AbstractReporter::*)(OpenSim::Object &) >(&OpenSim::AbstractReporter::assign));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::AbstractReporter::getClassName() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::AbstractReporter::getClassName()
  // defined in /opt/opensim-core/OpenSim/Common/Reporter.h:47:1
  t133.method("OpenSim!AbstractReporter!getClassName", static_cast<const std::string & (*)() >(&OpenSim::AbstractReporter::getClassName));

  DEBUG_MSG("Adding wrapper for OpenSim::AbstractReporter * OpenSim::AbstractReporter::clone() (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::AbstractReporter * OpenSim::AbstractReporter::clone()
  // defined in /opt/opensim-core/OpenSim/Common/Reporter.h:47:1
  t133.method("clone", static_cast<OpenSim::AbstractReporter * (OpenSim::AbstractReporter::*)()  const>(&OpenSim::AbstractReporter::clone));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::AbstractReporter::getConcreteClassName() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::AbstractReporter::getConcreteClassName()
  // defined in /opt/opensim-core/OpenSim/Common/Reporter.h:47:1
  t133.method("getConcreteClassName", static_cast<const std::string & (OpenSim::AbstractReporter::*)()  const>(&OpenSim::AbstractReporter::getConcreteClassName));

  DEBUG_MSG("Adding wrapper for void OpenSim::AbstractReporter::copyProperty_report_time_interval(const OpenSim::AbstractReporter::Self &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::AbstractReporter::copyProperty_report_time_interval(const OpenSim::AbstractReporter::Self &)
  // defined in /opt/opensim-core/OpenSim/Common/Reporter.h:53:5
  t133.method("copyProperty_report_time_interval", static_cast<void (OpenSim::AbstractReporter::*)(const OpenSim::AbstractReporter::Self &) >(&OpenSim::AbstractReporter::copyProperty_report_time_interval));

  DEBUG_MSG("Adding wrapper for const double & OpenSim::AbstractReporter::get_report_time_interval(int) (" __HERE__ ")");
  // signature to use in the veto list: const double & OpenSim::AbstractReporter::get_report_time_interval(int)
  // defined in /opt/opensim-core/OpenSim/Common/Reporter.h:53:5
  t133.method("get_report_time_interval", static_cast<const double & (OpenSim::AbstractReporter::*)(int)  const>(&OpenSim::AbstractReporter::get_report_time_interval));

  DEBUG_MSG("Adding wrapper for double & OpenSim::AbstractReporter::upd_report_time_interval(int) (" __HERE__ ")");
  // signature to use in the veto list: double & OpenSim::AbstractReporter::upd_report_time_interval(int)
  // defined in /opt/opensim-core/OpenSim/Common/Reporter.h:53:5
  t133.method("upd_report_time_interval", static_cast<double & (OpenSim::AbstractReporter::*)(int) >(&OpenSim::AbstractReporter::upd_report_time_interval));

  DEBUG_MSG("Adding wrapper for void OpenSim::AbstractReporter::set_report_time_interval(int, const double &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::AbstractReporter::set_report_time_interval(int, const double &)
  // defined in /opt/opensim-core/OpenSim/Common/Reporter.h:53:5
  t133.method("set_report_time_interval", static_cast<void (OpenSim::AbstractReporter::*)(int, const double &) >(&OpenSim::AbstractReporter::set_report_time_interval));

  DEBUG_MSG("Adding wrapper for int OpenSim::AbstractReporter::append_report_time_interval(const double &) (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::AbstractReporter::append_report_time_interval(const double &)
  // defined in /opt/opensim-core/OpenSim/Common/Reporter.h:53:5
  t133.method("append_report_time_interval", static_cast<int (OpenSim::AbstractReporter::*)(const double &) >(&OpenSim::AbstractReporter::append_report_time_interval));

  DEBUG_MSG("Adding wrapper for void OpenSim::AbstractReporter::constructProperty_report_time_interval(const double &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::AbstractReporter::constructProperty_report_time_interval(const double &)
  // defined in /opt/opensim-core/OpenSim/Common/Reporter.h:53:5
  t133.method("constructProperty_report_time_interval", static_cast<void (OpenSim::AbstractReporter::*)(const double &) >(&OpenSim::AbstractReporter::constructProperty_report_time_interval));

  DEBUG_MSG("Adding wrapper for const double & OpenSim::AbstractReporter::get_report_time_interval() (" __HERE__ ")");
  // signature to use in the veto list: const double & OpenSim::AbstractReporter::get_report_time_interval()
  // defined in /opt/opensim-core/OpenSim/Common/Reporter.h:53:5
  t133.method("get_report_time_interval", static_cast<const double & (OpenSim::AbstractReporter::*)()  const>(&OpenSim::AbstractReporter::get_report_time_interval));

  DEBUG_MSG("Adding wrapper for double & OpenSim::AbstractReporter::upd_report_time_interval() (" __HERE__ ")");
  // signature to use in the veto list: double & OpenSim::AbstractReporter::upd_report_time_interval()
  // defined in /opt/opensim-core/OpenSim/Common/Reporter.h:53:5
  t133.method("upd_report_time_interval", static_cast<double & (OpenSim::AbstractReporter::*)() >(&OpenSim::AbstractReporter::upd_report_time_interval));

  DEBUG_MSG("Adding wrapper for void OpenSim::AbstractReporter::set_report_time_interval(const double &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::AbstractReporter::set_report_time_interval(const double &)
  // defined in /opt/opensim-core/OpenSim/Common/Reporter.h:53:5
  t133.method("set_report_time_interval", static_cast<void (OpenSim::AbstractReporter::*)(const double &) >(&OpenSim::AbstractReporter::set_report_time_interval));

  DEBUG_MSG("Adding wrapper for void OpenSim::AbstractReporter::report(const SimTK::State &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::AbstractReporter::report(const SimTK::State &)
  // defined in /opt/opensim-core/OpenSim/Common/Reporter.h:61:10
  t133.method("report", static_cast<void (OpenSim::AbstractReporter::*)(const SimTK::State &)  const>(&OpenSim::AbstractReporter::report));

  DEBUG_MSG("Adding PropertyIndex_report_time_interval methods  to provide read access to the field PropertyIndex_report_time_interval (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Reporter.h:53:5
  // signature to use in the veto list: OpenSim::AbstractReporter::PropertyIndex_report_time_interval
  t133.method("PropertyIndex_report_time_interval", [](const OpenSim::AbstractReporter& a) -> const OpenSim::PropertyIndex& { return a.PropertyIndex_report_time_interval; });
  t133.method("PropertyIndex_report_time_interval", [](OpenSim::AbstractReporter& a) -> OpenSim::PropertyIndex& { return a.PropertyIndex_report_time_interval; });
  t133.method("PropertyIndex_report_time_interval", [](const OpenSim::AbstractReporter* a) -> const OpenSim::PropertyIndex& { return a->PropertyIndex_report_time_interval; });
  t133.method("PropertyIndex_report_time_interval", [](OpenSim::AbstractReporter* a) -> OpenSim::PropertyIndex& { return a->PropertyIndex_report_time_interval; });
  // defined in /opt/opensim-core/OpenSim/Common/Reporter.h:53:5
  // signature to use in the veto list: OpenSim::AbstractReporter::PropertyIndex_report_time_interval
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding PropertyIndex_report_time_interval! methods to provide write access to the field PropertyIndex_report_time_interval (" __HERE__ ")");
  t133.method("PropertyIndex_report_time_interval!", [](OpenSim::AbstractReporter& a, const OpenSim::PropertyIndex& val) -> OpenSim::PropertyIndex& { return a.PropertyIndex_report_time_interval = val; });

  DEBUG_MSG("Adding PropertyIndex_report_time_interval! methods to provide write access to the field PropertyIndex_report_time_interval (" __HERE__ ")");
  t133.method("PropertyIndex_report_time_interval!", [](OpenSim::AbstractReporter* a, const OpenSim::PropertyIndex& val) -> OpenSim::PropertyIndex& { return a->PropertyIndex_report_time_interval = val; });

  /* End of OpenSim::AbstractReporter class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class OpenSim::Scale
   */

  DEBUG_MSG("Adding wrapper for OpenSim::Scale * OpenSim::Scale::safeDownCast(OpenSim::Object *) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::Scale * OpenSim::Scale::safeDownCast(OpenSim::Object *)
  // defined in /opt/opensim-core/OpenSim/Common/Scale.h:49:1
  t139.method("OpenSim!Scale!safeDownCast", static_cast<OpenSim::Scale * (*)(OpenSim::Object *) >(&OpenSim::Scale::safeDownCast));

  DEBUG_MSG("Adding wrapper for void OpenSim::Scale::assign(OpenSim::Object &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Scale::assign(OpenSim::Object &)
  // defined in /opt/opensim-core/OpenSim/Common/Scale.h:49:1
  t139.method("assign", static_cast<void (OpenSim::Scale::*)(OpenSim::Object &) >(&OpenSim::Scale::assign));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::Scale::getClassName() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::Scale::getClassName()
  // defined in /opt/opensim-core/OpenSim/Common/Scale.h:49:1
  t139.method("OpenSim!Scale!getClassName", static_cast<const std::string & (*)() >(&OpenSim::Scale::getClassName));

  DEBUG_MSG("Adding wrapper for OpenSim::Scale * OpenSim::Scale::clone() (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::Scale * OpenSim::Scale::clone()
  // defined in /opt/opensim-core/OpenSim/Common/Scale.h:49:1
  t139.method("clone", static_cast<OpenSim::Scale * (OpenSim::Scale::*)()  const>(&OpenSim::Scale::clone));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::Scale::getConcreteClassName() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::Scale::getConcreteClassName()
  // defined in /opt/opensim-core/OpenSim/Common/Scale.h:49:1
  t139.method("getConcreteClassName", static_cast<const std::string & (OpenSim::Scale::*)()  const>(&OpenSim::Scale::getConcreteClassName));


  DEBUG_MSG("Adding wrapper for void OpenSim::Scale::Scale(const OpenSim::Scale &) (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Scale.h:76:5
  t139.constructor<const OpenSim::Scale &>(/*finalize=*/true);


  DEBUG_MSG("Adding wrapper for void OpenSim::Scale::Scale(const std::string &) (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Scale.h:77:5
  t139.constructor<const std::string &>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for OpenSim::Scale & OpenSim::Scale::operator=(const OpenSim::Scale &) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::Scale & OpenSim::Scale::operator=(const OpenSim::Scale &)
  // defined in /opt/opensim-core/OpenSim/Common/Scale.h:84:12
  t139.method("assign", static_cast<OpenSim::Scale & (OpenSim::Scale::*)(const OpenSim::Scale &) >(&OpenSim::Scale::operator=));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::Scale::getSegmentName() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::Scale::getSegmentName()
  // defined in /opt/opensim-core/OpenSim/Common/Scale.h:94:24
  t139.method("getSegmentName", static_cast<const std::string & (OpenSim::Scale::*)()  const>(&OpenSim::Scale::getSegmentName));

  DEBUG_MSG("Adding wrapper for void OpenSim::Scale::setSegmentName(const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Scale::setSegmentName(const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/Scale.h:95:10
  t139.method("setSegmentName", static_cast<void (OpenSim::Scale::*)(const std::string &) >(&OpenSim::Scale::setSegmentName));

  DEBUG_MSG("Adding wrapper for bool OpenSim::Scale::getApply() (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::Scale::getApply()
  // defined in /opt/opensim-core/OpenSim/Common/Scale.h:100:10
  t139.method("getApply", static_cast<bool (OpenSim::Scale::*)()  const>(&OpenSim::Scale::getApply));

  DEBUG_MSG("Adding wrapper for void OpenSim::Scale::setApply(bool) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Scale::setApply(bool)
  // defined in /opt/opensim-core/OpenSim/Common/Scale.h:101:10
  t139.method("setApply", static_cast<void (OpenSim::Scale::*)(bool) >(&OpenSim::Scale::setApply));

  /* End of OpenSim::Scale class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class OpenSim::ScaleSet
   */

  DEBUG_MSG("Adding wrapper for OpenSim::ScaleSet * OpenSim::ScaleSet::safeDownCast(OpenSim::Object *) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::ScaleSet * OpenSim::ScaleSet::safeDownCast(OpenSim::Object *)
  // defined in /opt/opensim-core/OpenSim/Common/ScaleSet.h:46:1
  t140.method("OpenSim!ScaleSet!safeDownCast", static_cast<OpenSim::ScaleSet * (*)(OpenSim::Object *) >(&OpenSim::ScaleSet::safeDownCast));

  DEBUG_MSG("Adding wrapper for void OpenSim::ScaleSet::assign(OpenSim::Object &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::ScaleSet::assign(OpenSim::Object &)
  // defined in /opt/opensim-core/OpenSim/Common/ScaleSet.h:46:1
  t140.method("assign", static_cast<void (OpenSim::ScaleSet::*)(OpenSim::Object &) >(&OpenSim::ScaleSet::assign));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::ScaleSet::getClassName() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::ScaleSet::getClassName()
  // defined in /opt/opensim-core/OpenSim/Common/ScaleSet.h:46:1
  t140.method("OpenSim!ScaleSet!getClassName", static_cast<const std::string & (*)() >(&OpenSim::ScaleSet::getClassName));

  DEBUG_MSG("Adding wrapper for OpenSim::ScaleSet * OpenSim::ScaleSet::clone() (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::ScaleSet * OpenSim::ScaleSet::clone()
  // defined in /opt/opensim-core/OpenSim/Common/ScaleSet.h:46:1
  t140.method("clone", static_cast<OpenSim::ScaleSet * (OpenSim::ScaleSet::*)()  const>(&OpenSim::ScaleSet::clone));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::ScaleSet::getConcreteClassName() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::ScaleSet::getConcreteClassName()
  // defined in /opt/opensim-core/OpenSim/Common/ScaleSet.h:46:1
  t140.method("getConcreteClassName", static_cast<const std::string & (OpenSim::ScaleSet::*)()  const>(&OpenSim::ScaleSet::getConcreteClassName));


  DEBUG_MSG("Adding wrapper for void OpenSim::ScaleSet::ScaleSet(const std::string &) (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/ScaleSet.h:55:5
  t140.constructor<const std::string &>(/*finalize=*/true);

  /* End of OpenSim::ScaleSet class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class OpenSim::SimmSpline
   */

  DEBUG_MSG("Adding wrapper for OpenSim::SimmSpline * OpenSim::SimmSpline::safeDownCast(OpenSim::Object *) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::SimmSpline * OpenSim::SimmSpline::safeDownCast(OpenSim::Object *)
  // defined in /opt/opensim-core/OpenSim/Common/SimmSpline.h:51:1
  t141.method("OpenSim!SimmSpline!safeDownCast", static_cast<OpenSim::SimmSpline * (*)(OpenSim::Object *) >(&OpenSim::SimmSpline::safeDownCast));

  DEBUG_MSG("Adding wrapper for void OpenSim::SimmSpline::assign(OpenSim::Object &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::SimmSpline::assign(OpenSim::Object &)
  // defined in /opt/opensim-core/OpenSim/Common/SimmSpline.h:51:1
  t141.method("assign", static_cast<void (OpenSim::SimmSpline::*)(OpenSim::Object &) >(&OpenSim::SimmSpline::assign));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::SimmSpline::getClassName() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::SimmSpline::getClassName()
  // defined in /opt/opensim-core/OpenSim/Common/SimmSpline.h:51:1
  t141.method("OpenSim!SimmSpline!getClassName", static_cast<const std::string & (*)() >(&OpenSim::SimmSpline::getClassName));

  DEBUG_MSG("Adding wrapper for OpenSim::SimmSpline * OpenSim::SimmSpline::clone() (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::SimmSpline * OpenSim::SimmSpline::clone()
  // defined in /opt/opensim-core/OpenSim/Common/SimmSpline.h:51:1
  t141.method("clone", static_cast<OpenSim::SimmSpline * (OpenSim::SimmSpline::*)()  const>(&OpenSim::SimmSpline::clone));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::SimmSpline::getConcreteClassName() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::SimmSpline::getConcreteClassName()
  // defined in /opt/opensim-core/OpenSim/Common/SimmSpline.h:51:1
  t141.method("getConcreteClassName", static_cast<const std::string & (OpenSim::SimmSpline::*)()  const>(&OpenSim::SimmSpline::getConcreteClassName));


  DEBUG_MSG("Adding wrapper for void OpenSim::SimmSpline::SimmSpline(int, const double *, const double *, const std::string &) (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/SimmSpline.h:80:5
  t141.constructor<int, const double *, const double *>(/*finalize=*/true);
  t141.constructor<int, const double *, const double *, const std::string &>(/*finalize=*/true);


  DEBUG_MSG("Adding wrapper for void OpenSim::SimmSpline::SimmSpline(const OpenSim::SimmSpline &) (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/SimmSpline.h:82:5
  t141.constructor<const OpenSim::SimmSpline &>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for void OpenSim::SimmSpline::init(OpenSim::Function *) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::SimmSpline::init(OpenSim::Function *)
  // defined in /opt/opensim-core/OpenSim/Common/SimmSpline.h:85:10
  t141.method("init", static_cast<void (OpenSim::SimmSpline::*)(OpenSim::Function *) >(&OpenSim::SimmSpline::init));

  DEBUG_MSG("Adding wrapper for OpenSim::SimmSpline & OpenSim::SimmSpline::operator=(const OpenSim::SimmSpline &) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::SimmSpline & OpenSim::SimmSpline::operator=(const OpenSim::SimmSpline &)
  // defined in /opt/opensim-core/OpenSim/Common/SimmSpline.h:97:17
  t141.method("assign", static_cast<OpenSim::SimmSpline & (OpenSim::SimmSpline::*)(const OpenSim::SimmSpline &) >(&OpenSim::SimmSpline::operator=));

  DEBUG_MSG("Adding wrapper for int OpenSim::SimmSpline::getSize() (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::SimmSpline::getSize()
  // defined in /opt/opensim-core/OpenSim/Common/SimmSpline.h:103:9
  t141.method("getSize", static_cast<int (OpenSim::SimmSpline::*)()  const>(&OpenSim::SimmSpline::getSize));

  DEBUG_MSG("Adding wrapper for const double * OpenSim::SimmSpline::getXValues() (" __HERE__ ")");
  // signature to use in the veto list: const double * OpenSim::SimmSpline::getXValues()
  // defined in /opt/opensim-core/OpenSim/Common/SimmSpline.h:106:27
  t141.method("getXValues", static_cast<const double * (OpenSim::SimmSpline::*)()  const>(&OpenSim::SimmSpline::getXValues));

  DEBUG_MSG("Adding wrapper for const double * OpenSim::SimmSpline::getYValues() (" __HERE__ ")");
  // signature to use in the veto list: const double * OpenSim::SimmSpline::getYValues()
  // defined in /opt/opensim-core/OpenSim/Common/SimmSpline.h:107:27
  t141.method("getYValues", static_cast<const double * (OpenSim::SimmSpline::*)()  const>(&OpenSim::SimmSpline::getYValues));

  DEBUG_MSG("Adding wrapper for int OpenSim::SimmSpline::getNumberOfPoints() (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::SimmSpline::getNumberOfPoints()
  // defined in /opt/opensim-core/OpenSim/Common/SimmSpline.h:108:17
  t141.method("getNumberOfPoints", static_cast<int (OpenSim::SimmSpline::*)()  const>(&OpenSim::SimmSpline::getNumberOfPoints));

  DEBUG_MSG("Adding wrapper for double OpenSim::SimmSpline::getX(int) (" __HERE__ ")");
  // signature to use in the veto list: double OpenSim::SimmSpline::getX(int)
  // defined in /opt/opensim-core/OpenSim/Common/SimmSpline.h:109:20
  t141.method("getX", static_cast<double (OpenSim::SimmSpline::*)(int)  const>(&OpenSim::SimmSpline::getX));

  DEBUG_MSG("Adding wrapper for double OpenSim::SimmSpline::getY(int) (" __HERE__ ")");
  // signature to use in the veto list: double OpenSim::SimmSpline::getY(int)
  // defined in /opt/opensim-core/OpenSim/Common/SimmSpline.h:110:20
  t141.method("getY", static_cast<double (OpenSim::SimmSpline::*)(int)  const>(&OpenSim::SimmSpline::getY));

  DEBUG_MSG("Adding wrapper for double OpenSim::SimmSpline::getZ(int) (" __HERE__ ")");
  // signature to use in the veto list: double OpenSim::SimmSpline::getZ(int)
  // defined in /opt/opensim-core/OpenSim/Common/SimmSpline.h:111:20
  t141.method("getZ", static_cast<double (OpenSim::SimmSpline::*)(int)  const>(&OpenSim::SimmSpline::getZ));

  DEBUG_MSG("Adding wrapper for void OpenSim::SimmSpline::setX(int, double) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::SimmSpline::setX(int, double)
  // defined in /opt/opensim-core/OpenSim/Common/SimmSpline.h:112:18
  t141.method("setX", static_cast<void (OpenSim::SimmSpline::*)(int, double) >(&OpenSim::SimmSpline::setX));

  DEBUG_MSG("Adding wrapper for void OpenSim::SimmSpline::setY(int, double) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::SimmSpline::setY(int, double)
  // defined in /opt/opensim-core/OpenSim/Common/SimmSpline.h:113:18
  t141.method("setY", static_cast<void (OpenSim::SimmSpline::*)(int, double) >(&OpenSim::SimmSpline::setY));

  DEBUG_MSG("Adding wrapper for bool OpenSim::SimmSpline::deletePoint(int) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::SimmSpline::deletePoint(int)
  // defined in /opt/opensim-core/OpenSim/Common/SimmSpline.h:114:18
  t141.method("deletePoint", static_cast<bool (OpenSim::SimmSpline::*)(int) >(&OpenSim::SimmSpline::deletePoint));

  DEBUG_MSG("Adding wrapper for int OpenSim::SimmSpline::addPoint(double, double) (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::SimmSpline::addPoint(double, double)
  // defined in /opt/opensim-core/OpenSim/Common/SimmSpline.h:116:17
  t141.method("addPoint", static_cast<int (OpenSim::SimmSpline::*)(double, double) >(&OpenSim::SimmSpline::addPoint));

  DEBUG_MSG("Adding wrapper for int OpenSim::SimmSpline::getArgumentSize() (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::SimmSpline::getArgumentSize()
  // defined in /opt/opensim-core/OpenSim/Common/SimmSpline.h:123:9
  t141.method("getArgumentSize", static_cast<int (OpenSim::SimmSpline::*)()  const>(&OpenSim::SimmSpline::getArgumentSize));

  DEBUG_MSG("Adding wrapper for int OpenSim::SimmSpline::getMaxDerivativeOrder() (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::SimmSpline::getMaxDerivativeOrder()
  // defined in /opt/opensim-core/OpenSim/Common/SimmSpline.h:124:9
  t141.method("getMaxDerivativeOrder", static_cast<int (OpenSim::SimmSpline::*)()  const>(&OpenSim::SimmSpline::getMaxDerivativeOrder));

  DEBUG_MSG("Adding wrapper for void OpenSim::SimmSpline::updateFromXMLNode(SimTK::Xml::Element &, int) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::SimmSpline::updateFromXMLNode(SimTK::Xml::Element &, int)
  // defined in /opt/opensim-core/OpenSim/Common/SimmSpline.h:127:10
  t141.method("updateFromXMLNode", static_cast<void (OpenSim::SimmSpline::*)(SimTK::Xml::Element &, int) >(&OpenSim::SimmSpline::updateFromXMLNode));
  t141.method("updateFromXMLNode", [](OpenSim::SimmSpline& a, SimTK::Xml::Element & arg0)->void{ a.updateFromXMLNode(arg0); });
  t141.method("updateFromXMLNode", [](OpenSim::SimmSpline* a, SimTK::Xml::Element & arg0)->void{ a->updateFromXMLNode(arg0); });

  /* End of OpenSim::SimmSpline class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class OpenSim::Sine
   */

  DEBUG_MSG("Adding wrapper for OpenSim::Sine * OpenSim::Sine::safeDownCast(OpenSim::Object *) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::Sine * OpenSim::Sine::safeDownCast(OpenSim::Object *)
  // defined in /opt/opensim-core/OpenSim/Common/Sine.h:47:1
  t142.method("OpenSim!Sine!safeDownCast", static_cast<OpenSim::Sine * (*)(OpenSim::Object *) >(&OpenSim::Sine::safeDownCast));

  DEBUG_MSG("Adding wrapper for void OpenSim::Sine::assign(OpenSim::Object &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Sine::assign(OpenSim::Object &)
  // defined in /opt/opensim-core/OpenSim/Common/Sine.h:47:1
  t142.method("assign", static_cast<void (OpenSim::Sine::*)(OpenSim::Object &) >(&OpenSim::Sine::assign));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::Sine::getClassName() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::Sine::getClassName()
  // defined in /opt/opensim-core/OpenSim/Common/Sine.h:47:1
  t142.method("OpenSim!Sine!getClassName", static_cast<const std::string & (*)() >(&OpenSim::Sine::getClassName));

  DEBUG_MSG("Adding wrapper for OpenSim::Sine * OpenSim::Sine::clone() (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::Sine * OpenSim::Sine::clone()
  // defined in /opt/opensim-core/OpenSim/Common/Sine.h:47:1
  t142.method("clone", static_cast<OpenSim::Sine * (OpenSim::Sine::*)()  const>(&OpenSim::Sine::clone));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::Sine::getConcreteClassName() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::Sine::getConcreteClassName()
  // defined in /opt/opensim-core/OpenSim/Common/Sine.h:47:1
  t142.method("getConcreteClassName", static_cast<const std::string & (OpenSim::Sine::*)()  const>(&OpenSim::Sine::getConcreteClassName));


  DEBUG_MSG("Adding wrapper for void OpenSim::Sine::Sine(double, double, double, double) (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Sine.h:75:5
  t142.constructor<double, double, double>(/*finalize=*/true);
  t142.constructor<double, double, double, double>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for int OpenSim::Sine::getArgumentSize() (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::Sine::getArgumentSize()
  // defined in /opt/opensim-core/OpenSim/Common/Sine.h:104:9
  t142.method("getArgumentSize", static_cast<int (OpenSim::Sine::*)()  const>(&OpenSim::Sine::getArgumentSize));

  DEBUG_MSG("Adding wrapper for int OpenSim::Sine::getMaxDerivativeOrder() (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::Sine::getMaxDerivativeOrder()
  // defined in /opt/opensim-core/OpenSim/Common/Sine.h:105:9
  t142.method("getMaxDerivativeOrder", static_cast<int (OpenSim::Sine::*)()  const>(&OpenSim::Sine::getMaxDerivativeOrder));

  /* End of OpenSim::Sine class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class OpenSim::SmoothSegmentedFunction
   */

  DEBUG_MSG("Adding wrapper for double OpenSim::SmoothSegmentedFunction::calcValue(double) (" __HERE__ ")");
  // signature to use in the veto list: double OpenSim::SmoothSegmentedFunction::calcValue(double)
  // defined in /opt/opensim-core/OpenSim/Common/SmoothSegmentedFunction.h:95:15
  t143.method("calcValue", static_cast<double (OpenSim::SmoothSegmentedFunction::*)(double)  const>(&OpenSim::SmoothSegmentedFunction::calcValue));

  DEBUG_MSG("Adding wrapper for double OpenSim::SmoothSegmentedFunction::calcDerivative(double, int) (" __HERE__ ")");
  // signature to use in the veto list: double OpenSim::SmoothSegmentedFunction::calcDerivative(double, int)
  // defined in /opt/opensim-core/OpenSim/Common/SmoothSegmentedFunction.h:123:15
  t143.method("calcDerivative", static_cast<double (OpenSim::SmoothSegmentedFunction::*)(double, int)  const>(&OpenSim::SmoothSegmentedFunction::calcDerivative));

  DEBUG_MSG("Adding wrapper for double OpenSim::SmoothSegmentedFunction::calcIntegral(double) (" __HERE__ ")");
  // signature to use in the veto list: double OpenSim::SmoothSegmentedFunction::calcIntegral(double)
  // defined in /opt/opensim-core/OpenSim/Common/SmoothSegmentedFunction.h:158:15
  t143.method("calcIntegral", static_cast<double (OpenSim::SmoothSegmentedFunction::*)(double)  const>(&OpenSim::SmoothSegmentedFunction::calcIntegral));

  DEBUG_MSG("Adding wrapper for bool OpenSim::SmoothSegmentedFunction::isIntegralAvailable() (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::SmoothSegmentedFunction::isIntegralAvailable()
  // defined in /opt/opensim-core/OpenSim/Common/SmoothSegmentedFunction.h:166:13
  t143.method("isIntegralAvailable", static_cast<bool (OpenSim::SmoothSegmentedFunction::*)()  const>(&OpenSim::SmoothSegmentedFunction::isIntegralAvailable));

  DEBUG_MSG("Adding wrapper for bool OpenSim::SmoothSegmentedFunction::isIntegralComputedLeftToRight() (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::SmoothSegmentedFunction::isIntegralComputedLeftToRight()
  // defined in /opt/opensim-core/OpenSim/Common/SmoothSegmentedFunction.h:177:13
  t143.method("isIntegralComputedLeftToRight", static_cast<bool (OpenSim::SmoothSegmentedFunction::*)()  const>(&OpenSim::SmoothSegmentedFunction::isIntegralComputedLeftToRight));

  DEBUG_MSG("Adding wrapper for std::string OpenSim::SmoothSegmentedFunction::getName() (" __HERE__ ")");
  // signature to use in the veto list: std::string OpenSim::SmoothSegmentedFunction::getName()
  // defined in /opt/opensim-core/OpenSim/Common/SmoothSegmentedFunction.h:184:20
  t143.method("getName", static_cast<std::string (OpenSim::SmoothSegmentedFunction::*)()  const>(&OpenSim::SmoothSegmentedFunction::getName));

  DEBUG_MSG("Adding wrapper for void OpenSim::SmoothSegmentedFunction::setName(std::string &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::SmoothSegmentedFunction::setName(std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/SmoothSegmentedFunction.h:186:13
  t143.method("setName", static_cast<void (OpenSim::SmoothSegmentedFunction::*)(std::string &) >(&OpenSim::SmoothSegmentedFunction::setName));

  DEBUG_MSG("Adding wrapper for void OpenSim::SmoothSegmentedFunction::printMuscleCurveToCSVFile(const std::string &, double, double) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::SmoothSegmentedFunction::printMuscleCurveToCSVFile(const std::string &, double, double)
  // defined in /opt/opensim-core/OpenSim/Common/SmoothSegmentedFunction.h:262:13
  t143.method("printMuscleCurveToCSVFile", static_cast<void (OpenSim::SmoothSegmentedFunction::*)(const std::string &, double, double)  const>(&OpenSim::SmoothSegmentedFunction::printMuscleCurveToCSVFile));

  /* End of OpenSim::SmoothSegmentedFunction class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class OpenSim::SmoothSegmentedFunctionFactory
   */

  DEBUG_MSG("Adding wrapper for OpenSim::SmoothSegmentedFunction * OpenSim::SmoothSegmentedFunctionFactory::createFiberActiveForceLengthCurve(double, double, double, double, double, double, double, bool, const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::SmoothSegmentedFunction * OpenSim::SmoothSegmentedFunctionFactory::createFiberActiveForceLengthCurve(double, double, double, double, double, double, double, bool, const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/SmoothSegmentedFunctionFactory.h:226:41
  t144.method("OpenSim!SmoothSegmentedFunctionFactory!createFiberActiveForceLengthCurve", static_cast<OpenSim::SmoothSegmentedFunction * (*)(double, double, double, double, double, double, double, bool, const std::string &) >(&OpenSim::SmoothSegmentedFunctionFactory::createFiberActiveForceLengthCurve));

  DEBUG_MSG("Adding wrapper for OpenSim::SmoothSegmentedFunction * OpenSim::SmoothSegmentedFunctionFactory::createFiberForceVelocityCurve(double, double, double, double, double, double, double, double, bool, const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::SmoothSegmentedFunction * OpenSim::SmoothSegmentedFunctionFactory::createFiberForceVelocityCurve(double, double, double, double, double, double, double, double, bool, const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/SmoothSegmentedFunctionFactory.h:356:41
  t144.method("OpenSim!SmoothSegmentedFunctionFactory!createFiberForceVelocityCurve", static_cast<OpenSim::SmoothSegmentedFunction * (*)(double, double, double, double, double, double, double, double, bool, const std::string &) >(&OpenSim::SmoothSegmentedFunctionFactory::createFiberForceVelocityCurve));

  DEBUG_MSG("Adding wrapper for OpenSim::SmoothSegmentedFunction * OpenSim::SmoothSegmentedFunctionFactory::createFiberForceVelocityInverseCurve(double, double, double, double, double, double, double, double, bool, const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::SmoothSegmentedFunction * OpenSim::SmoothSegmentedFunctionFactory::createFiberForceVelocityInverseCurve(double, double, double, double, double, double, double, double, bool, const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/SmoothSegmentedFunctionFactory.h:381:41
  t144.method("OpenSim!SmoothSegmentedFunctionFactory!createFiberForceVelocityInverseCurve", static_cast<OpenSim::SmoothSegmentedFunction * (*)(double, double, double, double, double, double, double, double, bool, const std::string &) >(&OpenSim::SmoothSegmentedFunctionFactory::createFiberForceVelocityInverseCurve));

  DEBUG_MSG("Adding wrapper for OpenSim::SmoothSegmentedFunction * OpenSim::SmoothSegmentedFunctionFactory::createFiberCompressiveForcePennationCurve(double, double, double, bool, const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::SmoothSegmentedFunction * OpenSim::SmoothSegmentedFunctionFactory::createFiberCompressiveForcePennationCurve(double, double, double, bool, const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/SmoothSegmentedFunctionFactory.h:459:13
  t144.method("OpenSim!SmoothSegmentedFunctionFactory!createFiberCompressiveForcePennationCurve", static_cast<OpenSim::SmoothSegmentedFunction * (*)(double, double, double, bool, const std::string &) >(&OpenSim::SmoothSegmentedFunctionFactory::createFiberCompressiveForcePennationCurve));

  DEBUG_MSG("Adding wrapper for OpenSim::SmoothSegmentedFunction * OpenSim::SmoothSegmentedFunctionFactory::createFiberCompressiveForceCosPennationCurve(double, double, double, bool, const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::SmoothSegmentedFunction * OpenSim::SmoothSegmentedFunctionFactory::createFiberCompressiveForceCosPennationCurve(double, double, double, bool, const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/SmoothSegmentedFunctionFactory.h:536:13
  t144.method("OpenSim!SmoothSegmentedFunctionFactory!createFiberCompressiveForceCosPennationCurve", static_cast<OpenSim::SmoothSegmentedFunction * (*)(double, double, double, bool, const std::string &) >(&OpenSim::SmoothSegmentedFunctionFactory::createFiberCompressiveForceCosPennationCurve));

  DEBUG_MSG("Adding wrapper for OpenSim::SmoothSegmentedFunction * OpenSim::SmoothSegmentedFunctionFactory::createFiberCompressiveForceLengthCurve(double, double, double, bool, const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::SmoothSegmentedFunction * OpenSim::SmoothSegmentedFunctionFactory::createFiberCompressiveForceLengthCurve(double, double, double, bool, const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/SmoothSegmentedFunctionFactory.h:609:13
  t144.method("OpenSim!SmoothSegmentedFunctionFactory!createFiberCompressiveForceLengthCurve", static_cast<OpenSim::SmoothSegmentedFunction * (*)(double, double, double, bool, const std::string &) >(&OpenSim::SmoothSegmentedFunctionFactory::createFiberCompressiveForceLengthCurve));

  DEBUG_MSG("Adding wrapper for OpenSim::SmoothSegmentedFunction * OpenSim::SmoothSegmentedFunctionFactory::createFiberForceLengthCurve(double, double, double, double, double, bool, const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::SmoothSegmentedFunction * OpenSim::SmoothSegmentedFunctionFactory::createFiberForceLengthCurve(double, double, double, double, double, bool, const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/SmoothSegmentedFunctionFactory.h:689:41
  t144.method("OpenSim!SmoothSegmentedFunctionFactory!createFiberForceLengthCurve", static_cast<OpenSim::SmoothSegmentedFunction * (*)(double, double, double, double, double, bool, const std::string &) >(&OpenSim::SmoothSegmentedFunctionFactory::createFiberForceLengthCurve));

  DEBUG_MSG("Adding wrapper for OpenSim::SmoothSegmentedFunction * OpenSim::SmoothSegmentedFunctionFactory::createTendonForceLengthCurve(double, double, double, double, bool, const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::SmoothSegmentedFunction * OpenSim::SmoothSegmentedFunctionFactory::createTendonForceLengthCurve(double, double, double, double, bool, const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/SmoothSegmentedFunctionFactory.h:766:12
  t144.method("OpenSim!SmoothSegmentedFunctionFactory!createTendonForceLengthCurve", static_cast<OpenSim::SmoothSegmentedFunction * (*)(double, double, double, double, bool, const std::string &) >(&OpenSim::SmoothSegmentedFunctionFactory::createTendonForceLengthCurve));

  /* End of OpenSim::SmoothSegmentedFunctionFactory class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class OpenSim::StateVector
   */


  DEBUG_MSG("Adding wrapper for void OpenSim::StateVector::StateVector(const OpenSim::StateVector &) (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/StateVector.h:73:5
  t145.constructor<const OpenSim::StateVector &>(/*finalize=*/true);


  DEBUG_MSG("Adding wrapper for void OpenSim::StateVector::StateVector(double) (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/StateVector.h:76:5
  t145.constructor<double>(/*finalize=*/true);


  DEBUG_MSG("Adding wrapper for void OpenSim::StateVector::StateVector(double, const SimTK::Vector_<double> &) (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/StateVector.h:77:5
  t145.constructor<double, const SimTK::Vector_<double> &>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for OpenSim::StateVector & OpenSim::StateVector::operator=(const OpenSim::StateVector &) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::StateVector & OpenSim::StateVector::operator=(const OpenSim::StateVector &)
  // defined in /opt/opensim-core/OpenSim/Common/StateVector.h:87:18
  t145.method("assign", static_cast<OpenSim::StateVector & (OpenSim::StateVector::*)(const OpenSim::StateVector &) >(&OpenSim::StateVector::operator=));
  types.set_override_module(jl_base_module);

  DEBUG_MSG("Adding wrapper for bool OpenSim::StateVector::operator==(const OpenSim::StateVector &) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::StateVector::operator==(const OpenSim::StateVector &)
  // defined in /opt/opensim-core/OpenSim/Common/StateVector.h:88:10
  t145.method("==", static_cast<bool (OpenSim::StateVector::*)(const OpenSim::StateVector &)  const>(&OpenSim::StateVector::operator==));

  DEBUG_MSG("Adding wrapper for bool OpenSim::StateVector::operator<(const OpenSim::StateVector &) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::StateVector::operator<(const OpenSim::StateVector &)
  // defined in /opt/opensim-core/OpenSim/Common/StateVector.h:89:10
  t145.method("<", static_cast<bool (OpenSim::StateVector::*)(const OpenSim::StateVector &)  const>(&OpenSim::StateVector::operator<));

  types.unset_override_module();

  DEBUG_MSG("Adding wrapper for void OpenSim::StateVector::setStates(double, const SimTK::Vector_<double> &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::StateVector::setStates(double, const SimTK::Vector_<double> &)
  // defined in /opt/opensim-core/OpenSim/Common/StateVector.h:100:10
  t145.method("setStates", static_cast<void (OpenSim::StateVector::*)(double, const SimTK::Vector_<double> &) >(&OpenSim::StateVector::setStates));

  DEBUG_MSG("Adding wrapper for int OpenSim::StateVector::getSize() (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::StateVector::getSize()
  // defined in /opt/opensim-core/OpenSim/Common/StateVector.h:101:9
  t145.method("getSize", static_cast<int (OpenSim::StateVector::*)()  const>(&OpenSim::StateVector::getSize));

  DEBUG_MSG("Adding wrapper for void OpenSim::StateVector::setTime(double) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::StateVector::setTime(double)
  // defined in /opt/opensim-core/OpenSim/Common/StateVector.h:102:10
  t145.method("setTime", static_cast<void (OpenSim::StateVector::*)(double) >(&OpenSim::StateVector::setTime));

  DEBUG_MSG("Adding wrapper for double OpenSim::StateVector::getTime() (" __HERE__ ")");
  // signature to use in the veto list: double OpenSim::StateVector::getTime()
  // defined in /opt/opensim-core/OpenSim/Common/StateVector.h:103:13
  t145.method("getTime", static_cast<double (OpenSim::StateVector::*)()  const>(&OpenSim::StateVector::getTime));

  DEBUG_MSG("Adding wrapper for int OpenSim::StateVector::getDataValue(int, double &) (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::StateVector::getDataValue(int, double &)
  // defined in /opt/opensim-core/OpenSim/Common/StateVector.h:104:9
  t145.method("getDataValue", static_cast<int (OpenSim::StateVector::*)(int, double &) >(&OpenSim::StateVector::getDataValue));

  DEBUG_MSG("Adding wrapper for void OpenSim::StateVector::setDataValue(int, double &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::StateVector::setDataValue(int, double &)
  // defined in /opt/opensim-core/OpenSim/Common/StateVector.h:105:10
  t145.method("setDataValue", static_cast<void (OpenSim::StateVector::*)(int, double &) >(&OpenSim::StateVector::setDataValue));

  DEBUG_MSG("Adding wrapper for void OpenSim::StateVector::shiftTime(double) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::StateVector::shiftTime(double)
  // defined in /opt/opensim-core/OpenSim/Common/StateVector.h:113:10
  t145.method("shiftTime", static_cast<void (OpenSim::StateVector::*)(double) >(&OpenSim::StateVector::shiftTime));

  DEBUG_MSG("Adding wrapper for void OpenSim::StateVector::scaleTime(double) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::StateVector::scaleTime(double)
  // defined in /opt/opensim-core/OpenSim/Common/StateVector.h:114:10
  t145.method("scaleTime", static_cast<void (OpenSim::StateVector::*)(double) >(&OpenSim::StateVector::scaleTime));

  DEBUG_MSG("Adding wrapper for void OpenSim::StateVector::add(double) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::StateVector::add(double)
  // defined in /opt/opensim-core/OpenSim/Common/StateVector.h:115:10
  t145.method("add", static_cast<void (OpenSim::StateVector::*)(double) >(&OpenSim::StateVector::add));

  DEBUG_MSG("Adding wrapper for void OpenSim::StateVector::add(const SimTK::Vector_<double> &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::StateVector::add(const SimTK::Vector_<double> &)
  // defined in /opt/opensim-core/OpenSim/Common/StateVector.h:116:10
  t145.method("add", static_cast<void (OpenSim::StateVector::*)(const SimTK::Vector_<double> &) >(&OpenSim::StateVector::add));

  DEBUG_MSG("Adding wrapper for void OpenSim::StateVector::add(int, double) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::StateVector::add(int, double)
  // defined in /opt/opensim-core/OpenSim/Common/StateVector.h:117:10
  t145.method("add", static_cast<void (OpenSim::StateVector::*)(int, double) >(&OpenSim::StateVector::add));

  DEBUG_MSG("Adding wrapper for void OpenSim::StateVector::add(OpenSim::StateVector *) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::StateVector::add(OpenSim::StateVector *)
  // defined in /opt/opensim-core/OpenSim/Common/StateVector.h:118:10
  t145.method("add", static_cast<void (OpenSim::StateVector::*)(OpenSim::StateVector *) >(&OpenSim::StateVector::add));

  DEBUG_MSG("Adding wrapper for void OpenSim::StateVector::subtract(double) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::StateVector::subtract(double)
  // defined in /opt/opensim-core/OpenSim/Common/StateVector.h:119:10
  t145.method("subtract", static_cast<void (OpenSim::StateVector::*)(double) >(&OpenSim::StateVector::subtract));

  DEBUG_MSG("Adding wrapper for void OpenSim::StateVector::subtract(const SimTK::Vector_<double> &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::StateVector::subtract(const SimTK::Vector_<double> &)
  // defined in /opt/opensim-core/OpenSim/Common/StateVector.h:120:10
  t145.method("subtract", static_cast<void (OpenSim::StateVector::*)(const SimTK::Vector_<double> &) >(&OpenSim::StateVector::subtract));

  DEBUG_MSG("Adding wrapper for void OpenSim::StateVector::subtract(OpenSim::StateVector *) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::StateVector::subtract(OpenSim::StateVector *)
  // defined in /opt/opensim-core/OpenSim/Common/StateVector.h:121:10
  t145.method("subtract", static_cast<void (OpenSim::StateVector::*)(OpenSim::StateVector *) >(&OpenSim::StateVector::subtract));

  DEBUG_MSG("Adding wrapper for void OpenSim::StateVector::multiply(double) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::StateVector::multiply(double)
  // defined in /opt/opensim-core/OpenSim/Common/StateVector.h:122:10
  t145.method("multiply", static_cast<void (OpenSim::StateVector::*)(double) >(&OpenSim::StateVector::multiply));

  DEBUG_MSG("Adding wrapper for void OpenSim::StateVector::multiply(const SimTK::Vector_<double> &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::StateVector::multiply(const SimTK::Vector_<double> &)
  // defined in /opt/opensim-core/OpenSim/Common/StateVector.h:123:10
  t145.method("multiply", static_cast<void (OpenSim::StateVector::*)(const SimTK::Vector_<double> &) >(&OpenSim::StateVector::multiply));

  DEBUG_MSG("Adding wrapper for void OpenSim::StateVector::multiply(OpenSim::StateVector *) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::StateVector::multiply(OpenSim::StateVector *)
  // defined in /opt/opensim-core/OpenSim/Common/StateVector.h:124:10
  t145.method("multiply", static_cast<void (OpenSim::StateVector::*)(OpenSim::StateVector *) >(&OpenSim::StateVector::multiply));

  DEBUG_MSG("Adding wrapper for void OpenSim::StateVector::divide(double) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::StateVector::divide(double)
  // defined in /opt/opensim-core/OpenSim/Common/StateVector.h:125:10
  t145.method("divide", static_cast<void (OpenSim::StateVector::*)(double) >(&OpenSim::StateVector::divide));

  DEBUG_MSG("Adding wrapper for void OpenSim::StateVector::divide(const SimTK::Vector_<double> &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::StateVector::divide(const SimTK::Vector_<double> &)
  // defined in /opt/opensim-core/OpenSim/Common/StateVector.h:126:10
  t145.method("divide", static_cast<void (OpenSim::StateVector::*)(const SimTK::Vector_<double> &) >(&OpenSim::StateVector::divide));

  DEBUG_MSG("Adding wrapper for void OpenSim::StateVector::divide(OpenSim::StateVector *) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::StateVector::divide(OpenSim::StateVector *)
  // defined in /opt/opensim-core/OpenSim/Common/StateVector.h:127:10
  t145.method("divide", static_cast<void (OpenSim::StateVector::*)(OpenSim::StateVector *) >(&OpenSim::StateVector::divide));

  DEBUG_MSG("Adding wrapper for int OpenSim::StateVector::print(FILE *) (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::StateVector::print(FILE *)
  // defined in /opt/opensim-core/OpenSim/Common/StateVector.h:133:9
  t145.method("print", static_cast<int (OpenSim::StateVector::*)(FILE *)  const>(&OpenSim::StateVector::print));

  /* End of OpenSim::StateVector class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class OpenSim::StepFunction
   */

  DEBUG_MSG("Adding wrapper for OpenSim::StepFunction * OpenSim::StepFunction::safeDownCast(OpenSim::Object *) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::StepFunction * OpenSim::StepFunction::safeDownCast(OpenSim::Object *)
  // defined in /opt/opensim-core/OpenSim/Common/StepFunction.h:60:1
  t148.method("OpenSim!StepFunction!safeDownCast", static_cast<OpenSim::StepFunction * (*)(OpenSim::Object *) >(&OpenSim::StepFunction::safeDownCast));

  DEBUG_MSG("Adding wrapper for void OpenSim::StepFunction::assign(OpenSim::Object &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::StepFunction::assign(OpenSim::Object &)
  // defined in /opt/opensim-core/OpenSim/Common/StepFunction.h:60:1
  t148.method("assign", static_cast<void (OpenSim::StepFunction::*)(OpenSim::Object &) >(&OpenSim::StepFunction::assign));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::StepFunction::getClassName() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::StepFunction::getClassName()
  // defined in /opt/opensim-core/OpenSim/Common/StepFunction.h:60:1
  t148.method("OpenSim!StepFunction!getClassName", static_cast<const std::string & (*)() >(&OpenSim::StepFunction::getClassName));

  DEBUG_MSG("Adding wrapper for OpenSim::StepFunction * OpenSim::StepFunction::clone() (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::StepFunction * OpenSim::StepFunction::clone()
  // defined in /opt/opensim-core/OpenSim/Common/StepFunction.h:60:1
  t148.method("clone", static_cast<OpenSim::StepFunction * (OpenSim::StepFunction::*)()  const>(&OpenSim::StepFunction::clone));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::StepFunction::getConcreteClassName() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::StepFunction::getConcreteClassName()
  // defined in /opt/opensim-core/OpenSim/Common/StepFunction.h:60:1
  t148.method("getConcreteClassName", static_cast<const std::string & (OpenSim::StepFunction::*)()  const>(&OpenSim::StepFunction::getConcreteClassName));


  DEBUG_MSG("Adding wrapper for void OpenSim::StepFunction::StepFunction(double, double, double, double) (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/StepFunction.h:86:5
  t148.constructor<double, double>(/*finalize=*/true);
  t148.constructor<double, double, double>(/*finalize=*/true);
  t148.constructor<double, double, double, double>(/*finalize=*/true);


  DEBUG_MSG("Adding wrapper for void OpenSim::StepFunction::StepFunction(const OpenSim::StepFunction &) (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/StepFunction.h:87:5
  t148.constructor<const OpenSim::StepFunction &>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for OpenSim::StepFunction & OpenSim::StepFunction::operator=(const OpenSim::StepFunction &) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::StepFunction & OpenSim::StepFunction::operator=(const OpenSim::StepFunction &)
  // defined in /opt/opensim-core/OpenSim/Common/StepFunction.h:100:19
  t148.method("assign", static_cast<OpenSim::StepFunction & (OpenSim::StepFunction::*)(const OpenSim::StepFunction &) >(&OpenSim::StepFunction::operator=));

  DEBUG_MSG("Adding wrapper for void OpenSim::StepFunction::setStartTime(double) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::StepFunction::setStartTime(double)
  // defined in /opt/opensim-core/OpenSim/Common/StepFunction.h:108:10
  t148.method("setStartTime", static_cast<void (OpenSim::StepFunction::*)(double) >(&OpenSim::StepFunction::setStartTime));

  DEBUG_MSG("Adding wrapper for double OpenSim::StepFunction::getStartTime() (" __HERE__ ")");
  // signature to use in the veto list: double OpenSim::StepFunction::getStartTime()
  // defined in /opt/opensim-core/OpenSim/Common/StepFunction.h:111:12
  t148.method("getStartTime", static_cast<double (OpenSim::StepFunction::*)()  const>(&OpenSim::StepFunction::getStartTime));

  DEBUG_MSG("Adding wrapper for void OpenSim::StepFunction::setEndTime(double) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::StepFunction::setEndTime(double)
  // defined in /opt/opensim-core/OpenSim/Common/StepFunction.h:115:10
  t148.method("setEndTime", static_cast<void (OpenSim::StepFunction::*)(double) >(&OpenSim::StepFunction::setEndTime));

  DEBUG_MSG("Adding wrapper for double OpenSim::StepFunction::getEndTime() (" __HERE__ ")");
  // signature to use in the veto list: double OpenSim::StepFunction::getEndTime()
  // defined in /opt/opensim-core/OpenSim/Common/StepFunction.h:118:12
  t148.method("getEndTime", static_cast<double (OpenSim::StepFunction::*)()  const>(&OpenSim::StepFunction::getEndTime));

  DEBUG_MSG("Adding wrapper for void OpenSim::StepFunction::setStartValue(double) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::StepFunction::setStartValue(double)
  // defined in /opt/opensim-core/OpenSim/Common/StepFunction.h:122:10
  t148.method("setStartValue", static_cast<void (OpenSim::StepFunction::*)(double) >(&OpenSim::StepFunction::setStartValue));

  DEBUG_MSG("Adding wrapper for double OpenSim::StepFunction::getStartValue() (" __HERE__ ")");
  // signature to use in the veto list: double OpenSim::StepFunction::getStartValue()
  // defined in /opt/opensim-core/OpenSim/Common/StepFunction.h:125:12
  t148.method("getStartValue", static_cast<double (OpenSim::StepFunction::*)()  const>(&OpenSim::StepFunction::getStartValue));

  DEBUG_MSG("Adding wrapper for void OpenSim::StepFunction::setEndValue(double) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::StepFunction::setEndValue(double)
  // defined in /opt/opensim-core/OpenSim/Common/StepFunction.h:129:10
  t148.method("setEndValue", static_cast<void (OpenSim::StepFunction::*)(double) >(&OpenSim::StepFunction::setEndValue));

  DEBUG_MSG("Adding wrapper for double OpenSim::StepFunction::getEndValue() (" __HERE__ ")");
  // signature to use in the veto list: double OpenSim::StepFunction::getEndValue()
  // defined in /opt/opensim-core/OpenSim/Common/StepFunction.h:132:12
  t148.method("getEndValue", static_cast<double (OpenSim::StepFunction::*)()  const>(&OpenSim::StepFunction::getEndValue));

  /* End of OpenSim::StepFunction class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class OpenSim::Storage
   */

  DEBUG_MSG("Adding wrapper for OpenSim::Storage * OpenSim::Storage::safeDownCast(OpenSim::Object *) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::Storage * OpenSim::Storage::safeDownCast(OpenSim::Object *)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:65:1
  t117.method("OpenSim!Storage!safeDownCast", static_cast<OpenSim::Storage * (*)(OpenSim::Object *) >(&OpenSim::Storage::safeDownCast));

  DEBUG_MSG("Adding wrapper for void OpenSim::Storage::assign(OpenSim::Object &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Storage::assign(OpenSim::Object &)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:65:1
  t117.method("assign", static_cast<void (OpenSim::Storage::*)(OpenSim::Object &) >(&OpenSim::Storage::assign));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::Storage::getClassName() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::Storage::getClassName()
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:65:1
  t117.method("OpenSim!Storage!getClassName", static_cast<const std::string & (*)() >(&OpenSim::Storage::getClassName));

  DEBUG_MSG("Adding wrapper for OpenSim::Storage * OpenSim::Storage::clone() (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::Storage * OpenSim::Storage::clone()
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:65:1
  t117.method("clone", static_cast<OpenSim::Storage * (OpenSim::Storage::*)()  const>(&OpenSim::Storage::clone));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::Storage::getConcreteClassName() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::Storage::getConcreteClassName()
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:65:1
  t117.method("getConcreteClassName", static_cast<const std::string & (OpenSim::Storage::*)()  const>(&OpenSim::Storage::getConcreteClassName));


  DEBUG_MSG("Adding wrapper for void OpenSim::Storage::Storage(int, const std::string &) (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:113:14
  t117.constructor<int>(/*finalize=*/true);
  t117.constructor<int, const std::string &>(/*finalize=*/true);


  DEBUG_MSG("Adding wrapper for void OpenSim::Storage::Storage(const std::string &, bool) (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:130:5
  t117.constructor<const std::string &>(/*finalize=*/true);
  t117.constructor<const std::string &, bool>(/*finalize=*/true);


  DEBUG_MSG("Adding wrapper for void OpenSim::Storage::Storage(const OpenSim::Storage &, bool) (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:131:5
  t117.constructor<const OpenSim::Storage &>(/*finalize=*/true);
  t117.constructor<const OpenSim::Storage &, bool>(/*finalize=*/true);


  DEBUG_MSG("Adding wrapper for void OpenSim::Storage::Storage(const OpenSim::Storage &, int, int, const char *) (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:132:5
  t117.constructor<const OpenSim::Storage &, int, int>(/*finalize=*/true);
  t117.constructor<const OpenSim::Storage &, int, int, const char *>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for OpenSim::Storage & OpenSim::Storage::operator=(const OpenSim::Storage &) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::Storage & OpenSim::Storage::operator=(const OpenSim::Storage &)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:138:14
  t117.method("assign", static_cast<OpenSim::Storage & (OpenSim::Storage::*)(const OpenSim::Storage &) >(&OpenSim::Storage::operator=));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::Storage::getName() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::Storage::getName()
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:141:24
  t117.method("getName", static_cast<const std::string & (OpenSim::Storage::*)()  const>(&OpenSim::Storage::getName));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::Storage::getDescription() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::Storage::getDescription()
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:142:24
  t117.method("getDescription", static_cast<const std::string & (OpenSim::Storage::*)()  const>(&OpenSim::Storage::getDescription));

  DEBUG_MSG("Adding wrapper for void OpenSim::Storage::setName(const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Storage::setName(const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:143:10
  t117.method("setName", static_cast<void (OpenSim::Storage::*)(const std::string &) >(&OpenSim::Storage::setName));

  DEBUG_MSG("Adding wrapper for void OpenSim::Storage::setDescription(const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Storage::setDescription(const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:144:10
  t117.method("setDescription", static_cast<void (OpenSim::Storage::*)(const std::string &) >(&OpenSim::Storage::setDescription));

  DEBUG_MSG("Adding wrapper for const int & OpenSim::Storage::getLatestVersion() (" __HERE__ ")");
  // signature to use in the veto list: const int & OpenSim::Storage::getLatestVersion()
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:148:23
  t117.method("OpenSim!Storage!getLatestVersion", static_cast<const int & (*)() >(&OpenSim::Storage::getLatestVersion));

  DEBUG_MSG("Adding wrapper for const int & OpenSim::Storage::getFileVersion() (" __HERE__ ")");
  // signature to use in the veto list: const int & OpenSim::Storage::getFileVersion()
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:149:16
  t117.method("getFileVersion", static_cast<const int & (OpenSim::Storage::*)()  const>(&OpenSim::Storage::getFileVersion));

  DEBUG_MSG("Adding wrapper for int OpenSim::Storage::getSize() (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::Storage::getSize()
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:168:9
  t117.method("getSize", static_cast<int (OpenSim::Storage::*)()  const>(&OpenSim::Storage::getSize));

  DEBUG_MSG("Adding wrapper for int OpenSim::Storage::getSmallestNumberOfStates() (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::Storage::getSmallestNumberOfStates()
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:170:9
  t117.method("getSmallestNumberOfStates", static_cast<int (OpenSim::Storage::*)()  const>(&OpenSim::Storage::getSmallestNumberOfStates));

  DEBUG_MSG("Adding wrapper for OpenSim::StateVector * OpenSim::Storage::getStateVector(int) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::StateVector * OpenSim::Storage::getStateVector(int)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:171:18
  t117.method("getStateVector", static_cast<OpenSim::StateVector * (OpenSim::Storage::*)(int)  const>(&OpenSim::Storage::getStateVector));

  DEBUG_MSG("Adding wrapper for OpenSim::StateVector * OpenSim::Storage::getLastStateVector() (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::StateVector * OpenSim::Storage::getLastStateVector()
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:172:18
  t117.method("getLastStateVector", static_cast<OpenSim::StateVector * (OpenSim::Storage::*)()  const>(&OpenSim::Storage::getLastStateVector));

  DEBUG_MSG("Adding wrapper for double OpenSim::Storage::getFirstTime() (" __HERE__ ")");
  // signature to use in the veto list: double OpenSim::Storage::getFirstTime()
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:174:12
  t117.method("getFirstTime", static_cast<double (OpenSim::Storage::*)()  const>(&OpenSim::Storage::getFirstTime));

  DEBUG_MSG("Adding wrapper for double OpenSim::Storage::getLastTime() (" __HERE__ ")");
  // signature to use in the veto list: double OpenSim::Storage::getLastTime()
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:175:12
  t117.method("getLastTime", static_cast<double (OpenSim::Storage::*)()  const>(&OpenSim::Storage::getLastTime));

  DEBUG_MSG("Adding wrapper for double OpenSim::Storage::getMinTimeStep() (" __HERE__ ")");
  // signature to use in the veto list: double OpenSim::Storage::getMinTimeStep()
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:176:12
  t117.method("getMinTimeStep", static_cast<double (OpenSim::Storage::*)()  const>(&OpenSim::Storage::getMinTimeStep));

  DEBUG_MSG("Adding wrapper for bool OpenSim::Storage::getTime(int, double &, int) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::Storage::getTime(int, double &, int)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:177:10
  t117.method("getTime", static_cast<bool (OpenSim::Storage::*)(int, double &, int)  const>(&OpenSim::Storage::getTime));
  t117.method("getTime", [](OpenSim::Storage const& a, int arg0, double & arg1)->bool{ return a.getTime(arg0, arg1); });
  t117.method("getTime", [](OpenSim::Storage const* a, int arg0, double & arg1)->bool{ return a->getTime(arg0, arg1); });

  DEBUG_MSG("Adding wrapper for int OpenSim::Storage::getTimeColumn(double *&, int) (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::Storage::getTimeColumn(double *&, int)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:178:17
  t117.method("getTimeColumn", static_cast<int (OpenSim::Storage::*)(double *&, int)  const>(&OpenSim::Storage::getTimeColumn));
  t117.method("getTimeColumn", [](OpenSim::Storage const& a, double *& arg0)->int{ return a.getTimeColumn(arg0); });
  t117.method("getTimeColumn", [](OpenSim::Storage const* a, double *& arg0)->int{ return a->getTimeColumn(arg0); });

  DEBUG_MSG("Adding wrapper for void OpenSim::Storage::addKeyValuePair(const std::string &, const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Storage::addKeyValuePair(const std::string &, const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:182:10
  t117.method("addKeyValuePair", static_cast<void (OpenSim::Storage::*)(const std::string &, const std::string &) >(&OpenSim::Storage::addKeyValuePair));

  DEBUG_MSG("Adding wrapper for void OpenSim::Storage::getValueForKey(const std::string &, std::string &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Storage::getValueForKey(const std::string &, std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:183:10
  t117.method("getValueForKey", static_cast<void (OpenSim::Storage::*)(const std::string &, std::string &)  const>(&OpenSim::Storage::getValueForKey));

  DEBUG_MSG("Adding wrapper for bool OpenSim::Storage::hasKey(const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::Storage::hasKey(const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:184:10
  t117.method("hasKey", static_cast<bool (OpenSim::Storage::*)(const std::string &)  const>(&OpenSim::Storage::hasKey));

  DEBUG_MSG("Adding wrapper for bool OpenSim::Storage::isInDegrees() (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::Storage::isInDegrees()
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:185:10
  t117.method("isInDegrees", static_cast<bool (OpenSim::Storage::*)()  const>(&OpenSim::Storage::isInDegrees));

  DEBUG_MSG("Adding wrapper for void OpenSim::Storage::setInDegrees(const bool) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Storage::setInDegrees(const bool)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:186:10
  t117.method("setInDegrees", static_cast<void (OpenSim::Storage::*)(const bool) >(&OpenSim::Storage::setInDegrees));

  DEBUG_MSG("Adding wrapper for int OpenSim::Storage::getData(int, int, double &) (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::Storage::getData(int, int, double &)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:188:9
  t117.method("getData", static_cast<int (OpenSim::Storage::*)(int, int, double &)  const>(&OpenSim::Storage::getData));

  DEBUG_MSG("Adding wrapper for int OpenSim::Storage::getData(int, int, int, double **) (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::Storage::getData(int, int, int, double **)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:189:9
  t117.method("getData", static_cast<int (OpenSim::Storage::*)(int, int, int, double **)  const>(&OpenSim::Storage::getData));

  DEBUG_MSG("Adding wrapper for int OpenSim::Storage::getData(int, int, int, double *) (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::Storage::getData(int, int, int, double *)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:191:9
  t117.method("getData", static_cast<int (OpenSim::Storage::*)(int, int, int, double *)  const>(&OpenSim::Storage::getData));

  DEBUG_MSG("Adding wrapper for int OpenSim::Storage::getData(int, int, double **) (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::Storage::getData(int, int, double **)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:192:9
  t117.method("getData", static_cast<int (OpenSim::Storage::*)(int, int, double **)  const>(&OpenSim::Storage::getData));

  DEBUG_MSG("Adding wrapper for int OpenSim::Storage::getData(int, int, double *) (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::Storage::getData(int, int, double *)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:193:9
  t117.method("getData", static_cast<int (OpenSim::Storage::*)(int, int, double *)  const>(&OpenSim::Storage::getData));

  DEBUG_MSG("Adding wrapper for int OpenSim::Storage::getDataAtTime(double, int, double **) (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::Storage::getDataAtTime(double, int, double **)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:197:9
  t117.method("getDataAtTime", static_cast<int (OpenSim::Storage::*)(double, int, double **)  const>(&OpenSim::Storage::getDataAtTime));

  DEBUG_MSG("Adding wrapper for int OpenSim::Storage::getDataAtTime(double, int, double *) (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::Storage::getDataAtTime(double, int, double *)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:198:9
  t117.method("getDataAtTime", static_cast<int (OpenSim::Storage::*)(double, int, double *)  const>(&OpenSim::Storage::getDataAtTime));

  DEBUG_MSG("Adding wrapper for int OpenSim::Storage::getDataColumn(int, double *&) (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::Storage::getDataColumn(int, double *&)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:201:9
  t117.method("getDataColumn", static_cast<int (OpenSim::Storage::*)(int, double *&)  const>(&OpenSim::Storage::getDataColumn));

  DEBUG_MSG("Adding wrapper for void OpenSim::Storage::setDataColumnToFixedValue(const std::string &, double) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Storage::setDataColumnToFixedValue(const std::string &, double)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:204:10
  t117.method("setDataColumnToFixedValue", static_cast<void (OpenSim::Storage::*)(const std::string &, double) >(&OpenSim::Storage::setDataColumnToFixedValue));

  DEBUG_MSG("Adding wrapper for int OpenSim::Storage::getDataColumn(const std::string &, double *&) (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::Storage::getDataColumn(const std::string &, double *&)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:206:9
  t117.method("getDataColumn", static_cast<int (OpenSim::Storage::*)(const std::string &, double *&)  const>(&OpenSim::Storage::getDataColumn));

  DEBUG_MSG("Adding wrapper for void OpenSim::Storage::setStepInterval(int) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Storage::setStepInterval(int)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:231:10
  t117.method("setStepInterval", static_cast<void (OpenSim::Storage::*)(int) >(&OpenSim::Storage::setStepInterval));

  DEBUG_MSG("Adding wrapper for int OpenSim::Storage::getStepInterval() (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::Storage::getStepInterval()
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:232:9
  t117.method("getStepInterval", static_cast<int (OpenSim::Storage::*)()  const>(&OpenSim::Storage::getStepInterval));

  DEBUG_MSG("Adding wrapper for void OpenSim::Storage::setCapacityIncrement(int) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Storage::setCapacityIncrement(int)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:234:10
  t117.method("setCapacityIncrement", static_cast<void (OpenSim::Storage::*)(int) >(&OpenSim::Storage::setCapacityIncrement));

  DEBUG_MSG("Adding wrapper for int OpenSim::Storage::getCapacityIncrement() (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::Storage::getCapacityIncrement()
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:235:9
  t117.method("getCapacityIncrement", static_cast<int (OpenSim::Storage::*)()  const>(&OpenSim::Storage::getCapacityIncrement));

  DEBUG_MSG("Adding wrapper for void OpenSim::Storage::setWriteSIMMHeader(bool) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Storage::setWriteSIMMHeader(bool)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:237:10
  t117.method("setWriteSIMMHeader", static_cast<void (OpenSim::Storage::*)(bool) >(&OpenSim::Storage::setWriteSIMMHeader));

  DEBUG_MSG("Adding wrapper for bool OpenSim::Storage::getWriteSIMMHeader() (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::Storage::getWriteSIMMHeader()
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:238:10
  t117.method("getWriteSIMMHeader", static_cast<bool (OpenSim::Storage::*)()  const>(&OpenSim::Storage::getWriteSIMMHeader));

  DEBUG_MSG("Adding wrapper for void OpenSim::Storage::setHeaderToken(const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Storage::setHeaderToken(const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:239:10
  t117.method("setHeaderToken", static_cast<void (OpenSim::Storage::*)(const std::string &) >(&OpenSim::Storage::setHeaderToken));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::Storage::getHeaderToken() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::Storage::getHeaderToken()
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:240:24
  t117.method("getHeaderToken", static_cast<const std::string & (OpenSim::Storage::*)()  const>(&OpenSim::Storage::getHeaderToken));

  DEBUG_MSG("Adding wrapper for int OpenSim::Storage::getStateIndex(const std::string &, int) (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::Storage::getStateIndex(const std::string &, int)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:252:9
  t117.method("getStateIndex", static_cast<int (OpenSim::Storage::*)(const std::string &, int)  const>(&OpenSim::Storage::getStateIndex));
  t117.method("getStateIndex", [](OpenSim::Storage const& a, const std::string & arg0)->int{ return a.getStateIndex(arg0); });
  t117.method("getStateIndex", [](OpenSim::Storage const* a, const std::string & arg0)->int{ return a->getStateIndex(arg0); });

  DEBUG_MSG("Adding wrapper for int OpenSim::Storage::reset(int) (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::Storage::reset(int)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:258:9
  t117.method("reset", static_cast<int (OpenSim::Storage::*)(int) >(&OpenSim::Storage::reset));
  t117.method("reset", [](OpenSim::Storage& a)->int{ return a.reset(); });
  t117.method("reset", [](OpenSim::Storage* a)->int{ return a->reset(); });

  DEBUG_MSG("Adding wrapper for int OpenSim::Storage::reset(double) (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::Storage::reset(double)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:259:9
  t117.method("reset", static_cast<int (OpenSim::Storage::*)(double) >(&OpenSim::Storage::reset));

  DEBUG_MSG("Adding wrapper for void OpenSim::Storage::purge() (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Storage::purge()
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:260:10
  t117.method("purge", static_cast<void (OpenSim::Storage::*)() >(&OpenSim::Storage::purge));

  DEBUG_MSG("Adding wrapper for void OpenSim::Storage::crop(const double, const double) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Storage::crop(const double, const double)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:261:10
  t117.method("crop", static_cast<void (OpenSim::Storage::*)(const double, const double) >(&OpenSim::Storage::crop));

  DEBUG_MSG("Adding wrapper for int OpenSim::Storage::append(const OpenSim::StateVector &, bool) (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::Storage::append(const OpenSim::StateVector &, bool)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:265:9
  t117.method("append", static_cast<int (OpenSim::Storage::*)(const OpenSim::StateVector &, bool) >(&OpenSim::Storage::append));
  t117.method("append", [](OpenSim::Storage& a, const OpenSim::StateVector & arg0)->int{ return a.append(arg0); });
  t117.method("append", [](OpenSim::Storage* a, const OpenSim::StateVector & arg0)->int{ return a->append(arg0); });

  DEBUG_MSG("Adding wrapper for int OpenSim::Storage::append(double, int, const double *, bool) (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::Storage::append(double, int, const double *, bool)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:267:9
  t117.method("append", static_cast<int (OpenSim::Storage::*)(double, int, const double *, bool) >(&OpenSim::Storage::append));
  t117.method("append", [](OpenSim::Storage& a, double arg0, int arg1, const double * arg2)->int{ return a.append(arg0, arg1, arg2); });
  t117.method("append", [](OpenSim::Storage* a, double arg0, int arg1, const double * arg2)->int{ return a->append(arg0, arg1, arg2); });

  DEBUG_MSG("Adding wrapper for int OpenSim::Storage::store(int, double, int, const double *) (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::Storage::store(int, double, int, const double *)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:273:9
  t117.method("store", static_cast<int (OpenSim::Storage::*)(int, double, int, const double *) >(&OpenSim::Storage::store));

  DEBUG_MSG("Adding wrapper for void OpenSim::Storage::shiftTime(double) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Storage::shiftTime(double)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:278:10
  t117.method("shiftTime", static_cast<void (OpenSim::Storage::*)(double) >(&OpenSim::Storage::shiftTime));

  DEBUG_MSG("Adding wrapper for void OpenSim::Storage::scaleTime(double) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Storage::scaleTime(double)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:279:10
  t117.method("scaleTime", static_cast<void (OpenSim::Storage::*)(double) >(&OpenSim::Storage::scaleTime));

  DEBUG_MSG("Adding wrapper for void OpenSim::Storage::add(double) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Storage::add(double)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:280:10
  t117.method("add", static_cast<void (OpenSim::Storage::*)(double) >(&OpenSim::Storage::add));

  DEBUG_MSG("Adding wrapper for void OpenSim::Storage::add(const SimTK::Vector_<double> &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Storage::add(const SimTK::Vector_<double> &)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:281:10
  t117.method("add", static_cast<void (OpenSim::Storage::*)(const SimTK::Vector_<double> &) >(&OpenSim::Storage::add));

  DEBUG_MSG("Adding wrapper for void OpenSim::Storage::add(int, double) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Storage::add(int, double)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:282:10
  t117.method("add", static_cast<void (OpenSim::Storage::*)(int, double) >(&OpenSim::Storage::add));

  DEBUG_MSG("Adding wrapper for void OpenSim::Storage::add(OpenSim::StateVector *) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Storage::add(OpenSim::StateVector *)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:283:10
  t117.method("add", static_cast<void (OpenSim::Storage::*)(OpenSim::StateVector *) >(&OpenSim::Storage::add));

  DEBUG_MSG("Adding wrapper for void OpenSim::Storage::add(OpenSim::Storage *) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Storage::add(OpenSim::Storage *)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:284:10
  t117.method("add", static_cast<void (OpenSim::Storage::*)(OpenSim::Storage *) >(&OpenSim::Storage::add));

  DEBUG_MSG("Adding wrapper for void OpenSim::Storage::subtract(double) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Storage::subtract(double)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:285:10
  t117.method("subtract", static_cast<void (OpenSim::Storage::*)(double) >(&OpenSim::Storage::subtract));

  DEBUG_MSG("Adding wrapper for void OpenSim::Storage::subtract(const SimTK::Vector_<double> &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Storage::subtract(const SimTK::Vector_<double> &)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:286:10
  t117.method("subtract", static_cast<void (OpenSim::Storage::*)(const SimTK::Vector_<double> &) >(&OpenSim::Storage::subtract));

  DEBUG_MSG("Adding wrapper for void OpenSim::Storage::subtract(OpenSim::StateVector *) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Storage::subtract(OpenSim::StateVector *)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:287:10
  t117.method("subtract", static_cast<void (OpenSim::Storage::*)(OpenSim::StateVector *) >(&OpenSim::Storage::subtract));

  DEBUG_MSG("Adding wrapper for void OpenSim::Storage::subtract(OpenSim::Storage *) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Storage::subtract(OpenSim::Storage *)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:288:10
  t117.method("subtract", static_cast<void (OpenSim::Storage::*)(OpenSim::Storage *) >(&OpenSim::Storage::subtract));

  DEBUG_MSG("Adding wrapper for void OpenSim::Storage::multiply(double) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Storage::multiply(double)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:289:10
  t117.method("multiply", static_cast<void (OpenSim::Storage::*)(double) >(&OpenSim::Storage::multiply));

  DEBUG_MSG("Adding wrapper for void OpenSim::Storage::multiplyColumn(int, double) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Storage::multiplyColumn(int, double)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:290:10
  t117.method("multiplyColumn", static_cast<void (OpenSim::Storage::*)(int, double) >(&OpenSim::Storage::multiplyColumn));

  DEBUG_MSG("Adding wrapper for void OpenSim::Storage::multiply(const SimTK::Vector_<double> &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Storage::multiply(const SimTK::Vector_<double> &)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:291:10
  t117.method("multiply", static_cast<void (OpenSim::Storage::*)(const SimTK::Vector_<double> &) >(&OpenSim::Storage::multiply));

  DEBUG_MSG("Adding wrapper for void OpenSim::Storage::multiply(OpenSim::StateVector *) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Storage::multiply(OpenSim::StateVector *)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:292:10
  t117.method("multiply", static_cast<void (OpenSim::Storage::*)(OpenSim::StateVector *) >(&OpenSim::Storage::multiply));

  DEBUG_MSG("Adding wrapper for void OpenSim::Storage::multiply(OpenSim::Storage *) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Storage::multiply(OpenSim::Storage *)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:293:10
  t117.method("multiply", static_cast<void (OpenSim::Storage::*)(OpenSim::Storage *) >(&OpenSim::Storage::multiply));

  DEBUG_MSG("Adding wrapper for void OpenSim::Storage::divide(double) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Storage::divide(double)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:294:10
  t117.method("divide", static_cast<void (OpenSim::Storage::*)(double) >(&OpenSim::Storage::divide));

  DEBUG_MSG("Adding wrapper for void OpenSim::Storage::divide(const SimTK::Vector_<double> &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Storage::divide(const SimTK::Vector_<double> &)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:295:10
  t117.method("divide", static_cast<void (OpenSim::Storage::*)(const SimTK::Vector_<double> &) >(&OpenSim::Storage::divide));

  DEBUG_MSG("Adding wrapper for void OpenSim::Storage::divide(OpenSim::StateVector *) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Storage::divide(OpenSim::StateVector *)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:296:10
  t117.method("divide", static_cast<void (OpenSim::Storage::*)(OpenSim::StateVector *) >(&OpenSim::Storage::divide));

  DEBUG_MSG("Adding wrapper for void OpenSim::Storage::divide(OpenSim::Storage *) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Storage::divide(OpenSim::Storage *)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:297:10
  t117.method("divide", static_cast<void (OpenSim::Storage::*)(OpenSim::Storage *) >(&OpenSim::Storage::divide));

  DEBUG_MSG("Adding wrapper for OpenSim::Storage * OpenSim::Storage::integrate(int, int) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::Storage * OpenSim::Storage::integrate(int, int)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:298:14
  t117.method("integrate", static_cast<OpenSim::Storage * (OpenSim::Storage::*)(int, int)  const>(&OpenSim::Storage::integrate));
  t117.method("integrate", [](OpenSim::Storage const& a)->OpenSim::Storage *{ return a.integrate(); });
  t117.method("integrate", [](OpenSim::Storage const& a, int arg0)->OpenSim::Storage *{ return a.integrate(arg0); });
  t117.method("integrate", [](OpenSim::Storage const* a)->OpenSim::Storage *{ return a->integrate(); });
  t117.method("integrate", [](OpenSim::Storage const* a, int arg0)->OpenSim::Storage *{ return a->integrate(arg0); });

  DEBUG_MSG("Adding wrapper for OpenSim::Storage * OpenSim::Storage::integrate(double, double) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::Storage * OpenSim::Storage::integrate(double, double)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:299:14
  t117.method("integrate", static_cast<OpenSim::Storage * (OpenSim::Storage::*)(double, double)  const>(&OpenSim::Storage::integrate));

  DEBUG_MSG("Adding wrapper for int OpenSim::Storage::computeArea(int, double *) (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::Storage::computeArea(int, double *)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:300:9
  t117.method("computeArea", static_cast<int (OpenSim::Storage::*)(int, double *)  const>(&OpenSim::Storage::computeArea));

  DEBUG_MSG("Adding wrapper for int OpenSim::Storage::computeArea(double, double, int, double *) (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::Storage::computeArea(double, double, int, double *)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:301:9
  t117.method("computeArea", static_cast<int (OpenSim::Storage::*)(double, double, int, double *)  const>(&OpenSim::Storage::computeArea));

  DEBUG_MSG("Adding wrapper for int OpenSim::Storage::computeAverage(int, double *) (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::Storage::computeAverage(int, double *)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:302:9
  t117.method("computeAverage", static_cast<int (OpenSim::Storage::*)(int, double *)  const>(&OpenSim::Storage::computeAverage));

  DEBUG_MSG("Adding wrapper for int OpenSim::Storage::computeAverage(double, double, int, double *) (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::Storage::computeAverage(double, double, int, double *)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:303:9
  t117.method("computeAverage", static_cast<int (OpenSim::Storage::*)(double, double, int, double *)  const>(&OpenSim::Storage::computeAverage));

  DEBUG_MSG("Adding wrapper for void OpenSim::Storage::pad(int) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Storage::pad(int)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:304:10
  t117.method("pad", static_cast<void (OpenSim::Storage::*)(int) >(&OpenSim::Storage::pad));

  DEBUG_MSG("Adding wrapper for void OpenSim::Storage::smoothSpline(int, double) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Storage::smoothSpline(int, double)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:313:10
  t117.method("smoothSpline", static_cast<void (OpenSim::Storage::*)(int, double) >(&OpenSim::Storage::smoothSpline));

  DEBUG_MSG("Adding wrapper for void OpenSim::Storage::lowpassIIR(double) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Storage::lowpassIIR(double)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:322:10
  t117.method("lowpassIIR", static_cast<void (OpenSim::Storage::*)(double) >(&OpenSim::Storage::lowpassIIR));

  DEBUG_MSG("Adding wrapper for void OpenSim::Storage::lowpassFIR(int, double) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Storage::lowpassFIR(int, double)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:332:10
  t117.method("lowpassFIR", static_cast<void (OpenSim::Storage::*)(int, double) >(&OpenSim::Storage::lowpassFIR));

  DEBUG_MSG("Adding wrapper for void OpenSim::Storage::addToRdStorage(OpenSim::Storage &, double, double) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Storage::addToRdStorage(OpenSim::Storage &, double, double)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:334:10
  t117.method("addToRdStorage", static_cast<void (OpenSim::Storage::*)(OpenSim::Storage &, double, double) >(&OpenSim::Storage::addToRdStorage));

  DEBUG_MSG("Adding wrapper for int OpenSim::Storage::findIndex(double) (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::Storage::findIndex(double)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:338:9
  t117.method("findIndex", static_cast<int (OpenSim::Storage::*)(double)  const>(&OpenSim::Storage::findIndex));

  DEBUG_MSG("Adding wrapper for int OpenSim::Storage::findIndex(int, double) (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::Storage::findIndex(int, double)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:339:9
  t117.method("findIndex", static_cast<int (OpenSim::Storage::*)(int, double)  const>(&OpenSim::Storage::findIndex));

  DEBUG_MSG("Adding wrapper for void OpenSim::Storage::findFrameRange(double, double, int &, int &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Storage::findFrameRange(double, double, int &, int &)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:340:10
  t117.method("findFrameRange", static_cast<void (OpenSim::Storage::*)(double, double, int &, int &)  const>(&OpenSim::Storage::findFrameRange));

  DEBUG_MSG("Adding wrapper for double OpenSim::Storage::resample(double, int) (" __HERE__ ")");
  // signature to use in the veto list: double OpenSim::Storage::resample(double, int)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:341:12
  t117.method("resample", static_cast<double (OpenSim::Storage::*)(double, int) >(&OpenSim::Storage::resample));

  DEBUG_MSG("Adding wrapper for double OpenSim::Storage::resampleLinear(double) (" __HERE__ ")");
  // signature to use in the veto list: double OpenSim::Storage::resampleLinear(double)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:342:12
  t117.method("resampleLinear", static_cast<double (OpenSim::Storage::*)(double) >(&OpenSim::Storage::resampleLinear));

  DEBUG_MSG("Adding wrapper for double OpenSim::Storage::compareColumn(OpenSim::Storage &, const std::string &, double, double) (" __HERE__ ")");
  // signature to use in the veto list: double OpenSim::Storage::compareColumn(OpenSim::Storage &, const std::string &, double, double)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:343:12
  t117.method("compareColumn", static_cast<double (OpenSim::Storage::*)(OpenSim::Storage &, const std::string &, double, double) >(&OpenSim::Storage::compareColumn));
  t117.method("compareColumn", [](OpenSim::Storage& a, OpenSim::Storage & arg0, const std::string & arg1, double arg2)->double{ return a.compareColumn(arg0, arg1, arg2); });
  t117.method("compareColumn", [](OpenSim::Storage* a, OpenSim::Storage & arg0, const std::string & arg1, double arg2)->double{ return a->compareColumn(arg0, arg1, arg2); });

  DEBUG_MSG("Adding wrapper for double OpenSim::Storage::compareColumnRMS(const OpenSim::Storage &, const std::string &, double, double) (" __HERE__ ")");
  // signature to use in the veto list: double OpenSim::Storage::compareColumnRMS(const OpenSim::Storage &, const std::string &, double, double)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:346:12
  t117.method("compareColumnRMS", static_cast<double (OpenSim::Storage::*)(const OpenSim::Storage &, const std::string &, double, double)  const>(&OpenSim::Storage::compareColumnRMS));
  t117.method("compareColumnRMS", [](OpenSim::Storage const& a, const OpenSim::Storage & arg0, const std::string & arg1)->double{ return a.compareColumnRMS(arg0, arg1); });
  t117.method("compareColumnRMS", [](OpenSim::Storage const& a, const OpenSim::Storage & arg0, const std::string & arg1, double arg2)->double{ return a.compareColumnRMS(arg0, arg1, arg2); });
  t117.method("compareColumnRMS", [](OpenSim::Storage const* a, const OpenSim::Storage & arg0, const std::string & arg1)->double{ return a->compareColumnRMS(arg0, arg1); });
  t117.method("compareColumnRMS", [](OpenSim::Storage const* a, const OpenSim::Storage & arg0, const std::string & arg1, double arg2)->double{ return a->compareColumnRMS(arg0, arg1, arg2); });

  DEBUG_MSG("Adding wrapper for void OpenSim::Storage::compareWithStandard(const OpenSim::Storage &, std::vector<std::string> &, std::vector<double> &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Storage::compareWithStandard(const OpenSim::Storage &, std::vector<std::string> &, std::vector<double> &)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:350:10
  t117.method("compareWithStandard", static_cast<void (OpenSim::Storage::*)(const OpenSim::Storage &, std::vector<std::string> &, std::vector<double> &)  const>(&OpenSim::Storage::compareWithStandard));

  DEBUG_MSG("Adding wrapper for bool OpenSim::Storage::makeStorageLabelsUnique() (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::Storage::makeStorageLabelsUnique()
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:358:10
  t117.method("makeStorageLabelsUnique", static_cast<bool (OpenSim::Storage::*)() >(&OpenSim::Storage::makeStorageLabelsUnique));

  DEBUG_MSG("Adding wrapper for bool OpenSim::Storage::storageLabelsAreUnique() (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::Storage::storageLabelsAreUnique()
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:359:10
  t117.method("storageLabelsAreUnique", static_cast<bool (OpenSim::Storage::*)()  const>(&OpenSim::Storage::storageLabelsAreUnique));

  DEBUG_MSG("Adding wrapper for bool OpenSim::Storage::print(const std::string &, const std::string &, const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::Storage::print(const std::string &, const std::string &, const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:363:10
  t117.method("print", static_cast<bool (OpenSim::Storage::*)(const std::string &, const std::string &, const std::string &)  const>(&OpenSim::Storage::print));
  t117.method("print", [](OpenSim::Storage const& a, const std::string & arg0)->bool{ return a.print(arg0); });
  t117.method("print", [](OpenSim::Storage const& a, const std::string & arg0, const std::string & arg1)->bool{ return a.print(arg0, arg1); });
  t117.method("print", [](OpenSim::Storage const* a, const std::string & arg0)->bool{ return a->print(arg0); });
  t117.method("print", [](OpenSim::Storage const* a, const std::string & arg0, const std::string & arg1)->bool{ return a->print(arg0, arg1); });

  DEBUG_MSG("Adding wrapper for int OpenSim::Storage::print(const std::string &, double, const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::Storage::print(const std::string &, double, const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:364:9
  t117.method("print", static_cast<int (OpenSim::Storage::*)(const std::string &, double, const std::string &)  const>(&OpenSim::Storage::print));
  t117.method("print", [](OpenSim::Storage const& a, const std::string & arg0, double arg1)->int{ return a.print(arg0, arg1); });
  t117.method("print", [](OpenSim::Storage const* a, const std::string & arg0, double arg1)->int{ return a->print(arg0, arg1); });

  DEBUG_MSG("Adding wrapper for void OpenSim::Storage::setOutputFileName(const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Storage::setOutputFileName(const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:365:10
  t117.method("setOutputFileName", static_cast<void (OpenSim::Storage::*)(const std::string &) >(&OpenSim::Storage::setOutputFileName));

  DEBUG_MSG("Adding wrapper for void OpenSim::Storage::printResult(const OpenSim::Storage *, const std::string &, const std::string &, double, const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::Storage::printResult(const OpenSim::Storage *, const std::string &, const std::string &, double, const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:367:17
  t117.method("OpenSim!Storage!printResult", static_cast<void (*)(const OpenSim::Storage *, const std::string &, const std::string &, double, const std::string &) >(&OpenSim::Storage::printResult));

  /* End of OpenSim::Storage class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class OpenSim::TRCFileAdapter
   */


  DEBUG_MSG("Adding wrapper for void OpenSim::TRCFileAdapter::TRCFileAdapter(const OpenSim::TRCFileAdapter &) (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/TRCFileAdapter.h:141:5
  t155.constructor<const OpenSim::TRCFileAdapter &>(/*finalize=*/true);


  DEBUG_MSG("Adding wrapper for OpenSim::TRCFileAdapter & OpenSim::TRCFileAdapter::operator=(const OpenSim::TRCFileAdapter &) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::TRCFileAdapter & OpenSim::TRCFileAdapter::operator=(const OpenSim::TRCFileAdapter &)
  // defined in /opt/opensim-core/OpenSim/Common/TRCFileAdapter.h:143:21
  t155.method("assign", static_cast<OpenSim::TRCFileAdapter & (OpenSim::TRCFileAdapter::*)(const OpenSim::TRCFileAdapter &) >(&OpenSim::TRCFileAdapter::operator=));


  DEBUG_MSG("Adding wrapper for OpenSim::TRCFileAdapter * OpenSim::TRCFileAdapter::clone() (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::TRCFileAdapter * OpenSim::TRCFileAdapter::clone()
  // defined in /opt/opensim-core/OpenSim/Common/TRCFileAdapter.h:147:21
  t155.method("clone", static_cast<OpenSim::TRCFileAdapter * (OpenSim::TRCFileAdapter::*)()  const>(&OpenSim::TRCFileAdapter::clone));

  /* End of OpenSim::TRCFileAdapter class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class OpenSim::TableUtilities
   */

  DEBUG_MSG("Adding wrapper for void OpenSim::TableUtilities::checkNonUniqueLabels(std::vector<std::string>) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::TableUtilities::checkNonUniqueLabels(std::vector<std::string>)
  // defined in /opt/opensim-core/OpenSim/Common/TableUtilities.h:39:17
  t157.method("OpenSim!TableUtilities!checkNonUniqueLabels", static_cast<void (*)(std::vector<std::string>) >(&OpenSim::TableUtilities::checkNonUniqueLabels));

  DEBUG_MSG("Adding wrapper for int OpenSim::TableUtilities::findStateLabelIndex(const std::vector<std::string> &, const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::TableUtilities::findStateLabelIndex(const std::vector<std::string> &, const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/TableUtilities.h:60:16
  t157.method("OpenSim!TableUtilities!findStateLabelIndex", static_cast<int (*)(const std::vector<std::string> &, const std::string &) >(&OpenSim::TableUtilities::findStateLabelIndex));

  /* End of OpenSim::TableUtilities class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class OpenSim::XYPoint
   */


  DEBUG_MSG("Adding wrapper for void OpenSim::XYPoint::XYPoint(double, double) (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/XYFunctionInterface.h:59:5
  t158.constructor<double, double>(/*finalize=*/true);
  types.set_override_module(jl_base_module);

  DEBUG_MSG("Adding wrapper for bool OpenSim::XYPoint::operator==(const OpenSim::XYPoint &) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::XYPoint::operator==(const OpenSim::XYPoint &)
  // defined in /opt/opensim-core/OpenSim/Common/XYFunctionInterface.h:62:10
  t158.method("==", static_cast<bool (OpenSim::XYPoint::*)(const OpenSim::XYPoint &)  const>(&OpenSim::XYPoint::operator==));

  DEBUG_MSG("Adding wrapper for bool OpenSim::XYPoint::operator<(const OpenSim::XYPoint &) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::XYPoint::operator<(const OpenSim::XYPoint &)
  // defined in /opt/opensim-core/OpenSim/Common/XYFunctionInterface.h:63:10
  t158.method("<", static_cast<bool (OpenSim::XYPoint::*)(const OpenSim::XYPoint &)  const>(&OpenSim::XYPoint::operator<));

  DEBUG_MSG("Adding _x methods  to provide read access to the field _x (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/XYFunctionInterface.h:56:12
  // signature to use in the veto list: OpenSim::XYPoint::_x
  t158.method("_x", [](const OpenSim::XYPoint& a) -> double { return a._x; });
  t158.method("_x", [](OpenSim::XYPoint& a) -> double { return a._x; });
  t158.method("_x", [](const OpenSim::XYPoint* a) -> double { return a->_x; });
  t158.method("_x", [](OpenSim::XYPoint* a) -> double { return a->_x; });
  // defined in /opt/opensim-core/OpenSim/Common/XYFunctionInterface.h:56:12
  // signature to use in the veto list: OpenSim::XYPoint::_x
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding _x! methods to provide write access to the field _x (" __HERE__ ")");
  t158.method("_x!", [](OpenSim::XYPoint& a, double val) -> double { return a._x = val; });

  DEBUG_MSG("Adding _x! methods to provide write access to the field _x (" __HERE__ ")");
  t158.method("_x!", [](OpenSim::XYPoint* a, double val) -> double { return a->_x = val; });

  DEBUG_MSG("Adding _y methods  to provide read access to the field _y (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/XYFunctionInterface.h:57:12
  // signature to use in the veto list: OpenSim::XYPoint::_y
  t158.method("_y", [](const OpenSim::XYPoint& a) -> double { return a._y; });
  t158.method("_y", [](OpenSim::XYPoint& a) -> double { return a._y; });
  t158.method("_y", [](const OpenSim::XYPoint* a) -> double { return a->_y; });
  t158.method("_y", [](OpenSim::XYPoint* a) -> double { return a->_y; });
  // defined in /opt/opensim-core/OpenSim/Common/XYFunctionInterface.h:57:12
  // signature to use in the veto list: OpenSim::XYPoint::_y
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding _y! methods to provide write access to the field _y (" __HERE__ ")");
  t158.method("_y!", [](OpenSim::XYPoint& a, double val) -> double { return a._y = val; });

  DEBUG_MSG("Adding _y! methods to provide write access to the field _y (" __HERE__ ")");
  t158.method("_y!", [](OpenSim::XYPoint* a, double val) -> double { return a->_y = val; });

  /* End of OpenSim::XYPoint class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class OpenSim::XYFunctionInterface
   */

  types.unset_override_module();

  DEBUG_MSG("Adding wrapper for OpenSim::XYFunctionInterface * OpenSim::XYFunctionInterface::safeDownCast(OpenSim::Object *) (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::XYFunctionInterface * OpenSim::XYFunctionInterface::safeDownCast(OpenSim::Object *)
  // defined in /opt/opensim-core/OpenSim/Common/XYFunctionInterface.h:70:1
  t159.method("OpenSim!XYFunctionInterface!safeDownCast", static_cast<OpenSim::XYFunctionInterface * (*)(OpenSim::Object *) >(&OpenSim::XYFunctionInterface::safeDownCast));

  DEBUG_MSG("Adding wrapper for void OpenSim::XYFunctionInterface::assign(OpenSim::Object &) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::XYFunctionInterface::assign(OpenSim::Object &)
  // defined in /opt/opensim-core/OpenSim/Common/XYFunctionInterface.h:70:1
  t159.method("assign", static_cast<void (OpenSim::XYFunctionInterface::*)(OpenSim::Object &) >(&OpenSim::XYFunctionInterface::assign));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::XYFunctionInterface::getClassName() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::XYFunctionInterface::getClassName()
  // defined in /opt/opensim-core/OpenSim/Common/XYFunctionInterface.h:70:1
  t159.method("OpenSim!XYFunctionInterface!getClassName", static_cast<const std::string & (*)() >(&OpenSim::XYFunctionInterface::getClassName));

  DEBUG_MSG("Adding wrapper for OpenSim::XYFunctionInterface * OpenSim::XYFunctionInterface::clone() (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::XYFunctionInterface * OpenSim::XYFunctionInterface::clone()
  // defined in /opt/opensim-core/OpenSim/Common/XYFunctionInterface.h:70:1
  t159.method("clone", static_cast<OpenSim::XYFunctionInterface * (OpenSim::XYFunctionInterface::*)()  const>(&OpenSim::XYFunctionInterface::clone));

  DEBUG_MSG("Adding wrapper for const std::string & OpenSim::XYFunctionInterface::getConcreteClassName() (" __HERE__ ")");
  // signature to use in the veto list: const std::string & OpenSim::XYFunctionInterface::getConcreteClassName()
  // defined in /opt/opensim-core/OpenSim/Common/XYFunctionInterface.h:70:1
  t159.method("getConcreteClassName", static_cast<const std::string & (OpenSim::XYFunctionInterface::*)()  const>(&OpenSim::XYFunctionInterface::getConcreteClassName));

  DEBUG_MSG("Adding wrapper for bool OpenSim::XYFunctionInterface::isXYFunction(OpenSim::Function *) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::XYFunctionInterface::isXYFunction(OpenSim::Function *)
  // defined in /opt/opensim-core/OpenSim/Common/XYFunctionInterface.h:105:17
  t159.method("OpenSim!XYFunctionInterface!isXYFunction", static_cast<bool (*)(OpenSim::Function *) >(&OpenSim::XYFunctionInterface::isXYFunction));


  DEBUG_MSG("Adding wrapper for void OpenSim::XYFunctionInterface::XYFunctionInterface(OpenSim::Function *) (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/XYFunctionInterface.h:106:5
  t159.constructor<OpenSim::Function *>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for bool OpenSim::XYFunctionInterface::isSpecifiedByControlPoints() (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::XYFunctionInterface::isSpecifiedByControlPoints()
  // defined in /opt/opensim-core/OpenSim/Common/XYFunctionInterface.h:108:10
  t159.method("isSpecifiedByControlPoints", static_cast<bool (OpenSim::XYFunctionInterface::*)()  const>(&OpenSim::XYFunctionInterface::isSpecifiedByControlPoints));

  DEBUG_MSG("Adding wrapper for int OpenSim::XYFunctionInterface::getNumberOfPoints() (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::XYFunctionInterface::getNumberOfPoints()
  // defined in /opt/opensim-core/OpenSim/Common/XYFunctionInterface.h:110:9
  t159.method("getNumberOfPoints", static_cast<int (OpenSim::XYFunctionInterface::*)()  const>(&OpenSim::XYFunctionInterface::getNumberOfPoints));

  DEBUG_MSG("Adding wrapper for const double * OpenSim::XYFunctionInterface::getXValues() (" __HERE__ ")");
  // signature to use in the veto list: const double * OpenSim::XYFunctionInterface::getXValues()
  // defined in /opt/opensim-core/OpenSim/Common/XYFunctionInterface.h:111:19
  t159.method("getXValues", static_cast<const double * (OpenSim::XYFunctionInterface::*)()  const>(&OpenSim::XYFunctionInterface::getXValues));

  DEBUG_MSG("Adding wrapper for const double * OpenSim::XYFunctionInterface::getYValues() (" __HERE__ ")");
  // signature to use in the veto list: const double * OpenSim::XYFunctionInterface::getYValues()
  // defined in /opt/opensim-core/OpenSim/Common/XYFunctionInterface.h:112:19
  t159.method("getYValues", static_cast<const double * (OpenSim::XYFunctionInterface::*)()  const>(&OpenSim::XYFunctionInterface::getYValues));

  DEBUG_MSG("Adding wrapper for double OpenSim::XYFunctionInterface::getX(int) (" __HERE__ ")");
  // signature to use in the veto list: double OpenSim::XYFunctionInterface::getX(int)
  // defined in /opt/opensim-core/OpenSim/Common/XYFunctionInterface.h:113:12
  t159.method("getX", static_cast<double (OpenSim::XYFunctionInterface::*)(int)  const>(&OpenSim::XYFunctionInterface::getX));

  DEBUG_MSG("Adding wrapper for double OpenSim::XYFunctionInterface::getY(int) (" __HERE__ ")");
  // signature to use in the veto list: double OpenSim::XYFunctionInterface::getY(int)
  // defined in /opt/opensim-core/OpenSim/Common/XYFunctionInterface.h:114:12
  t159.method("getY", static_cast<double (OpenSim::XYFunctionInterface::*)(int)  const>(&OpenSim::XYFunctionInterface::getY));

  DEBUG_MSG("Adding wrapper for void OpenSim::XYFunctionInterface::setX(int, double) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::XYFunctionInterface::setX(int, double)
  // defined in /opt/opensim-core/OpenSim/Common/XYFunctionInterface.h:115:10
  t159.method("setX", static_cast<void (OpenSim::XYFunctionInterface::*)(int, double) >(&OpenSim::XYFunctionInterface::setX));

  DEBUG_MSG("Adding wrapper for void OpenSim::XYFunctionInterface::setY(int, double) (" __HERE__ ")");
  // signature to use in the veto list: void OpenSim::XYFunctionInterface::setY(int, double)
  // defined in /opt/opensim-core/OpenSim/Common/XYFunctionInterface.h:116:10
  t159.method("setY", static_cast<void (OpenSim::XYFunctionInterface::*)(int, double) >(&OpenSim::XYFunctionInterface::setY));

  DEBUG_MSG("Adding wrapper for bool OpenSim::XYFunctionInterface::deletePoint(int) (" __HERE__ ")");
  // signature to use in the veto list: bool OpenSim::XYFunctionInterface::deletePoint(int)
  // defined in /opt/opensim-core/OpenSim/Common/XYFunctionInterface.h:117:10
  t159.method("deletePoint", static_cast<bool (OpenSim::XYFunctionInterface::*)(int) >(&OpenSim::XYFunctionInterface::deletePoint));

  DEBUG_MSG("Adding wrapper for int OpenSim::XYFunctionInterface::addPoint(double, double) (" __HERE__ ")");
  // signature to use in the veto list: int OpenSim::XYFunctionInterface::addPoint(double, double)
  // defined in /opt/opensim-core/OpenSim/Common/XYFunctionInterface.h:119:9
  t159.method("addPoint", static_cast<int (OpenSim::XYFunctionInterface::*)(double, double) >(&OpenSim::XYFunctionInterface::addPoint));

  DEBUG_MSG("Adding wrapper for OpenSim::XYFunctionInterface::FunctionType OpenSim::XYFunctionInterface::getFunctionType() (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::XYFunctionInterface::FunctionType OpenSim::XYFunctionInterface::getFunctionType()
  // defined in /opt/opensim-core/OpenSim/Common/XYFunctionInterface.h:122:18
  t159.method("getFunctionType", static_cast<OpenSim::XYFunctionInterface::FunctionType (OpenSim::XYFunctionInterface::*)()  const>(&OpenSim::XYFunctionInterface::getFunctionType));

  DEBUG_MSG("Adding wrapper for double OpenSim::XYFunctionInterface::getScale() (" __HERE__ ")");
  // signature to use in the veto list: double OpenSim::XYFunctionInterface::getScale()
  // defined in /opt/opensim-core/OpenSim/Common/XYFunctionInterface.h:123:12
  t159.method("getScale", static_cast<double (OpenSim::XYFunctionInterface::*)()  const>(&OpenSim::XYFunctionInterface::getScale));

  DEBUG_MSG("Adding wrapper for OpenSim::Constant * OpenSim::XYFunctionInterface::getConstant() (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::Constant * OpenSim::XYFunctionInterface::getConstant()
  // defined in /opt/opensim-core/OpenSim/Common/XYFunctionInterface.h:125:15
  t159.method("getConstant", static_cast<OpenSim::Constant * (OpenSim::XYFunctionInterface::*)()  const>(&OpenSim::XYFunctionInterface::getConstant));

  DEBUG_MSG("Adding wrapper for OpenSim::StepFunction * OpenSim::XYFunctionInterface::getStepFunction() (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::StepFunction * OpenSim::XYFunctionInterface::getStepFunction()
  // defined in /opt/opensim-core/OpenSim/Common/XYFunctionInterface.h:126:19
  t159.method("getStepFunction", static_cast<OpenSim::StepFunction * (OpenSim::XYFunctionInterface::*)()  const>(&OpenSim::XYFunctionInterface::getStepFunction));

  DEBUG_MSG("Adding wrapper for OpenSim::PiecewiseConstantFunction * OpenSim::XYFunctionInterface::getMultiStepFunction() (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::PiecewiseConstantFunction * OpenSim::XYFunctionInterface::getMultiStepFunction()
  // defined in /opt/opensim-core/OpenSim/Common/XYFunctionInterface.h:127:32
  t159.method("getMultiStepFunction", static_cast<OpenSim::PiecewiseConstantFunction * (OpenSim::XYFunctionInterface::*)()  const>(&OpenSim::XYFunctionInterface::getMultiStepFunction));

  DEBUG_MSG("Adding wrapper for OpenSim::PiecewiseLinearFunction * OpenSim::XYFunctionInterface::getPiecewiseLinearFunction() (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::PiecewiseLinearFunction * OpenSim::XYFunctionInterface::getPiecewiseLinearFunction()
  // defined in /opt/opensim-core/OpenSim/Common/XYFunctionInterface.h:128:30
  t159.method("getPiecewiseLinearFunction", static_cast<OpenSim::PiecewiseLinearFunction * (OpenSim::XYFunctionInterface::*)()  const>(&OpenSim::XYFunctionInterface::getPiecewiseLinearFunction));

  DEBUG_MSG("Adding wrapper for OpenSim::LinearFunction * OpenSim::XYFunctionInterface::getLinearFunction() (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::LinearFunction * OpenSim::XYFunctionInterface::getLinearFunction()
  // defined in /opt/opensim-core/OpenSim/Common/XYFunctionInterface.h:129:21
  t159.method("getLinearFunction", static_cast<OpenSim::LinearFunction * (OpenSim::XYFunctionInterface::*)()  const>(&OpenSim::XYFunctionInterface::getLinearFunction));

  DEBUG_MSG("Adding wrapper for OpenSim::SimmSpline * OpenSim::XYFunctionInterface::getSimmSpline() (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::SimmSpline * OpenSim::XYFunctionInterface::getSimmSpline()
  // defined in /opt/opensim-core/OpenSim/Common/XYFunctionInterface.h:130:17
  t159.method("getSimmSpline", static_cast<OpenSim::SimmSpline * (OpenSim::XYFunctionInterface::*)()  const>(&OpenSim::XYFunctionInterface::getSimmSpline));

  DEBUG_MSG("Adding wrapper for OpenSim::GCVSpline * OpenSim::XYFunctionInterface::getGCVSpline() (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::GCVSpline * OpenSim::XYFunctionInterface::getGCVSpline()
  // defined in /opt/opensim-core/OpenSim/Common/XYFunctionInterface.h:131:16
  t159.method("getGCVSpline", static_cast<OpenSim::GCVSpline * (OpenSim::XYFunctionInterface::*)()  const>(&OpenSim::XYFunctionInterface::getGCVSpline));

  /* End of OpenSim::XYFunctionInterface class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class OpenSim::XsensDataReader
   */


  DEBUG_MSG("Adding wrapper for void OpenSim::XsensDataReader::XsensDataReader(const OpenSim::XsensDataReaderSettings &) (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/XsensDataReader.h:47:5
  t161.constructor<const OpenSim::XsensDataReaderSettings &>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for OpenSim::XsensDataReader * OpenSim::XsensDataReader::clone() (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::XsensDataReader * OpenSim::XsensDataReader::clone()
  // defined in /opt/opensim-core/OpenSim/Common/XsensDataReader.h:52:22
  t161.method("clone", static_cast<OpenSim::XsensDataReader * (OpenSim::XsensDataReader::*)()  const>(&OpenSim::XsensDataReader::clone));

  DEBUG_MSG("Adding wrapper for const OpenSim::XsensDataReaderSettings & OpenSim::XsensDataReader::getSettings() (" __HERE__ ")");
  // signature to use in the veto list: const OpenSim::XsensDataReaderSettings & OpenSim::XsensDataReader::getSettings()
  // defined in /opt/opensim-core/OpenSim/Common/XsensDataReader.h:79:36
  t161.method("getSettings", static_cast<const OpenSim::XsensDataReaderSettings & (OpenSim::XsensDataReader::*)()  const>(&OpenSim::XsensDataReader::getSettings));

  DEBUG_MSG("Adding wrapper for OpenSim::XsensDataReaderSettings & OpenSim::XsensDataReader::updSettings() (" __HERE__ ")");
  // signature to use in the veto list: OpenSim::XsensDataReaderSettings & OpenSim::XsensDataReader::updSettings()
  // defined in /opt/opensim-core/OpenSim/Common/XsensDataReader.h:86:30
  t161.method("updSettings", static_cast<OpenSim::XsensDataReaderSettings & (OpenSim::XsensDataReader::*)() >(&OpenSim::XsensDataReader::updSettings));

  /* End of OpenSim::XsensDataReader class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class SimTK::Vector_
   */
  auto t146_decl_methods = []<typename ELT> (jlcxx::TypeWrapper<SimTK::Vector_<ELT>> wrapped){
    wrapped.template constructor<>(/*finalize=*/true);
  };
  t146.apply<SimTK::Vector_<double>>(t146_decl_methods);

  /* End of SimTK::Vector_ class method wrappers
   **********************************************************************/

  /**********************************************************************/
  /* Wrappers for the methods of class OpenSim::Array
   */
  auto t112_decl_methods = []<typename T> (jlcxx::TypeWrapper<OpenSim::Array<T>> wrapped){
    wrapped.template constructor<>(/*finalize=*/true);
  };
  t112.apply<OpenSim::Array<std::basic_string<char>>>(t112_decl_methods);

  /* End of OpenSim::Array class method wrappers
   **********************************************************************/

  /**********************************************************************/
  /* Wrappers for the methods of class std::allocator
   */
  auto t46_decl_methods = []<typename _Tp> (jlcxx::TypeWrapper<std::allocator<_Tp>> wrapped){
    wrapped.template constructor<>(/*finalize=*/true);
  };
  t46.apply<std::allocator<double>, std::allocator<int>, std::allocator<std::basic_string<char>>>(t46_decl_methods);

  /* End of std::allocator class method wrappers
   **********************************************************************/

  /**********************************************************************/
  /* Wrappers for the methods of class std::allocator
   */
  auto t45_decl_methods = []<typename > (jlcxx::TypeWrapper<std::allocator<>> wrapped){
    wrapped.template constructor<>(/*finalize=*/true);
  };
  t45.apply<std::allocator<char>>(t45_decl_methods);

  /* End of std::allocator class method wrappers
   **********************************************************************/

  /**********************************************************************/
  /* Wrappers for the methods of class std::char_traits
   */
  auto t44_decl_methods = []<typename _CharT> (jlcxx::TypeWrapper<std::char_traits<_CharT>> wrapped){
    wrapped.template constructor<>(/*finalize=*/true);
  };
  t44.apply<std::char_traits<char>>(t44_decl_methods);

  /* End of std::char_traits class method wrappers
   **********************************************************************/

  /**********************************************************************/
  /* Wrappers for the methods of class OpenSim::Object_GetClassName
   */
  auto t27_decl_methods = []<typename T> (jlcxx::TypeWrapper<OpenSim::Object_GetClassName<T>> wrapped){
    typedef OpenSim::Object_GetClassName<T> WrappedType;
    wrapped.template constructor<>(/*finalize=*/true);

    DEBUG_MSG("Adding wrapper for const std::string & WrappedType::name() (" __HERE__ ")");
    // signature to use in the veto list: const std::string & WrappedType::name()
    // defined in /opt/opensim-core/OpenSim/Common/Object.h:1163:31
    wrapped.method("WrappedType!name", static_cast<const std::string & (*)() >(&WrappedType::name));
  };
  t27.apply<OpenSim::Object_GetClassName<SimTK::Quaternion_<double>>, OpenSim::Object_GetClassName<SimTK::Rotation_<double>>, OpenSim::Object_GetClassName<SimTK::Transform_<double>>, OpenSim::Object_GetClassName<SimTK::Vec<2, SimTK::Vec<3, double, 1>, 1>>, OpenSim::Object_GetClassName<SimTK::Vector_<SimTK::Vec<2, SimTK::Vec<3, double, 1>, 1>>>, OpenSim::Object_GetClassName<SimTK::Vector_<SimTK::Vec<6, double, 1>>>, OpenSim::Object_GetClassName<SimTK::Vector_<SimTK::Vec<3, double, 1>>>, OpenSim::Object_GetClassName<SimTK::Vector_<>>, OpenSim::Object_GetClassName<SimTK::Vec<6, double, 1>>, OpenSim::Object_GetClassName<SimTK::Vec<3, double, 1>>, OpenSim::Object_GetClassName<SimTK::Vec<2, double, 1>>, OpenSim::Object_GetClassName<std::basic_string<char>>, OpenSim::Object_GetClassName<long double>, OpenSim::Object_GetClassName<double>, OpenSim::Object_GetClassName<float>, OpenSim::Object_GetClassName<unsigned long long>, OpenSim::Object_GetClassName<long long>, OpenSim::Object_GetClassName<unsigned long>, OpenSim::Object_GetClassName<long>, OpenSim::Object_GetClassName<unsigned int>, OpenSim::Object_GetClassName<int>, OpenSim::Object_GetClassName<unsigned short>, OpenSim::Object_GetClassName<short>, OpenSim::Object_GetClassName<char>, OpenSim::Object_GetClassName<unsigned char>, OpenSim::Object_GetClassName<signed char>, OpenSim::Object_GetClassName<bool>>(t27_decl_methods);

  /* End of OpenSim::Object_GetClassName class method wrappers
   **********************************************************************/

  /**********************************************************************
   * Wrappers for global functions and variables including
   * class static members
   */

  DEBUG_MSG("Adding wrapper for std::string OpenSim::getFormattedDateTime(bool, std::string) (" __HERE__ ")");
  // signature to use in the veto list: std::string OpenSim::getFormattedDateTime(bool, std::string)
  // defined in /opt/opensim-core/OpenSim/Common/CommonUtilities.h:53:28
  types.method("OpenSim!getFormattedDateTime", static_cast<std::string (*)(bool, std::string) >(&OpenSim::getFormattedDateTime));
  types.method("OpenSim!getFormattedDateTime", []()->std::string{ return OpenSim::getFormattedDateTime(); });
  types.method("OpenSim!getFormattedDateTime", [](bool arg0)->std::string{ return OpenSim::getFormattedDateTime(arg0); });

  DEBUG_MSG("Adding wrapper for std::string OpenSim::convertRelativeFilePathToAbsoluteFromXMLDocument(const std::string &, const std::string &) (" __HERE__ ")");
  // signature to use in the veto list: std::string OpenSim::convertRelativeFilePathToAbsoluteFromXMLDocument(const std::string &, const std::string &)
  // defined in /opt/opensim-core/OpenSim/Common/CommonUtilities.h:106:13
  types.method("OpenSim!convertRelativeFilePathToAbsoluteFromXMLDocument", static_cast<std::string (*)(const std::string &, const std::string &) >(&OpenSim::convertRelativeFilePathToAbsoluteFromXMLDocument));

  DEBUG_MSG("Adding Array_CAPMIN methods to provide access to the global variable Array_CAPMIN (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Array.h:36:18
  types.method("Array_CAPMIN", []()-> int { return Array_CAPMIN; });

  DEBUG_MSG("Adding OpenSim!Property!TypeHelper!IsObjectType methods to provide access to the global variable OpenSim::Property::TypeHelper::IsObjectType (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Property.h:609:23
  types.method("OpenSim!Property!TypeHelper!IsObjectType", []()-> bool { return OpenSim::Property::TypeHelper::IsObjectType; });

  DEBUG_MSG("Adding OpenSim!InvalidPropertyIndex methods to provide access to the global variable OpenSim::InvalidPropertyIndex (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Property.h:1234:1
  types.method("OpenSim!InvalidPropertyIndex", []()-> const OpenSim::PropertyIndex& { return OpenSim::InvalidPropertyIndex; });

  DEBUG_MSG("Adding OpenSim!Object!DEFAULT_NAME methods to provide access to the global variable OpenSim::Object::DEFAULT_NAME (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Object.h:851:30
  types.method("OpenSim!Object!DEFAULT_NAME", []()-> const std::string& { return OpenSim::Object::DEFAULT_NAME; });

  DEBUG_MSG("Adding IO_STRLEN methods to provide access to the global variable IO_STRLEN (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/IO.h:37:11
  types.method("IO_STRLEN", []()-> int { return IO_STRLEN; });

  DEBUG_MSG("Adding OpenSim!IMUDataReader!Orientations methods to provide access to the global variable OpenSim::IMUDataReader::Orientations (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/IMUDataReader.h:47:30
  types.method("OpenSim!IMUDataReader!Orientations", []()-> const std::string& { return OpenSim::IMUDataReader::Orientations; });

  DEBUG_MSG("Adding OpenSim!IMUDataReader!LinearAccelerations methods to provide access to the global variable OpenSim::IMUDataReader::LinearAccelerations (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/IMUDataReader.h:48:31
  types.method("OpenSim!IMUDataReader!LinearAccelerations", []()-> const std::string& { return OpenSim::IMUDataReader::LinearAccelerations; });

  DEBUG_MSG("Adding OpenSim!IMUDataReader!MagneticHeading methods to provide access to the global variable OpenSim::IMUDataReader::MagneticHeading (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/IMUDataReader.h:49:30
  types.method("OpenSim!IMUDataReader!MagneticHeading", []()-> const std::string& { return OpenSim::IMUDataReader::MagneticHeading; });

  DEBUG_MSG("Adding OpenSim!IMUDataReader!AngularVelocity methods to provide access to the global variable OpenSim::IMUDataReader::AngularVelocity (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/IMUDataReader.h:50:30
  types.method("OpenSim!IMUDataReader!AngularVelocity", []()-> const std::string& { return OpenSim::IMUDataReader::AngularVelocity; });

  DEBUG_MSG("Adding OpenSim!APDMDataReader!acceleration_labels methods to provide access to the global variable OpenSim::APDMDataReader::acceleration_labels (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/APDMDataReader.h:54:43
  types.method("OpenSim!APDMDataReader!acceleration_labels", []()-> const std::vector<std::string>& { return OpenSim::APDMDataReader::acceleration_labels; });

  DEBUG_MSG("Adding OpenSim!APDMDataReader!angular_velocity_labels methods to provide access to the global variable OpenSim::APDMDataReader::angular_velocity_labels (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/APDMDataReader.h:55:43
  types.method("OpenSim!APDMDataReader!angular_velocity_labels", []()-> const std::vector<std::string>& { return OpenSim::APDMDataReader::angular_velocity_labels; });

  DEBUG_MSG("Adding OpenSim!APDMDataReader!magnetic_heading_labels methods to provide access to the global variable OpenSim::APDMDataReader::magnetic_heading_labels (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/APDMDataReader.h:56:43
  types.method("OpenSim!APDMDataReader!magnetic_heading_labels", []()-> const std::vector<std::string>& { return OpenSim::APDMDataReader::magnetic_heading_labels; });

  DEBUG_MSG("Adding OpenSim!APDMDataReader!orientation_labels methods to provide access to the global variable OpenSim::APDMDataReader::orientation_labels (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/APDMDataReader.h:57:43
  types.method("OpenSim!APDMDataReader!orientation_labels", []()-> const std::vector<std::string>& { return OpenSim::APDMDataReader::orientation_labels; });

  DEBUG_MSG("Adding OpenSim!APDMDataReader!TimeLabel methods to provide access to the global variable OpenSim::APDMDataReader::TimeLabel (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/APDMDataReader.h:59:30
  types.method("OpenSim!APDMDataReader!TimeLabel", []()-> const std::string& { return OpenSim::APDMDataReader::TimeLabel; });

  DEBUG_MSG("Adding Storage_DEFAULT_CAPACITY methods to provide access to the global variable Storage_DEFAULT_CAPACITY (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:35:11
  types.method("Storage_DEFAULT_CAPACITY", []()-> int { return Storage_DEFAULT_CAPACITY; });

  DEBUG_MSG("Adding OpenSim!Storage!DEFAULT_HEADER_TOKEN methods to provide access to the global variable OpenSim::Storage::DEFAULT_HEADER_TOKEN (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:73:24
  types.method("OpenSim!Storage!DEFAULT_HEADER_TOKEN", []()-> const char * { return OpenSim::Storage::DEFAULT_HEADER_TOKEN; });

  DEBUG_MSG("Adding OpenSim!Storage!DEFAULT_HEADER_SEPARATOR methods to provide access to the global variable OpenSim::Storage::DEFAULT_HEADER_SEPARATOR (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:74:24
  types.method("OpenSim!Storage!DEFAULT_HEADER_SEPARATOR", []()-> const char * { return OpenSim::Storage::DEFAULT_HEADER_SEPARATOR; });

  DEBUG_MSG("Adding OpenSim!Storage!MAX_RESAMPLE_SIZE methods to provide access to the global variable OpenSim::Storage::MAX_RESAMPLE_SIZE (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/Storage.h:75:22
  types.method("OpenSim!Storage!MAX_RESAMPLE_SIZE", []()-> int { return OpenSim::Storage::MAX_RESAMPLE_SIZE; });

  DEBUG_MSG("Adding OpenSim!TRCFileAdapter!_markers methods to provide access to the global variable OpenSim::TRCFileAdapter::_markers (" __HERE__ ")");
  // defined in /opt/opensim-core/OpenSim/Common/TRCFileAdapter.h:155:43
  types.method("OpenSim!TRCFileAdapter!_markers", []()-> const std::string& { return OpenSim::TRCFileAdapter::_markers; });

  /* End of global function wrappers
   **********************************************************************/

  DEBUG_MSG("End of wrapper definitions");

}
