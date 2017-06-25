//
// Created by 莫绪旻 on 17/3/31.
//

#ifndef LEARNCPLUS_16_12_LIST_H
#define LEARNCPLUS_16_12_LIST_H

#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>

void outint(int n) {
    std::cout << n << " ";
}

void use_list() {
    using namespace std;

    list<int> one(5, 2);
    int stuff[5] = {1, 2, 4, 8, 6};

    list<int> two;
    two.insert(two.begin(), stuff, stuff + 5);

    int more[6] = {6, 4, 2, 4, 6, 5};
    list<int> three(two);
    three.insert(three.end(), more, more + 6);

    for_each(one.begin(), one.end(), outint);

    for_each(two.begin(), two.end(), outint);

    for_each(three.begin(), three.end(), outint);

    three.remove(2);
    three.splice(three.begin(), one);
    three.unique();
    three.sort();
    two.sort();
    three.merge(two);

}

#endif //LEARNCPLUS_16_12_LIST_H
