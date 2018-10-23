#ifndef CARRE_IMAC_HPP__
#define CARRE_IMAC_HPP__

#include "./Rectangle.hpp"

class Carre : public Rectangle {  
  public:
    Carre();
    Carre(const double &s);
    ~Carre();
  
    std::string whoAmI() const;
};

#endif