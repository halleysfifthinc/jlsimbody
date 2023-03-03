// No need for Exception constructors; shouldn't ever need to construct an OpenSim::Exception from Julia
void OpenSim::Exception::Exception(const std::string &, const std::string &, int);
void OpenSim::Exception::Exception(const std::string &, size_t, const std::string &);
void OpenSim::Exception::Exception(const std::string &, size_t, const std::string &, const std::string &);
void OpenSim::Exception::Exception(const std::string &, size_t, const std::string &, const OpenSim::Object &);
void OpenSim::Exception::Exception(const std::string &, size_t, const std::string &, const OpenSim::Object &, const std::string &);

void OpenSim::InvalidCall::InvalidCall(const std::string &, size_t, const std::string &, const std::string &);
void OpenSim::InvalidTemplateArgument::InvalidTemplateArgument(const std::string &, size_t, const std::string &, const std::string &);
void OpenSim::IndexOutOfRange::IndexOutOfRange(const std::string &, size_t, const std::string &, size_t, size_t, size_t);
void OpenSim::KeyNotFound::KeyNotFound(const std::string &, size_t, const std::string &, const std::string &);
void OpenSim::ComponentNotFound::ComponentNotFound(const std::string &, size_t, const std::string &, const std::string &, const std::string &, const std::string &);
void OpenSim::InvalidPropertyValue::InvalidPropertyValue(const std::string &, size_t, const std::string &, const OpenSim::Object &, const std::string &, const std::string &);
void OpenSim::DataAdapterAlreadyRegistered::DataAdapterAlreadyRegistered(const std::string &, size_t, const std::string &, const std::string &);
void OpenSim::NoRegisteredDataAdapter::NoRegisteredDataAdapter(const std::string &, size_t, const std::string &, const std::string &);
void OpenSim::TableNotFoundException::TableNotFoundException(const std::string &);
void OpenSim::EmptyFileName::EmptyFileName(const std::string &, size_t, const std::string &);
void OpenSim::FileDoesNotExist::FileDoesNotExist(const std::string &, size_t, const std::string &, const std::string);
void OpenSim::FileIsEmpty::FileIsEmpty(const std::string &, size_t, const std::string &, const std::string &);
void OpenSim::FileExtensionNotFound::FileExtensionNotFound(const std::string &, size_t, const std::string &, const std::string &);
void OpenSim::UnexpectedColumnLabel::UnexpectedColumnLabel(const std::string &, size_t, const std::string &, const std::string &, const std::string &, const std::string &);
void OpenSim::RowLengthMismatch::RowLengthMismatch(const std::string &, size_t, const std::string &, const std::string &, size_t, size_t, size_t);
void OpenSim::NoTableFound::NoTableFound(const std::string &, size_t, const std::string &);
void OpenSim::KeyMissing::KeyMissing(const std::string &, size_t, const std::string &, const std::string &);
void OpenSim::IncorrectTableType::IncorrectTableType(const std::string &, size_t, const std::string &, const std::string &);
void OpenSim::TableMissingHeader::TableMissingHeader(const std::string &, size_t, const std::string &);
void OpenSim::TimeColumnNotIncreasing::TimeColumnNotIncreasing(const std::string &, size_t, const std::string &);
void OpenSim::TimestampLessThanEqualToPrevious::TimestampLessThanEqualToPrevious(const std::string &, size_t, const std::string &, size_t, double, double);
void OpenSim::TimestampGreaterThanEqualToNext::TimestampGreaterThanEqualToNext(const std::string &, size_t, const std::string &, size_t, double, double);
void OpenSim::TimeOutOfRange::TimeOutOfRange(const std::string &, size_t, const std::string &, const double, const double, const double);
void OpenSim::InvalidTimeRange::InvalidTimeRange(const std::string &, size_t, const std::string &, const double, const double);
void OpenSim::IncorrectNumTokens::IncorrectNumTokens(const std::string &, size_t, const std::string &, const std::string &);
void OpenSim::DataTypeMismatch::DataTypeMismatch(const std::string &, size_t, const std::string &, const std::string &, const std::string &);
void OpenSim::ComponentHasNoName::ComponentHasNoName(const std::string &, size_t, const std::string &, const std::string &);
void OpenSim::InvalidComponentName::InvalidComponentName(const std::string &, size_t, const std::string &, const std::string &, const std::string &, const std::string &);
void OpenSim::ComponentNotFoundOnSpecifiedPath::ComponentNotFoundOnSpecifiedPath(const std::string &, size_t, const std::string &, const std::string &, const std::string &, const std::string &);
void OpenSim::ComponentIsAnOrphan::ComponentIsAnOrphan(const std::string &, size_t, const std::string &, const std::string &, const std::string &);
void OpenSim::SubcomponentsWithDuplicateName::SubcomponentsWithDuplicateName(const std::string &, size_t, const std::string &, const std::string &, const std::string &);
void OpenSim::ComponentIsRootWithNoSubcomponents::ComponentIsRootWithNoSubcomponents(const std::string &, size_t, const std::string &, const std::string &, const std::string &);
void OpenSim::ComponentAlreadyPartOfOwnershipTree::ComponentAlreadyPartOfOwnershipTree(const std::string &, size_t, const std::string &, const std::string &, const std::string &);
void OpenSim::ComponentHasNoSystem::ComponentHasNoSystem(const std::string &, size_t, const std::string &, const OpenSim::Object &);
void OpenSim::SocketNotFound::SocketNotFound(const std::string &, size_t, const std::string &, const OpenSim::Object &, const std::string &);
void OpenSim::InputNotFound::InputNotFound(const std::string &, size_t, const std::string &, const OpenSim::Object &, const std::string &);
void OpenSim::OutputNotFound::OutputNotFound(const std::string &, size_t, const std::string &, const OpenSim::Object &, const std::string &);
void OpenSim::ConnecteeNotSpecified::ConnecteeNotSpecified(const std::string &, size_t, const std::string &, const OpenSim::AbstractSocket &, const OpenSim::Component &);
void OpenSim::STODataTypeNotSupported::STODataTypeNotSupported(const std::string &, size_t, const std::string &, const std::string &);
void OpenSim::IncorrectNumMetaDataKeys::IncorrectNumMetaDataKeys(const std::string &, size_t, const std::string &, const std::string &, size_t, size_t);
void OpenSim::UnexpectedMetaDataKey::UnexpectedMetaDataKey(const std::string &, size_t, const std::string &, const std::string &, const std::string &, const std::string &);
void OpenSim::MetaDataLengthMismatch::MetaDataLengthMismatch(const std::string &, size_t, const std::string &, const std::string &, size_t, size_t);
void OpenSim::IncorrectNumColumnLabels::IncorrectNumColumnLabels(const std::string &, size_t, const std::string &, const std::string &, size_t, size_t);
void OpenSim::InvalidArgument::InvalidArgument(const std::string &, size_t, const std::string &, const std::string &);

