#pragma once

#include <iostream>

namespace TP_CPP_IMAC2_EXERCICE2
{
  
  template<typename Type>
  class Point3D
  {
    public:
      // Constructors
      Point3D()
        : _x(0), _y(0), _z(0)
      {}
      Point3D(const Type &x, const Type &y, const Type &z)
        : _x(x), _y(y), _z(z)
      {}
    
      //Copy
      Point3D(const Point3D &p)
        : _x(p._x), _y(p._y), _z(p._z)
      {
        //std::cout << "Default copy" << std::endl;
      }
      template<typename OtherType>
      Point3D(const Point3D<OtherType> &p)
      { 
        //std::cout << "Surcharge copy" << std::endl;
        _x = p.getX();
        _y = p.getY();
        _z = p.getZ();
      }
    
      // Getters
      Type getX() const { return _x; };
      Type getY() const { return _y; };
      Type getZ() const { return _z; };
      
      // Methods
      Point3D &operator=(const Point3D &p)
      {
        if (this != &p)
        {
          _x = p._x;
          _y = p._y;
          _z = p._z;
        }
        return *this;
      }
      Point3D operator+(const Type &s)
      {
        return Point3D(_x+s, _y+s, _z+s);
      }
      Point3D operator+(const Point3D &p)
      {
        return Point3D(_x+p._x, _y+p._y, _z+p._z);
      }
      friend std::ostream &operator<<(std::ostream &os, const Point3D &p)
      { 
        os << "(" << p._x << ", " << p._y << ", " << p._z << ")";
        return os;
      }
  
    
    private:
      Type _x;
      Type _y;
      Type _z;
  };
}