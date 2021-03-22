//Kirk Watson - 47876885 - CS3353
#include "Tim.h"
//execute tim sort
void Tim::execute() {
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
            timSort1(array,size);
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
void Tim::stats() {
    cout<<"Tim Sort"<<endl;
    //call parent function
    AlgorithmStrategy::stats();
}
//sorting algorithm
//arguments - array, array size
void Tim::timSort1(int array[], int size){
    //sort subarrays of size RUN
    for (int x = 0; x < size; x+=RUN){
        timSort2(array, x, min((x+RUN-1),(size-1)));
    }
    //merge subarrays
    for (int subSize = RUN; subSize < size;subSize = 2*subSize){
        //merge from left then double subSize
        for (int left = 0; left < size;left += 2*subSize){
            //find starting and endpoints of subarrays
            int mid = left + subSize - 1;
            int right = min((left + 2*subSize - 1),(size-1));
            //merge subarrays
            if(mid < right){
                timSort3(array, left, mid, right);
            }
        }
    }
}
//insertion sort subarrays
//arguments - array, array size, left index, right index
void Tim::timSort2(int array[], int left, int right){
    for (int i = left + 1; i <= right; i++){
        int temp = array[i];
        int j = i - 1;
        while (j >= left && array[j] > temp){
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = temp;
    }
}

//merge subarrays
//arguments - array, array size, left index, middle index, right index
void Tim::timSort3(int array[], int left, int mid, int right){
    //create two subarrays
    int len1 = mid - left + 1;
    int len2 = right - mid;
    int leftArr[len1];
    int rightArr[len2];
    //fill subarrays
    for (int i = 0; i < len1; i++){
        leftArr[i] = array[left + i];
    }
    for (int i = 0; i < len2; i++){
        rightArr[i] = array[mid + 1 + i];
    }
    int i = 0;
    int j = 0;
    int k = left;
    //merge subarrays back into array
    while (i < len1 && j < len2){
        if (leftArr[i] <= rightArr[j]){
            array[k] = leftArr[i];
            i++;
        }
        else{
            array[k] = rightArr[j];
            j++;
        }
        k++;
    }
    //add remaining elements from left
    while (i < len1){
        array[k] = leftArr[i];
        k++;
        i++;
    }
    //add remaining elements from right
    while (j < len2){
        array[k] = rightArr[j];
        k++;
        j++;
    }
}