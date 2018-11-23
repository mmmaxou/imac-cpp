// ================================
// POO C++ - IMAC 2
// TP 8
// ================================

#include <iostream>
#include <cstdlib>

#include "Error.hpp"
#include "main.hpp"
#include "Point3D.hpp"
#include "Tableau.hpp"

namespace TP_CPP_IMAC2_EXERCICE1
{
  int main(int argc, char *argv[])
  {
    // Exercice 1
    std::cout << "Int: " << getMinimum(79, 67) << std::endl;
    std::cout << "Float: " << getMinimum(7.9f, 6.7f) << std::endl;
    std::cout << "Char: " << getMinimum('a', 'z') << std::endl;
    std::cout << "Different Types: " << getMinimum<float>(56, 67.8f) << std::endl;
    std::cout << "Uppercase: " << getMinimum('a', 'Z') << std::endl;
    return 0;
  }
}

namespace TP_CPP_IMAC2_EXERCICE2
{
  int main(int argc, char *argv[])
  {
    Point3D<int> p1;
    std::cout << p1 << std::endl;
    Point3D<double> p2(1.2, 3.3, 898.8);
    std::cout << p2 << std::endl;
    Point3D<double> p3(p2);
    std::cout << p3 << std::endl;
    p3 = Point3D<double>(2.1, 4.8, 7.8);
    std::cout << p3 << std::endl;
    p3 = p3 + 2.1;
    std::cout << p3 << std::endl;
    p3 = p3 + Point3D<double>(0.1, 0.5, -0.6);
    std::cout << p3 << std::endl;
    Point3D<int> p4(p3);
    std::cout << p4 << std::endl;
    return 0;
  }
}

namespace TP_CPP_IMAC2_EXERCICE3
{
  int main(int argc, char *argv[])
  {
    std::cout << "TP_CPP_IMAC2_EXERCICE3" << std::endl;
    Tableau<int, 2> t;
    std::cout << "Is Empty :" << t.isEmpty() << std::endl;
    return 0;
  }
}
// Fonction main classique, point d'entrée du programme
int main(int argc, char *argv[])
{
  //return TP_CPP_IMAC2_EXERCICE1::main(argc, argv);
  //return TP_CPP_IMAC2_EXERCICE2::main(argc, argv);
  return TP_CPP_IMAC2_EXERCICE3::main(argc, argv);
}

