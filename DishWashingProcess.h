#pragma once

#include <iostream>

#include "LeakedObjectDetector.h"


struct DishWashingProcess
{
    int errorAtMinute;
    DishWashingProcess(int m);

    void printErrorMessage();

    JUCE_LEAK_DETECTOR(DishWashingProcess)  
};
