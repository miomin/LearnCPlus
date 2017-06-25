//
// Created by 莫绪旻 on 17/3/30.
//

#ifndef LEARNCPLUS_VECT1_H
#define LEARNCPLUS_VECT1_H

#include <iostream>
#include <string>
#include <vector>

const int NUM = 5;

void use_vect1() {
    using std::vector;
    using std::string;
    using std::cin;
    using std::cout;

    vector<int> rating(NUM);
    vector<string> titles(NUM);

    cout << "You will do exactly as told. You will enter\n"
         << NUM << " book titles and your tatings (0-10).\n";

    int i;
    for (i = 0; i < NUM; ++i) {
        cout << "Enter title #" << i + 1 << ": ";
        getline(cin, titles[i]);
        cout << "Enter your rating (0-10): ";
        cin >> rating[i];
        cin.get();
    }

    for (i = 0; i < NUM; ++i) {
        cout << rating[i] << "\t" << titles[i] << std::endl;
    }
}

#endif //LEARNCPLUS_VECT1_H
