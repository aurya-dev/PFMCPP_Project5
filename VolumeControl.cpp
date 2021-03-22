#include "VolumeControl.h"

VolumeControl::~VolumeControl()
{
    currentVol = 0;
    std::cout << "VolumeControl is destroyed" << std::endl;
}


void VolumeControl::decreaseMasterVolume(int newVolume) 
{
    if(newVolume < this->currentVol) 
    {
        std::cout << "VolumeControlVolume currentVol: decreased from " << this->currentVol << " to " << newVolume << std::endl;
        this->currentVol = newVolume;
    }
    else 
        std::cout << "New volume isn't smaller than the current volume" << std::endl;
}


bool VolumeControl::isMaxVolume()
{
    return (this->currentVol == 127);
}

