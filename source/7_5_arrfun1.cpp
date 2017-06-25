//
// Created by 莫绪旻 on 17/2/23.
//
#include <iostream>
#include "../header/7_5_arrfun1.h"

const int ArSize = 8;

using namespace std;

void arrfun1() {
    int cookies[ArSize] = {1, 2, 3, 4, 5, 6, 7, 8};
    cout << sum_arr(cookies, ArSize) << endl;
}

int sum_arr(int arr[], int n) {
    int total = 0;
    for (int i = 0; i < n; ++i) {
        total += arr[i];
    }

    return total;
}
