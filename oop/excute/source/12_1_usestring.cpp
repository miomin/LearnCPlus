//
// Created by 莫绪旻 on 17/3/9.
//
#include <iostream>
#include "../../class/string/12_1_string.h"

static const int ArSize = 10;
static const int MaxLen = 81;

using std::cout;
using std::cin;
using std::endl;

void usestring() {
    String name;
    cout << "What is your name: ";
    cin >> name;

    cout << name << ", please enter up to " << ArSize << " short sayings <empty line to quit>: " << endl;
    String sayings[ArSize];
    char temp[MaxLen];

    int i;
    for (i = 0; i < ArSize; ++i) {
        cout << i + 1 << ": ";
        cin.get(temp, MaxLen);
        while (cin && cin.get() != '\n')
            continue;
        /**
         * 空行退出
         */
        if (!cin || temp[0] == '\0')
            break;
        else
            sayings[i] = temp;
    }

    int total = i;

    if (total > 0) {
        cout << "Here are your saying: ";
        for (i = 0; i < total; ++i) {
            cout << sayings[i][0] << ": " << sayings[i] << endl;
        }

        String *shortest = &sayings[0];
        String *first = &sayings[0];

        for (i = 1; i < total; ++i) {
            if (sayings[i].length() < shortest->length())
                shortest = &sayings[i];
            if (sayings[i] < *first)
                first = &sayings[i];
        }

        cout << "Shortest saying:\n" << *shortest << endl;
        cout << "First aplhabeticallu:\n" << *first << endl;
        cout << "This program used " << String::HowMant() << " String objects. Bye.\n";
    } else
        cout << "No input! Bye." << endl;
}