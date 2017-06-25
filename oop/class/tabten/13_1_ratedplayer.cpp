//
// Created by 莫绪旻 on 17/3/10.
//
#include "13_1_ratedplayer.h"
#include <iostream>

RatedPlayer::RatedPlayer(unsigned int r, const string &fn, const string &ln, bool ht) : TableTennisPlayer(fn, ln, ht) {
    rating = r;
}

/**
 * TableTennisPlayer(tp)是在调用父类的复制构造函数
 */
RatedPlayer::RatedPlayer(unsigned int r, const TableTennisPlayer &tp) : TableTennisPlayer(tp) {
    rating = r;
}

/**
 * 复制构造函数
 */
RatedPlayer::RatedPlayer(const RatedPlayer &rp) : TableTennisPlayer(rp) {
    rating = rp.rating;
}

/**
 * 赋值运算符
 */
RatedPlayer &RatedPlayer::operator=(const RatedPlayer &rp) {
    TableTennisPlayer::operator=(rp);
    rating = rp.rating;
}

/**
 * 友元函数重载
 */
std::ostream &operator<<(std::ostream &os, const RatedPlayer &rp) {
    /**
     * 两种方式都可以
     */
//    os << (const TableTennisPlayer &) rp;
    operator<<(os, (const TableTennisPlayer &) rp);
    os << "Ratring: " << rp.rating;
    return os;
}

