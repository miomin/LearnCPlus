//
// Created by 莫绪旻 on 17/4/10.
//

#ifndef LEARNCPLUS_16_17_STRGST1_H
#define LEARNCPLUS_16_17_STRGST1_H

#include <iostream>
#include <string>
#include <algorithm>

void use_strgst1() {
    using namespace std;
    string letters = "Miomin";

    sort(letters.begin(),letters.end());

    cout << letters << endl;
}

#endif //LEARNCPLUS_16_17_STRGST1_H
