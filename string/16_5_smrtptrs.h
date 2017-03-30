//
// Created by 莫绪旻 on 17/3/30.
//

#ifndef LEARNCPLUS_16_5_SMRTPTRS_H
#define LEARNCPLUS_16_5_SMRTPTRS_H

#include <iostream>
#include <string>
#include <memory>

/**
 * 使用智能指针模板，
 * 只能用于new出来的堆对象
 */
class Report {
private:
    std::string str;
public:
    Report(const std::string s) : str(s) {
        std::cout << "Object created!\n";
    }

    ~Report() {
        std::cout << "Object deleted!\n";
    }

    void comment() const {
        std::cout << str << std::endl;
    }
};

void use_smrtptrs() {
    {
        std::auto_ptr<Report> ps(new Report("using auto_ptr"));
        ps->comment();
    }
    std::cout << std::endl;

    {
        /**
         * 只有shared_ptr可以采用这种赋值（指向了同一个Report对象）
         */
        std::shared_ptr<Report> ps(new Report("using share_ptr"));
        ps->comment();
    }
    std::cout << std::endl;

    {
        std::unique_ptr<Report> ps(new Report("using unique_ptr"));
        std::unique_ptr<Report> temp = move(ps);
        /**
         * ps失效，控制权交给了temp
         */
        temp->comment();
    }
    std::cout << std::endl;
}

#endif //LEARNCPLUS_16_5_SMRTPTRS_H
