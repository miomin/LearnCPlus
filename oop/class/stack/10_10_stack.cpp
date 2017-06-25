//
// Created by 莫绪旻 on 17/3/6.
//
#include "10_10_stack.h"
#include <string>

Stack::Stack() {
    top = 0;
}

Stack::~Stack() {
    top = 0;
}

bool Stack::isEmpty() const {
    return top == 0;
}

bool Stack::isFull() const {
    return top == MAX_SIZE;
}

bool Stack::push(const Item &item) {
    if (top < MAX_SIZE) {
        items[top++] = item;
        return true;
    } else
        return false;
}

bool Stack::pop(Item &item) {
    if (top > 0) {
        item = items[--top];
        return true;
    } else
        return false;
}

