//
// Created by 莫绪旻 on 17/2/20.
//
#include <iostream>

void use_delete() {

    using namespace std;

    int *pt = new int;
    *pt = 1001;

    cout << pt << " " << *pt << endl;

    delete pt;

    cout << pt << " " << *pt << endl;
}