#ifndef REMOVECHANNEL_IMAC_HPP__
#define REMOVECHANNEL_IMAC_HPP__

#include "./ImageRGBU8.hpp"
#include "./Filter.hpp"

class RemoveChannel : public Filter
{
  public:
    RemoveChannel();
    RemoveChannel(const unsigned int &channel);
    void applyFilter(ImageRGBU8 &img) const;

  private:
    const unsigned int _channel;
};

#endif