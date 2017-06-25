//
// Created by 莫绪旻 on 17/3/18.
//

#ifndef LEARNCPLUS_14_13_USESTACKTP_H
#define LEARNCPLUS_14_13_USESTACKTP_H

#include <iostream>
#include <string>
#include <cctype>
#include "../class/template/stacktp/14_13_stack.h"

using std::cin;
using std::cout;
using std::endl;

void usestacktp() {
    Stack<std::string> st(6);
    st.push("Miomin");
    st.push("Curry");
    st.push("Durant");
    st.push("Tompson");
    st.push("Green");
    st.push("Igaodala");

    cout << st.pop() << " "
         << st.pop() << " "
         << st.pop() << " "
         << st.pop() << " "
         << st.pop() << " "
         << st.pop() << " "
         << endl;
}

#endif //LEARNCPLUS_14_13_USESTACKTP_H
