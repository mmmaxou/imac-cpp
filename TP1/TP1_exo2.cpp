#include <cstdlib>
#include <iostream>
#include "../colormod.hpp"

int main () {
  
  std::cout << "Donnes moi un nombre entier si t'es sympa." << std::endl;
  
  int userInput;
  
  ColorMod::Modifier red(ColorMod::FG_RED);
  ColorMod::Modifier def(ColorMod::FG_DEFAULT);
  
  std::cin >> userInput;
  userInput == 79 ? std::cout << "79: Parfait" << std::endl
      : userInput <= 0 ? std::cout << red << "Error: Négatif" << def << std::endl
      : std::cerr << "Error: Strictement Positif" << std::endl;
  
  return 0;
    
}