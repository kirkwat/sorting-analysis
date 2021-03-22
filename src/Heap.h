//
// Created by watso on 3/21/2021.
//

#ifndef INC_21S_PA02_HEAP_H
#define INC_21S_PA02_HEAP_H

#include "AlgorithmStrategy.h"
#include <iostream>
#include <string>
#include <ctime>
#include <ratio>
#include <chrono>

using namespace std;
using namespace std::chrono;

class Heap: public AlgorithmStrategy {
public:
    void execute();
    void stats();
    void heapSort1(int*, int);
    void heapSort2(int*, int, int);
};


#endif //INC_21S_PA02_HEAP_H
