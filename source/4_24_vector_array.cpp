//
// Created by 莫绪旻 on 17/2/21.
//
#include <iostream>
#include <vector>
#include <array>

void vector_array() {
    using namespace std;

    vector<double> a2(4);
    a2[0] = 0.1;
    a2[1] = 0.2;
    a2[2] = 0.3;
    a2[3] = 0.4;

    array<double, 4> a3 = {1.0, 1.1, 1.2, 1.3};
    array<double, 4> a4;
    a4 = a3;

    cout << a2[2] << endl;
    cout << a3[2] << endl;
    cout << a4[2] << endl;
}

