cmake_minimum_required(VERSION 3.28)
project(EventManagement)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add source files
add_executable(EventManagement src/enums/City.h
        src/enums/Budget.h
        src/enums/OccasionType.h
        src/enums/EventService.h
        src/service/PurpleFox.h
        src/service/PurpleFox.cpp
        src/service/UserRegistration.h
        src/service/UserRegistration.cpp
        src/EventManagement.cpp
)

# Add source files
add_executable(EventManagementTest
        test/service/UserRegistrationTest.cpp
        test/EventManagementTest.cpp
        src/service/UserRegistration.h
        src/service/UserRegistration.cpp
        src/service/PurpleFox.h
        src/service/PurpleFox.cpp
        src/enums/Budget.h
        src/enums/OccasionType.h
        src/enums/EventService.h
        src/enums/City.h
        test/service/PurpleFoxTest.cpp
)


# Find GoogleTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Link GoogleTest to the test executable
target_link_libraries(EventManagementTest ${GTEST_LIBRARIES} pthread)

# Enable testing
enable_testing()
add_test(NAME EventManagementTest COMMAND EventManagementTest)