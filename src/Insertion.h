//
// Created by watso on 3/21/2021.
//

#ifndef INC_21S_PA02_INSERTION_H
#define INC_21S_PA02_INSERTION_H

#include "AlgorithmStrategy.h"
#include <iostream>
#include <string>
#include <ctime>
#include <ratio>
#include <chrono>

using namespace std;
using namespace std::chrono;

class Insertion: public AlgorithmStrategy {
public:
    void execute();
    void stats();
    void insertionSort(int*,int);
};

#endif //INC_21S_PA02_INSERTION_H
