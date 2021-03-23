
#include "Wrappers.h"

#include "DishWasher.h"
#include "DishWashingProcess.h"
#include "DrumMachine.h"
#include "ServiceStation.h"
#include "Project.h"


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

