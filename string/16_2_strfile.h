//
// Created by 莫绪旻 on 17/3/29.
//

#ifndef LEARNCPLUS_16_2_STRFILE_H
#define LEARNCPLUS_16_2_STRFILE_H

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

void use_strfile() {
    using namespace std;
    ifstream fin;
    fin.open("tobuy.txt");

    if (fin.is_open() == false) {
        /**
         * 打印错误日志
         */
        cerr << "Can't open file. Bye.\n";
        exit(EXIT_FAILURE);
    }

    string item;
    int count = 0;
    getline(fin, item, ':');
    while (fin) {
        ++count;
        cout << count << ": " << item << endl;
        getline(fin, item, ':');
    }

    cout << "Done\n";
    fin.close();
}

#endif //LEARNCPLUS_16_2_STRFILE_H
