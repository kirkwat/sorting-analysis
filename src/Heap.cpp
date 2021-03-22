//Kirk Watson - 47876885 - CS3353
#include "Heap.h"
//execute heap sort
void Heap::execute() {
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
            heapSort1(array,size);
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
void Heap::stats() {
    cout << "Heap Sort" << endl;
    //call parent function
    AlgorithmStrategy::stats();
}
//sorting algorithm
//arguments - array, array size
void Heap::heapSort1(int array[], int size){
    //rearrange array
    for (int index = size / 2 - 1; index >= 0; index--){
        heapSort2(array, size, index);
    }
    //get each element from heap
    for (int index = size - 1; index > 0; index--) {
        //move root to end
        int temp=array[0];
        array[0]=array[index];
        array[index]=temp;
        //build heap on reduced heap
        heapSort2(array, index, 0);
    }
}
//build heap from index node
//arguments - array, array size, index
void Heap::heapSort2(int array[], int size, int index){
    int greatest = index; //greatest is root node
    int left = 2 * index + 1;
    int right = 2 * index + 2;
    //if left is larger than root
    if (left < size && array[left] > array[greatest]) {
        greatest = left;
    }
    //if right node is larger than greatest
    if (right < size && array[right] > array[greatest]){
        greatest = right;
    }
    //if root is not greatest
    if (greatest != index) {
        //swap
        int temp=array[greatest];
        array[greatest]=array[index];
        array[index]=temp;
        //build heap from affected node
        heapSort2(array, size, greatest);
    }
}
