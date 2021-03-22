#include "DrillMachine.h"

DrillMachine::DrillMachine() : 
sizeOfDrillChucks(10),
numOfModes(2),
motorPower(1500),
cableLength(1.5f),
accuTooWeak(false),
screwTime(0) 
{}


DrillMachine::~DrillMachine()
{
    std::cout << "DrillMaschine destroyed!" << std::endl;
}


DrillMachine::DrillBit::DrillBit() { std::cout << "DrillBit is constructed" << std::endl; }


DrillMachine::DrillBit::~DrillBit() { std::cout << "DrillBit is distroyed" << std::endl; }


void DrillMachine::DrillBit::drill(int depth) 
{
    this->isStucked = (depth > this->length);
}


bool DrillMachine::DrillBit::isDull(float currentTemperature) 
{
    std::cout << "Current temperature : " << currentTemperature << std::endl;
    return this->isToHot(currentTemperature);
}


bool DrillMachine::DrillBit::isToHot(float currentTemperature)
{
    return currentTemperature > this->maxTemperature;
}


void DrillMachine::DrillBit::printStatus()
{
    std::cout << "Drillbit - Status" << std::endl << "---------------------------------" << std::endl;
    std::cout << "DrillMachine::DrillBit drillChuck: " << this->drillChuck << std::endl;
    std::cout << "DrillMachine::DrillBit length: " << this->length << std::endl;
    std::cout << "DrillMachine::DrillBit material: " << this->material << std::endl;
    std::cout << "DrillMachine::DrillBit isHardened: " << this->isHardened << std::endl;
    std::cout << "DrillMachine::DrillBit isForWood: " << this->isForWood << std::endl;
    std::cout << "DrillMachine::DrillBit isStucked: " << this->isStucked << std::endl;
    std::cout << "DrillMachine::DrillBit maxTemperature: " << this->maxTemperature << std::endl;  
}


bool DrillMachine::drillHole(DrillBit bit)
{
    if(bit.drillChuck <= this->sizeOfDrillChucks) 
    {
        std::cout << "drillHole():  Drill process starts!" << std::endl;
        bit.drill(15);
        return true;
    }
    return false;
}


bool DrillMachine::screwScrew(int speed, bool screwIn)
{
    if(this->accuTooWeak == false) 
    {
        if(screwIn) 
            this->screwTime = speed * 5;
        else 
            this->screwTime = speed * 6;
        return true;
    }
    return false;
}

void DrillMachine::loadAccu()
{
    this->accuTooWeak = false;
}


void DrillMachine::printMachineProperties()
{
    std::cout << "Drill machine proberties" << std::endl << "------------------------------------" << std::endl;
    std::cout << "DrillMachine sizeOfDrillChucks: Size of drill chucks: " << this->sizeOfDrillChucks << std::endl;
    std::cout << "DrillMachine numOfModes: Number of Modes: " << this->numOfModes << std::endl;
    std::cout << "DrillMachine motorPower: Motorpower: " << this->motorPower << std::endl;
    std::cout << "DrillMachine cableLength: Cable length: " << this->cableLength << std::endl;
}


void DrillMachine::checkDrillProcess(int drillDuration)
{
    for(auto i = 0; drillDuration == i; i++)
    {
        std::cout << "Drilling minute " << i << std::endl;
    }
}
