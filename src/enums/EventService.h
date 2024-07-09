#ifndef EVENTSERVICE_H
#define EVENTSERVICE_H

#include <iostream>

using namespace std;

enum class EventService {
    PHOTOGRAPHY,
    DECORATION,
    VENUE_SELECTION,
    FOOD_CATERING
};

inline ostream& operator<<(ostream& os, const EventService& eventService) {
    switch (eventService) {
        case EventService::PHOTOGRAPHY: os << "PHOTOGRAPHY"; break;
        case EventService::DECORATION: os << "DECORATION"; break;
        case EventService::VENUE_SELECTION: os << "VENUE_SELECTION"; break;
        case EventService::FOOD_CATERING: os << "FOOD_CATERING"; break;
    }
    return os;
}

inline EventService toEventService(const string& str) {
    string eventService = str;
    transform(eventService.begin(), eventService.end(), eventService.begin(), [](unsigned char c) { return toupper(c); });
    if (eventService == "PHOTOGRAPHY") return EventService::PHOTOGRAPHY;
    if (eventService == "DECORATION") return EventService::DECORATION;
    if (eventService == "VENUE_SELECTION") return EventService::VENUE_SELECTION;
    if (eventService == "FOOD_CATERING") return EventService::FOOD_CATERING;
    throw invalid_argument("Invalid event service string");
}

inline vector<EventService> getAllEventServices() {
    return { EventService::PHOTOGRAPHY, EventService::DECORATION, EventService::FOOD_CATERING, EventService::VENUE_SELECTION };
}

#endif // EVENTSERVICE_H