// Unwanted private functions for non-list properties:
// ExperimentalSensor,
// void OpenSim::* ::copyProperty_ *(const OpenSim::* ::Self &);
// const std::string & OpenSim::*::get_*(int);
// std::string & OpenSim::*::upd_*(int);
// void OpenSim::*::set_*(int, const std::string &);
// int OpenSim::*::append_*(const std::string &);
// void OpenSim::*::constructProperty_*(const std::string &);
// OpenSim::*::PropertyIndex_*;

// IO
bool OpenSim::IO::FileExists(const std::string &);
FILE * OpenSim::IO::OpenFile(const std::string &, const std::string &);
static std::ifstream *OpenInputFile(const std::string &aFileName, std::ios_base::openmode mode = std::ios_base::in);
static std::ofstream *OpenOutputFile(const std::string &aFileName, std::ios_base::openmode mode = std::ios_base::out);
int OpenSim::IO::makeDir(const std::string &);
int OpenSim::IO::chDir(const std::string &);
std::string OpenSim::IO::getCwd();
std::string OpenSim::IO::getParentDirectory(const std::string &);
std::string OpenSim::IO::GetFileNameFromURI(const std::string &);
std::string OpenSim::IO::GetSuffix(const std::string &, int);
void OpenSim::IO::RemoveSuffix(std::string &, int);
std::string OpenSim::IO::replaceSubstring(const std::string &, const std::string &, const std::string &);
void OpenSim::IO::TrimLeadingWhitespace(std::string &);
void OpenSim::IO::TrimTrailingWhitespace(std::string &);
void OpenSim::IO::TrimWhitespace(std::string &);
std::string OpenSim::IO::Lowercase(const std::string &);
std::string OpenSim::IO::Uppercase(const std::string &);
bool OpenSim::IO::StartsWith(const std::string &, const std::string &);
bool OpenSim::IO::EndsWith(const std::string &, const std::string &);
bool OpenSim::IO::StartsWithIgnoringCase(const std::string &, const std::string &);
bool OpenSim::IO::EndsWithIgnoringCase(const std::string &, const std::string &);
// OpenSim::IO::CwdChanger;
// OpenSim::FileRemover;

