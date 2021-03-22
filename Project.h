#pragma once

#include "DrumMachine.h"

struct Project
{
    DrumMachine MC505;

    Project();
    ~Project();

    void load();
    void play();

    JUCE_LEAK_DETECTOR(Project)
};
