#include <iostream>
#include <string>
#include <cstdlib>

#include "./RemoveChannel.hpp"
#include "./ImageRGBU8.hpp"

RemoveChannel::RemoveChannel()
  : _channel(0)
{};
RemoveChannel::RemoveChannel(const unsigned int &channel)
  : _channel(channel)
{};
void RemoveChannel::applyFilter(ImageRGBU8 &img) const
{
  std::cout << "RemoveChannel Filter(" << _channel << ")" << std::endl;
  img.removeChannel(_channel);
};
