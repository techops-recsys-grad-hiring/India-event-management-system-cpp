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

void PurpleFox::selectOccasionType(const OccasionType occasion) {
    occasionType = occasion;
}

OccasionType PurpleFox::getSelectedEvent() const {
    return occasionType;
}

std::set<City> PurpleFox::supportedCities() {
    return { City::HYDERABAD, City::COIMBATORE, City::BANGALORE };
}

void PurpleFox::selectCityForVenue(const City selectedCity) {
    city = selectedCity;
}

City PurpleFox::getSelectedCity() const {
    return city;
}

void PurpleFox::selectService(const EventService service) {
    eventServices.insert(service);
}

bool PurpleFox::isServiceSelected(EventService service) const {
    return eventServices.find(service) != eventServices.end();
}

std::unordered_set<EventService> PurpleFox::getSelectedServices() const {
    return eventServices;
}

void PurpleFox::selectBudget(const Budget selectedBudget) {
    budget = selectedBudget;
}

Budget PurpleFox::getSelectedBudget() const {
    return budget;
}