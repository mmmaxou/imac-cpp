// ================================
// POO C++ - IMAC 2
// TP 5
// ================================

#include <iostream>
#include <cstdlib>

#include "./Threshold.hpp"
#include "./ImageRGBU8.hpp"
#include "./ioPPM.hpp"

namespace TP_CPP_IMAC2
{
  int main(int argc, char *argv[])
  {    
    // read image
    std::string ppmFile = "mandelbrot.ppm";
    ImageRGBU8 image1;
    readPPM(ppmFile, image1);
    
    // apply filter and save
    Threshold t(100);
    t.applyFilter(image1);
    writePPM("test1.ppm", image1);
    
    return 0;
  }
}

// Fonction main classique, point d'entrée du programme
int main(int argc, char *argv[])
{
  // Appel de la fonction main de l'espace de nom TP_CPP_IMAC2
  return TP_CPP_IMAC2::main(argc, argv);
}

