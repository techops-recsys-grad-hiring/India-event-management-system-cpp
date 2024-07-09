#ifndef OCCASIONTYPE_H
#define OCCASIONTYPE_H

#include <iostream>

using namespace std;

enum class OccasionType {
    WEDDING,
    BIRTHDAY
};

inline ostream& operator<<(ostream& os, const OccasionType& occasionType) {
    switch (occasionType) {
        case OccasionType::WEDDING: os << "WEDDING"; break;
        case OccasionType::BIRTHDAY: os << "BIRTHDAY"; break;
    }
    return os;
}

inline OccasionType toOccasionType(const string& str) {
    string occasion = str;
    transform(occasion.begin(), occasion.end(), occasion.begin(), [](unsigned char c) { return toupper(c); });
    if (occasion == "BIRTHDAY") return OccasionType::BIRTHDAY;
    if (occasion == "WEDDING") return OccasionType::WEDDING;
    throw invalid_argument("Invalid occasion string");
}

inline vector<OccasionType> getAllOccasionTypes() {
    return { OccasionType::WEDDING, OccasionType::BIRTHDAY };
}

#endif // OCCASIONTYPE_H
