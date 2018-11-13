#ifndef FILTERS_IMAC_HPP__
#define FILTERS_IMAC_HPP__

#include <vector>
#include "./ImageRGBU8.hpp"
#include "./Filter.hpp"

class Filters {  

  public:
    
    // Constructor
    Filters();
    Filters(const int n);

    // Destructor
    ~Filters();

    // Methods
    void addFilter(const Filter &filter);
    void applyFilters(ImageRGBU8 &img) const;

  private:
    unsigned int _size;
    unsigned int _nbFilters;
    const Filter ** _filters;
};

#endif