// void * OpenSim::LoadOpenSimLibrary(const std::string &, bool);
// void OpenSim::LoadOpenSimLibrary(const std::string &);
// bool OpenSim::LoadOpenSimLibraryExact(const std::string &, bool);
// void OpenSim::LoadOpenSimLibraries(int, char **);

// Object
bool OpenSim::Object::isA(const char *);
const std::string & OpenSim::Object::toString();
OpenSim::PropertySet & OpenSim::Object::getPropertySet();
const OpenSim::PropertySet & OpenSim::Object::getPropertySet();
const std::string & OpenSim::Object::getClassName();
void OpenSim::Object::setSerializeAllDefaults(bool);
bool OpenSim::Object::getSerializeAllDefaults();
void OpenSim::Object::setDebugLevel(int);
int OpenSim::Object::getDebugLevel();
bool OpenSim::Object::isKindOf(const char *);
OpenSim::Object * OpenSim::Object::SafeCopy(const OpenSim::Object *);
void OpenSim::Object::RegisterType(const OpenSim::Object &);
void OpenSim::Object::RenameType(const std::string &, const std::string &);

// Unwanted operator defs
const OpenSim::PropertyIndex & OpenSim::PropertyIndex::operator++();
OpenSim::PropertyIndex OpenSim::PropertyIndex::operator++(int);
const OpenSim::PropertyIndex & OpenSim::PropertyIndex::operator--();
OpenSim::PropertyIndex OpenSim::PropertyIndex::operator--(int);

bool OpenSim::PropertyIndex::operator!=(int);
bool OpenSim::PropertyIndex::operator!=(short);
bool OpenSim::PropertyIndex::operator!=(long);
bool OpenSim::PropertyIndex::operator!=(long long);
bool OpenSim::PropertyIndex::operator!=(unsigned int);
bool OpenSim::PropertyIndex::operator!=(unsigned long);
bool OpenSim::PropertyIndex::operator!=(unsigned long long);
bool OpenSim::PropertyIndex::operator<=(int);
bool OpenSim::PropertyIndex::operator<=(short);
bool OpenSim::PropertyIndex::operator<=(long);
bool OpenSim::PropertyIndex::operator<=(long long);
bool OpenSim::PropertyIndex::operator<=(unsigned int);
bool OpenSim::PropertyIndex::operator<=(unsigned short);
bool OpenSim::PropertyIndex::operator<=(unsigned long);
bool OpenSim::PropertyIndex::operator<=(unsigned long long);
bool OpenSim::PropertyIndex::operator>=(int);
bool OpenSim::PropertyIndex::operator>=(short);
bool OpenSim::PropertyIndex::operator>=(long);
bool OpenSim::PropertyIndex::operator>=(long long);
bool OpenSim::PropertyIndex::operator>=(unsigned int);
bool OpenSim::PropertyIndex::operator>=(unsigned short);
bool OpenSim::PropertyIndex::operator>=(unsigned long);
bool OpenSim::PropertyIndex::operator>=(unsigned long long);
bool OpenSim::PropertyIndex::operator>(int);
bool OpenSim::PropertyIndex::operator>(short);
bool OpenSim::PropertyIndex::operator>(long);
bool OpenSim::PropertyIndex::operator>(long long);
bool OpenSim::PropertyIndex::operator>(unsigned int);
bool OpenSim::PropertyIndex::operator>(unsigned short);
bool OpenSim::PropertyIndex::operator>(unsigned long);
bool OpenSim::PropertyIndex::operator>(unsigned long long);

bool OpenSim::ComponentPath::operator!=(const OpenSim::ComponentPath &);
