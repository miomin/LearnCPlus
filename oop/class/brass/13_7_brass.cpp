//
// Created by 莫绪旻 on 17/3/14.
//
#include <iostream>
#include "13_7_brass.h"

using std::cout;
using std::endl;
using std::string;
using std::ios_base;

/**
 * ================ BaseBrass ================
 */
BaseBrass::BaseBrass(const std::string &s, long an, double bal) {
    fullName = s;
    acctNum = an;
    balance = bal;
}

/**
 * 存钱
 * @param amt
 */
void BaseBrass::Deposit(double amt) {
    if (amt < 0)
        cout << "Negative deposit not allowed; " << "deposit is cancelled." << endl;
    else
        balance += amt;
}

/**
 * 取钱
 * @param amt
 */
void BaseBrass::Withdraw(double amt) {
    balance -= amt;
}

BaseBrass::Formatting BaseBrass::SetFormat() const {
    Formatting f;
    f.flag = cout.setf(ios_base::fixed, ios_base::floatfield);
    f.pr = cout.precision(2);
    return f;
}

void BaseBrass::Restore(Formatting &f) const {
    cout.setf(f.flag, ios_base::floatfield);
    cout.precision(f.pr);
}

/**
 * ================ Brass ================
 */

Brass::Brass(const std::string &s, long an, double bal) : BaseBrass(s, an, bal) {}

void Brass::Withdraw(double amt) {

    if (amt < 0)
        cout << "Withdrawal amount must be positive;" << endl;
    else if (amt <= Balance())
        BaseBrass::Withdraw(amt);
    else
        cout << "Whthdrawal amount exceeds your balance;" << endl;
}

void Brass::ViewAcct() const {
    Formatting f = SetFormat();

    cout << "Client: " << FullName() << endl;
    cout << "Account Number: " << AcctNum() << endl;
    cout << "Balance: $" << Balance() << endl;

    Restore(f);
}


/**
 * ================ BrassPlus ================
 */

BrassPlus::BrassPlus(const std::string &s, long an, double bal, double ml, double r) : BaseBrass(s, an, bal) {
    maxLoan = ml;
    owesBank = 0.0;
    rate = r;
}

BrassPlus::BrassPlus(const Brass &ba, double ml, double r) : BaseBrass(ba) {
    maxLoan = ml;
    owesBank = 0.0;
    rate = r;
}

void BrassPlus::ViewAcct() const {

    Formatting f = SetFormat();

    cout << "Client: " << FullName() << endl;
    cout << "Account Number: " << AcctNum() << endl;
    cout << "Balance: $" << Balance() << endl;
    cout << "Maxomum loan: $" << maxLoan << endl;
    cout << "Owed to bank: $" << owesBank << endl;
    cout.precision(3);
    cout << "Loan Rate: " << 100 * rate << "%" << endl;

    Restore(f);
}

void BrassPlus::Withdraw(double amt) {
    Formatting f = SetFormat();

    double bal = Balance();
    if (amt <= bal)
        BaseBrass::Withdraw(amt);
    else if (amt <= bal + maxLoan - owesBank) {
        double advance = amt - bal;
        owesBank += advance * (1.0 + rate);
        cout << "Bank advance: $" << advance << endl;
        cout << "Finance charge: $" << advance * rate << endl;
        Deposit(advance);
        BaseBrass::Withdraw(amt);
    } else {
        cout << "Credit limit exceeded." << endl;
    }
    Restore(f);
}