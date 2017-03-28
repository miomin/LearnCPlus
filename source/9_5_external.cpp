//
// Created by 莫绪旻 on 17/3/3.
//
#include <iostream>
#include "../header/9_6_support.h"

using namespace std;

/**
 * 等于java的static，只在编译时初始化
 * 如果加了static则表示该变量只能在该文件访问
 */
double warming = 0.3;

void external_demo() {
    cout << warming << endl;
    update(0.1);
    cout << warming << endl;
    cout << mycount << endl;
}
