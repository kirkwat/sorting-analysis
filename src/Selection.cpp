//
// Created by watso on 3/21/2021.
//

#include "Selection.h"

void Selection::execute() {
    //data set type
    for(int x=0;x<2;x++){
        //data set size
        for(int y=0;y<1;y++){
            //vector index
            for(int z=0;z<dataBySize[x][y].size();z++){
                cout<<dataBySize[x][y][z]<<" ";
            }
            cout<<endl;
        }
    }
}