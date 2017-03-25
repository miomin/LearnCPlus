//
// Created by 莫绪旻 on 17/3/5.
//

#include <iostream>

namespace Miomin {
    double fetch = 6.6;
}

double fetch = 9.9;

void namespace_demo() {
    using namespace Miomin;
    double fetch = 8.8;
    /**
     * 局部变量
     */
    std::cout << fetch << std::endl;
    /**
     * 全局
     */
    std::cout << ::fetch << std::endl;
    /**
     * Miomin
     */
    std::cout << Miomin::fetch << std::endl;
}