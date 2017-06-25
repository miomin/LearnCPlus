//
// Created by 莫绪旻 on 17/3/18.
//

#ifndef LEARNCPLUS_14_13_STACK_H
#define LEARNCPLUS_14_13_STACK_H

template<class T>

class Stack {
private:
    enum {
        MAX = 10
    };
    int stacksize;
    T *items;
    int top;
public:
    explicit Stack(int ss = MAX);

    Stack(const Stack &st);

    ~Stack() {
        delete[] items;
    }

    bool isEmpty() {
        return top == 0;
    }

    bool isFull() {
        return top == stacksize;
    }

    bool push(const T &item);

    T pop();

    Stack &operator=(const Stack &st);
};

template<class T>
Stack<T>::Stack(int ss) : stacksize(ss), top(0) {
    items = new T[stacksize];
}

template<class T>
Stack<T>::Stack(const Stack &st) {
    stacksize = st.stacksize;
    top = st.top;
    items = new T[stacksize];
    for (int i = 0; i < top; ++i) {
        items[i] = st.items[i];
    }
}

template<class T>
bool Stack<T>::push(const T &item) {
    if (top < stacksize) {
        items[top++] = item;
        return true;
    } else
        return false;
}

template<class T>
T Stack<T>::pop() {
    if (top > 0) {
        return items[--top];
    }
}

template<class T>
Stack<T> &Stack<T>::operator=(const Stack &st) {
    if (this == &st)
        return *this;
    delete[] items;
    stacksize = st.stacksize;
    top = st.top;
    items = new T[stacksize];
    for (int i = 0; i < top; ++i) {
        items[i] = st.items[i];
    }
    return *this;
}

#endif //LEARNCPLUS_14_13_STACK_H
