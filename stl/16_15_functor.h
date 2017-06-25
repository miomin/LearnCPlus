//
// Created by 莫绪旻 on 17/4/10.
//

#ifndef LEARNCPLUS_16_15_FUNCTOR_H
#define LEARNCPLUS_16_15_FUNCTOR_H

#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>
#include <string>

template<class T>
/**
 * 函数对象1
 * @tparam T
 */
class Add {
private:
    T a;
public:
    Add(const T &t) : a(t) {}

    /**
     * 重载（）运算符
     */
    T operator()(const T &v) {
        return a + v;
    }
};

class FuncObjType {
public:
    void operator()() {
        using namespace std;
        cout << "Hello C++!" << endl;
    }
};

class MyPrint {
public:
    void operator()(const std::string str) {
        using namespace std;
        cout << str << endl;
    }
};

void use_functor() {
    using namespace std;
    Add<int> add(10);
    cout << add(20) << endl;

    FuncObjType fobj;
    fobj();

    MyPrint print;
    print("Miomin");
}

#endif //LEARNCPLUS_16_15_FUNCTOR_H
