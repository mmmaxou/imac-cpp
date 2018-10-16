#include "VectorD.hpp"

// Constructor
VectorD::VectorD(const size_t size)
  : _size(size) 
{
  _data = new double[size];
  std::fill(_data, 
            &(_data[size]), 
            0);
  //std::cout << "Constructeur par DÉFAUT" << std::endl;
}
VectorD::VectorD(const VectorD &v)
  : _size(v._size)
{
  _data = new double[_size];
  std::copy(v._data, 
            &(v._data[v._size]), 
            _data);
  //std::cout << "Constructeur par COPIE" << std::endl;
}

// Destructor
VectorD::~VectorD() 
{
  delete[] _data;
}

// Methods
void VectorD::print() 
{
  for (size_t i=0; i<_size; i++) {
    std::cout << _data[i] << " ";
  }
  std::cout << std::endl;
}
void VectorD::set(const size_t i, const double d)
{
  if (i>_size) {
    std::cerr << "Index" << i << " bigger than the size." << std::endl;
  }
  _data[i] = d;
}
VectorD VectorD::add(const VectorD &vec)
{
  std::transform(_data,
                 _data + _size,
                 vec._data,
                 _data,
                 std::plus<double>());
  return *this;
}
VectorD VectorD::operator+(const VectorD &v2) 
{
  if ( _size != v2._size ) {
    std::cout << "Error:VectorD::Operator+::OperandsNotSameSize" << std::endl;
    return *this;
  }
  
  VectorD result(_size);
  /// OLD BORING AND SLOW WAY
  /*
  for (size_t i=0; i<_size; i++) {
    result._data[i] = _data[i] + v2._data[i];
  } 
  */
  std::transform(_data,
                 _data + _size,
                 v2._data,
                 result._data,
                 std::plus<double>());
  return result;
}
VectorD & VectorD::operator=(const VectorD &vec) 
{
  if (&vec == this) return *this;
  if (vec._size != _size) {
    std::cerr << "Error:VectorD::Operator=:OperandsNotSameSize" << std::endl;
    return *this;
  }
  std::copy(vec._data,
            &(vec._data[vec._size]),
            _data);
  return *this;
}
void VectorD::normalize() 
{
  double norm = 0.0;
  for (size_t i=0; i<_size; i++)
    norm += _data[i] * _data[i];
  norm = sqrt(norm);
  if( std::fabs(norm) < 10e-10 )
    return;
  for (size_t i=0; i<_size; i++)
    _data[i] /= norm;
}
void VectorD::saveInFile() const 
{
  std::ofstream fileStream;
  fileStream.open("./vector_data.txt");
  for (size_t i=0; i<_size; i++) {
    fileStream << _data[i] << " ";
  }
  fileStream << "\n";
  fileStream.close();
}
void VectorD::readInFile() 
{
  std::ifstream file("./vector_data.txt", std::ios::in);
  if (file) {
    for (size_t i=0; i<_size; i++) {
      file >> _data[i];
    }
    file.close();
  }
  else
    std::cerr << "ERROR:VectorD::readInFile:FileOpenImpossible" << std::endl;
}