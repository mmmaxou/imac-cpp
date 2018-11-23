#include "./Error.hpp"

#include <string>
#include <iostream>

Error::Error()
  : _message("")
{};
Error::Error(const std::string &message) 
  : _message(message)
{};
Error::~Error() {};
const char* Error::what() const noexcept {
  std::string message = std::string("Error::At " + std::string(__FILE__) + ":" + std::to_string(__LINE__) + " :\n  Message: "+ _message).c_str();
  std::cout << message;
  return message.c_str();
};