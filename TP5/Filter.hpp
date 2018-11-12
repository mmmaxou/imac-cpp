#ifndef FILTER_IMAC_HPP__
#define FILTER_IMAC_HPP__

#include "./ImageRGBU8.hpp"

class Filter {  
  protected:
    virtual  
      void applyFilter (const ImageRGBU8 &img) const =0;
};

#endif