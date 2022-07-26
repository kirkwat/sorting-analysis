//Kirk Watson - 47876885 - CS3353
#ifndef INC_21S_PA02_HEAP_H
#define INC_21S_PA02_HEAP_H

#include "AlgorithmStrategy.h"
#include "Merge.h"
#include <iostream>
#include <string>
#include <ctime>
#include <ratio>
#include <chrono>

using namespace std;
using namespace std::chrono;

//This class implements Heap Sort.
class Heap: public AlgorithmStrategy {
public:
    void execute();
    void stats();
    void handoff(int*,int);
    void heapSort1(int*, int);
    void heapSort2(int*, int, int);
};


#endif //INC_21S_PA02_HEAP_H
