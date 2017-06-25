//
// Created by 莫绪旻 on 17/3/7.
//
#include <iostream>
#include <fstream>
#include "../../class/mytimer/11_1_mytimer.h"

void usetime() {
    using std::cout;
    using std::endl;
    MyTimer planing;
    MyTimer coding = MyTimer(2, 40);
    MyTimer fixing = MyTimer(5, 55);
    MyTimer total;

    cout << "planing time = " << planing << endl;

    cout << "coding time = " << coding << endl;

    cout << "fixing time = " << fixing << endl;

    total = coding + fixing;
    cout << "coding + fixing = " << total << endl;

    total = coding * 2.75;
    cout << "coding * fixing = " << total << endl;

    std::ofstream fout;
    fout.open("savetime.txt");
    fout << total;
}

