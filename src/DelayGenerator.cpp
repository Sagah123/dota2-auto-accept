#include "DelayGenerator.hpp"
#include <algorithm>

DelayGenerator::DelayGenerator (double meanMs, double stddevMs, int minMs, int maxMS)
: rd()
, gen(rd())
, distribution(meanMs, stddevMs)
, minMs(minMs)
, maxMs(maxMS)
{
     
}

float DelayGenerator::GetRandomDelayMS()
{
    int delay = DelayGenerator::distribution(gen);
    return std::clamp(delay, minMs, maxMs);
}