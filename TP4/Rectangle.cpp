#include <iostream>
#include <string>
#include <cstdlib>
#include "./Rectangle.hpp"

Rectangle::Rectangle() {
  _width = 0; 
  _height = 0; 
}
Rectangle::Rectangle(const double &w, const double &h) :
  _width(w), _height(h)
{}
Rectangle::~Rectangle() {
  std::cout << "Destroy that Rectangle !" << std::endl;
}
std::string Rectangle::whoAmI() const {
  return "I'm a rectangle";
};