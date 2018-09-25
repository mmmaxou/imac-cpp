// ================================
// POO C++ - IMAC 2
// TP 1 - Exercice 5
// ================================

#include<iostream>
#include<vector>

namespace TP_CPP_IMAC2
{
  int main(int argc, char *argv[])
  {
    size_t uInput = 0;
    std::vector<int> intVec;
    std::cout << "Quelle est la taille de ton vecteur ? ";
    std::cin >> uInput;
    for ( size_t i=0; i<uInput; i++) {
      intVec.push_back(i%10);
    }
    std::cout << "Taille du vecteur : " << intVec.size() << std::endl;
    std::cout << "1e Element : " << intVec[0] << " : " << &intVec[0] << std::endl;
    std::cout << "2e Element : " << intVec[1] << " : " << &intVec[1] << std::endl;
    std::cout << "3e Element : " << intVec[2] << " : " << &intVec[2] << std::endl;
    std::cout << "Taille d'un élément : " << sizeof( intVec[0] ) << std::endl;
    intVec.pop_back();
    intVec.clear();
    std::cout << "Taille du vecteur : " << intVec.size() << std::endl;

    return 0;
  }
}

// Fonction main classique, point d'entrée du programme
int main(int argc, char *argv[])
{
  // Appel de la fonction main de l'espace de nom TP_CPP_IMAC2
  return TP_CPP_IMAC2::main(argc, argv);
}

