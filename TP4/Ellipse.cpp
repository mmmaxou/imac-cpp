#include <iostream>
#include <cstdlib>
#include "./Ellipse.hpp"

Ellipse::Ellipse()
{
  _width = 1.;
  _height = 1.;
}
Ellipse::Ellipse(const double &w, const double &h)
{
  _width = w;
  _height = h;
}
Ellipse::~Ellipse() {
  std::cout << "Destroy that Ellipse !" << std::endl;
}

std::string Ellipse::whoAmI() const {
  return "I'm an Ellipse";
};