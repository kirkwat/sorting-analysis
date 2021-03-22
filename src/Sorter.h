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
    //abstract class holding 6 sorting algorithms
    AlgorithmStrategy* sortingAlgos [5];
    //2d array holding vectors varying by sort-type and size
    vector<int> **dataSets;

public:
    Sorter();
    void generateDataSets();
    void launch();
    void display();
};


#endif //INC_21S_PA02_SORTER_H
