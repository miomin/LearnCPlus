//
// Created by 莫绪旻 on 17/2/21.
//
#include <iostream>

void waiting() {
    using namespace std;

    float secs = 3;
    clock_t delay = secs * CLOCKS_PER_SEC;
    cout << "starting" << endl;

    clock_t start = clock();

    while (clock() - start < delay);

    cout << "done" << endl;
}
