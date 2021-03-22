#pragma once

#include "LeakedObjectDetector.h"

struct Display
{
    int numPixelWidth;
    int numPixelHeight;

    Display(int w = 1024, int h = 678) {
        numPixelWidth = w; 
        numPixelHeight = h; 
    }
    ~Display() { std::cout << "Display distroyed" << std::endl; } 

    JUCE_LEAK_DETECTOR(Display)
};
