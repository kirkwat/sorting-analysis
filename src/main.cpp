//Kirk Watson - 47876885 - CS3353
#include "Sorter.h"

using namespace std;

int main(){
    //create sorter object
    Sorter sorter1=Sorter();
    //generate random data sets
    sorter1.generateDataSets();
    //launch sorting algorithms
    sorter1.launch();

    return 0;
}