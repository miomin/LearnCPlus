//
// Created by 莫绪旻 on 17/3/22.
//

#ifndef LEARNCPLUS_14_17_ARRAYTP_H
#define LEARNCPLUS_14_17_ARRAYTP_H

#include <iostream>
#include <cstdlib>

template<class T, int n>
class ArrayTP {
private:
    T ar[n];
public:
    ArrayTP() {};

    explicit ArrayTP(const T &v);

    virtual T &operator[](int i);

    virtual T operator[](int i) const;
};

template<class T, int n>
ArrayTP<T, n>::ArrayTP(const T &v) {
    for (int i = 0; i < n; ++i)
        ar[i] = v;
}

template<class T, int n>
T &ArrayTP<T, n>::operator[](int i) {
    if (i < 0 || i >= n) {
        std::cerr << "Error in array limits: " << i
                  << " is out of range\n";
        std::exit(EXIT_FAILURE);
    }
    return ar[i];
}

template<class T, int n>
T ArrayTP<T, n>::operator[](int i) const {
    if (i < 0 || i >= n) {
        std::cerr << "Error in array limits: " << i
                  << " is out of range\n";
        std::exit(EXIT_FAILURE);
    }
    return ar[i];
}

#endif //LEARNCPLUS_14_17_ARRAYTP_H
