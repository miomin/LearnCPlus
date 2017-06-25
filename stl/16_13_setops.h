//
// Created by 莫绪旻 on 17/3/31.
//

#ifndef LEARNCPLUS_16_13_SETOPS_H
#define LEARNCPLUS_16_13_SETOPS_H

#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <iterator>

void setops() {
    using namespace std;

    const int N = 6;

    string s1[N] = {"A", "B", "C", "D", "E", "F"};
    string s2[N] = {"1", "2", "3", "4", "5", "6"};

    set<string> A(s1, s1 + N);
    set<string> B(s2, s2 + N);

    ostream_iterator<string, char> out_iterator(cout, " ");
    cout << "Set A: ";
    copy(A.begin(), A.end(), out_iterator);
    cout << endl;

    cout << "Set B: ";
    copy(B.begin(), B.end(), out_iterator);
    cout << endl;

    set_union(A.begin(), A.end(), B.begin(), B.end(), out_iterator);
    set_intersection(A.begin(), A.end(), B.begin(), B.end(), out_iterator);
    set_difference(A.begin(), A.end(), B.begin(), B.end(), out_iterator);

    set<string> C;
    set_union(A.begin(), A.end(), B.begin(), B.end(), insert_iterator<set<string>>(C, C.begin()));
    copy(C.begin(), C.end(), out_iterator);

    string s3("grungy");
    C.insert(s3);


    copy(C.lower_bound("B"), C.upper_bound("E"), out_iterator);
}

#endif //LEARNCPLUS_16_13_SETOPS_H
