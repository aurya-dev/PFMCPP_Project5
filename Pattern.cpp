#include "Pattern.h"

Pattern::Pattern( int pos ) 
{ 
    playHeadPos = pos; 
    sequenceData = ""; 
}

void Pattern::printResult(int start, int end)
{
    if(this->playHeadPos) 
        std::cout << "Pattern playHeadPos: In range from pos " << start << " to " << end << " the playhead of the pattern is at " << this->playHeadPos << std::endl;
    else
        std::cout << "Pattern: In range from pos " << start << " to " << end << " playhead position doesn't exsists" << std::endl;
}
