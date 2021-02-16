/*
Project 5: Part 2 / 4
 video: Chapter 3 Part 1

Create a branch named Part2

 The 'this' keyword
 
 The purpose of this project part is to show you how accessing member variables of objects INSIDE member functions is very similar to accessing member variables of objects OUTSIDE of member functions, via 'this->' and via the '.' operator.
 This project part will break the D.R.Y. rule, but that is fine for the purpose of this project part.
 
 
 1) if you don't have any std::cout statements in main() that access member variables of your U.D.Ts
         write some.
    You can copy some from your Project3's main() if needed.
 
 2) For each std::cout statement in main() that accessed member variables of your types or printed out the results of your member function calls,
        a) write a member function that prints the same thing out, but uses the proper techniques inside the member functions to access the same member variables/functions.
        b) be explicit with your use of 'this->' in those member functions so we see how you're accessing/calling those member variables and functions *inside*
        c) call that member function after your std::cout statement in main.
        d) you should see 2 (almost) identical messages in the program output for each member function you add:
            one for the std::cout line, and one for the member function's output
 
 
 3) After you finish, click the [run] button.  Clear up any errors or warnings as best you can.
 */

/*
 example:
 */
#include <iostream>
namespace Example
{
    //a User-Defined Type
    struct MyFoo
    {
        MyFoo() { std::cout << "creating MyFoo" << std::endl; }
        ~MyFoo() { std::cout << "destroying MyFoo" << std::endl; }
		
		// 2a) the member function whose function body is almost identical to the std::cout statement in main.
        void memberFunc() 
		{ 
            // 2b) explicitly using 'this' inside this member function.
			std::cout << "MyFoo returnValue(): " << this->returnValue() << " and MyFoo memberVariable: " << this->memberVariable << std::endl; 
		}  
		
        int returnValue() { return 3; }
        float memberVariable = 3.14f;
    };
    
    int main()
    {
        //an instance of the User-Defined Type named mf
        MyFoo mf;
		
        // 1) a std::cout statement that uses mf's member variables
        std::cout << "mf returnValue(): " << mf.returnValue() << " and mf memberVariable: " << mf.memberVariable << std::endl; 
		
        // 2c) calling mf's member function.  the member function's body is almost identical to the cout statement above.
        mf.memberFunc();
        return 0;
    }
}


#include <iostream>

/*
 copied UDT 1:
 */

 //--------------------------------------------------------
// DishWasher
//--------------------------------------------------------

struct DishWashingProcess
{
    int errorAtMinute;
    DishWashingProcess(int m) : errorAtMinute(m) {} 
};

struct DishWasher
{
    float washingRoomVolume {5.2f};
    int numOfPrograms {12};
    int maxWashingDuration {120};
    float maxWashTemperature {90.0f};
    int timerDuration {360};
    int waitMilliSec {0};

    DishWasher();
    ~DishWasher();

    bool washDishes(int programNumber);
    bool dryDishes(int duration, float temperature);
    void startAtTimer(int startMinutesLater); 
    float printMaxDishElements(); 
    DishWashingProcess checkErrors(int errorTime);

};


DishWasher::DishWasher() { std::cout << "DishWasher is constructed" << std::endl; }


DishWasher::~DishWasher() 
{
    std::cout << "DishWasher distroyed!" << std::endl;
}


bool DishWasher::washDishes(int programNumber)
{
    return ! (programNumber > 12);
}


bool DishWasher::dryDishes(int duration, float temperature)
{
    return (duration <= maxWashingDuration || temperature <= maxWashTemperature);
}


void DishWasher::startAtTimer(int startMinutesLater)
{
    waitMilliSec = startMinutesLater * 1000;
    washDishes(1);    
} 


float DishWasher::printMaxDishElements() 
{
    float maxDishElements = washingRoomVolume / 0.5f;
    std::cout << "You can put" << maxDishElements << "dish elements in dish washer" << std::endl;
    return maxDishElements;
}


DishWashingProcess DishWasher::checkErrors(int errorTime)
{
    DishWashingProcess process(false);
    int timeMarker{0};
    while (timeMarker < maxWashingDuration)
    {
        if(errorTime == timeMarker) 
        {
            std::cout << "TimeMarker " << timeMarker << " checked - Error found!!!" << std::endl;
            process.errorAtMinute = errorTime;
            return process;
        }  
        std::cout << "TimeMarker " << timeMarker << " checked - No error" << std::endl;
        timeMarker += 1;
    }
    std::cout << "Test completed - No error :)" << std::endl;
    return process;
}

/*
 copied UDT 2:
 */

 //--------------------------------------------------------
// DrumMachine
//--------------------------------------------------------

struct Display
{
    int numPixelWidth;
    int numPixelHeight;

