#include <iostream>
#include "./AjoutSiPair.hpp"

void AjoutSiPair::operator()(int &n) const {
  if (n%2==1)
    n += 10;    
}