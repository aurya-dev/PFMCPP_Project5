

#include "Display.h"


Display::Display(int w, int h) {
    numPixelWidth = w; 
    numPixelHeight = h; 
}

Display::~Display() { 
    std::cout << "Display distroyed" << std::endl; 
} 
