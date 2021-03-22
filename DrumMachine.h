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
    Drumpad drumpad;
    VolumeControl volControl;
    PlayButton playButton;
    RecordButton recButton;
    Pattern ptrn;

    DrumMachine();
    ~DrumMachine();
    
    std::string getPatternName (int patternId);
    void playPattern(int patternId);
    void stopPattern();
    void recPattern(int patternLength = 4);
    Pattern checkPatternPos(int pos, int start, int end);

    JUCE_LEAK_DETECTOR(DrumMachine)
};
