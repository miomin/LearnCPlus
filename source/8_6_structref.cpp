//
// Created by 莫绪旻 on 17/2/27.
//

#include "../header/8_6_structref.h"
#include <iostream>
#include <string>

void structref() {

}

void display(const free_throws &ft) {
    using namespace std;
    cout << "Name: " << ft.name << endl;
    cout << "Made: " << ft.made << endl;
    cout << "Attempts: " << ft.attempts << endl;
    cout << "Percent: " << ft.percent << endl;
}

void set_pc(free_throws &ft) {
    if (ft.attempts != 0)
        ft.percent = 100.0f * float(ft.made) / float(ft.attempts);
    else
        ft.percent = 0;
}

free_throws &accumulate(free_throws &target, const free_throws &source) {
    target.attempts += source.attempts;
    target.made += source.made;
    set_pc(target);
    return target;
}