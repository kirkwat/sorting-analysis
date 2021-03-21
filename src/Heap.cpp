//
// Created by watso on 3/21/2021.
//

#include "Heap.h"

void Heap::execute() {
    cout<<"JELLO5"<<endl;
}
void Heap::stats() {
    cout<<"Heap Sort"<<endl;
    //data set type
    for(int i=0;i<2;i++) {
        if(i==0){
            cout<<"\tCompletely Random"<<endl;
        }
        else{
            cout<<"\t20% Unique"<<endl;
        }
        //data set size
        for (int j = 0; j < 1; j++) {
            cout<<"\t\t"<<results[i][j]<<endl;
        }
    }
}