#include <iostream>
#include <string>
#include <cstdlib>

#include "./EdgeDetector.hpp"
#include "./ImageRGBU8.hpp"

EdgeDetector::EdgeDetector(){};
void EdgeDetector::applyFilter(ImageRGBU8 &img) const
{
  std::cout << "Edge Detector Filter()" << std::endl;
  img.edgeDetector();
};
