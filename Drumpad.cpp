#include "Drumpad.h"

Drumpad::Drumpad(int num) 
{
    numPads = num;
}

Drumpad::~Drumpad() { 
    std::cout << "Drumpad distroyed" << std::endl; 
}
