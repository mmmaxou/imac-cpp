#include <iostream>
#include <string>
#include <cstdlib>

#include "./Mean.hpp"
#include "./ImageRGBU8.hpp"

Mean::Mean()
  : _kernelSize(0)
{};
Mean::Mean(const unsigned int &kernelSize)
  : _kernelSize(kernelSize)
{};
void Mean::applyFilter(ImageRGBU8 &img) const
{
  std::cout << "Mean Filter(" << _kernelSize << "x" << _kernelSize <<")" << std::endl;
  img.mean(_kernelSize);
};
