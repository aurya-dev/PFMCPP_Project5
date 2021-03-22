#pragma once


struct VolumeControl 
{
    int maxVolume;
    int currentVol;
    bool isMaxVolume();
    void decreaseMasterVolume(int newVolume);

    VolumeControl(int maxV = 127) : maxVolume(maxV), currentVol(0) {} 
    ~VolumeControl();

    JUCE_LEAK_DETECTOR(VolumeControl)
};

