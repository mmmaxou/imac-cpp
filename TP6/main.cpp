// ================================
// POO C++ - IMAC 2
// TP 6
// ================================

#include <iostream>
#include <exception>
#include <cstdlib>

#include "./Error.hpp"

namespace TP_CPP_IMAC2
{
  int main(int argc, char *argv[])
  {    
    int a = 10;
    int b = 0;
    
    try {
      if (b==0) throw Error("Division by 0");
      std::cout << "a/2 = " << a/2 << std::endl;
      std::cout << "a/b = " << a/b << std::endl;
      std::cout << "a/5 = " << a/5 << std::endl;      
    } catch ( std::exception &e ) {
      std::cerr << e.what() << std::endl; 
    }
    std::cout << "Finished !! " << std::endl;    
    return 0;
  }
}

// Fonction main classique, point d'entrée du programme
int main(int argc, char *argv[])
{
  // Appel de la fonction main de l'espace de nom TP_CPP_IMAC2
  return TP_CPP_IMAC2::main(argc, argv);
}

