#pragma once

#include "LeakedObjectDetector.h"

struct VolumeControl 
{
    int maxVolume;
    int currentVol;
    bool isMaxVolume();
    void decreaseMasterVolume(int newVolume);

    VolumeControl(int maxVol = 127); 
    ~VolumeControl();

    JUCE_LEAK_DETECTOR(VolumeControl)
};

