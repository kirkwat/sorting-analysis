//Kirk Watson - 47876885 - CS3353
#ifndef INC_21S_PA02_ALGORITHMSTRATEGY_H
#define INC_21S_PA02_ALGORITHMSTRATEGY_H

#include <iostream>
#include <vector>

using namespace std;

//This class an abstract class that is used by the sorting algorithm classes.
class AlgorithmStrategy {
protected:
    vector<int> **data;     //data sets
    string results[4][5];   //results from sorting the data sets
public:
    void load(vector<int>**);
    virtual void execute() = 0;
    virtual void stats();
};


#endif //INC_21S_PA02_ALGORITHMSTRATEGY_H
