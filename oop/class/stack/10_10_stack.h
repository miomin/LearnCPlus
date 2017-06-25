//
// Created by 莫绪旻 on 17/3/6.
//

#ifndef LEARNCPLUS_10_10_STACK_H
#define LEARNCPLUS_10_10_STACK_H

typedef unsigned long Item;

class Stack {
private:
    static const int MAX_SIZE = 10;
    Item items[MAX_SIZE];
    int top;
public:
    Stack();

    ~Stack();

    bool isEmpty() const;

    bool isFull() const;

    bool push(const Item &item);

    bool pop(Item &item);
};

#endif //LEARNCPLUS_10_10_STACK_H
