// Weather.h
#pragma once
#include <string>

class Weather {
public:
    std::string city;
    double lon;
    double lat;
    double temperature;
    std::string weather;
    double windSpeed;
    int clouds;

    Weather(std::string city, double lon, double lat, double temperature,
        std::string weather, double windSpeed, int clouds)
        : city(city), lon(lon), lat(lat), temperature(temperature),
        weather(weather), windSpeed(windSpeed), clouds(clouds) {
    }
};