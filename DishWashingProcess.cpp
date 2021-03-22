

#include "DishWashingProcess.h"


DishWashingProcess::DishWashingProcess(int m)
{
    errorAtMinute = m; 
} 

void DishWashingProcess::printErrorMessage()
{
    std::cout << "DishWashingProcess errorAtMinute: Error on minute " << this->errorAtMinute << std::endl;
}



