//
// Created by 莫绪旻 on 17/3/8.
//

#include "../../class/vector/11_13_vector.h"
#include <iostream>

void usevector() {
    MIOMIN_VECTOR::Vector vector = MIOMIN_VECTOR::Vector(6,6);
    std::cout << -vector << std::endl;
    std::cout << ++vector << std::endl;
    std::cout << ++vector << std::endl;
    std::cout << ++vector << std::endl;
}