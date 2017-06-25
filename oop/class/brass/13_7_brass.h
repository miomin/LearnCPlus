//
// Created by 莫绪旻 on 17/3/14.
//

#ifndef LEARNCPLUS_13_7_BRASS_H
#define LEARNCPLUS_13_7_BRASS_H

#include <string>
#include <iostream>

class BaseBrass {
private:
    std::string fullName;
    long acctNum;
    double balance;
protected:
    struct Formatting {
        std::ios_base::fmtflags flag;
        std::streamsize pr;
    };

    const std::string &FullName() const {
        return fullName;
    }

    long AcctNum() const {
        return acctNum;
    }

    Formatting SetFormat() const;

    void Restore(Formatting &f) const;

public:
    BaseBrass(const std::string &s = "Nullbody", long an = -1, double bal = 0.0);

    void Deposit(double amt);

    virtual void Withdraw(double amt) = 0;

    double Balance() const {
        return balance;
    }

    virtual void ViewAcct() const = 0;

    virtual ~BaseBrass() {
        std::cout << "~BaseBrass()" << std::endl;
    }
};

class Brass : public BaseBrass {
public:
    Brass(const std::string &s = "Nullbody", long an = -1, double bal = 0.0);

    virtual void Withdraw(double amt);

    virtual void ViewAcct() const;

    virtual ~Brass() {
        std::cout << "~Brass()" << std::endl;
    }
};

class BrassPlus : public BaseBrass {
private:
    double maxLoan;
    double rate;
    double owesBank;
public:
    BrassPlus(const std::string &s = "Nullbody", long an = -1, double bal = 0.0, double ml = 500, double r = 0.11125);

    BrassPlus(const Brass &ba, double ml = 500, double r = 0.11125);

    virtual void Withdraw(double amt);

    virtual void ViewAcct() const;

    void ResetMax(double m) {
        maxLoan = m;
    }

    void ResetRate(double r) {
        rate = r;
    }

    void ResetOwes() {
        owesBank = 0;
    }

    virtual ~BrassPlus() {
        std::cout << "~BrassPlus()" << std::endl;
    }
};

#endif //LEARNCPLUS_13_7_BRASS_H
