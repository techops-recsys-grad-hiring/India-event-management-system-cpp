#include <gtest/gtest.h>
#include "../../src/service/PurpleFox.h"
#include "../../src/enums/City.h"
#include "../../src/enums/OccasionType.h"
#include "../../src/enums/EventService.h"
#include "../../src/enums/Budget.h"

TEST(PurpleFoxTest, RegisterUser) {
    PurpleFox purpleFox;
    EXPECT_TRUE(purpleFox.registerUser("username", "password"));
    EXPECT_FALSE(purpleFox.registerUser("", "password"));
    EXPECT_FALSE(purpleFox.registerUser("username", ""));
    EXPECT_FALSE(purpleFox.registerUser("username", "password")); // Duplicate user
}

TEST(PurpleFoxTest, SelectOccasionType) {
    PurpleFox purpleFox;
    purpleFox.selectOccasionType(OccasionType::WEDDING);
    EXPECT_EQ(purpleFox.getSelectedEvent(), OccasionType::WEDDING);
}

TEST(PurpleFoxTest, SupportedCities) {
    PurpleFox purpleFox;
    std::set<City> cities = purpleFox.supportedCities();
    EXPECT_EQ(cities.size(), 3);
    EXPECT_TRUE(cities.find(City::HYDERABAD) != cities.end());
    EXPECT_TRUE(cities.find(City::COIMBATORE) != cities.end());
    EXPECT_TRUE(cities.find(City::BANGALORE) != cities.end());
}

TEST(PurpleFoxTest, SelectCityForVenue) {
    PurpleFox purpleFox;
    purpleFox.selectCityForVenue(City::BANGALORE);
    EXPECT_EQ(purpleFox.getSelectedCity(), City::BANGALORE);
}

TEST(PurpleFoxTest, SelectService) {
    PurpleFox purpleFox;
    purpleFox.selectService(EventService::FOOD_CATERING);
    EXPECT_TRUE(purpleFox.isServiceSelected(EventService::FOOD_CATERING));
    std::unordered_set<EventService> services = purpleFox.getSelectedServices();
    EXPECT_EQ(services.size(), 1);
    EXPECT_TRUE(services.find(EventService::FOOD_CATERING) != services.end());
}

TEST(PurpleFoxTest, SelectBudget) {
    PurpleFox purpleFox;
    purpleFox.selectBudget(Budget::PREMIUM);
    EXPECT_EQ(purpleFox.getSelectedBudget(), Budget::PREMIUM);
}
