#pragma once


struct DishWashingProcess
{
    int errorAtMinute;
    DishWashingProcess(int m) : errorAtMinute(m) {} 

    void printErrorMessage();

    JUCE_LEAK_DETECTOR(DishWashingProcess)  
};
