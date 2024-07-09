#ifndef PURPLEFOX_H
#define PURPLEFOX_H
#include <set>
#include <unordered_set>

#include "../service/UserRegistration.h"
#include "../enums/City.h"
#include "../enums/OccasionType.h"
#include "../enums/EventService.h"
#include "../enums/Budget.h"

using namespace std;

class PurpleFox {
private:
    UserRegistration userRegistration;
    OccasionType occasionType;
    unordered_set<EventService> eventServices;
    Budget budget;
    City city;

public:
    PurpleFox();

    bool registerUser(const string& username, const string& password);

    void selectOccasionType(OccasionType occasion);
    OccasionType getSelectedEvent() const;

    static set<City> supportedCities() ;

    void selectCityForVenue(City selectedCity);
    City getSelectedCity() const;

    void selectService(EventService service);
    bool isServiceSelected(EventService service) const;
    unordered_set<EventService> getSelectedServices() const;

    void selectBudget(Budget selectedBudget);
    Budget getSelectedBudget() const;
};

#endif //PURPLEFOX_H
