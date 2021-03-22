//Kirk Watson - 47876885 - CS3353
#ifndef INC_21S_PA02_MERGE_H
#define INC_21S_PA02_MERGE_H

#include "AlgorithmStrategy.h"
#include <iostream>
#include <string>
#include <ctime>
#include <ratio>
#include <chrono>

using namespace std;
using namespace std::chrono;

//This class implements Merge Sort.
class Merge: public AlgorithmStrategy {
public:
    void execute();
    void stats();
    void mergeSort1(int*, int, int,int);
    void mergeSort2(int*, int, int, int,int);
};


#endif //INC_21S_PA02_MERGE_H
