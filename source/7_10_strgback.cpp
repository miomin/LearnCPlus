//
// Created by 莫绪旻 on 17/2/24.
//
#include "../header/7_10_strgback.h"
#include <iostream>

void strgback() {
    using namespace std;

    char *ps = buildstr('m', 8);
    cout << ps << endl;
    delete[] ps;
}

char *buildstr(char c, int length) {
    char *pstr = new char[length + 1];
    pstr[length] = '\0';
    while (length-- > 0)
        pstr[length] = c;
    return pstr;
}
