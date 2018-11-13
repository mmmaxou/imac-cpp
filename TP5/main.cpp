// ================================
// POO C++ - IMAC 2
// TP 5
// ================================

#include <iostream>
#include <cstdlib>

#include "./Filters.hpp"
#include "./Threshold.hpp"
#include "./RemoveChannel.hpp"
#include "./Mean.hpp"
#include "./EdgeDetector.hpp"
#include "./ImageRGBU8.hpp"
#include "./ioPPM.hpp"

namespace TP_CPP_IMAC2
{
int main(int argc, char *argv[])
{
  // read image
  std::string ppmFile = "ultraman.ppm";
  ImageRGBU8 image1;
  readPPM(ppmFile, image1);

  // apply filter and save
  Threshold t1(200);
  Threshold t2(220);
  RemoveChannel rc1(2);
  RemoveChannel rc2(1);
  Mean m1(7);
  Mean m2(9);
  EdgeDetector e1;
  Filters filters(5);
  try
  {
    //filters.addFilter(t1);
    //filters.addFilter(t2);
    //filters.addFilter(rc1);
    //filters.addFilter(rc2);
    filters.addFilter(m1);
    //filters.addFilter(m2);
    filters.addFilter(e1);
    filters.addFilter(t1);

    filters.applyFilters(image1);
  } catch( std::exception const &e ) {
    std::cerr << "Error:Adding Filters:" << e.what() << std::endl;
  }


  writePPM("test1.ppm", image1);

  return 0;
}
} // namespace TP_CPP_IMAC2

// Fonction main classique, point d'entrée du programme
int main(int argc, char *argv[])
{
  // Appel de la fonction main de l'espace de nom TP_CPP_IMAC2
  return TP_CPP_IMAC2::main(argc, argv);
}
