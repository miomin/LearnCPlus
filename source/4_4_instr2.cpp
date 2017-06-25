//
// Created by 莫绪旻 on 17/2/17.
//

#include <iostream>

void getInputLine() {
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name: ";
    cin.getline(name, ArSize);
    cout << "Enter your favorite dessert: ";
    cin.getline(dessert, ArSize);

    cout << name << " " << dessert << endl;
}
