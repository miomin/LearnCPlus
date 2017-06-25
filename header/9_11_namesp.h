//
// Created by 莫绪旻 on 17/3/5.
//

#ifndef LEARNCPLUS_9_11_NAMESP_H
#define LEARNCPLUS_9_11_NAMESP_H

#include <string>

namespace pers {
    struct Person {
        std::string fname;
        std::string lname;
    };

    void getPerson(Person &);

    void showPerson(const Person &);
}

namespace debts {
    struct Debt {
        pers::Person person;
        double amount;
    };

    void getDebt(Debt &);

    void showDebt(const Debt &);

    double sumDebts(const Debt ar[], int n);
}
#endif //LEARNCPLUS_9_11_NAMESP_H
