//
// Created by 莫绪旻 on 17/3/5.
//
#include <iostream>
#include <string>
#include "10_1_stock.h"

Stock::Stock() {
    this->compary = "no name";
    this->shares = 0;
    this->share_val = 0.0;
    this->total_val = 0.0;
}

Stock::Stock(const std::string &co, long n, double pr) {
    this->compary = co;
    if (n < 0) {
        std::cout << "Number of shares can't be negative;" << compary
                  << " shares set to 0." << std::endl;
        this->shares = 0;
    } else {
        this->shares = n;
    }
    this->share_val = pr;
    set_tot();
}

Stock::~Stock() {
}

void Stock::buy(long num, double price) {
    if (num < 0)
        std::cout << "Number of shares purchased can't be negative. "
                  << "Transaction is aborted"
                  << std::endl;
    else {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(long num, double price) {
    using std::cout;
    if (num < 0)
        cout << "Number of shares sold can't be negative. "
             << "Transaction is aborted"
             << std::endl;
    else if (num > shares)
        cout << "You can't sell more than you have! "
             << "Transaction is aborted"
             << std::endl;
    else {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price) {
    share_val = price;
    set_tot();
}

void Stock::show() const {

    /**
     * 不使用科学计数法
     */
    std::ios_base::fmtflags orig = std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
    std::streamsize prec = std::cout.precision(3);

    std::cout << "Company: " << compary
              << " Shares: " << shares << std::endl
              << " Share Price: $" << share_val
              << " Total Worth: $" << total_val << std::endl;

    /**
     * 重置为修改前的状态
     */
    std::cout.setf(orig, std::ios_base::floatfield);
    std::cout.precision(prec);
}

const Stock &Stock::topval(const Stock &a) const {
    if (a.total_val > this->total_val)
        return a;
    else
        return *this;
}
