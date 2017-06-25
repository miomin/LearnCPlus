//
// Created by 莫绪旻 on 17/2/20.
//
#include <iostream>

void use_new() {
    using namespace std;
    int nights = 1001;
    int *pt = new int;
    *pt = 1002;

    cout << nights << " " << &nights << " " << *pt << " " << pt << endl;
}
