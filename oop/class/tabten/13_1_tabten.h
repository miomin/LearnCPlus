//
// Created by 莫绪旻 on 17/3/10.
//

#ifndef LEARNCPLUS_13_1_TABTEN_H
#define LEARNCPLUS_13_1_TABTEN_H

#include <string>
#include <iostream>

using std::string;

class TableTennisPlayer {
private:
    string firstname;
    string lastname;
    bool hasTable;
public:
    TableTennisPlayer(const string &fn = "none", const string &ln = "none", bool ht = false);

    /**
     * 复制构造函数
     */
    TableTennisPlayer(const TableTennisPlayer &);

    /**
     * 重载赋值运算符
     */
    TableTennisPlayer &operator=(const TableTennisPlayer &);

    void Name() const {
        std::cout << lastname << " " << firstname << std::endl;
    }

    bool HasTable() const {
        return hasTable;
    }

    void ResetTable(bool v) {
        hasTable = v;
    }

    /**
     * 友元函数重载
     */
    friend std::ostream &operator<<(std::ostream &os, const TableTennisPlayer &tp);
};

#endif //LEARNCPLUS_13_1_TABTEN_H
