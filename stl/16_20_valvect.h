//
// Created by 莫绪旻 on 17/4/10.
//

#ifndef LEARNCPLUS_16_20_VALVECT_H
#define LEARNCPLUS_16_20_VALVECT_H

#include <iostream>
#include <valarray>
#include <vector>
#include <algorithm>
#include <string>

std::string getstring() {
    return "Miomin";
}

void use_valvect() {
    using namespace std;
    vector<double> data;
    double temp;

    cout << "Enter numbers: \n";
    while (cin >> temp && temp > 0)
        data.push_back(temp);
    sort(data.begin(), data.end());
    int size = data.size();

    valarray<double> numbers(size);
    int i;
    for (i = 0; i < size; i++)
        numbers[i] = data[i];

    valarray<double> sq_trs(size);
    sq_trs = sqrt(numbers);

    valarray<double> results(size);
    results = numbers + 2.0 * sq_trs;

    cout.setf(ios_base::fixed);
    cout.precision(4);

    for (i = 0; i < size; i++) {
        cout.widen(8);
        cout << numbers[i] << ": ";
        cout.widen(8);
        cout << results[i] << endl;
    }
}

#endif //LEARNCPLUS_16_20_VALVECT_H
