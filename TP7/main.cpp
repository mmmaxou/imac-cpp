// ================================
// POO C++ - IMAC 2
// TP 7
// ================================

#include <iostream>
#include <exception>
#include <vector>
#include <deque>
#include <list>
#include <algorithm>
#include <cstdlib>

#include "./Error.hpp"

namespace TP_CPP_IMAC2_EXERCICE1
{
  void displayTab(std::vector<int> &t) {
    std::cout << "Vector display (" << t.size() << "): " << std::endl;
    std::vector<int>::iterator iter;
    for(iter = t.begin(); iter != t.end(); iter++) {
      std::cout << *iter << std::endl; 
    }    
  }
  int main(int argc, char *argv[])
  {
    // Exercice 1
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
    std::cout << "Vector display: " << std::endl;
    std::vector<int>::iterator iter;
    for(iter = tab.begin(); iter != tab.end(); iter++) {
      std::cout << *iter << std::endl; 
    }
    return 0;
  }
}
namespace TP_CPP_IMAC2_EXERCICE2
{
  int main(int argc, char *argv[])
  {
    // Exercice 2
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
  void displayTab( std::vector<int> &t) {
    std::cout << "Vector display (" << t.size() << "): " << std::endl;
    std::vector<int>::iterator iter;
    for(iter = t.begin(); iter != t.end(); iter++) {
      std::cout << *iter << std::endl; 
    }    
  }
  int main(int argc, char *argv[])
  {
    // Exercice 3
    // 1_
    std::vector<int> v(20);
    
    // 2_
    for(unsigned int i=0; i<20; i++) {
      v[i] = std::rand() % 21; 
    }
    
    // 3_ Display
    displayTab(v);
    
    // 4_ Sort
    std::sort(v.begin(), v.end());
    
    // 5_ Display
    displayTab(v);
    
    // 6_ Count
    int count = std::count(v.begin(), v.end(), 7);
    std::cout << "Count (7): " << count << std::endl;
    
    return 0;
  }
}
namespace TP_CPP_IMAC2_EXERCICE4
{
  void displayDeque( std::deque<int> &deque) {
    std::cout << "Deque display (" << deque.size() << "): " << std::endl;
    std::deque<int>::iterator iter;
    for(iter = deque.begin(); iter != deque.end(); iter++) {
      std::cout << *iter << std::endl; 
    }    
  }
  int main(int argc, char *argv[])
  {
    // Exercice 4
    // 1_ Declaration
    std::deque<int> d(5);
    
    // 2_ Init
    for(unsigned int i=0; i<5; i++) {
      d[i] = std::rand() % 21; 
    }
    
    // 3_ Display
    displayDeque(d);
    
    // 4_ Ajout
    for(unsigned int i=0; i<5; i++) {
      d.push_front(std::rand() % 21);
      d.pop_back();
      displayDeque(d);
    }
    
    return 0;
  }
}
namespace TP_CPP_IMAC2_EXERCICE5
{
  void displayList( std::list<std::string> &list) {
    std::cout << "List display (" << list.size() << "): " << std::endl;
    std::list<std::string>::iterator iter;
    for(iter = list.begin(); iter != list.end(); iter++) {
      std::cout << *iter << std::endl; 
    }    
  }
  int main(int argc, char *argv[])
  {
    // Exercice 5
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
    displayList(lPhilo);
    displayList(lMath);
    
    // 4_ Fusion
    std::list<std::string> lFusion;
    lFusion.merge(lMath);
    lFusion.merge(lPhilo);
    displayList(lFusion);
    
    // 5_ Unique
    lFusion.unique();
    displayList(lFusion);
    
    // 6_ Revert
    lFusion.reverse();
    displayList(lFusion);
    
    
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
  return TP_CPP_IMAC2_EXERCICE5::main(argc, argv);
}

