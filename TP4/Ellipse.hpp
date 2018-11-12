#ifndef ELLIPSE_IMAC_HPP__
#define ELLIPSE_IMAC_HPP__

#include "./Figure.hpp"

const double PI=3.141592653589793238463;

class Ellipse : public Figure{  
  public:
    Ellipse();
    Ellipse(const double &w, const double &h);
    ~Ellipse();
  
    inline 
      const double surface() const { return PI*_width*_height; };
    
    std::string whoAmI() const;
};


#endif