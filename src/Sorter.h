//Kirk Watson - 47876885 - CS3353
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
#include "Tim.h"
#include "RandomNumberBetween.h"

using namespace std;

//This class is the launcher of the program which controls the functionality
//of the data set creation and sorting algorithms.
class Sorter {
private:
    //abstract class holding 6 sorting algorithms
    AlgorithmStrategy* sortingAlgos [6];
    //2d array holding vectors varying by sort-type and size
    vector<int> **dataSets;

public:
    Sorter();
    void generateDataSets();
    void launch();
};


#endif //INC_21S_PA02_SORTER_H
