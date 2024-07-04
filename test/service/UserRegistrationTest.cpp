#include <gtest/gtest.h>
#include <string>
#include "../../src/service/UserRegistration.h"

TEST(UserRegistrationTest, EmptyUsername) {
    UserRegistration userReg;
    EXPECT_FALSE(userReg.registerUser("", "password"));
}

TEST(UserRegistrationTest, EmptyPassword) {
    UserRegistration userReg;
    EXPECT_FALSE(userReg.registerUser("username", ""));
}

TEST(UserRegistrationTest, SuccessfulRegistration) {
    UserRegistration userReg;
    EXPECT_TRUE(userReg.registerUser("username", "password"));
}

TEST(UserRegistrationTest, DuplicateUsername) {
    UserRegistration userReg;
    EXPECT_TRUE(userReg.registerUser("username", "password"));
    EXPECT_FALSE(userReg.registerUser("username", "newpassword"));
}

TEST(UserRegistrationTest, DifferentUsers) {
    UserRegistration userReg;
    EXPECT_TRUE(userReg.registerUser("user1", "password1"));
    EXPECT_TRUE(userReg.registerUser("user2", "password2"));
}
