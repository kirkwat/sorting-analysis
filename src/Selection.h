//Kirk Watson - 47876885 - CS3353
#ifndef INC_21S_PA02_SELECTION_H
#define INC_21S_PA02_SELECTION_H

#include "AlgorithmStrategy.h"
#include "Merge.h"
#include <iostream>
#include <string>
#include <ctime>
#include <ratio>
#include <chrono>

using namespace std;
using namespace std::chrono;

//This class implements Selection Sort.
class Selection: public AlgorithmStrategy {
public:
    void execute();
    void stats();
    void handoff(int*,int);
    double sort(int*,int);
};


#endif //INC_21S_PA02_SELECTION_H
