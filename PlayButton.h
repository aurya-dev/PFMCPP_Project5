#pragma once

struct PlayButton
{
    bool isLit;
    bool isFlash;

    PlayButton () : isLit(false), isFlash(false) {}
    ~PlayButton ();

    JUCE_LEAK_DETECTOR(PlayButton)
};
