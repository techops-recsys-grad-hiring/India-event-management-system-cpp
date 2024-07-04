#ifndef CITY_H
#define CITY_H

#include <iostream>

using namespace std;

enum class City {
    HYDERABAD,
    COIMBATORE,
    BANGALORE
};

inline std::ostream& operator<<(std::ostream& os, const City& city) {
    switch (city) {
        case City::HYDERABAD: os << "HYDERABAD"; break;
        case City::COIMBATORE: os << "COIMBATORE"; break;
        case City::BANGALORE: os << "BANGALORE"; break;
    }
    return os;
}

inline City stringToCity(const std::string& str) {
    string city = str;
    transform(city.begin(), city.end(), city.begin(), [](unsigned char c) { return std::toupper(c); });
    if (city == "HYDERABAD") return City::HYDERABAD;
    if (city == "COIMBATORE") return City::COIMBATORE;
    if (city == "BANGALORE") return City::BANGALORE;
    throw std::invalid_argument("Invalid city string");
}

inline std::vector<City> getAllCities() {
    return { City::BANGALORE, City::HYDERABAD, City::COIMBATORE };
}

#endif // CITY_H