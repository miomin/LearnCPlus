//
// Created by 莫绪旻 on 17/2/22.
//
#include <iostream>

const int MAX = 5;

using namespace std;

/**
 * 发现输入的不是数字,会重新让输入
 */
void cingolf() {

    int golf[MAX];
    int i;

    for (int i = 0; i < MAX; ++i) {
        cout << "round #" << i + 1 << ": ";
        while (!(cin >> golf[i])) {
            cin.clear();
            while (cin.get() != '\n');
            cout << "Please enter a number: ";
        }
    }

    double total = 0.0;
    for (int i = 0; i < MAX; ++i)
        total += golf[i];

    cout << total / MAX << " = average scroe " << MAX << " rounds" << endl;

}