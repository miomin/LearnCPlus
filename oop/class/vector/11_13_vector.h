//
// Created by 莫绪旻 on 17/3/8.
//

#ifndef LEARNCPLUS_11_13_VECTOR_H
#define LEARNCPLUS_11_13_VECTOR_H

#include <iostream>

namespace MIOMIN_VECTOR {
    class Vector {
    public:
        /**
         * 向量的表示方式
         */
        enum Mode {
            RECT, POL
        };
    private:
        double x; //x坐标
        double y; //y坐标
        double mag; //length
        double ang; //角度
        Mode mode; //向量的表示方式

        void set_mag();

        void set_ang();

        void set_x();

        void set_y();

    public:
        Vector();

        Vector(double n1, double n2, Mode form = RECT);

        ~Vector();

        void reset(double n1, double n2, Mode form = RECT);

        double xval() const {
            return x;
        }

        double yval() const {
            return y;
        }

        double magval() const {
            return mag;
        }

        double angval() const {
            return ang;
        }

        /**
         * set mode to POL
         */
        void polar_mode();

        /**
         * set mode to RECT
         */
        void rect_mode();

        /**
         * 成员函数重载运算符
         */
        Vector operator+(const Vector &b) const;

        Vector operator-(const Vector &b) const;

        Vector operator-() const;

        Vector operator++();

        Vector operator--();

        Vector operator*(double n) const;

        /**
         * 友元函数重载运算符
         */
        friend Vector operator*(double n, const Vector &a);

        friend std::ostream &operator<<(std::ostream &os, const Vector &v);
    };
}

#endif //LEARNCPLUS_11_13_VECTOR_H
