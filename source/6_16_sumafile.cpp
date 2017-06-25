//
// Created by 莫绪旻 on 17/2/23.
//
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

void sumafile() {

    char filename[] = "carinfo.txt";
    ifstream inFile;
    inFile.open(filename);
    if (!inFile.is_open()) {
        cout << "Could not open the file " << filename << endl;
        exit(EXIT_FAILURE);
    }

    string value;

    char temp;
    /**
     * 用 inFile.get 才能保留空格和换行符
     * 用 >> 会忽略空格和换行符
     */
    while (inFile.get(temp)) {
        value += temp;
    }

    if (inFile.eof())
        cout << value << endl;
    else if (inFile.fail())
        cout << "Data missmatch." << endl;
    else
        cout << "Uknown reason fail." << endl;

    inFile.close();
}