    Display(int w = 1024, int h = 678) : numPixelWidth(w), numPixelHeight(h) {}
    ~Display() { std::cout << "Display distroyed" << std::endl; } 
};

struct Drumpad
{
    int numPads;

    Drumpad(int num) : numPads(num) {}
    ~Drumpad() { std::cout << "Drumpad distroyed" << std::endl; }
};




struct VolumeControl 
{
    int maxVolume;
    int currentVol;
    bool isMaxVolume();
    void decreaseMasterVolume(int newVolume);

    VolumeControl(int maxV = 127) : maxVolume(maxV), currentVol(0) {} 
    ~VolumeControl();
};


VolumeControl::~VolumeControl()
{
    currentVol = 0;
    std::cout << "VolumeControl is destroyed" << std::endl;
}


void VolumeControl::decreaseMasterVolume(int newVolume) 
{
    if(newVolume < currentVol) 
    {
        std::cout << "Volume decreased from " << currentVol << " to " << newVolume << std::endl;
        currentVol = newVolume;
    }
    else 
        std::cout << "New volume isn't smaller than the current volume" << std::endl;
}


bool VolumeControl::isMaxVolume()
{
    return (currentVol == 127);
}


struct PlayButton
{
    bool isLit;
    bool isFlash;

    PlayButton () : isLit(false), isFlash(false) {}
    ~PlayButton ();
};

PlayButton::~PlayButton()
{
    isLit = false;
    isFlash = false;
    std::cout << "PlayButton is distroyed" << std::endl;
}

struct RecordButton
{
    bool isLit;
    bool isFlash;

    RecordButton () : isLit(false), isFlash(false) {}
    ~RecordButton ();
};

RecordButton::~RecordButton()
{
    isLit = false;
    isFlash = false;
    std::cout << "RecordButton is distroyed" << std::endl;    
}

struct Pattern
{
    int playHeadPos;
    std::string sequenceData = "";
    Pattern( int pos ) : playHeadPos( pos ), sequenceData("") {}
    ~Pattern() { std::cout << "Pattern distroyed" << std::endl; }
};


struct DrumMachine
{
    Display display;
    Drumpad drumpad;
    VolumeControl volControl;
    PlayButton playButton;
    RecordButton recButton;
    Pattern ptrn;

    DrumMachine();
    ~DrumMachine();
    
    std::string getPatternName (int patternId);
    void playPattern(int patternId);
    void stopPattern();
    void recPattern(int patternLength = 4);
    Pattern checkPatternPos(int pos, int start, int end);
};


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


/*
 copied UDT 3:
 */

 //--------------------------------------------------------
// DrillMachine
//--------------------------------------------------------

struct DrillMachine 
{
    int sizeOfDrillChucks;
    int numOfModes;
    int motorPower;
    float cableLength;
    bool accuTooWeak;
    int screwTime;

    DrillMachine();
    ~DrillMachine();

    struct DrillBit
    {
        int drillChuck {10};
        int length {140};
        std::string material {"steel"};
        bool isHardened {true};
        bool isForWood {true};
        bool isStucked {false};
        float maxTemperature {303.3f};

        DrillBit();
        ~DrillBit(); 

        void drill(int depth = 10);
        bool isDull(float currentTemperature);
        bool isToHot(float currentTemperature);
        void printStatus();
    };

    bool drillHole(DrillBit bit);
    bool screwScrew(int speed, bool screwIn);
    void loadAccu();
    void printMachineProperties();
    void checkDrillProcess(int drillDuration);

    DrillBit myDrillBit;
};


DrillMachine::DrillMachine() : 
sizeOfDrillChucks(10),
numOfModes(2),
motorPower(1500),
cableLength(1.5f),
accuTooWeak(false),
screwTime(0) 
{}


DrillMachine::~DrillMachine()
{
    std::cout << "DrillMaschine destroyed!" << std::endl;
}


DrillMachine::DrillBit::DrillBit() { std::cout << "DrillBit is constructed" << std::endl; }


DrillMachine::DrillBit::~DrillBit() { std::cout << "DrillBit is distroyed" << std::endl; }


void DrillMachine::DrillBit::drill(int depth) 
{
    isStucked = (depth > length);
}


bool DrillMachine::DrillBit::isDull(float currentTemperature) 
{
    std::cout << "Current temperature : " << currentTemperature << std::endl;
    return isToHot(currentTemperature);
}


bool DrillMachine::DrillBit::isToHot(float currentTemperature)
{
    return currentTemperature > maxTemperature;
}


