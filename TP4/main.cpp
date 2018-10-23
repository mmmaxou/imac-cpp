// ================================
// POO C++ - IMAC 2
// TP 4 - Exercice 1
// ================================

#include <iostream>
#include <cstdlib>
#include "./Rectangle.hpp"
#include "./Carre.hpp"

namespace TP_CPP_IMAC2
{
  int main(int argc, char *argv[])
  {
    Rectangle r1(2.6, 4.42), r2;
    std::cout << r1.surface() << std::endl;
    r1.setWidth(3.9);
    std::cout << r1.surface() << std::endl;
    
    Carre c1(1.5);
    std::cout << c1.surface() << std::endl;
    
    std::cout << r1.whoAmI() << std::endl;
    std::cout << c1.whoAmI() << std::endl;
    
    return 0;
  }
}

// Fonction main classique, point d'entrée du programme
int main(int argc, char *argv[])
{
  // Appel de la fonction main de l'espace de nom TP_CPP_IMAC2
  return TP_CPP_IMAC2::main(argc, argv);
}

