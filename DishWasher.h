#pragma once


#include "DishWashingProcess.h"


struct DishWasher
{
    float washingRoomVolume {5.2f};
    int numOfPrograms {12};
    int maxWashingDuration {120};
    float maxWashTemperature {90.0f};
    int timerDuration {360};
    int waitMilliSec {0};

    DishWasher();
    ~DishWasher();

    bool washDishes(int programNumber);
    bool dryDishes(int duration, float temperature);
    void startAtTimer(int startMinutesLater); 
    float printMaxDishElements(); 
    DishWashingProcess checkErrors(int errorTime);
    void printMaxWashTemperature();

    JUCE_LEAK_DETECTOR(DishWasher)
};
