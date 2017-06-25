//
// Created by 莫绪旻 on 17/2/22.
//
#include <iostream>

const int MAX = 5;

using namespace std;

/**
 * 发现输入的不是数字马上结束输入
 */
void cinfinish() {

    double fish[MAX];

    cout << "fish #1: ";
    int i = 0;

    while (i < MAX && cin >> fish[i]) {
        if (++i < MAX) {
            cout << "fish #" << i + 1 << ": ";
        }
    }

    double total = 0.0;
    for (int j = 0; j < i; ++j) {
        total += fish[j];
    }

    if (i == 0)
        cout << "No fish" << endl;
    else
        cout << total / i << " = average weight of " << i << " fish" << endl;
}
