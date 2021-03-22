//Kirk Watson - 47876885 - CS3353
#include "Merge.h"
//execute merge sort
void Merge::execute() {
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
            //if size becomes too big for merge sort, hand off to merge sort
            if(size>100000){
                handoff(array,size);
            }
            //sort and time algorithm
            high_resolution_clock::time_point t1 = high_resolution_clock::now();
            //sort
            mergeSort1(array,size,0,size-1);
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
void Merge::stats() {
    cout << "Merge Sort" << endl;
    //call parent function
    AlgorithmStrategy::stats();
}
//hand off when data set gets too large
//arguments - array, array size
void Merge::handoff(int array[], int size) {
    Heap h;
    h.heapSort1(array,size);
}
//sorting algorithm
//arguments - array, array size, left index, right index
void Merge::mergeSort1(int array[], int arrSize, int left, int right){
    if (left < right){
        //middle index
        int middle = left + (right - left) / 2;
        //sort first and second split arrays
        mergeSort1(array,arrSize, left, middle);
        mergeSort1(array,arrSize, middle + 1, right);

        mergeSort2(array,arrSize, left, middle, right);
    }
}
//sorting algorithm
//arguments - array, array size, left index, middle index, right index
void Merge::mergeSort2(int array[], int arrSize, int left, int middle, int right){
    int subArr1Size = middle - left + 1;
    int subArr2Size = right - middle;
    //subarrays
    int sub1[subArr1Size];
    int sub2[subArr2Size];
    //fill subarrrays
    for(int x = 0; x < subArr1Size; x++){
        sub1[x] = array[left + x];
    }
    for(int y = 0; y < subArr2Size; y++){
        sub2[y] = array[middle + 1 + y];
    }
    //merge arrays
    //indexes of subarrays
    int i = 0, j=0;
    int k = left;
    while (i < subArr1Size && j < subArr2Size){
        //ascending order
        if(sub1[i] <= sub2[j]){
            array[k] = sub1[i];
            i++;
        }
        else{
            array[k] = sub2[j];
            j++;
        }
        k++;
    }
    //copy elements of first subarray
    while (i < subArr1Size){
        array[k] = sub1[i];
        i++;
        k++;
    }
    //copy elements of second subarray
    while (j < subArr2Size){
        array[k] = sub2[j];
        j++;
        k++;
    }
}