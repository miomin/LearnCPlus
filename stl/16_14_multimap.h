//
// Created by 莫绪旻 on 17/4/9.
//

#ifndef LEARNCPLUS_16_14_MULTIMAP_H
#define LEARNCPLUS_16_14_MULTIMAP_H

#include <iostream>
#include <string>
#include <map>
#include <algorithm>

typedef int KeyType;
typedef std::pair<const int, std::string> Pairs;
typedef std::multimap<int, std::string> MapCode;

/**
 * 可以换成unordered_map
 */

void use_mltimap() {
    using namespace std;
    MapCode codes;

    codes.insert(Pairs(415, "A"));
    codes.insert(Pairs(510, "B"));
    codes.insert(Pairs(718, "C"));
    codes.insert(Pairs(718, "D"));
    codes.insert(Pairs(415, "E"));
    codes.insert(Pairs(510, "F"));

    cout << "Number of cities with area code 415: "
         << codes.count(415) << endl;
    cout << "Number of cities with area code 718: "
         << codes.count(718) << endl;

    cout << "Area Code City\n";
    MapCode::iterator it;
    for (it = codes.begin(); it != codes.end(); ++it)
        cout << "  " << (*it).first << "  "
             << (*it).second << endl;

    pair<MapCode::iterator, MapCode::iterator> range = codes.equal_range(718);
    cout << "Cities with area code 718:\n";
    for (it = range.first; it != range.second; ++it)
        cout << (*it).second << endl;
}

#endif //LEARNCPLUS_16_14_MULTIMAP_H
