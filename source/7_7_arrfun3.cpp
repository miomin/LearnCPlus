//
// Created by 莫绪旻 on 17/2/24.
//
#include "../header/7_7_arrfun3.h"
#include <iostream>

using namespace std;

void arrfun3() {
    double properties[MAX];

    int size = fill_array(properties, MAX);
    revalue(6.6, properties, size, 0);
    show_array(properties, size);
}

int fill_array(double ar[], int limit) {
    double temp;
    int i = 0;
    for (i = 0; i < limit; ++i) {
        cout << "Enter value: ";
        cin >> temp;
        //错误输入后跳出循环
        if (!cin) {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            break;
        } else if (temp < 0) {
            break;
        }

        ar[i] = temp;
    }

    return i;
}

void show_array(const double ar[], int length) {
    for (int i = 0; i < length; ++i) {
        cout << ar[i] << " ";
    }
}

bool revalue(double r, double ar[], int length, int index) {
    if (index >= length)
        return false;
    ar[index] = r;
    return true;
}
