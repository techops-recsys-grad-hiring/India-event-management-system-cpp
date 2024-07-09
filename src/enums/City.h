#ifndef CITY_H
#define CITY_H

#include <iostream>

using namespace std;

enum class City {
    HYDERABAD,
    COIMBATORE,
    BANGALORE
};

inline ostream& operator<<(ostream& os, const City& city) {
    switch (city) {
        case City::HYDERABAD: os << "HYDERABAD"; break;
        case City::COIMBATORE: os << "COIMBATORE"; break;
        case City::BANGALORE: os << "BANGALORE"; break;
    }
    return os;
}

inline City toCity(const string& str) {
    string city = str;
    transform(city.begin(), city.end(), city.begin(), [](unsigned char c) { return toupper(c); });
    if (city == "HYDERABAD") return City::HYDERABAD;
    if (city == "COIMBATORE") return City::COIMBATORE;
    if (city == "BANGALORE") return City::BANGALORE;
    throw invalid_argument("Invalid city string");
}

inline vector<City> getAllCities() {
    return { City::BANGALORE, City::HYDERABAD, City::COIMBATORE };
}

#endif // CITY_H