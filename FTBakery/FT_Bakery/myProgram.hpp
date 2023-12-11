#include "a02ex01_a.hpp"
#include "a02ex03_b.hpp"
#include <vector>
#include <string>

#ifndef MYPROGRAM
    #define MYPROGRAM

using namespace std;

class myProgram{
private:
    MyBooleanClass verboseMode;
    MyBooleanClass shortMessageMode;
    vector<Food *> myMainList;

public:
    myProgram();
    void setVerboseMode(bool verboseMode);
    bool getVerboseMode();
    void setShortMessageMode(bool shortMessageMode);
    bool getShortMessageMode();
    void start(char* argv[]);
    void process();
    void clearAll();
    void listItems();
    void insertItems();
    void insertBread();
    void insertCheese();
    void insertCottageCheese();
    void insertCracker();
    void insertFilledWafer();
    void insertHam();
    void insertMortadella();
    void insertMilk();
    void insertWater();
    void insertSoda();
    void insertBeer();
    void insertBudweiser();
    void insertHeineken();
    void insertCorona();
    void insertSkol();
};

#endif