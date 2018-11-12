#include <iostream>
#include <string>
#include <cstdlib>

#include "./Threshold.hpp"
#include "./ImageRGBU8.hpp"


Threshold::Threshold() : _threshold() {};
Threshold::Threshold(const unsigned char &t) : _threshold(t) {};

void Threshold::applyFilter (const ImageRGBU8 &img) const
{
  std::cout << "I apply a filter" << std::endl;
  
  for(size_t i=0; i<img.width(); i++) {
    for(size_t j=0; j<img.height(); j++) {
      unsigned char r = img(i, j, 0);
      unsigned char g = img(i, j, 1);
      unsigned char b = img(i, j, 2);
      unsigned int mean = r+g+b/3;
      if(mean>_threshold) {
        r = 255;
        g = 255;
        b = 255;
      }
    }    
  }
  
};