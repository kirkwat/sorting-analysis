//
// Created by watso on 3/21/2021.
//

#include "Sorter.h"
//default constructor
Sorter::Sorter() {
    //create interface for sorting algos
    //credit to geeksforgeeks.com for references
    sortingAlgos[0]=new Selection;
    sortingAlgos[1]=new Quick;
    sortingAlgos[2]=new Merge;
    sortingAlgos[3]=new Insertion;
    sortingAlgos[4]=new Heap;
    sortingAlgos[5]=new Tim;
    //create array holding data sets
    dataSets=new vector<int> *[4];
}
//generate data sets of different sizes and characteristics
//sizes are 10, 1000, 10000, 100000, 1000000
void Sorter::generateDataSets(){
    cout<<"Generating Data Sets..."<<endl;
    //generate completely random values
    dataSets[0] = new vector<int>[5];
    int power=1;
    for(int x=0;x<5;x++){
        //skip 100
        if(x==1){
            power++;
        }
        //fill vector with complete random values
        generate_n(back_inserter(dataSets[0][x]), pow(10,power), RandomNumberBetween(1, pow(10,power)));
        //increase power for next vector size
        power++;
    }
    //generate values in sorted reverse order
    dataSets[1] = new vector<int>[5];
    power=1;
    for(int x=0;x<5;x++){
        //skip 100
        if(x==1){
            power++;
        }
        //fill vector with values in reverse sorted order
        for(int y=pow(10,power);y>0;y--){
            dataSets[1][x].push_back(y);
        }
        //increase power for next vector size
        power++;
    }
    //generate 20% unique values
    dataSets[2] = new vector<int>[5];
    power=1;
    for(int x=0;x<5;x++){
        //skip 100
        if(x==1){
            power++;
        }
        generate_n(back_inserter(dataSets[2][x]), pow(10,power), RandomNumberBetween(1, pow(10,power)/5));
        //increase power for next vector size
        power++;
    }
    //generate semisorted values, first 70% is sorted, last 30% is not sorted
    dataSets[3] = new vector<int>[5];
    power=1;
    for(int x=0;x<5;x++){
        //skip 100
        if(x==1){
            power++;
        }
        //fill 30% with random values
        generate_n(back_inserter(dataSets[3][x]), pow(10,power)*.3, RandomNumberBetween(1, pow(10,power)));
        //fill last 70% of vector in ascending order
        for(int y=(pow(10,power)*.3)+1;y<=pow(10,power);y++){
            dataSets[3][x].push_back(y);
        }
        //increase power for next vector size
        power++;
    }
    cout<<"...Complete"<<endl;
}
//launch sorting algorithms
void Sorter::launch(){
    //loop through all algorithms
    for(int algoTypes=1;algoTypes<6;algoTypes++){
        cout<<endl<<"Sorting..."<<endl;
        //load data sets to algorithm
        sortingAlgos[algoTypes]->load(dataSets);
        //sort data sets and store stats
        sortingAlgos[algoTypes]->execute();
        cout<<"...Complete"<<endl<<endl;
        //display stats
        sortingAlgos[algoTypes]->stats();
    }
}