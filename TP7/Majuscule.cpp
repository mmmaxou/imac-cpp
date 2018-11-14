#include <iostream>
#include "./Majuscule.hpp"

void Majuscule::operator()(char &c) const {
  // int diff = 'a' - 'A'; // 32
  if ( c >= 'a' && c <= 'z' )
    c -= 32;
}