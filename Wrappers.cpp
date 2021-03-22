
#include "Wrappers.h"



DishWasherWrapper::DishWasherWrapper(DishWasher* d) 
{
    diWaPtr = d;
}

DishWasherWrapper::~DishWasherWrapper()
{
    delete diWaPtr;
}


DishWashingProcessWrapper::DishWashingProcessWrapper(DishWashingProcess* d) 
{
    washPtr = d; 
}

DishWashingProcessWrapper::~DishWashingProcessWrapper()
{
    delete washPtr;
}
   

DrumMachineWrapper::DrumMachineWrapper(DrumMachine* d) 
{
    drMaPtr = d; 
}

DrumMachineWrapper::~DrumMachineWrapper()
{
    delete drMaPtr;
}  


ServiceStationWrapper::ServiceStationWrapper(ServiceStation* s) 
{
    serStaPtr = s; 
}

ServiceStationWrapper::~ServiceStationWrapper()
{
    delete serStaPtr;
}


ProjectWrapper::ProjectWrapper(Project* p) 
{
    prjPtr = p; 
}

ProjectWrapper::~ProjectWrapper()
{
    delete prjPtr;
}

