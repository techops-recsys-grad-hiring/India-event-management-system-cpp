#include "PurpleFox.h"
#include <set>
#include <unordered_set>

#include "../enums/City.h"
#include "../enums/OccasionType.h"
#include "../enums/EventService.h"
#include "../enums/Budget.h"

using namespace std;

PurpleFox::PurpleFox()= default;

bool PurpleFox::registerUser(const string& username, const string& password) {
    return userRegistration.registerUser(username, password);
}

void PurpleFox::selectOccasionType(const OccasionType event) {
    selectedOccasionType = event;
}

OccasionType PurpleFox::getSelectedEvent() const {
    return selectedOccasionType;
}

std::set<City> PurpleFox::supportedCities() {
    return { City::HYDERABAD, City::COIMBATORE, City::BANGALORE };
}

void PurpleFox::selectCityForVenue(const City city) {
    selectedCity = city;
}

City PurpleFox::getSelectedCity() const {
    return selectedCity;
}

void PurpleFox::selectService(const EventService service) {
    selectedServices.insert(service);
}

bool PurpleFox::isServiceSelected(EventService service) const {
    return selectedServices.find(service) != selectedServices.end();
}

std::unordered_set<EventService> PurpleFox::getSelectedServices() const {
    return selectedServices;
}

void PurpleFox::selectBudget(Budget budget) {
    selectedBudget = budget;
}

Budget PurpleFox::getSelectedBudget() const {
    return selectedBudget;
}