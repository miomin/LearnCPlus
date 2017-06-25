//
// Created by 莫绪旻 on 17/3/10.
//
#include "13_1_tabten.h"

TableTennisPlayer::TableTennisPlayer(const string &fn, const string &ln, bool ht) {
    firstname = fn;
    lastname = ln;
    hasTable = ht;
}

/**
 * 复制构造函数
 */
TableTennisPlayer::TableTennisPlayer(const TableTennisPlayer &tp) {
    firstname = tp.firstname;
    lastname = tp.lastname;
    hasTable = tp.hasTable;
}

/**
 * 重载赋值运算符
 */
TableTennisPlayer &TableTennisPlayer::operator=(const TableTennisPlayer &tp) {
    firstname = tp.firstname;
    lastname = tp.lastname;
    hasTable = tp.hasTable;
}

/**
 * 友元函数重载
 */
std::ostream &operator<<(std::ostream &os, const TableTennisPlayer &tp) {
    os << tp.firstname << " " << tp.lastname;
    return os;
}