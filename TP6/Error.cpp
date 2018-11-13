#include "./Error.hpp"

#include <string>

Error::Error()
  : _level(0), _code(0), _message("")
{};
Error::Error(const int &level, const int &code, const std::string &message) 
  : _level(level), _code(code), _message(message)
{};
Error::~Error() {};
const char* Error::what() const noexcept {
  return std::string("Error::At main.cpp:\n  Niveau: "+std::to_string(_level)+"\n  Code: "+std::to_string(_code)+"\n  Message: "+_message).c_str();
};