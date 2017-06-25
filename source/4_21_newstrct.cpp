//
// Created by 莫绪旻 on 17/2/21.
//
#include <iostream>

using namespace std;

const int size = 20;

struct inflatable2 {
    char *name = new char[size];
    float volume;
    double price;

    void toString() {
        cout << name << " " << volume << " " << price << endl;
    }
};

void newstrct() {

    inflatable2 *ps = new inflatable2;

    cout << "Enter name: ";
    cin.getline(ps->name, size);
    cout << "Enter volume: ";
    cin >> ps->volume;
    cout << "Enter price: ";
    cin >> ps->price;

    ps->toString();

    delete ps;
}

