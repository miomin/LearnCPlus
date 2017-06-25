//
// Created by 莫绪旻 on 17/3/30.
//

#ifndef LEARNCPLUS_VECT2_H
#define LEARNCPLUS_VECT2_H

#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::cin;
using std::cout;
using std::endl;

struct Review {
    std::string title;
    int rating;
};

bool FillReview(Review &rr) {
    cout << "Enter book title (quit to quit): ";
    getline(std::cin, rr.title);
    if (rr.title == "quit")
        return false;
    cout << "Enter book rating: ";
    cin >> rr.rating;
    if (!cin)
        return false;

    while (cin.get() != '\n')
        continue;
    return true;
}

void ShowReview(const Review &rr) {
    cout << rr.rating << "\t" << rr.title << endl;
}

void use_vect2() {
    using std::vector;
    vector<Review> books;
    Review temp;
    while (FillReview(temp))
        books.push_back(temp);

    int num = books.size();

    if (num > 0) {
        for (int i = 0; i < num; ++i)
            ShowReview(books[i]);

        cout << "Reprising:\n"
             << "Rating\tBook\n";

        vector<Review>::iterator pr;
        for (pr = books.begin(); pr != books.end(); pr++)
            ShowReview(*pr);

        vector <Review> old(books);

        if (num > 3) {
            books.erase(books.begin() + 1, books.begin() + 3);
            cout << "After erasure:\n";
            for (pr = books.begin(); pr != books.end(); pr++)
                ShowReview(*pr);
        }

        books.swap(old);
        cout << "Swapping oldlist with books:\n";
        for (pr = books.begin(); pr != books.end(); pr++)
            ShowReview(*pr);
    }
}

#endif //LEARNCPLUS_VECT2_H
