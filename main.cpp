/*
 Project 5: Part 4 / 4
 video: Chapter 3 Part 7

 Create a branch named Part4
 
 Don't #include what you don't use
 
 1) Your task is to refactor your Chapter 3 Part 4 task into separate source and header files.
         Add files via the pane on the left.
 
 2) Put all of your declarations for each class in .h files
         One header file per class ( i.e. Raider.h for a class named "Raider" )
 
 3) Put all of your implementations in .cpp files.
         one cpp file per class ( i.e. Raider.cpp for a class named "Raider" )
 
 4) Put all of your Wrapper classes in a single Wrappers.h file
         if you implemented your wrapper class functions in-class, you'll need to move them to Wrappers.cpp
 
 5) NO IN-CLASS IMPLEMENTATION ALLOWED.
         the only exception is the existing Atomic.h and LeakedObjectDetector.h
 
 6) for every .cpp file you have to make, insert it into the .replit file after 'main.cpp'.  Don't forget the spaces between file names.
 If you need help with this step, send me a DM.
 
 7) click the [run] button.  Clear up any errors or warnings as best you can.
 
 Remember, your Chapter 3 Part 4 task worked when it was all in one file. so you shouldn't need to edit any of it.  
         just split it up into source files and provide the appropriate #include directives.
 */

#include <iostream>
#include <memory>

#include "LeakedObjectDetector.h"


#include "Project.h"
#include "Pattern.h"
#include "Display.h"
#include "Drumpad.h"
#include "PlayButton.h"
#include "RecordButton.h"
#include "VolumeControl.h"
#include "DrumMachine.h"


#include "DishWasher.h"
#include "DishWashingProcess.h"


#include "DrillMachine.h"
#include "ServiceStation.h"


#include "Wrappers.h"





/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.
 send me a DM to review your pull request when the project is ready for review.
 Wait for my code review.
 */



int main()
{
    // DishWasher

    std::cout << "##########################################" << std::endl;
    std::cout << "DishWasher" << std::endl;
    std::cout << "##########################################" << std::endl;

    DishWasherWrapper firstDishWasherWrapper(new DishWasher);
    std::cout << "firstDishWasherWrapper maxWashTemperature: The maximal temperature of the washing process is " << firstDishWasherWrapper.diWaPtr->maxWashTemperature << std::endl;

    firstDishWasherWrapper.diWaPtr->printMaxWashTemperature();

    if(firstDishWasherWrapper.diWaPtr->washDishes(4)) 
    {
        firstDishWasherWrapper.diWaPtr->dryDishes(120, 40.3f);
        std::cout << "firstDishWasher: Wash and dry process sucessfull!" << std::endl;
    }

    firstDishWasherWrapper.diWaPtr->printMaxDishElements();

    DishWashingProcess process = firstDishWasherWrapper.diWaPtr->checkErrors(400);
    if(process.errorAtMinute) {
        std::cout << "process errorAtMinute: Error on minute " << process.errorAtMinute << std::endl;
        process.printErrorMessage();
    }
    else
        std::cout << "process: No errors in the maximal washing duration" << std::endl;


    // DrumMachine

    std::cout << "##########################################" << std::endl;
    std::cout << "DrumMachine" << std::endl;
    std::cout << "##########################################" << std::endl;

    DrumMachineWrapper drumMachineWrapper(new DrumMachine());

    if(drumMachineWrapper.drMaPtr->volControl.isMaxVolume()) 
    {
        std::cout << "drumWrapper: The drummachine is to loud!!!" << std::endl;
        drumMachineWrapper.drMaPtr->volControl.decreaseMasterVolume(50);
    }
    else 
    {
        std::cout << "drumWrapper: The drummaschine is to quite" << std::endl;
        
        int newVolume = 80;
        std::cout << "drumWrapper volControl currentVol: will decreased from " << drumMachineWrapper.drMaPtr->volControl.currentVol << " to " << newVolume << std::endl;
        drumMachineWrapper.drMaPtr->volControl.decreaseMasterVolume(newVolume);

        std::cout << "drumWrapper volControl.currentVol: Current volume is " << drumMachineWrapper.drMaPtr->volControl.currentVol << std::endl;
    }


    int pos{16}, start{4}, end{8};
    auto ptrn = drumMachineWrapper.drMaPtr->checkPatternPos(pos, start, end);

    if(ptrn.playHeadPos) 
        std::cout << "ptrn playHeadPos: In range from pos " << start << " to " << end << " the playhead of the pattern is at " << ptrn.playHeadPos << std::endl;
    else
        std::cout << "ptrn: In range from pos " << start << " to " << end << " playhead position " << pos << " doesn't exsists" << std::endl;
        
    ptrn.printResult(start, end);

    // ServiceStation

    std::cout << "##########################################" << std::endl;
    std::cout << "ServiceStation" << std::endl;
    std::cout << "##########################################" << std::endl;

    ServiceStationWrapper stationWrapper(new ServiceStation());
    stationWrapper.serStaPtr->saveServiceProtocol();


    // Project

    std::cout << "##########################################" << std::endl;
    std::cout << "Project" << std::endl;
    std::cout << "##########################################" << std::endl;    

    ProjectWrapper myProjectWrapper(new Project());
    myProjectWrapper.prjPtr->MC505.playPattern(1);


    std::cout << "good to go!" << std::endl;
}
