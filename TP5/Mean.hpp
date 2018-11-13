#ifndef MEAN_IMAC_HPP__
#define MEAN_IMAC_HPP__

#include "./ImageRGBU8.hpp"
#include "./Filter.hpp"

class Mean : public Filter
{
  public:
    Mean();
    Mean(const unsigned int &kernelSize);
    void applyFilter(ImageRGBU8 &img) const;

  private:
    const unsigned int _kernelSize;
};

#endif