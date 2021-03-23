#include "ServiceStation.h"

ServiceStation::ServiceStation()
{
    std::cout << "ServiceStation(): Max washing duration of the demage maschine is :" << demagedMachine.maxWashingDuration << std::endl;
}


ServiceStation::~ServiceStation()
{
    this->saveServiceProtocol();
}


void ServiceStation::checkTheErrorProtocol()
{
    this->demagedMachine.checkErrors(17);
}


void ServiceStation::startMachine()
{
    this->demagedMachine.startAtTimer(0);
}


void ServiceStation::saveServiceProtocol()
{
    std::cout << "ServiceStation saveServiceProtocol(): Protocol saved!" << std::endl;
}

