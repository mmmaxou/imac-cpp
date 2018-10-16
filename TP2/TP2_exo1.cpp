// ================================
// POO C++ - IMAC 2
// TP 2 - Exercice 1
// ================================

#include <iostream>
#include <cstdlib>
#include "./VectorD.hpp"

namespace TP_CPP_IMAC2
{
  int main(int argc, char *argv[])
  {
    VectorD vec(3);
    VectorD vec2 = vec;
    std::cout << "Vector Size : " << vec.getSize() << std::endl;
    vec.print();
    vec2.print();
    vec.set(0, 2);
    vec.set(1, 5);
    vec.print();
    
    vec2.set(0, 1);
    vec2.set(1, 7);
    vec2.set(2, 3);
    vec2.print();
    vec2.normalize();
    vec2.print();
    
    vec.add(vec2).print();
    
    VectorD vec4(vec + vec2);
    vec4.print();
    
    VectorD vec5(3);
    vec5 = vec + vec2 + vec2;
    vec5 = vec5 + vec5;
    std::cout << "VEC5 : " << std::endl;
    vec5.print();
    
    vec.saveInFile();
    
    VectorD vec3(3);
    vec3.readInFile();
    vec3.print();
    return 0;
  }
}

// Fonction main classique, point d'entrée du programme
int main(int argc, char *argv[])
{
  // Appel de la fonction main de l'espace de nom TP_CPP_IMAC2
  return TP_CPP_IMAC2::main(argc, argv);
}

