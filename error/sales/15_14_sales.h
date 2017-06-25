//
// Created by 莫绪旻 on 17/3/27.
//

#ifndef LEARNCPLUS_15_14_SALES_H
#define LEARNCPLUS_15_14_SALES_H

#include <iostream>
#include <stdexcept>
#include <string>
#include <exception>

using std::string;

class Sales {
public:
    enum {
        MONTHS = 12
    };

    class bad_index_exception : public std::logic_error {
    private:
        int bi;
    public:
        explicit bad_index_exception(int ix, const string &s = "Exception: Index error in Sales obj\n")
                : std::logic_error(s), bi(ix) {
        }

        int bi_val() const {
            return bi;
        }

        virtual ~bad_index_exception() {}
    };

    explicit Sales(int yy = 0) {
        year = yy;
        for (int i = 0; i < MONTHS; ++i) {
            gross[i] = 0;
        }
    }

    Sales(int yy, const double *gr, int n) {
        year = yy;
        int lim = (n < MONTHS) ? n : MONTHS;
        int i;
        for (i = 0; i < lim; ++i)
            gross[i] = gr[i];
        for (; i < MONTHS; ++i)
            gross[i] = 0;
    }

    virtual ~Sales() {}

    int Year() const {
        return year;
    }

    virtual double operator[](int i) const {
        if (i < 0 || i >= MONTHS)
            throw bad_index_exception(i);
        return gross[i];
    }

    virtual double &operator[](int i) {
        if (i < 0 || i >= MONTHS)
            throw bad_index_exception(i);
        return gross[i];
    }

private:
    double gross[MONTHS];
    int year;
};


class LabeledSales : public Sales {
public:
    class nbad_index_exception : public Sales::bad_index_exception {
    private:
        string lbl;
    public:
        nbad_index_exception(const string &lb, int ix, const string &s = "Exception: Index error in LabeledSales obj\n")
                : Sales::bad_index_exception(ix, s) {
            lbl = lb;
        }

        const string &label_val() const {
            return lbl;
        }

        virtual ~nbad_index_exception() throw() {}
    };

    explicit LabeledSales(const string &lb = "none", int yy = 0) : Sales(yy) {
        label = lb;
    }

    LabeledSales(const string &lb, int yy, const double *gr, int n) {
        label = lb;
    }

    virtual ~LabeledSales() {}

    const string &Label() const {
        return label;
    }

    virtual double operator[](int i) const {
        if (i < 0 || i >= MONTHS)
            throw nbad_index_exception(Label(), i);
        return Sales::operator[](i);
    }

    virtual double &operator[](int i) {
        if (i < 0 || i >= MONTHS)
            throw nbad_index_exception(Label(), i);
        return Sales::operator[](i);
    }


private:
    string label;
};

void myQuit() {
    cout << "Termination due to uncaught exception\n";
    exit(5);
}

void use_sales() {
    set_terminate(myQuit);
    using std::cout;
    using std::cin;
    using std::endl;

    double vals1[12] = {
            1220, 1110, 1122, 2212, 1232, 2334,
            2884, 2393, 3302, 2922, 3002, 3544
    };

    double vals2[12] = {
            12, 11, 22, 21, 32, 34,
            28, 29, 33, 29, 32, 35
    };

    Sales sales1(2011, vals1, 12);
    LabeledSales sales2("Blogstar", 2012, vals2, 12);

    cout << "First try block:\n";

    try {
        int i;
        cout << "Year = " << sales1.Year() << endl;
        for (i = 0; i < 12; ++i) {
            cout << sales1[i] << ' ';
            if (i % 6 == 5)
                cout << endl;
        }

        cout << "Year = " << sales2.Year() << endl;
        cout << "Label = " << sales2.Label() << endl;

        for (i = 0; i <= 12; ++i) {
            cout << sales2[i] << ' ';
            if (i % 6 == 5)
                cout << endl;
        }
        cout << "End of try block 1.\n";
    } catch (LabeledSales::nbad_index_exception &bad) {
        cout << bad.what();
        cout << "Company: " << bad.label_val() << endl;
        cout << "bad index: " << bad.bi_val() << endl;
    } catch (Sales::bad_index_exception &bad) {
        cout << bad.what();
        cout << "bad index: " << bad.bi_val() << endl;
    }

    cout << "\nNext try block:\n";

    try {
        sales2[2] = 37.5;
        sales1[20] = 23345;
        cout << "End of try block 2.\n";
    } catch (LabeledSales::nbad_index_exception &bad) {
        cout << bad.what();
        cout << "Company: " << bad.label_val() << endl;
        cout << "bad index: " << bad.bi_val() << endl;
    } catch (Sales::bad_index_exception &bad) {
        cout << bad.what();
        cout << "bad index: " << bad.bi_val() << endl;
    }

    cout << "done\n";
}

#endif //LEARNCPLUS_15_14_SALES_H
