//
// Created by 莫绪旻 on 17/3/30.
//

#ifndef LEARNCPLUS_16_4_STR2_H
#define LEARNCPLUS_16_4_STR2_H

#include <iostream>
#include <string>

void use_str2() {
    using namespace std;

    string empty;
    string small = "bit";
    string larger = "Elephants are a girl's best friend";

    cout << "Sizes:\n";
    cout << "\tempty: " << empty.size() << endl;
    cout << "\tsmall: " << small.size() << endl;
    cout << "\tlarger: " << larger.size() << endl;

    cout << "Capacities:\n";
    cout << "\tempty: " << empty.capacity() << endl;
    cout << "\tsmall: " << small.capacity() << endl;
    cout << "\tlarger: " << larger.capacity() << endl;

    empty.reserve(50);
    cout << "Capacity after empty.reserve(50): " << empty.capacity() << endl;
}

#endif //LEARNCPLUS_16_4_STR2_H