void DrillMachine::DrillBit::printStatus()
{
    std::cout << "Drillbit - Status" << std::endl << "---------------------------------" << std::endl;
    std::cout << "drillChuck: " << drillChuck << std::endl;
    std::cout << "length: " << length << std::endl;
    std::cout << "material: " << material << std::endl;
    std::cout << "isHardened: " << isHardened << std::endl;
    std::cout << "isForWood: " << isForWood << std::endl;
    std::cout << "isStucked: " << isStucked << std::endl;
    std::cout << "maxTemperature: " << maxTemperature << std::endl;  
}


bool DrillMachine::drillHole(DrillBit bit)
{
    if(bit.drillChuck <= sizeOfDrillChucks) 
    {
        std::cout << "Drill process starts!" << std::endl;
        bit.drill(15);
        return true;
    }
    return false;
}


bool DrillMachine::screwScrew(int speed, bool screwIn)
{
    if(accuTooWeak == false) 
    {
        if(screwIn) 
            screwTime = speed * 5;
        else 
            screwTime = speed * 6;
        return true;
    }
    return false;
}

void DrillMachine::loadAccu()
{
    accuTooWeak = false;
}


void DrillMachine::printMachineProperties()
{
    std::cout << "Drill machine proberties" << std::endl << "------------------------------------" << std::endl;
    std::cout << "Size of drill chucks: " << sizeOfDrillChucks << std::endl;
    std::cout << "Number of Modes: " << numOfModes << std::endl;
    std::cout << "Motorpower: " << motorPower << std::endl;
    std::cout << "Cable length: " << cableLength << std::endl;
}


void DrillMachine::checkDrillProcess(int drillDuration)
{
    for(auto i = 0; drillDuration == i; i++)
    {
        std::cout << "Drilling minute " << i << std::endl;
    }
}

/*
 new UDT 4:
 with 2 member functions
 */

struct ServiceStation
{
    DishWasher demagedMachine;

    ServiceStation();
    ~ServiceStation();

    void checkTheErrorProtocol();
    void startMachine();
    void saveServiceProtocol();
};


ServiceStation::ServiceStation()
{
    std::cout << "Max washing duration of the demage maschine is :" << demagedMachine.maxWashingDuration << std::endl;
}


ServiceStation::~ServiceStation()
{
    saveServiceProtocol();
}


void ServiceStation::checkTheErrorProtocol()
{
    demagedMachine.checkErrors(17);
}


void ServiceStation::startMachine()
{
    demagedMachine.startAtTimer(0);
}


void ServiceStation::saveServiceProtocol()
{
    std::cout << "Protocol saved!" << std::endl;
}


/*
 new UDT 5:
 with 2 member functions
 */


struct Project
{
    DrumMachine MC505;

    Project();
    ~Project();

    void load();
    void play();

};


Project::Project()
{
    MC505.volControl.currentVol = 0;
    std::cout << "MC-505 is ready" << std::endl;
}


Project::~Project()
{
    MC505.stopPattern();
    MC505.ptrn.sequenceData = "";
    std::cout << "Pattern player stopped" << std::endl;
}


void Project::load()
{
    MC505.ptrn.sequenceData = "name:Song1;mididata:1234567890";
} 


void Project::play()
{
    MC505.playPattern(1);
}


/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    // DishWasher

    DishWasher firstDishWasher;
    std::cout << "The maximal temperature of the washing process is " << firstDishWasher.maxWashTemperature << std::endl;

    if(firstDishWasher.washDishes(4)) 
    {
        firstDishWasher.dryDishes(120, 40.3f);
        std::cout << "Wash and dry process sucessfull!" << std::endl;
    }

    firstDishWasher.printMaxDishElements();

    DishWashingProcess process = firstDishWasher.checkErrors(400);
    if(process.errorAtMinute)
        std::cout << "Error on minute " << process.errorAtMinute << std::endl;
    else
        std::cout << "No errors in the maximal washing duration" << std::endl;


    // DrumMachine

    DrumMachine drumMachine;

    if(drumMachine.volControl.isMaxVolume()) 
    {
        std::cout << "The drummachine is to loud!!!" << std::endl;
        drumMachine.volControl.decreaseMasterVolume(50);
    }
    else 
    {
        std::cout << "The drummaschine is to quite" << std::endl;
        drumMachine.volControl.decreaseMasterVolume(80);
        std::cout << "Current volume is " << drumMachine.volControl.currentVol << std::endl;
    }

    int pos{16}, start{4}, end{8};
    auto ptrn = drumMachine.checkPatternPos(pos, start, end);
    if(ptrn.playHeadPos) 
        std::cout << "In range from pos " << start << " to " << end << " the playhead of the pattern is at " << ptrn.playHeadPos << std::endl;
    else
        std::cout << "In range from pos " << start << " to " << end << " playhead position " << pos << " doesn't exsists" << std::endl;
        


    // ServiceStation

    ServiceStation station;


    // Project

    Project myProject;


    std::cout << "good to go!" << std::endl;
}
