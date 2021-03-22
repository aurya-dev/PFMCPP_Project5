#include "DrumMachine.h"



DrumMachine::DrumMachine()
: display(), 
drumpad(32), 
volControl(), 
playButton(), 
recButton(),
ptrn(0)
{
    std::cout << "Constructor of DrumMachine executed" << std::endl;
}


DrumMachine::~DrumMachine()
{
    std::cout << "DrumMachine doesn't exist anymore!" << std::endl;
}


std::string DrumMachine::getPatternName (int patternId)
{
    switch (patternId)
    {
        case 1:
            return "Pattern 1";
        case 2:
            return "Pattern 2";
        default:
            return "Pattern X";
    }
}


void DrumMachine::playPattern(int patternId)
{
    switch (patternId)
    {
        case 1:
            std::cout << "Play [Pattern 1]" << std::endl;
            break;
        case 2:
            std::cout << "Play [Pattern 2]" << std::endl;
            break;
        default:
            std::cout << "Play [Pattern X]" << std::endl;
    }
}


void DrumMachine::stopPattern()
{
    ptrn.playHeadPos = 0;
}


void DrumMachine::recPattern(int patternLength)
{
    if(patternLength > 0)
        std::cout << "Pattern recording with pattern length " << patternLength << std::endl;
}


Pattern DrumMachine::checkPatternPos(int pos, int start, int end)
{
    Pattern p(0);

    std::cout << "Start at pos " << start << "..." << std::endl;
    for(int s = start; s <= end; s++)
    {
        if(pos == s) 
        {
            std::cout << "PlayHead at " << pos << std::endl;
            p.playHeadPos = pos;
            return p;
        }
        std::cout << "At pos " << s << " no PlayHead found" << std::endl;
    }
    std::cout << "PlayHead didn't found  :(" << std::endl;

    return p;
}