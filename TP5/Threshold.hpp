#ifndef THRESHOLD_IMAC_HPP__
#define THRESHOLD_IMAC_HPP__

#include "./ImageRGBU8.hpp"
#include "./Filter.hpp"

class Threshold : public Filter
{
  public:
    Threshold();
    Threshold(const unsigned char &t);
    void applyFilter(ImageRGBU8 &img) const;

  private:
    const unsigned char _threshold;
};

#endif