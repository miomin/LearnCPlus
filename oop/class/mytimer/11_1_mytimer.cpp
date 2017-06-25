//
// Created by 莫绪旻 on 17/3/7.
//
#include <iostream>
#include "11_1_mytimer.h"

MyTimer::MyTimer() {
    hours = minutes = 0;
}

MyTimer::MyTimer(int h, int m) {
    hours = h;
    minutes = m;
}

void MyTimer::AddMin(int m) {
    minutes += m;
    hours += minutes / 60;
    minutes %= 60;
}

void MyTimer::AddHr(int h) {
    hours += h;
}

void MyTimer::Reset(int h, int m) {
    hours = h;
    minutes = m;
}

MyTimer &MyTimer::operator+(const MyTimer &t) const {
    MyTimer *sum = new MyTimer();
    sum->minutes = minutes + t.minutes;
    sum->hours = hours + t.hours + sum->minutes / 60;
    sum->minutes %= 60;
    return *sum;
}

/**
 * 通过友元函数重载二元运算符
 * 不是成员函数，但是访问权限和成员函数一样
 * @param m
 * @param t
 * @return
 */
MyTimer operator*(double m, const MyTimer &t) {
    MyTimer result;
    long totalmin = t.hours * m * 60 + t.minutes * m;
    result.hours = totalmin / 60;
    result.minutes = totalmin % 60;
    return result;
}

MyTimer operator*(const MyTimer &t, double m) {
    MyTimer result;
    long totalmin = t.hours * m * 60 + t.minutes * m;
    result.hours = totalmin / 60;
    result.minutes = totalmin % 60;
    return result;
}

/**
 * 类似Java重写toSting()
 * @param os
 * @param t
 * @return
 */
std::ostream &operator<<(std::ostream &os, const MyTimer &t) {
    os << t.hours << ":" << t.minutes;
    return os;
}

