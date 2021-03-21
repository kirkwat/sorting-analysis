//
// Created by watso on 3/21/2021.
//

#include "Sorter.h"

Sorter::Sorter() {
    sortingAlgos[0]=new Selection;
    sortingAlgos[1]=new Quick;
    sortingAlgos[2]=new Merge;
    sortingAlgos[3]=new Insertion;
    sortingAlgos[4]=new Heap;
}
void Sorter::generateDataSets(){

}
void Sorter::launch(){
    for(int x=0;x<5;x++){
        sortingAlgos[x]->execute();
    }
}