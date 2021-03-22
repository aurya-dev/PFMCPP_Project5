#pragma once

#include "LeakedObjectDetector.h"

struct DrillMachine 
{
    int sizeOfDrillChucks;
    int numOfModes;
    int motorPower;
    float cableLength;
    bool accuTooWeak;
    int screwTime;

    DrillMachine();
    ~DrillMachine();

    struct DrillBit
    {
        int drillChuck {10};
        int length {140};
        std::string material {"steel"};
        bool isHardened {true};
        bool isForWood {true};
        bool isStucked {false};
        float maxTemperature {303.3f};

        DrillBit();
        ~DrillBit(); 

        void drill(int depth = 10);
        bool isDull(float currentTemperature);
        bool isToHot(float currentTemperature);
        void printStatus();
    };

    bool drillHole(DrillBit bit);
    bool screwScrew(int speed, bool screwIn);
    void loadAccu();
    void printMachineProperties();
    void checkDrillProcess(int drillDuration);

    DrillBit myDrillBit;

    JUCE_LEAK_DETECTOR(DrillMachine)
};
