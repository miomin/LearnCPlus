//
// Created by 莫绪旻 on 17/2/22.
//
#include <iostream>

void textin2() {

    using namespace std;

    char ch;
    int count = 0;

    cin.get(ch);

    while (ch != '#') {
        cout << ch;
        ++count;
        cin.get(ch);
    }

    cout << endl << count << endl;
}
