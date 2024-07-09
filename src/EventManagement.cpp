#include <iostream>
#include <string>

#include "service/PurpleFox.h"
#include "service/UserRegistration.h"
#include "enums/Budget.h"
#include "enums/City.h"
#include "enums/EventService.h"
#include "enums/OccasionType.h"

using namespace std;

void enterEventDetails(PurpleFox &purpleFox) {
    string cityChoice, occasionChoice, serviceChoice, budgetChoice;
    cout << "Select a city for your event from the following options:" << endl;
    for (City city: getAllCities()) {
        cout << "- " << city << endl;
    }
    cout << "Enter your choice: ";
    getline(cin, cityChoice);
    const City selectedCity = toCity(cityChoice);
    purpleFox.selectCityForVenue(selectedCity);

    cout << "Select the type of event from the following options:" << endl;
    for (OccasionType occasion: getAllOccasionTypes()) {
        cout << "- " << occasion << endl;
    }
    cout << "Enter your choice: ";
    getline(cin, occasionChoice);
    const OccasionType selectedOccasion = toOccasionType(occasionChoice);
    purpleFox.selectOccasionType(selectedOccasion);

    cout << "Select services for your event from the following options:" << endl;
    for (EventService service: getAllEventServices()) {
        cout << "- " << service << endl;
    }
    cout << "Enter your choice: ";
    getline(cin, serviceChoice);
    const EventService selectedService = toEventService(serviceChoice);
    purpleFox.selectService(selectedService);

    cout << "Select a budget preference from the following options:" << endl;
    for (Budget budget: getAllBudgets()) {
        cout << "- " << budget << endl;
    }
    cout << "Enter your choice: ";
    getline(cin, budgetChoice);
    const Budget selectedBudget = toBudget(budgetChoice);
    purpleFox.selectBudget(selectedBudget);
}

void printEventSummary(const PurpleFox& purpleFox) {
    cout << "\nEvent Summary:" << endl;
    cout << "City: " << purpleFox.getSelectedCity() << endl;
    cout << "Occasion: " << purpleFox.getSelectedEvent() << endl;
    cout << "Services: ";
    for (const auto &service: purpleFox.getSelectedServices()) {
        cout << service << " ";
    }
    cout << endl;
    cout << "Budget: " << purpleFox.getSelectedBudget() << endl;
    cout << "Thank you for using PurpleFox!" << endl;
}

int main() {
    string username, password, cityChoice, occasionChoice, serviceChoice, budgetChoice;
    UserRegistration userRegistration;
    PurpleFox purpleFox;

    cout << "Welcome to PurpleFox Event Management!" << endl;
    cout << "Enter username to register: ";
    getline(cin, username);
    cout << "Enter password: ";
    getline(cin, password);

    if (userRegistration.registerUser(username, password)) {
        cout << "Registration successful!" << endl;
    } else {
        cout << "Registration failed. Please try again with valid credentials." << endl;
        return 1;
    }

    enterEventDetails(purpleFox);
    printEventSummary(purpleFox);

    return 0;
}

