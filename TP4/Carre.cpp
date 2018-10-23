#include <iostream>
#include <cstdlib>
#include "./Carre.hpp"

Carre::Carre(const double &s) :
  Rectangle(s, s)
{
}
Carre::~Carre() {
  std::cout << "Destroy that Square !" << std::endl;
}

std::string Carre::whoAmI() const {
  return "I'm a Square";
};