#ifndef FILTER_IMAC_HPP__
#define FILTER_IMAC_HPP__

#include "./ImageRGBU8.hpp"

class Filter {  
  public:
    virtual  
      void applyFilter (ImageRGBU8 &img) const =0;
};

#endif