//
// Created by 莫绪旻 on 17/2/28.
//
#include <iostream>
#include <fstream>
#include <cstdlib>
#include "../header/8_8_filefunc.h"

using namespace std;

const int LIMIT = 5;

void filefunc() {
    ofstream fout;
    const char *fn = "ep-data.txt";
    fout.open(fn);

    if (!fout.is_open()) {
        cout << "Can't open " << fn << endl;
        exit(EXIT_FAILURE);
    }

    double objective = 6.6;
    double eps[LIMIT] = {1.1, 2.2, 3.3, 5.5, 6.6};

    file_it(fout, objective, eps, LIMIT);
    file_it(cout, objective, eps, LIMIT);
}

void file_it(ostream &os, double fo, const double fe[], int n) {
    ios_base::fmtflags initial = os.setf(ios_base::fixed);
    os.precision(0);
    os << "Focal length of objective: " << fo << " mm" << endl;
    //显示小数点，即使为零
    os.setf(ios::showpoint);
    //显示多少位小数
    os.precision(1);
    os << "f.l. eyepiece ";
    os << "magnification" << endl;

    for (int i = 0; i < n; ++i) {
        os << fe[i];
        os << int(fo / fe[i] + 0.5) << endl;
    }
    os.setf(initial);
}

