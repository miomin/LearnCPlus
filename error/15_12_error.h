//
// Created by 莫绪旻 on 17/3/26.
//

#ifndef LEARNCPLUS_15_8_ERROR_H
#define LEARNCPLUS_15_8_ERROR_H

#include <iostream>
#include <cmath>
#include <string>
#include "exc_mean.h"

double hmean(double a, double b) {
    if (a == -b)
        throw bad_hmean(a, b);
    return 2.0 * a * b / (a + b);
}

double gmean(double a, double b) {
    if (a < 0 || b < 0)
        throw bad_gmean(a, b);
    return std::sqrt(a * b);
}

double means(double a, double b) {
    double am, hm, gm;
    am = (a + b) / 2.0;

    try {
        hm = hmean(a, b);
        gm = gmean(a, b);
    } catch (bad_hmean &bg) {
        bg.mesg();
    }

    return (am + hm + gm) / 3.0;
}

void error_demo4() {
    using std::cout;
    using std::cin;
    using std::endl;

    try {
        cout << means(1, -1);
    } catch (bad_hmean &bg) {
        bg.mesg();
    } catch (bad_gmean &hg) {
        hg.mesg();
    }

}

#endif //LEARNCPLUS_15_8_ERROR_H
