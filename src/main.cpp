//
// Created by watso on 3/20/2021.
//
#include "AlgorithmStrategy.h"
#include "SelectionSort.h"
#include <iostream>

using namespace std;

int main(){

    AlgorithmStrategy *selection=new SelectionSort();
    selection->execute();

    return 0;
}