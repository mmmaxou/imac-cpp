#ifndef VECTOR_D_HPP__
#define VECTOR_D_HPP__

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <cmath>
#include <algorithm>

class VectorD {
  
public:
  /// Constructor
  VectorD(const size_t size);
  VectorD(const VectorD &v);
  
  /// Destructor
  ~VectorD();
  
  /// Methods
  void print();
  VectorD add(const VectorD &vec);
  VectorD operator+(const VectorD &vec);
  VectorD & operator=(const VectorD &vec);
  void set(const size_t i, const double d);
  void normalize();
  
  inline double getValue(const size_t index) const { 
    return _data[index];
  };
  inline size_t getSize() const { 
    return _size;
  };
  void saveInFile() const;
  void readInFile();
  
protected:
  size_t _size;
  double * _data;  
};

#endif