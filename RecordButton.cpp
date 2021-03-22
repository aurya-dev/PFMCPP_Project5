#include "RecordButton.h"

RecordButton::~RecordButton()
{
    this->isLit = false;
    this->isFlash = false;
    std::cout << "RecordButton is distroyed" << std::endl;    
}

