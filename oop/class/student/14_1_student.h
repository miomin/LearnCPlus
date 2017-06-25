//
// Created by 莫绪旻 on 17/3/16.
//

#ifndef LEARNCPLUS_14_1_STUDENT_H
#define LEARNCPLUS_14_1_STUDENT_H

#include <iostream>
#include <string>
#include <valarray>

class Student {
private:
    std::string name;
    std::valarray<double> scores;

    //output
    std::ostream &arr_out(std::ostream &os) const;

public:
    Student() {
        name = "Null Student";
        scores = {};
    }

    explicit Student(const std::string &s) : name(s), scores() {
    }

    explicit Student(int n) : name("Nully"), scores(n) {
    }

    Student(const std::string &s, int n) : name(s), scores(n) {
    }

    Student(const std::string &s, const std::valarray<double> &array) : name(s), scores(array) {
    }

    Student(const char *str, const double *pd, int n) : name(str), scores(pd, n) {
    }

    ~Student() {
    }

    double Average() const;

    const std::string &Name() const;

    double &operator[](int i);

    double operator[](int i) const;

    friend std::istream &operator>>(std::istream &is, Student &stu);

    friend std::istream &getline(std::istream &is, Student &stu);

    friend std::ostream &operator<<(std::ostream &os, const Student &stu);
};

#endif //LEARNCPLUS_14_1_STUDENT_H
