//
// Created by 莫绪旻 on 17/2/17.
//
#include <iostream>
#include "../header/1_1_hello.h"

int learnString() {

    sayHello();

    using namespace std;
    const int Size = 15;
    char name1[Size];
    char name2[Size] = "C++owboy";

    cout << "What's your name: ";
    cin >> name1;
    cout << strlen(name1) << endl;
    cout << sizeof(name1) << endl << endl;

    return 0;
}
