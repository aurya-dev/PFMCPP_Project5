#pragma once


struct DishWasherWrapper
{
    DishWasherWrapper(DishWasher* d) : diWaPtr(d) {}
    std::unique_ptr<DishWasher> diWaPtr = nullptr;
}; 


struct DishWashingProcessWrapper
{
    DishWashingProcessWrapper(DishWashingProcess* d) : washPtr(d) {}
    std::unique_ptr<DishWashingProcess> washPtr = nullptr;
}; 


struct DrumMachineWrapper
{
    DrumMachineWrapper(DrumMachine* d) : drMaPtr(d) {}
    std::unique_ptr<DrumMachine> drMaPtr = nullptr;
}; 


struct ServiceStationWrapper
{
    ServiceStationWrapper(ServiceStation* s) : serStaPtr(s) {}
    std::unique_ptr<ServiceStation> serStaPtr = nullptr;
}; 


struct ProjectWrapper
{
    ProjectWrapper(Project* p) : prjPtr(p) {}
    std::unique_ptr<Project> prjPtr = nullptr;
}; 
