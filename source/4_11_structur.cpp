//
// Created by 莫绪旻 on 17/2/19.
//

#include <iostream>

using namespace std;

struct inflatable {
    char name[20];
    float volume;
    double price;

    void toString() {
        cout << name << " " << volume << " " << price << endl;
    }
};

void learnStructur() {
    inflatable guest = {
            "Glorious",
            1.88,
            29.99
    };

    inflatable pal = {
            "Audacious",
            3.12,
            32.99
    };

    guest.toString();
    pal.toString();
}
