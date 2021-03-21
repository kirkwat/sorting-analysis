//
// Created by watso on 3/21/2021.
//

#ifndef INC_21S_PA02_SORTER_H
#define INC_21S_PA02_SORTER_H

#include <iostream>
#include <vector>
#include <math.h>
#include "AlgorithmStrategy.h"
#include "Selection.h"
#include "Quick.h"
#include "Merge.h"
#include "Insertion.h"
#include "Heap.h"
#include "RandomNumberBetween.h"

using namespace std;

class Sorter {
private:
    //TODO change to 6 to add sort of choice
    AlgorithmStrategy* sortingAlgos [5];

    vector<int> **dataSets;

    //vector<int> dataSets [2][1];


public:
    Sorter();
    void generateDataSets();
    void launch();
};


#endif //INC_21S_PA02_SORTER_H
