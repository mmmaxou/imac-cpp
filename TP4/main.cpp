// ================================
// POO C++ - IMAC 2
// TP 4 - Exercice 1
// ================================

#include <iostream>
#include <cstdlib>

#include "ImageRGBU8.hpp"
#include "ioPPM.hpp"

namespace TP_CPP_IMAC2
{
  int main(int argc, char *argv[])
  {
    ImageRGBU8 img(50, 50);
    img(25, 25, 1) = 0;
    img(25, 25, 2) = 0;
    writePPM("toto.ppm", img);
    
    return 0;
  }
}

// Fonction main classique, point d'entrée du programme
int main(int argc, char *argv[])
{
  // Appel de la fonction main de l'espace de nom TP_CPP_IMAC2
  return TP_CPP_IMAC2::main(argc, argv);
}

