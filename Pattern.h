#pragma once

struct Pattern
{
    int playHeadPos;
    std::string sequenceData = "";

    Pattern( int pos ) : playHeadPos( pos ), sequenceData("") {}
    ~Pattern() { std::cout << "Pattern distroyed" << std::endl; }

    void printResult(int start, int end);

    JUCE_LEAK_DETECTOR(Pattern)
};
