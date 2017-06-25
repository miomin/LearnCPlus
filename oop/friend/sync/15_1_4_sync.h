//
// Created by 莫绪旻 on 17/3/25.
//

#ifndef LEARNCPLUS_15_1_4_SYNC_H
#define LEARNCPLUS_15_1_4_SYNC_H

#include <iostream>

class Analyzer;

/**
 * 函数需要同时访问两个类的私有变量
 * 将函数同时作为两个类的友元
 */
class Probe {
public:
private:
    int p_count = 0;
public:
    friend void sync(Analyzer &a, Probe &p);

    int getP_count() {
        return p_count;
    }
};

class Analyzer {
private:
    int a_count = 0;
public:
    friend void sync(Analyzer &a, Probe &p);

    int getA_count() {
        return a_count;
    }
};

void sync(Analyzer &a, Probe &p) {
    a.a_count++;
    p.p_count++;
}

void use_sync() {
    using std::cout;
    using std::endl;

    Analyzer a;
    Probe p;
    sync(a, p);
    sync(a, p);
    sync(a, p);

    cout << a.getA_count() << " " <<
         p.getP_count() << endl;
}

#endif //LEARNCPLUS_15_1_4_SYNC_H
