#include <cstdlib>
#include <string>
#include <iostream>
#include "../colormod.hpp"

int main () {
  
  ColorMod::Modifier red(ColorMod::FG_RED);
  ColorMod::Modifier blue(ColorMod::FG_BLUE);
  ColorMod::Modifier green(ColorMod::FG_GREEN);
  ColorMod::Modifier reset(ColorMod::FG_DEFAULT);
  
  std::string uInput = "";
  std::cout << "Donnes moi une chaine de caractères si t'es sympa :)" << std::endl;
  getline(std::cin, uInput);
  std::cout << blue << "String size : " << uInput.size() << std::endl << "Last element : " << uInput.back() << std::endl << reset;
  
  uInput.pop_back();
  std::cout << green << "On efface le dernier caractère : " << uInput << std::endl;
  uInput.insert(0, "IMAC ");
  std::cout << red << "On ajoute IMAC au début : " << uInput << reset << std::endl;
    
  return 0;
    
}