//Kirk Watson - 47876885 - CS3353
#ifndef INC_21S_PA02_INSERTION_H
#define INC_21S_PA02_INSERTION_H

#include "AlgorithmStrategy.h"
#include "Merge.h"
#include <iostream>
#include <string>
#include <ctime>
#include <ratio>
#include <chrono>

using namespace std;
using namespace std::chrono;

//This class implements Insertion Sort.
class Insertion: public AlgorithmStrategy {
public:
    void execute();
    void stats();
    void handoff(int*,int);
    void insertionSort(int*,int);
};

#endif //INC_21S_PA02_INSERTION_H
