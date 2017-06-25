//
// Created by 莫绪旻 on 17/3/17.
//
#include <iostream>
#include <valarray>

using std::valarray;
using std::cout;
using std::endl;

void use_valarray() {
    valarray<double> scores = valarray<double>(10);
    scores[0] = 1.0;
    scores[1] = 3.0;
    scores[2] = 2.0;
    cout << scores.size() << endl;
    cout << scores[0] << endl;
    cout << scores.max() << endl;

}
