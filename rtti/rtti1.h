//
// Created by 莫绪旻 on 17/3/29.
//

#ifndef LEARNCPLUS_RTTI1_H
#define LEARNCPLUS_RTTI1_H

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <exception>

using std::cout;
using std::endl;

class Grand {
private:
    int hold;
public:
    Grand(int h = 0) : hold(h) {}

    virtual void Speak() const {
        cout << "I am a grand class.\n";
    }

    virtual int Value() const {
        return hold;
    }
};

class Superb : public Grand {
public:
    Superb(int h = 0) : Grand(h) {}

    void Speak() const {
        cout << "I am a superb class.\n";
    }

    virtual void Say() const {
        cout << "I hold the superb value of " << Value() << endl;
    }
};

class Magnificent : public Superb {
private:
    char ch;
public:
    Magnificent(int h = 0, char c = 'A') : Superb(h), ch(c) {}

    virtual void Speak() const {
        cout << "I am a magnificent class." << endl;
    }

    virtual void Say() const {
        cout << "I hold the charcter " << ch << " and the integer " << Value() << "! ";
    }
};

Grand *GetOne() {
    Grand *p;
    switch (std::rand() % 3) {
        case 0:
            p = new Grand(std::rand() % 100);
            break;
        case 1:
            p = new Superb(std::rand() % 100);
            break;
        case 2:
            p = new Magnificent(std::rand() % 100, 'A' + std::rand() % 26);
            break;
    }
    return p;
}

void myQuit2() {
    cout << "Have no catch Exception!" << endl;
    exit(5);
}

void use_rtti1() {
    std::set_terminate(myQuit2);
    std::srand(std::time(0));
    Grand *pg;
    Superb *ps;

    for (int i = 0; i < 5; ++i) {
        pg = GetOne();
        pg->Speak();
        if (ps = dynamic_cast<Superb *>(pg))
            ps->Say();
        if (typeid(Magnificent) == typeid(*pg))
            cout << "Yes, you are really magnificent.\n";
    }
}


#endif //LEARNCPLUS_RTTI1_H
