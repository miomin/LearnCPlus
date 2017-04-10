//
// Created by 莫绪旻 on 17/2/28.
//
#include "../header/8_12_overloadtemplate.h"

void twotemps() {
    int i = 10, j = 20;
    Swap(i, j);

}

template<typename T>
void Swap(T &a, T &b) {

}

template<typename T>
void Swap(T *a, T *b, int n) {

}