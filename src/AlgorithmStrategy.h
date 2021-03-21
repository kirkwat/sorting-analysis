//
// Created by watso on 3/20/2021.
//

#ifndef INC_21S_PA02_ALGORITHMSTRATEGY_H
#define INC_21S_PA02_ALGORITHMSTRATEGY_H

#include <iostream>

using namespace std;

class AlgorithmStrategy {
public:
    void load();
    virtual void execute() = 0;
};


#endif //INC_21S_PA02_ALGORITHMSTRATEGY_H
