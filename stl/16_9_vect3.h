//
// Created by 莫绪旻 on 17/3/31.
//

#ifndef LEARNCPLUS_16_9_VECT3_H
#define LEARNCPLUS_16_9_VECT3_H

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::string;
using std::cin;
using std::cout;
using std::endl;

struct Review {
    std::string title;
    int rating;
};

bool operator<(const Review &r1, const Review &r2) {
    if (r1.title < r2.title)
        return true;
    else if (r1.title == r2.title && r1.rating < r2.rating)
        return true;
    else
        return false;
}

bool worseThan(const Review &r1, const Review &r2) {
    if (r1.rating < r2.rating)
        return true;
    else
        return false;
}

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

void ShowReview(Review &rr) {
    cout << rr.rating << "\t" << rr.title << endl;
    rr.rating = 6;
}

void use_vect3() {
    using namespace std;

    vector<Review> books;
    Review temp;
    while (FillReview(temp))
        books.push_back(temp);

    if (books.size() > 0) {
        for_each(books.begin(), books.end(), ShowReview);

        sort(books.begin(), books.end());
        cout << "Sorted by rating:\nRating\tBook\n";
        for_each(books.begin(), books.end(), ShowReview);

        sort(books.begin(), books.end(), worseThan);
        cout << "Sorted by rating:\nRating\tBook\n";
        for_each(books.begin(), books.end(), ShowReview);

        random_shuffle(books.begin(), books.end());
        cout << "After shuffling:\nRating\tBook\n";
        for_each(books.begin(), books.end(), ShowReview);
    }
}

#endif //LEARNCPLUS_16_9_VECT3_H
