//
// Created by watso on 3/21/2021.
//

#ifndef INC_21S_PA02_QUICK_H
#define INC_21S_PA02_QUICK_H

#include "AlgorithmStrategy.h"
#include <iostream>
#include <string>
#include <ctime>
#include <ratio>
#include <chrono>

using namespace std;
using namespace std::chrono;

class Quick: public AlgorithmStrategy {
public:
    void execute();
    void stats();
    void sort1(int*,int,int);
    int sort2(int*, int,int);
};



#endif //INC_21S_PA02_QUICK_H
