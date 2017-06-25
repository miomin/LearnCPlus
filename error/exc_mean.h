//
// Created by 莫绪旻 on 17/3/26.
//

#ifndef LEARNCPLUS_EXC_MEAN_H
#define LEARNCPLUS_EXC_MEAN_H

#include <iostream>

class bad_hmean {
private:
    double v1;
    double v2;
public:
    bad_hmean(double a = 0, double b = 0) : v1(a), v2(b) {}

    void mesg() {
        std::cout << "hmean(" << v1 << ", " << v2 << "): "
                  << "invalid arguments: a = -b\n";
    }
};

class bad_gmean {
public:
    double v1;
    double v2;

    bad_gmean(double a = 0, double b = 0) : v1(a), v2(b) {}

    void mesg() {
        std::cout << "gmean() arguments should be >= 0\n";
    }
};

#endif //LEARNCPLUS_EXC_MEAN_H
