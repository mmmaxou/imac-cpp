#ifndef VECTOR_D_HPP__
#define VECTOR_D_HPP__

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cmath>


class ImageRGBU8 {
  
  public:
    /// Constructor
    ImageRGBU8();
    ImageRGBU8(const unsigned int w, 
               const unsigned int h);
    ImageRGBU8(const unsigned int w, 
               const unsigned int h,
               const std::vector<unsigned char> &data);
  
    /// Destructor
    ~ImageRGBU8();
  
    /// Methods
  
    /// Getters
    inline const
      unsigned char & operator()(const unsigned int x,
                                 const unsigned int y,
                                 const unsigned int c) const
    {
      return _data[(y*_width+x)*3 + c];
    }
    inline
      unsigned char & operator()(const unsigned int x,
                                 const unsigned int y,
                                 const unsigned int c)
    {
      return _data[(y*_width+x)*3 + c];
    }
    inline const 
      unsigned int width() const { return _width; };
    inline const 
      unsigned int height() const { return _height; };
    inline 
      unsigned char *data() { return _data.data(); };
    inline const 
      unsigned char *data() const { return _data.data(); };
  
  
  
  
  private:
    unsigned int _width;
    unsigned int _height;
    std::vector< unsigned char > _data;
  
};

#endif