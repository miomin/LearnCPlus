//
// Created by 莫绪旻 on 17/3/5.
//
#include <iostream>
#include "../header/9_11_namesp.h"
#include "../header/9_12_namesp_excut.h"

void namesp_excut() {
    debts::Debt golf = {
            {"Bennt", "Goatsniff"},
            120.0
    };
    debts::showDebt(golf);

    other();
    another();
}

void other() {
    using std::cout;
    using std::endl;

    pers::Person dg = {"Doodles", "Glister"};
    pers::showPerson(dg);
    cout << endl;

    debts::Debt zippy[3];

    int i;
    for (i = 0; i < 3; ++i)
        debts::getDebt(zippy[i]);

    for (i = 0; i < 3; ++i)
        debts::showDebt(zippy[i]);

    cout << "Total " << debts::sumDebts(zippy, 3) << endl;
}

void another() {
    pers::Person collector = {"Milo", "Rightshift"};
    pers::showPerson(collector);
    std::cout << std::endl;
}