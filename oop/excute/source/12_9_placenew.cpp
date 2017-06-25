//
// Created by 莫绪旻 on 17/3/10.
//
#include <iostream>
#include <string>
#include <new>

const int BUF = 512;

class JustTesting {
private:
    std::string words;
    int number;
public:
    JustTesting(const std::string &s = "Just Testing", int n = 0) {
        words = s;
        number = n;
    }

    ~JustTesting() {
    }
};

void placenew() {
    char *buffer1 = new char[BUF];
    char *buffer2 = new char[BUF];

    JustTesting *pc1, *pc2, *pc3, *pc4;

    pc1 = new(buffer1) JustTesting;
    pc2 = new JustTesting("Heap1", 20);

    pc3 = new(buffer2) JustTesting;
    pc4 = new JustTesting("Heap2", 10);

    delete pc2;
    delete pc4;

    pc3->~JustTesting();
    pc1->~JustTesting();
    delete[] buffer1;
    delete[] buffer2;
}
