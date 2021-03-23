#include "Project.h"




Project::Project()
{
    this->MC505.volControl.currentVol = 0;
    std::cout << "Project(): MC-505 is ready" << std::endl;
}


Project::~Project()
{
    this->MC505.stopPattern();
    this->MC505.ptrn.sequenceData = "";
    std::cout << "~Project(): Pattern player stopped" << std::endl;
}


void Project::load()
{
    this->MC505.ptrn.sequenceData = "name:Song1;mididata:1234567890";
} 


void Project::play()
{
    this->MC505.playPattern(1);
}

