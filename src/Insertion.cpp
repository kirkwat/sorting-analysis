//
// Created by watso on 3/21/2021.
//

#include "Insertion.h"
//execute insertion sort
void Insertion::execute() {
    //data set type
    for(int i=0;i<4;i++){
        //data set size
        for(int j=0;j<4;j++){
            //get data set size
            int size=data[i][j].size();
            //copy array to sort
            int array[size];
            for(int a=0;a<size;a++){
                array[a]=data[i][j][a];
            }
            //sort and time algorithm
            high_resolution_clock::time_point t1 = high_resolution_clock::now();
            //sort
            insertionSort(array,size);
            //get time
            high_resolution_clock::time_point t2 = high_resolution_clock::now();
            duration<double> time_span = duration_cast<duration<double>>(t2 - t1);
            //store stats
            if(size==10){
                //format for smaller number
                results[i][j]=to_string(size)+":\t\t "+to_string(time_span.count())+"s";
            }
            else{
                //format output
                results[i][j]=to_string(size)+":\t "+to_string(time_span.count())+"s";
            }
        }
    }
}
//display stats
void Insertion::stats() {
    cout << "Insertion Sort" << endl;
    //call parent function
    AlgorithmStrategy::stats();
}
//sorting algorithm
void Insertion::insertionSort(int array[], int arrSize){
    for (int x = 1; x < arrSize; x++){
        int pivot = array[x];
        int y = x - 1;
        //insert element into correct index of sorted part of array
        //ascending order
        while (y >= 0 && array[y] > pivot){
            array[y + 1] = array[y];
            y = y - 1;
        }
        array[y + 1] = pivot;
    }
}