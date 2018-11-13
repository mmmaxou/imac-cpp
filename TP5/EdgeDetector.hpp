#ifndef EDGEDETECTOR_IMAC_HPP__
#define EDGEDETECTOR_IMAC_HPP__

#include "./ImageRGBU8.hpp"
#include "./Filter.hpp"

class EdgeDetector : public Filter
{
  public:
    EdgeDetector();
    void applyFilter(ImageRGBU8 &img) const;
};

#endif