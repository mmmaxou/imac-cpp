#include <iostream>
#include <string>
#include <cstdlib>

#include "./Threshold.hpp"
#include "./ImageRGBU8.hpp"

Threshold::Threshold()
  : _threshold()
  {};
Threshold::Threshold(const unsigned char &t)
  : _threshold(t)
  {};

void Threshold::applyFilter(ImageRGBU8 &img) const
{
  std::cout << "Threshold filter(" << (int) _threshold << ")" << std::endl;
  img.threshold(_threshold);
}
