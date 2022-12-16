#include <moving_average.h>

MovingAverage::MovingAverage(int N) : buffer(N, 0.0),
                                      size(N) {}

double MovingAverage::filter(double sample)
{
    this->out = this->out + (sample - this->buffer.at(this->next_idx)) / this->size;
    this->buffer.at(this->next_idx) = sample;
    this->current_idx = this->next_idx;
    this->next_idx = (this->current_idx + 1) % this->size;

    return this->out;
}
