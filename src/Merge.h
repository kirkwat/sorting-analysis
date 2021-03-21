//
// Created by watso on 3/21/2021.
//

#ifndef INC_21S_PA02_MERGE_H
#define INC_21S_PA02_MERGE_H


#include "AlgorithmStrategy.h"
#include <iostream>

using namespace std;

class Merge: public AlgorithmStrategy {
private:
    string results[2][1];
public:
    void execute();
    void stats();
};


#endif //INC_21S_PA02_MERGE_H
