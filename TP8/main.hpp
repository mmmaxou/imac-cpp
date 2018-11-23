#pragma once
#include <cctype>

namespace TP_CPP_IMAC2_EXERCICE1
{
  template<typename T>
  const T &getMinimum(const T &a, const T &b) 
  {
    return a<b?a:b;
  }
  
  // Specification for char
  template<>
  const char &getMinimum<char>(const char &a, const char &b) 
  {
    char upA = std::toupper(a);
    char upB = std::toupper(b);
    return upA<upB?a:b;
  }
}