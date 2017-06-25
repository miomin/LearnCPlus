//
// Created by 莫绪旻 on 17/3/7.
//

#ifndef LEARNCPLUS_11_1_MYTIMER_H
#define LEARNCPLUS_11_1_MYTIMER_H

#include <iostream>

class MyTimer {
private:
    int hours;
    int minutes;
public:
    MyTimer();

    MyTimer(int h, int m = 0);

    void AddMin(int m);

    void AddHr(int h);

    void Reset(int h = 0, int m = 0);

    MyTimer &operator+(const MyTimer &t) const;

    friend MyTimer operator*(double m, const MyTimer &t);

    friend MyTimer operator*(const MyTimer &t, double m);

    friend std::ostream &operator<<(std::ostream &os, const MyTimer &t);
};

#endif //LEARNCPLUS_11_1_MYTIMER_H
