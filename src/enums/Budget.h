#ifndef BUDGET_H
#define BUDGET_H

#include <iostream>
using namespace std;

enum class Budget {
    BUDGET_FRIENDLY,
    STANDARD,
    PREMIUM
};

inline std::ostream& operator<<(std::ostream& os, const Budget& budget) {
    switch (budget) {
        case Budget::BUDGET_FRIENDLY: os << "BUDGET_FRIENDLY"; break;
        case Budget::STANDARD: os << "STANDARD"; break;
        case Budget::PREMIUM: os << "PREMIUM"; break;
    }
    return os;
}

inline Budget stringToBudget(const std::string& str) {
    string budget = str;
    transform(budget.begin(), budget.end(), budget.begin(), [](unsigned char c) { return std::toupper(c); });
    if (budget == "BUDGET_FRIENDLY") return Budget::BUDGET_FRIENDLY;
    if (budget == "STANDARD") return Budget::STANDARD;
    if (budget == "PREMIUM") return Budget::PREMIUM;
    throw std::invalid_argument("Invalid budget string");
}

inline std::vector<Budget> getAllBudgets() {
    return { Budget::BUDGET_FRIENDLY, Budget::STANDARD, Budget::PREMIUM };
}

#endif // BUDGET_H
