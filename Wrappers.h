#pragma once

#include "DishWasher.h"
#include "DishWashingProcess.h"
#include "DrumMachine.h"
#include "ServiceStation.h"
#include "Project.h"



struct DishWasherWrapper
{
    DishWasherWrapper(DishWasher* d);
    ~DishWasherWrapper();
    DishWasher* diWaPtr = nullptr;
}; 


struct DishWashingProcessWrapper
{
    DishWashingProcessWrapper(DishWashingProcess* d);
    ~DishWashingProcessWrapper();
    DishWashingProcess* washPtr = nullptr;
}; 


struct DrumMachineWrapper
{
    DrumMachineWrapper(DrumMachine* d);
    ~DrumMachineWrapper();
    DrumMachine* drMaPtr = nullptr;
}; 


struct ServiceStationWrapper
{
    ServiceStationWrapper(ServiceStation* s);
    ~ServiceStationWrapper();
    ServiceStation* serStaPtr = nullptr;
}; 


struct ProjectWrapper
{
    ProjectWrapper(Project* p);
    ~ProjectWrapper();
    Project* prjPtr = nullptr;
}; 
