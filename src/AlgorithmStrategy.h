//
// Created by watso on 3/20/2021.
//

#ifndef INC_21S_PA02_ALGORITHMSTRATEGY_H
#define INC_21S_PA02_ALGORITHMSTRATEGY_H

#include <iostream>
#include <vector>

using namespace std;

class AlgorithmStrategy {
protected:
    vector<int> **data;
public:
    void load(vector<int>**);
    virtual void execute() = 0;
    virtual void stats() = 0;
};


#endif //INC_21S_PA02_ALGORITHMSTRATEGY_H
