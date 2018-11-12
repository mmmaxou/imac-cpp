#ifndef CARRE_IMAC_HPP__
#define CARRE_IMAC_HPP__

#include "./Rectangle.hpp"

class Carre : public Rectangle {  
  public:
    Carre();
    Carre(const double &s);
    ~Carre();  
  
    inline void setWidth(const double &w) {setBoth(w);};
    inline void setheight(const double &h) {setBoth(h);};
    inline void setBoth(const double &b) {   
      _width = b;   
      _height = b;   
    }
  
    std::string whoAmI() const;
};

#endif