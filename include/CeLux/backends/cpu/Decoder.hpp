// CPU Decoder.hpp
#pragma once

#include "backends/Decoder.hpp"

namespace celux::backends::cpu
{
class Decoder : public celux::Decoder
{
  public:
    Decoder(const std::string& filePath, int numThreads,
            std::vector<std::shared_ptr<Filter>> filters)
        : celux::Decoder( numThreads, filters)
    {
        isHwAccel = false;
        initialize(filePath);
    }

    // No need to override methods unless specific behavior is needed
};
} // namespace celux::backends::cpu
