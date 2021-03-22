#pragma once

#include "LeakedObjectDetector.h"

#include "Display.h"
#include "Drumpad.h"
#include "VolumeControl.h"
#include "PlayButton.h"
#include "RecordButton.h"
#include "Pattern.h"

struct DrumMachine
{
    Display display;
    Drumpad drumpad{32};
    VolumeControl volControl;
    PlayButton playButton;
    RecordButton recButton;
    Pattern ptrn{0};

    DrumMachine();
    ~DrumMachine();
    
    std::string getPatternName (int patternId);
    void playPattern(int patternId);
    void stopPattern();
    void recPattern(int patternLength = 4);
    Pattern checkPatternPos(int pos, int start, int end);

    JUCE_LEAK_DETECTOR(DrumMachine)
};
