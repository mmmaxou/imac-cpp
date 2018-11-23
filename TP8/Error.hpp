#ifndef ERROR_IMAC_HPP__
#define ERROR_IMAC_HPP__

#include <exception>
#include <string>

class Error : public std::exception {  
  public:
    Error();
    Error(const std::string &message);
    ~Error();
    const char* what() const noexcept;    
  
  private:
    std::string _message;
};

#endif