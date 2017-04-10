//
// Created by 莫绪旻 on 17/2/26.
//
#include <iostream>
#include "../header/8_1_inline.h"

void inlineFunc() {
    using namespace std;
    double a, b;
    double c = 13.0;

    a = square(5.0);
    b = square(4.5 + 7.5);
}

/**
 * 内联函数
 * @param x
 * @return
 */
inline double square(double x) {
    return x * x;
}
