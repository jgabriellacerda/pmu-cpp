#ifndef MOVING_AVERAGE_H
#define MOVING_AVERAGE_H

// #define N 10
#include <vector>

class MovingAverage
{
public:
    int current_idx = 0;
    int next_idx = 1;
    int size = 0;
    std::vector<double> buffer;
    double out = 0;
    double filter(double sample);
    MovingAverage(int N);
};

#endif