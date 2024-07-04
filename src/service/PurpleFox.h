#ifndef PURPLEFOX_H
#define PURPLEFOX_H
#include <set>
#include <unordered_set>

#include "../service/UserRegistration.h"
#include "../enums/City.h"
#include "../enums/OccasionType.h"
#include "../enums/EventService.h"
#include "../enums/Budget.h"

class PurpleFox {
private:
    UserRegistration userRegistration;
    OccasionType selectedOccasionType;
    std::unordered_set<EventService> selectedServices;
    Budget selectedBudget;
    City selectedCity;

public:
    PurpleFox();

    bool registerUser(const std::string& username, const std::string& password);

    void selectOccasionType(OccasionType event);
    OccasionType getSelectedEvent() const;

    static std::set<City> supportedCities() ;

    void selectCityForVenue(City city);
    City getSelectedCity() const;

    void selectService(EventService service);
    bool isServiceSelected(EventService service) const;
    std::unordered_set<EventService> getSelectedServices() const;

    void selectBudget(Budget budget);
    Budget getSelectedBudget() const;
};

#endif //PURPLEFOX_H
