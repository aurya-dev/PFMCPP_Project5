#pragma once


struct DishWasherWrapper
{
    DishWasherWrapper(DishWasher* d) 
    {
        diWaPtr = d;
    }
    ~DishWasherWrapper()
    {
        delete diWaPtr;
    }
    DishWasher* diWaPtr = nullptr;
}; 


struct DishWashingProcessWrapper
{
    DishWashingProcessWrapper(DishWashingProcess* d) 
    {
        washPtr = d; 
    }
    ~DishWashingProcessWrapper()
    {
        delete washPtr;
    }
    DishWashingProcess* washPtr = nullptr;
}; 


struct DrumMachineWrapper
{
    DrumMachineWrapper(DrumMachine* d) 
    {
        drMaPtr = d; 
    }
    ~DrumMachineWrapper()
    {
        delete drMaPtr;
    }
    DrumMachine* drMaPtr = nullptr;
}; 


struct ServiceStationWrapper
{
    ServiceStationWrapper(ServiceStation* s) 
    {
        serStaPtr = s; 
    }
    ~ServiceStationWrapper()
    {
        delete serStaPtr;
    }
    ServiceStation* serStaPtr = nullptr;
}; 


struct ProjectWrapper
{
    ProjectWrapper(Project* p) 
    {
        prjPtr = p; 
    }
    ~ProjectWrapper()
    {
        delete prjPtr;
    }
    Project* prjPtr = nullptr;
}; 
