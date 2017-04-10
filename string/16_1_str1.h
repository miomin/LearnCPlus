//
// Created by 莫绪旻 on 17/3/29.
//

#ifndef LEARNCPLUS_STR1_H
#define LEARNCPLUS_STR1_H

#include <iostream>
#include <string>

using namespace std;

void use_str1() {
    string one("Lottery Winner");
    cout << one << endl;

    string two(20, '$');
    cout << two << endl;

    string three(one);
    cout << three << endl;

    one += " Oops";
    cout << one << endl;

    two = "Sorry! That was ";
    three[0] = 'P';

    string four;
    four = two + three;
    cout << four << endl;

    char alls[] = "All's well that ends well";
    string five(alls, 20);
    cout << five << endl;

    string six(alls + 6, alls + 10);
    cout << six << endl;

    string seven(&five[6], &five[10]);
    cout << seven << endl;

    string eight(four, 7, 16);
    cout << eight << endl;
}

#endif //LEARNCPLUS_STR1_H
