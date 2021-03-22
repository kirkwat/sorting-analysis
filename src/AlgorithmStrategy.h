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
    string results[4][5];
public:
    void load(vector<int>**);
    virtual void execute() = 0;
    virtual void stats();
};


#endif //INC_21S_PA02_ALGORITHMSTRATEGY_H
