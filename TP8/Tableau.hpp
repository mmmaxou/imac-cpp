#pragma once

#include <iostream>

namespace TP_CPP_IMAC2_EXERCICE3
{
  
  template<typename T, size_t N>
  class Tableau
  {
    public:
    const bool isEmpty() const { return _size == 0; };
    size_t getSize() const { return _size; };
    size_t getMaxSize() const { return N; };
    
    
    private:
      T _data[N];
      size_t _size = 0;
  };
}