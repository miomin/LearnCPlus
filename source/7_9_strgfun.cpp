//
// Created by 莫绪旻 on 17/2/24.
//
#include <iostream>
#include "../header/7_9_strgfun.h"

void strgfun() {
    using namespace std;
    char mmm[15] = "minimun";
    char *wail = "ululate";

    unsigned int ms = c_in_str(mmm, 'm');
    unsigned int us = c_in_str(wail, 'u');
    cout << ms << " " << us << endl;
}

unsigned int c_in_str(const char *str, char ch) {
    unsigned int count = 0;

    /**
     * char数组，读取到'\0'就会跳出循环
     */
    while (*str) {
        if (*str == ch)
            count++;
        str++;
    }

    return count;
}
