//
// Created by 莫绪旻 on 17/2/17.
//
#include <iostream>
#include "../header/4_7_string1.h"

using namespace std;

void getInputString() {

    string str1;
    string str2;

    str1 = getString();
    str2 = getString();

    cout << str1 << " " << str2 << endl;

    cout << str1.length();
}

string getString() {
    string temp;
    cin >> temp;
    return temp;
}
