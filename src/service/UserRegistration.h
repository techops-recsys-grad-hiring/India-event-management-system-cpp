#ifndef USERREGISTRATION_H
#define USERREGISTRATION_H

#include <string>
#include <unordered_map>

class UserRegistration {
    std::unordered_map<std::string, std::string> users;

public:
    UserRegistration();

    bool registerUser(const std::string& username, const std::string& password);
};

#endif