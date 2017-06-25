//
// Created by 莫绪旻 on 17/3/23.
//

#ifndef LEARNCPLUS_14_22_TEMPLATE_FRIEND_H
#define LEARNCPLUS_14_22_TEMPLATE_FRIEND_H

#include <iostream>

using std::cout;
using std::endl;

template<typename T>
class ManyFriend {
private:
    T item;
public:
    ManyFriend(const T &i) : item(i) {}

    template<typename C, typename D>
    friend void show(C &, D &);
};

template<typename C, typename D>
void show(C &c, D &d) {
    cout << c.item << ", " << d.item << endl;
};

void use_template_friend() {
    ManyFriend<int> hfi1(10);
    ManyFriend<int> hfi2(20);
    ManyFriend<double> hfdb(10.5);

    cout << "hfi1, hfi2: ";
    show(hfi1,hfi2);

    cout << "hfdb, hfi2: ";
    show(hfdb,hfi2);
}

#endif //LEARNCPLUS_14_22_TEMPLATE_FRIEND_H
