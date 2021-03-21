//
// Created by watso on 3/21/2021.
//

#include "Sorter.h"
//default constructor
Sorter::Sorter() {
    //create interface for sorting algos
    sortingAlgos[0]=new Selection;
    sortingAlgos[1]=new Quick;
    sortingAlgos[2]=new Merge;
    sortingAlgos[3]=new Insertion;
    sortingAlgos[4]=new Heap;
    //create array holding data sets
    dataSets=new vector<int> *[2];
}
//generate data sets of different sizes and characteristics
//sizes are 10, 1000, 10000, 100000, 1000000
void Sorter::generateDataSets(){
    //generate completely random
    int power=1;
    dataSets[0] = new vector<int>[1];
    for(int x=0;x<1;x++){
        //skip 100
        if(x==1){
            power++;
        }
        generate_n(back_inserter(dataSets[0][x]), pow(10,power), RandomNumberBetween(1, pow(10,power)));
        power++;
    }
    //generate 20% unique values
    power=1;
    dataSets[1] = new vector<int>[1];
    for(int x=0;x<1;x++){
        //skip 100
        if(x==1){
            power++;
        }
        generate_n(back_inserter(dataSets[1][x]), pow(10,power), RandomNumberBetween(1, pow(10,power)/5));
        power++;
    }


    /*
    //TODO TESTER
    int counter=0;
    for(int x=0;x<dataSets[1][1].size();x++){
        cout<<dataSets[1][1][x]<<" ";
        if((x+1)%10==0){
            cout<<endl;
            counter++;
        }
    }
    cout<<"10s: "<<counter<<endl;
    */

    //TODO ADD OTHER VARIATIONS, reverse and semisort
}
void Sorter::launch(){
    for(int types=0;types<1;types++){
        sortingAlgos[types]->load(dataSets);
        sortingAlgos[types]->execute();
    }
}