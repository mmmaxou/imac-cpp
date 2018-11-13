#include <iostream>
#include <string>
#include <cstdlib>
#include <exception>
#include <typeinfo>

#include "./Filters.hpp"
#include "./ImageRGBU8.hpp"

Filters::Filters()
    : _size(0), _nbFilters(0)
{
  _filters = new const Filter *[_size];
}
Filters::Filters(const int n)
    : _size(n), _nbFilters(0)
{
  _filters = new const Filter *[_size];
}
Filters::~Filters()
{
  delete[] _filters;
}

void Filters::addFilter(const Filter &filter)
{
  if (_nbFilters == _size)
  {
    throw std::out_of_range("Taille du tableau (" + std::to_string(_size) + ") trop petite");
  }
  _filters[_nbFilters] = &filter;
  _nbFilters++;
}
void Filters::applyFilters(ImageRGBU8 &img) const
{
  for(size_t i=0; i<_nbFilters; i++) {
    const Filter *&a = _filters[i];
    (*a).applyFilter(img);
  }
}