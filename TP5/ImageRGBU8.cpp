#include "ImageRGBU8.hpp"

/// Constructor
ImageRGBU8::ImageRGBU8() : _width(0), _height(0), _data()
{
}
ImageRGBU8::ImageRGBU8(const unsigned int w, 
                       const unsigned int h)
  : _width(w),
    _height(h),
    _data(w * h * 3)
{
  std::cout << "Constructeur par VALEURS" << std::endl;
  std::fill(_data.begin(),
            _data.end(),
            255);
}
ImageRGBU8::ImageRGBU8(const unsigned int w, 
                       const unsigned int h,
                       const std::vector<unsigned char> &data)
  : _width(w),
    _height(h),
    _data(data)
{
}

/// Destructor
ImageRGBU8::~ImageRGBU8() {}