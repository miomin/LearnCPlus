//
// Created by 莫绪旻 on 17/3/1.
//

#ifndef LEARNCPLUS_8_13_SPECIAL_TEMPLATE_H
#define LEARNCPLUS_8_13_SPECIAL_TEMPLATE_H

#include <string>
#include <iostream>

using namespace std;

void special_template();

template<typename T>
void Swap(T &a, T &b);

struct job {
    string name;
    double salary;
    int floor;

    string printMsg() {
        cout.setf(ios::showpoint);
        //显示多少位小数
        cout.precision(10);
        cout << name << " " << salary << " " << floor << endl;
    }
};

template<>
void Swap<job>(job &j1, job &j2);

#endif //LEARNCPLUS_8_13_SPECIAL_TEMPLATE_H
