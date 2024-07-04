#ifndef OCCASIONTYPE_H
#define OCCASIONTYPE_H

#include <iostream>

enum class OccasionType {
    WEDDING,
    BIRTHDAY
};

inline std::ostream& operator<<(std::ostream& os, const OccasionType& occasionType) {
    switch (occasionType) {
        case OccasionType::WEDDING: os << "WEDDING"; break;
        case OccasionType::BIRTHDAY: os << "BIRTHDAY"; break;
    }
    return os;
}

inline OccasionType stringToOccasionType(const std::string& str) {
    string occasion = str;
    transform(occasion.begin(), occasion.end(), occasion.begin(), [](unsigned char c) { return std::toupper(c); });
    if (occasion == "BIRTHDAY") return OccasionType::BIRTHDAY;
    if (occasion == "WEDDING") return OccasionType::WEDDING;
    throw std::invalid_argument("Invalid occasion string");
}

inline std::vector<OccasionType> getAllOccasionTypes() {
    return { OccasionType::WEDDING, OccasionType::BIRTHDAY };
}

#endif // OCCASIONTYPE_H
