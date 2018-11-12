#include <iostream>
#include <cstdlib>
#include "./Cercle.hpp"

Cercle::Cercle(const double &r) :
  Ellipse(r, r)
{
}
Cercle::~Cercle() {
  std::cout << "Destroy that Circle !" << std::endl;
}

std::string Cercle::whoAmI() const {
  return "I'm a Circle";
};