//
// Created by 莫绪旻 on 17/2/21.
//
#include <iostream>
#include <cstring>

void ptrstr() {
    using namespace std;

    const int size = 20;
    char animal[size];
    char *ps;

    cout << "Enter a kind of animal: ";
    cin >> animal;
    ps = animal;

    cout << ps << endl;
    cout << "Before using strcpy()" << endl;
    cout << animal << " at " << (int *) animal << endl;
    cout << ps << " at " << (int *) ps << endl;

    ps = new char[size];
    strncpy(ps, animal, size - 1);
    cout << "After using strcpy()" << endl;
    cout << animal << " at " << (int *) animal << endl;
    cout << ps << " at " << (int *) ps << endl;

    delete[] ps;
}
