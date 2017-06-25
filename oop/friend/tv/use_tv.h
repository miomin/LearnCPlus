//
// Created by 莫绪旻 on 17/3/24.
//

#ifndef LEARNCPLUS_USE_TV_H
#define LEARNCPLUS_USE_TV_H

#include <iostream>
#include "15_1_tv.h"

void use_tv() {
    using std::cout;
    Tv s42;
    cout << "Initial settings for 42\" TV:\n";
    s42.settings();
    s42.onoff();
    s42.chanup();
    cout << "\nAdjusted settings for 42\" TV:\n";
    s42.chanup();
    cout << "\nAdjusted settings for 42\" TV:\n";
    s42.settings();

    Remote grey;

    grey.set_chan(s42,10);
    grey.volup(s42);
    grey.volup(s42);
    cout << "\n42\" settings after using remote:\n";
    s42.settings();
}

#endif //LEARNCPLUS_USE_TV_H
