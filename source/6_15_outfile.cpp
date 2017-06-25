//
// Created by 莫绪旻 on 17/2/23.
//
#include <iostream>
#include <fstream>

using namespace std;

/**
 * 用户输入信息，先显示在界面上，再存入文件
 */
void outfile() {

    char automobile[50];
    int year;
    double a_price;

    /**
     * 读取用户输入
     */
    cout << "Enter the make and model of automobile: ";
    cin.getline(automobile, 50);
    cout << "Enter model year: ";
    cin >> year;
    cout << "Enter the a_price: ";
    cin >> a_price;

    /**
     * 显示在界面上
     */
    cout << fixed;
    cout.precision(2);
    cout.setf(ios_base::showpoint);
    cout << "Make and model: " << automobile << endl;
    cout << "Year: " << year << endl;
    cout << "Was asking $" << a_price << endl;

    /**
     * 写入文件
     */
    ofstream outFile;
    outFile.open("carinfo.txt");

    outFile << fixed;
    outFile.precision(2);
    outFile.setf(ios_base::showpoint);
    outFile << "Make and model: " << automobile << endl;
    outFile << "Year: " << year << endl;
    outFile << "Was asking $" << a_price << endl;

    outFile.close();
}
