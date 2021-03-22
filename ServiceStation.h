#pragma once


struct ServiceStation
{
    DishWasher demagedMachine;

    ServiceStation();
    ~ServiceStation();

    void checkTheErrorProtocol();
    void startMachine();
    void saveServiceProtocol();

    JUCE_LEAK_DETECTOR(ServiceStation)
};
