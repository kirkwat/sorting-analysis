//Kirk Watson - 47876885 - CS3353
#include "Quick.h"
//execute quick sort
void Quick::execute() {
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
            //if size becomes too big for quick sort, hand off to merge sort
            if(size>100000){
                handoff(array,size);
            }
            //sort and time algorithm
            high_resolution_clock::time_point t1 = high_resolution_clock::now();
            //sort
            sort1(array,0,size);
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
void Quick::stats() {
    cout<<"Quick Sort"<<endl;
    //call parent function
    AlgorithmStrategy::stats();
}
//hand off when data set gets too large
//arguments - array, array size
void Quick::handoff(int array[], int size) {
    Merge m;
    m.mergeSort1(array,size,0,size-1);
}
//sorting algorithm
//arguments - array, array size, left index, right index
void Quick::sort1(int array[], int left, int right){
    if (left < right){
        //partition
        int partition = sort2(array, left, right);
        //sort elements before and after pivot
        sort1(array, left, partition - 1);
        sort1(array, partition + 1, right);
    }
}
//sorting algorithm
//arguments - array, array size, left index, right index
int Quick::sort2(int array[], int left, int right){
    int pivot = array[right];
    int x = (left - 1);
    for (int y = left; y <= right - 1; y++){
        if (array[y] < pivot){
            x++;
            int temp=array[x];
            array[x]=array[y];
            array[y]=temp;
        }
    }
    int temp=array[x + 1];
    array[x + 1]=array[right];
    array[right]=temp;
    return (x + 1);
}