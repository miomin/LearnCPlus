//
// Created by 莫绪旻 on 17/3/10.
//

#ifndef LEARNCPLUS_13_1_RATEDPLAYER_H
#define LEARNCPLUS_13_1_RATEDPLAYER_H

#include "13_1_tabten.h"
#include <iostream>

class RatedPlayer : public TableTennisPlayer {
private:
    unsigned int rating;
public:
    RatedPlayer(unsigned int r = 0, const string &fn = "none", const string &ln = "none", bool ht = false);

    RatedPlayer(unsigned int r, const TableTennisPlayer &tp);

    /**
     * 复制构造函数
     */
    RatedPlayer(const RatedPlayer &);

    RatedPlayer(const string &fn, const string &ln, bool ht, unsigned int rating);

    RatedPlayer(const TableTennisPlayer &, unsigned int rating);

    /**
     * 重载赋值运算符
     * @return
     */
    RatedPlayer &operator=(const RatedPlayer &);

    unsigned int Rating() const {
        return rating;
    }

    void ResetRating(unsigned int r) {
        rating = r;
    }

    void print() {
        std::cout << rating << " : ";
        Name();
    }

    /**
     * 友元函数重载
     */
    friend std::ostream &operator<<(std::ostream &os, const RatedPlayer &rp);
};

#endif //LEARNCPLUS_13_1_RATEDPLAYER_H
