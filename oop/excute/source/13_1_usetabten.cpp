//
// Created by 莫绪旻 on 17/3/10.
//
#include <iostream>
#include "../../class/tabten/13_1_tabten.h"
#include "../../class/tabten/13_1_ratedplayer.h"

void usetabten() {
    using std::cout;
    using std::endl;
    std::string str = "Miomin";

    TableTennisPlayer player(str, "Blizzard", true);

    RatedPlayer r1(1140, "Mallory", "Durk", true);
    RatedPlayer r2(666, player);

//    r1.print();
//    r2.print();

    r2 = r1;
//    r2.print();

    RatedPlayer r3(r2);
//    r3.print();

    cout << r1 << endl;
    cout << r2 << endl;
}
