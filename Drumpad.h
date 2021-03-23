#pragma once

#include "LeakedObjectDetector.h"

struct Drumpad
{
    int numPads;

    Drumpad(int num);
    ~Drumpad();

    JUCE_LEAK_DETECTOR(Drumpad)
};
