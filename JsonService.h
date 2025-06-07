// JsonService.h
#pragma once
#include "Service.h"
#include "Weather.h"
#include <nlohmann/json.hpp>

class JsonService : public Service {
public:
    virtual Weather getWeather(std::string s) override;
    virtual ~JsonService() {};
};