#include "PlayButton.h"


PlayButton::~PlayButton()
{
    this->isLit = false;
    this->isFlash = false;
    std::cout << "PlayButton is distroyed" << std::endl;
}