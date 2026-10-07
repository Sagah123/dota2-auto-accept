#pragma once
#include <random>

class DelayGenerator
{
    std::random_device rd;
    std::mt19937 gen;
    std::normal_distribution<int> distribution;
    int minMs;
    int maxMs;
    public:
            DelayGenerator(double mean, double stddev, int minMs, int maxMS);
            float GetRandomDelayMS();
};