//
// Created by 莫绪旻 on 17/3/17.
//
#include <iostream>
#include <cstring>
#include "../../class/worker/14_7_worker.h"

static const int SIZE = 5;

using std::cin;
using std::cout;
using std::endl;
using std::strchr;

void useworker() {
    Worker *lolas[SIZE];

    int ct;
    for (ct = 0; ct < SIZE; ++ct) {
        char choice;
        cout << "Enter the employee category:\n"
             << "w: waiter  s:singer  "
             << "t: singing waiter  q: quit" << endl;
        cin >> choice;

        while (strchr("wstq", choice) == NULL) {
            cout << "Please enter a w,s,t,q: ";
            cin >> choice;
        }

        if (choice == 'q')
            break;

        switch (choice) {
            case 'w':
                lolas[ct] = new Waiter;
                break;
            case 's':
                lolas[ct] = new Singer;
                break;
            case 't':
                lolas[ct] = new SingingWaiter;
                break;
        }

        cin.get();
        lolas[ct]->Set();
    }

    cout << "\nHere is your staff:\n";
    int i;
    for (i = 0; i < ct; ++i) {
        cout << endl;
        lolas[i]->Show();
    }

    for (i = 0; i < ct; ++i)
        delete lolas[i];

    cout << "Bye.\n";
}

