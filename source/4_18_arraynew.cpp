//
// Created by 莫绪旻 on 17/2/20.
//
#include <iostream>

void new_array() {
    using namespace std;
    double *myArray = new double[3];
    myArray[0] = 0.6;
    myArray[1] = 0.8;
    myArray[2] = 0.9;

    cout << myArray[0] << " " << myArray[1] << " " << myArray[2] << endl;

    for (int i = 0; i < 3; ++i) {
        double *p_index = myArray + i;
        cout << *p_index << endl;
    }

    delete[] myArray;
}


