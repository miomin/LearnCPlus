//
// Created by 莫绪旻 on 17/2/25.
//
#include <array>
#include <string>
#include <iostream>
#include "../header/7_15_arrfun.h"

using namespace std;

const array<string, Seasons> Snames = {"Spring", "Summer", "Fall", "Winter"};

void arrfun() {
    array<double, Seasons> expenses;
    fill(&expenses);
    show(expenses);
    show(expenses);
}

/**
 * 这里的参数不能加const，否则无法修改array元素的值
 * @param pa
 */
void fill(array<double, Seasons> *pa) {
    for (int i = 0; i < Seasons; ++i) {
        (*pa)[i] = i / 10.0;
    }
}

/**
 * 这里的参数可以不加const，因为在函数内部实际上操作的是实参的副本
 * 当然加了也没错，但是加了之后不能修改副本的元素值
 * @param da
 */
void show(array<double, Seasons> da) {
    for (int i = 0; i < Seasons; ++i) {
        cout << Snames[i] << ": " << da[i] << endl;
        da[i] = 0;
    }
}

