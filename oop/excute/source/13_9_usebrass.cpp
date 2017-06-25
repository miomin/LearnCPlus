//
// Created by 莫绪旻 on 17/3/14.
//
#include <iostream>
#include "../../class/brass/13_7_brass.h"

using std::cout;
using std::endl;

/**
 * 多态
 */
void usebrass1() {
    BaseBrass *piggy = new Brass("Porcelot Pigg", 381299, 4000.00);
    BaseBrass *hoggy = new BrassPlus("Horatio Hogg", 382288, 3000.00, 666, 0.66666);
    piggy->ViewAcct();
    cout << endl;
    hoggy->ViewAcct();
    cout << endl;

    delete piggy;
    cout << endl;
    delete hoggy;
}
