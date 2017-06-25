//
// Created by 莫绪旻 on 17/3/9.
//

#ifndef LEARNCPLUS_12_1_STRINGBAD_H
#define LEARNCPLUS_12_1_STRINGBAD_H

#include <iostream>

class String {
private:
    char *str;
    int len;
    static int num_strings;
    static const int CINLIM = 80; // cin input limit
public:

    /**
     * Constructors
     * @param s
     */
    String(const char *s);

    String();

    /**
     * 必须重载复制构造函数
     * 不然默认的复制构造函数会使用浅拷贝来复制对象
     * 这样的话，会多次对同一个对象调用析构函数
     */
    String(const String &);

    /**
     * 析构函数
     */
    ~String();

    int length() const { return len; }

    /**
     * 重载运算符
     */

    /**
     * 重载赋值运算符，原因也是浅拷贝的问题
     */
    String &operator=(const String &);

    String &operator=(const char *);

    char &operator[](int i);

    const char &operator[](int i) const;

    friend bool operator<(const String &st, const String &st2);

    friend bool operator>(const String &st, const String &st2);

    friend bool operator==(const String &st, const String &st2);

    friend std::ostream &operator<<(std::ostream &os, const String &st);

    friend std::istream &operator>>(std::istream &is, String &st);

    /**
     * static function
     */
    static int HowMant();

};

#endif //LEARNCPLUS_12_1_STRINGBAD_H
