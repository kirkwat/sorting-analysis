//
// Created by watso on 3/21/2021.
//

#include "Selection.h"
//execute selection sort
void Selection::execute() {
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
            //sort algo and store stats
            if(size==10){
                //format for smaller number
                results[i][j]=to_string(size)+":\t\t "+to_string(sort(array,size))+"s";
            }
            else{
                //format output
                results[i][j]=to_string(size)+":\t "+to_string(sort(array,size))+"s";
            }
        }
    }
}
//display stats
void Selection::stats() {
    cout<<"Selection Sort"<<endl;
    //call parent function
    AlgorithmStrategy::stats();
}
//sorting algorithm
double Selection::sort(int array[], int size){
    high_resolution_clock::time_point t1 = high_resolution_clock::now();
    int extreme;
    //move array by 1
    for (int x = 0; x < size-1; x++){
        //find smallest or largest element
        extreme = x;
        for (int y = x+1; y < size; y++){
            //ascending order
            if(array[y] < array[extreme]){
                extreme = y;
            }
        }
        //swap extreme element with first element
        int temp=array[extreme];
        array[extreme]=array[x];
        array[x]=temp;
    }
    high_resolution_clock::time_point t2 = high_resolution_clock::now();
    duration<double> time_span = duration_cast<duration<double>>(t2 - t1);
    //return sorting time
    return time_span.count();
}