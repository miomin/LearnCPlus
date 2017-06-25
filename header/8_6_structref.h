//
// Created by 莫绪旻 on 17/2/27.
//

#ifndef LEARNCPLUS_STRUCTREF_H
#define LEARNCPLUS_STRUCTREF_H

#include <string>

struct free_throws {
    std::string name;
    int made;
    int attempts;
    float percent;
};

void structref();

void display(const free_throws &ft);

void set_pc(free_throws &ft);

free_throws &accumulate(free_throws &target, const free_throws &source);

#endif //LEARNCPLUS_STRUCTREF_H
