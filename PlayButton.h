#pragma once

#include "LeakedObjectDetector.h"

struct PlayButton
{
    bool isLit = false;
    bool isFlash = false;

    PlayButton ();
    ~PlayButton ();

    JUCE_LEAK_DETECTOR(PlayButton)
};
