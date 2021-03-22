#pragma once

#include "LeakedObjectDetector.h"

struct Pattern
{
    int playHeadPos;
    std::string sequenceData = "";

    Pattern( int pos );
    ~Pattern() { std::cout << "Pattern distroyed" << std::endl; }

    void printResult(int start, int end);

    JUCE_LEAK_DETECTOR(Pattern)
};
