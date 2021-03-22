#pragma once

#include "LeakedObjectDetector.h"

struct Display
{
    int numPixelWidth;
    int numPixelHeight;

    Display(int w = 1024, int h = 678);
    ~Display();

    JUCE_LEAK_DETECTOR(Display)
};
