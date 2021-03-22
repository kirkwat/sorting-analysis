//Kirk Watson - 47876885 - CS3353
#ifndef INC_21S_PA02_TIM_H
#define INC_21S_PA02_TIM_H


#include "AlgorithmStrategy.h"
#include <iostream>
#include <string>
#include <ctime>
#include <ratio>
#include <chrono>

using namespace std;
using namespace std::chrono;

//This class implements Timsort.
class Tim: public AlgorithmStrategy {
private:
    const int RUN = 32;
public:
    void execute();
    void stats();
    void timSort1(int*, int);
    void timSort2(int*, int, int);
    void timSort3(int*, int, int, int);
};


#endif //INC_21S_PA02_TIM_H
