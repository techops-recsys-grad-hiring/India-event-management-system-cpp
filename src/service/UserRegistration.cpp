#include "UserRegistration.h"

UserRegistration::UserRegistration() = default;

bool UserRegistration::registerUser(const std::string& username, const std::string& password) {
    if (username.empty() || password.empty() || users.find(username) != users.end()) {
        return false;
    }
    users[username] = password;
    return true;
};
