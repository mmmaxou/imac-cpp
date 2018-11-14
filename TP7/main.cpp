// ================================
// POO C++ - IMAC 2
// TP 7
// ================================

#include <iostream>
#include <exception>
#include <vector>
#include <deque>
#include <list>
#include <map>
#include <algorithm>
#include <cstdlib>

#include "./Error.hpp"
#include "./Majuscule.hpp"
#include "./AjoutSiPair.hpp"

template <typename C>
  void displayCollection(C &collec) {
    std::cout << "Collection display (" << collec.size() << "): " << std::endl;
    typename C::iterator it;
    for(it = collec.begin(); it != collec.end(); it++) {
      std::cout << *it << std::endl; 
    }    
  }
namespace TP_CPP_IMAC2_EXERCICE1
{
  int main(int argc, char *argv[])
  {
    // Exercice 1
    std::cout << "TP_CPP_IMAC2_EXERCICE1" << std::endl;
    // 1_ Empty int vector
    std::vector<int> tab;
    
    // 2_ Empty ?
    std::cout << "Empty vector ? " << tab.empty() << std::endl;
    
    // 3_ Size
    std::cout << "Vector size: " << tab.size() << std::endl;
    
    // 4_ Max Size
    std::cout << "Vector max_size: " << tab.max_size() << std::endl;
    
    // 5_ Ajout
    tab.push_back(197854694);
    tab.push_back(154);
    tab.push_back(-54846767);
    tab.push_back(698);
    tab.push_back(1);
    tab.push_back(-0);
    std::cout << "Adding new elements" << std::endl;
    
    // 6_ New Size
    std::cout << "Vector size: " << tab.size() << std::endl;
    
    // 7_ Display Vector
    displayCollection(tab);
    return 0;
  }
}
namespace TP_CPP_IMAC2_EXERCICE2
{
  int main(int argc, char *argv[])
  {
    // Exercice 2
    std::cout << "TP_CPP_IMAC2_EXERCICE2" << std::endl;
    std::vector<std::string> v1(1, "Test");
    std::vector<std::string> v2(1, "Swap");
    
    std::cout << "V1: " << v1[0] << " | V2: " << v2[0] << std::endl;
    
    // Swap
    std::swap(v1, v2);
    std::cout << "V1: " << v1[0] << " | V2: " << v2[0] << std::endl;
    
    return 0;
  }
}
namespace TP_CPP_IMAC2_EXERCICE3
{
  int main(int argc, char *argv[])
  {
    // Exercice 3
    std::cout << "TP_CPP_IMAC2_EXERCICE3" << std::endl;
    // 1_
    std::vector<int> v(20);
    
    // 2_
    for(unsigned int i=0; i<20; i++) {
      v[i] = std::rand() % 21; 
    }
    
    // 3_ Display
    displayCollection(v);
    
    // 4_ Sort
    std::sort(v.begin(), v.end());
    
    // 5_ Display
    displayCollection(v);
    
    // 6_ Count
    int count = std::count(v.begin(), v.end(), 7);
    std::cout << "Count (7): " << count << std::endl;
    
    return 0;
  }
}
namespace TP_CPP_IMAC2_EXERCICE4
{
  int main(int argc, char *argv[])
  {
    // Exercice 4
    std::cout << "TP_CPP_IMAC2_EXERCICE4" << std::endl;
    // 1_ Declaration
    std::deque<int> d(5);
    
    // 2_ Init
    for(unsigned int i=0; i<5; i++) {
      d[i] = std::rand() % 21; 
    }
    
    // 3_ Display
    displayCollection(d);
    
    // 4_ Ajout
    for(unsigned int i=0; i<5; i++) {
      d.push_front(std::rand() % 21);
      d.pop_back();
      displayCollection(d);
    }
    
    return 0;
  }
}
namespace TP_CPP_IMAC2_EXERCICE5
{
  int main(int argc, char *argv[])
  {
    // Exercice 5
    std::cout << "TP_CPP_IMAC2_EXERCICE5" << std::endl;
    // 1_ Adding
    std::list<std::string> lPhilo;
    lPhilo.push_back("Platon");
    lPhilo.push_back("Aristote");
    lPhilo.push_back("Descartes");
    lPhilo.push_back("Kant");
    
    // 2_ Adding
    std::list<std::string> lMath;
    lMath.push_back("Gauss");
    lMath.push_back("Laplace");
    lMath.push_back("Poincaré");
    lMath.push_back("Descartes");
    
    // 3_Display
    lPhilo.sort();
    lMath.sort();
    displayCollection(lPhilo);
    displayCollection(lMath);
    
    // 4_ Fusion
    std::list<std::string> lFusion;
    lFusion.merge(lMath);
    lFusion.merge(lPhilo);
    displayCollection(lFusion);
    
    // 5_ Unique
    lFusion.unique();
    displayCollection(lFusion);
    
    // 6_ Revert
    lFusion.reverse();
    displayCollection(lFusion);
    
    
    return 0;
  }
}
namespace TP_CPP_IMAC2_EXERCICE6
{
  int main(int argc, char *argv[])
  {
    // Exercice 6
    std::cout << "TP_CPP_IMAC2_EXERCICE6" << std::endl;
    
    // Map creation
    std::map<std::string, int> studentsAge;
    
    // Adding students
    studentsAge.insert( std::pair<std::string, int>("Ali", 25) );
    studentsAge.insert( std::pair<std::string, int>("Jean", 22) );
    studentsAge.insert( std::pair<std::string, int>("Pierre", 20) );
    studentsAge.insert( std::pair<std::string, int>("Sara", 19) );
    studentsAge.insert( std::pair<std::string, int>("Sofia", 18) );
    
    // Age and Name display
    std::cout << "Students list(" << studentsAge.size() << ") and their age: " << std::endl;
    std::map<std::string, int>::iterator it;
    for(it = studentsAge.begin(); it != studentsAge.end(); it++) {
      std::cout << it->first << " is " << it->second << " yo." << std::endl; 
    }
    
    // "Marie" age if exist
    it = studentsAge.find("Marie");
    if(it == studentsAge.end())
      std::cerr << "Marie's age doesn't exist." << std::endl;
    else
      std::cout << "Marie is " << it->second << " yo." << std::endl;
    
    return 0;
  }
}
namespace TP_CPP_IMAC2_EXERCICE7
{
  int main(int argc, char *argv[])
  {
    // Exercice 7
    std::cout << "TP_CPP_IMAC2_EXERCICE7" << std::endl;
    Majuscule foncteur;
    char tab[5] = {'i', 'm', 'a', 'c', 0};
    std::cout << "Tab content: " << tab << std::endl;
    for(int i=0; i<4; i++) {
      foncteur(tab[i]);
    }
    std::cout << "Tab content: " << tab << std::endl;
    
    return 0;
  }
}
namespace TP_CPP_IMAC2_EXERCICE8
{
  int main(int argc, char *argv[])
  {
    // Exercice 8
    std::cout << "TP_CPP_IMAC2_EXERCICE8" << std::endl;
    
    AjoutSiPair foncteur;
    
    std::list<int> nb;
    nb.push_back(17);
    nb.push_back(12);
    nb.push_back(9);
    nb.push_back(3);
    nb.push_back(2);
    nb.push_back(6);
    nb.push_back(13);
    displayCollection(nb);
    std::list<int>::iterator it;
    for(it = nb.begin(); it != nb.end(); it++) {
      foncteur(*it);
    }    
    displayCollection(nb);
    
    
    return 0;
  }
}
// Fonction main classique, point d'entrée du programme
int main(int argc, char *argv[])
{
  //return TP_CPP_IMAC2_EXERCICE1::main(argc, argv);
  //return TP_CPP_IMAC2_EXERCICE2::main(argc, argv);
  //return TP_CPP_IMAC2_EXERCICE3::main(argc, argv);
  //return TP_CPP_IMAC2_EXERCICE4::main(argc, argv);
  //return TP_CPP_IMAC2_EXERCICE5::main(argc, argv);
  //return TP_CPP_IMAC2_EXERCICE6::main(argc, argv);
  //return TP_CPP_IMAC2_EXERCICE7::main(argc, argv);
  return TP_CPP_IMAC2_EXERCICE8::main(argc, argv);
}

