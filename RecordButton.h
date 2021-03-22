#pragma once

#include "LeakedObjectDetector.h"

struct RecordButton
{
    bool isLit = false;
    bool isFlash = false;

    RecordButton ();
    ~RecordButton ();

    JUCE_LEAK_DETECTOR(RecordButton)
};
