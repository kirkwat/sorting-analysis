//Kirk Watson - 47876885 - CS3353
#include "AlgorithmStrategy.h"
//load the data sets array
void AlgorithmStrategy::load(vector<int> **d){
    data=d;
}
//display stats
void AlgorithmStrategy::stats() {
    //data set type
    for(int i=0;i<4;i++) {
        if(i==0){
            cout<<"\tCompletely Random"<<endl;
        }
        else if(i==1){
            cout<<"\tReverse Sorted"<<endl;
        }
        else if(i==2){
            cout<<"\t20% Unique Values"<<endl;
        }
        else{
            cout<<"\t30% Randomized"<<endl;
        }
        //data set size
        for (int j = 0; j < 4; j++) {
            //print times
            cout<<"\t\t"<<results[i][j]<<endl;
        }
    }
}