#pragma once

#include "LeakedObjectDetector.h"

struct RecordButton
{
    bool isLit;
    bool isFlash;

    RecordButton () : isLit(false), isFlash(false) {}
    ~RecordButton ();

    JUCE_LEAK_DETECTOR(RecordButton)
};
