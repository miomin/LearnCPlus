//
// Created by 莫绪旻 on 17/2/25.
//
#include <iostream>
#include "../header/7_18_func_ptr.h"

void func_ptr() {
    using namespace std;
    int code = 6;
    estimate(code, betsy);
    estimate(code, pam);
}

double betsy(int lns) {
    return 0.05 * lns;
}

double pam(int lns) {
    return 0.03 * lns + 0.0004 * lns * lns;
}

void estimate(int lines, double(*pf)(int)) {
    using namespace std;
    cout << lines << " lines will take " << (*pf)(lines) << " hours" << endl;
}
