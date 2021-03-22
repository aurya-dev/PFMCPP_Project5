#pragma once

struct Drumpad
{
    int numPads;

    Drumpad(int num) {
        numPads = num;
    }
    ~Drumpad() { std::cout << "Drumpad distroyed" << std::endl; }

    JUCE_LEAK_DETECTOR(Drumpad)
};
