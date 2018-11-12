#ifndef RECTANGLE_IMAC_HPP__
#define RECTANGLE_IMAC_HPP__

#include "./Figure.hpp"

class Rectangle : public Figure {  
  public:
    Rectangle();
    Rectangle(const double &w, const double &h);
    ~Rectangle();
  
    inline 
      const double surface() const { return _width * _height; };
    
    std::string whoAmI() const;
};

#endif