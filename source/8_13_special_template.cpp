//
// Created by 莫绪旻 on 17/3/1.
//
#include "../header/8_13_special_template.h"
#include <iostream>

void special_template() {
    using namespace std;
    int i = 10, j = 20;
    Swap(i, j);

    job miomin = {"Miomin", 88888.8, 8};
    job curry = {"Curry", 66666.6, 6};
    Swap(miomin, curry);

    miomin.printMsg();
    curry.printMsg();
}

template<typename T>
void Swap(T &a, T &b) {
    T temp;
    temp = a;
    a = b;
    b = temp;
}

template<>
void Swap<job>(job &j1, job &j2) {
    double t1;
    int t2;
    t1 = j1.salary;
    j1.salary = j2.salary;
    j2.salary = t1;
    t2 = j1.floor;
    j1.floor = j2.floor;
    j2.floor = t2;
}

