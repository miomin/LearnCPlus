//
// Created by 莫绪旻 on 17/3/26.
//

#ifndef LEARNCPLUS_15_8_ERROR_H
#define LEARNCPLUS_15_8_ERROR_H

#include <iostream>
#include <cfloat>

//double hmean(double a, double b) {
//    if (a == -b)
//        throw "bad hmean() arguments: a = -b not allowed";
//    return 2.0 * a * b / (a + b);
//}

void error_demo3() {
    double x = 1;
    double y = -1;
    try {
        std::cout << hmean(x, y) << std::endl;
    } catch (const char *s) {
        std::cout << "Error: " << s << std::endl;
    }
}

#endif //LEARNCPLUS_15_8_ERROR_H
