//
// Created by 莫绪旻 on 17/3/5.
//

#ifndef LEARNCPLUS_10_1_STOCK00_H
#define LEARNCPLUS_10_1_STOCK00_H

#include <string>

using namespace std;

class Stock {
private:
    std::string compary;
    long shares;
    double share_val;
    double total_val;

    /**
     * 定义位于类声明中的函数会被当做内联函数
     */
    void set_tot() {
        total_val = shares * share_val;
    }

public:
    const static int Sum = 1;

    Stock();

    Stock(const std::string &co, long n = 0, double pr = 0.0);

    ~Stock();

    void buy(long num, double price);

    void sell(long num, double price);

    void update(double price);

    void show() const;

    const Stock &topval(const Stock &a) const;
};

#endif //LEARNCPLUS_10_1_STOCK00_H
