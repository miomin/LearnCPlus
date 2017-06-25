//
// Created by 莫绪旻 on 17/3/22.
//

#ifndef LEARNCPLUS_14_19_PAIRS_H
#define LEARNCPLUS_14_19_PAIRS_H

#include <string>
#include <iostream>

template<class T1, class T2>
class Pair {
private:
    T1 a;
    T2 b;
public:
    T1 &first();

    T2 &second();

    T1 first() const {
        return a;
    }

    T2 second() const {
        return b;
    };

    Pair(const T1 &aval, const T2 &bval) : a(aval), b(bval) {
    }

    Pair() {
    }
};

template<class T1, class T2>
T1 &Pair<T1, T2>::first() {
    return a;
}

template<class T1, class T2>
T2 &Pair<T1, T2>::second() {
    return b;
}

void usepairs() {
    using std::cout;
    using std::endl;
    using std::string;

    Pair<string, int> ratings[4] = {
            Pair<string, int>("The Purpled Duck", 5),
            Pair<string, int>("Jaquie's Frisco", 4),
            Pair<string, int>("Cafe Souffle", 5),
            Pair<string, int>("Bertie's Eats", 3),
    };

    int joints = sizeof(ratings) / sizeof(Pair<string, int>);
    cout << "Rating:\t Eatery\n";
    for (int i = 0; i < joints; ++i)
        cout << ratings[i].second() << ":\t "
             << ratings[i].first() << endl;
}

#endif //LEARNCPLUS_14_19_PAIRS_H
