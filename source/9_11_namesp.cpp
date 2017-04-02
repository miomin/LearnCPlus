//
// Created by 莫绪旻 on 17/3/5.
//
#include <iostream>
#include "../header/9_11_namesp.h"

namespace pers {
    using std::cout;
    using std::cin;

    void getPerson(Person &rp) {
        cout << "Enter first name: ";
        cin >> rp.fname;
        cout << "Enter last name: ";
        cin >> rp.lname;
    }

    void showPerson(const Person &rp) {
        std::cout << rp.lname << "," << rp.fname;
    }
}

namespace debts {
    using std::cout;
    using std::cin;

    void getDebt(Debt &rd) {
        pers::getPerson(rd.person);
        cout << "Enter amount: ";
        cin >> rd.amount;
    }

    void showDebt(const Debt &rd) {
        pers::showPerson(rd.person);
        cout << ":$" << rd.amount << std::endl;
    }

    double sumDebts(const Debt ar[], int n) {
        double total = 0;
        for (int i = 0; i < n; ++i) {
            total += ar[i].amount;
        }
        return total;
    }
}
