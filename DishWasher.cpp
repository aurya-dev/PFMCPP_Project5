

#include "DishWasher.h"


DishWasher::DishWasher() 
{ 
    std::cout << "DishWasher(): DishWasher is constructed" << std::endl; 
}


DishWasher::~DishWasher() 
{
    std::cout << "~DishWasher(): DishWasher distroyed!" << std::endl;
}


bool DishWasher::washDishes(int programNumber)
{
    return ! (programNumber > 12);
}


bool DishWasher::dryDishes(int duration, float temperature)
{
    return (duration <= this->maxWashingDuration || temperature <= this->maxWashTemperature);
}


void DishWasher::startAtTimer(int startMinutesLater)
{
    this->waitMilliSec = startMinutesLater * 1000;
    this->washDishes(1);    
} 


float DishWasher::printMaxDishElements() 
{
    float maxDishElements = this->washingRoomVolume / 0.5f;
    std::cout << "DishWasher maxDishElements: You can put" << maxDishElements << "dish elements in dish washer" << std::endl;
    return maxDishElements;
}


void DishWasher::printMaxWashTemperature()
{
    std::cout << "DishWasher maxWashTemperature: The maximal temperature of the washing process is " << this->maxWashTemperature << std::endl;
}


DishWashingProcess DishWasher::checkErrors(int errorTime)
{
    DishWashingProcess process(false);
    int timeMarker{0};
    while (timeMarker < this->maxWashingDuration)
    {
        if(errorTime == timeMarker) 
        {
            std::cout << "TimeMarker " << timeMarker << " checked - Error found!!!" << std::endl;
            process.errorAtMinute = errorTime;
            return process;
        }  
        std::cout << "TimeMarker " << timeMarker << " checked - No error" << std::endl;
        timeMarker += 1;
    }
    std::cout << "Test completed - No error :)" << std::endl;
    return process;
}



