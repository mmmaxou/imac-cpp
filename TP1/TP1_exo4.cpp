#include <cstdlib>
#include <string>
#include <iostream>
#include "../colormod.hpp"


int maxValue(int * tab, size_t size) {
  int max = 0;
  for ( size_t i=0; i<size; i++ ) {
    if ( tab[i] > max ) {
      max = tab[i];
    }
  }
  return max;
}

int main () {
  
  ColorMod::Modifier red(ColorMod::FG_RED);
  ColorMod::Modifier blue(ColorMod::FG_BLUE);
  ColorMod::Modifier green(ColorMod::FG_GREEN);
  ColorMod::Modifier reset(ColorMod::FG_DEFAULT);
  
  size_t uInput;
  std::cout << green << "Donnez moi une taille de tableau :" << blue;
  std::cin >> uInput;
  int *tab = new int[uInput];
  std::cout << green << std::endl << "Donnez moi " << uInput << " entiers pour remplir le tableau :" << blue << std::endl;
  for ( size_t i=0; i<uInput; i++) {
    std::cin >> tab[i];
  }
  
  std::cout << green << "Taille du tableau : " << uInput << std::endl;
  std::cout << "Addresses mémoires : " << &tab << " ; " << &tab+1 << " ; " << &tab+2 << std::endl;
  std::cout << "Taille d'un élément : " << sizeof( tab[0] ) << std::endl;
  std::cout << "1e Element : " << *(tab) << std::endl;
  std::cout << "5e Element : " << *(tab+4) << std::endl;
  std::cout << "Maximum : " << maxValue(tab, uInput) << std::endl;
  
  // liberer la memoire
  delete[] tab;
  std::cout << reset;
  return 0;
    
}
