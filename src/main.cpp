#include <iostream>
#include "moving_average.h"

using namespace std;

int main(){
    MovingAverage mov_avg(10);
    double out;
    for(int i = 0; i < 15; i++){
        out = mov_avg.filter(100);
        cout << out << endl;
    }
}