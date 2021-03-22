//
// Created by watso on 3/22/2021.
//

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
