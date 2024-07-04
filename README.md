# Welcome to Event Management System!
This is where you can start to get familiar with the problem and what you need to run it.
This codebase is used during code pairing session for JOI initiative.
It's focused on implementing new requirements additionally identifying code smells, refactoring and testing legacy codebase while promoting conversations.

## Problem Statement
A recent B.Tech graduate, who is exploring her strengths and career options, enjoys organizing family and friends' events. Inspired by her passion, she has started an event management service called PurpleFox. This service helps users plan events by providing customized services based on their preferences. Users can register on the platform by providing a unique username and password. Once registered, they can specify the type of event they are planning and select the location where it will take place. Additionally, users have the flexibility to choose from a variety of optional services based on their event needs, and they can select a budget preference from options such as Budget-friendly, Standard, and Premium.<br>
NOTE1:- Make sure to handle exceptions gracefully.<br>
NOTE2:- Make sure to write modular code.<br>
For more info refer to the problem statement document shared to you separately.

## Technologies used
- C++14 or above
- CMake - build tool
- [Googletest - unit testing framework](https://google.github.io/googletest/)

## What you need to run it
- C++ Compiler
- [Cmake](https://cgold.readthedocs.io/en/latest/first-step/installation.html)

## Before the interview
Get familiar with the codebase! Make sure you have the necessary dependencies installed, and that you are able to run the tests.

## Build
```console
mkdir build
cd build
cmake ..
make
```

## Run Tests
```console
cd build
./EventManagementTest
```

## Run the Application
To understand how this application would be used you can check the `main` method in the `EventManagement` class. If you want to see the results, run:
```console
cd build
./EventManagement
```

## Existing Requirements
Requirement 1- As a user, I want to be able to register with UserRegistration by providing a unique username and password so that I can access the services.

Requirement 2- As a user, I want to provide details about the type of event I'm planning and select the location where the event will take place, so that PurpleFox can customize its services based on my event preferences and help me plan my event effectively.

Requirement 2- As a user, I want the flexibility to choose any combination of services, knowing that my selections are optional and based on my specific event needs.

Requirement 3- As a user, I want to choose my budget preference from options provided by UserRegistration, such as enums.Budget-friendly, Standard, and Premium, so that I can tailor my event planning to my financial constraints or preferences.
