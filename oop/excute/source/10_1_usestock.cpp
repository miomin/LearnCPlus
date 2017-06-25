//
// Created by 莫绪旻 on 17/3/5.
//
#include <iostream>
#include "../../class/stock/10_1_stock.h"
#include "../header/10_1_usestock.h"

void usestock0() {
    Stock fluffy_the_cat = Stock("NanoSmart", 20, 12.5);
    fluffy_the_cat.show();
    fluffy_the_cat.buy(15, 18.125);
    fluffy_the_cat.show();
    fluffy_the_cat.sell(400, 20.0);
    fluffy_the_cat.show();
    fluffy_the_cat.buy(300000, 40.125);
    fluffy_the_cat.show();
    fluffy_the_cat.sell(300000, 0.125);
    fluffy_the_cat.show();

    std::cout << std::endl;
    const Stock fluffy_the_cat2 = Stock("NanoSmart2", 66, 6.6);
    fluffy_the_cat2.show();

    std::cout << STKS;
}

void usestock1() {
    Stock stocks[STKS] = {
            Stock("NanoSmart", 20, 12.5),
            Stock("Boffo", 200, 2.6),
            Stock("Monolithic", 160, 66.6),
            Stock("Fleep", 66, 6.6)
    };

    std::cout << "Stock holdings" << std::endl;
    int st;
    for (st = 0; st < STKS; ++st) {
        stocks[st].show();
    }

    Stock &top = stocks[0];
    for (st = 1; st < STKS; ++st) {
        top = top.topval(stocks[st]);
    }

    std::cout << "\nMost valuable holding:\n";
    top.show();
}

