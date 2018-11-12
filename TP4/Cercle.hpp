#ifndef CERCLE_IMAC_HPP__
#define CERCLE_IMAC_HPP__

#include "./Ellipse.hpp"

class Cercle : public Ellipse {  
  public:
    Cercle();
    Cercle(const double &r);
    ~Cercle();  
  
    inline void setWidth(const double &w) {setBoth(w);};
    inline void setheight(const double &h) {setBoth(h);};
    inline void setBoth(const double &b) {
      _width = b;   
      _height = b;   
    }
  
    std::string whoAmI() const;
};


#endif