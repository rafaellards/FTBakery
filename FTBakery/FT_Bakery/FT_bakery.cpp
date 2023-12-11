#include "myProgram.hpp"

using namespace std;

int main(int argc, char* argv[]) {
    myProgram* myprogram = new myProgram();
    myprogram->setVerboseMode(NULL);
    myprogram->setShortMessageMode(NULL);
    myprogram->start(argv);
    delete myprogram; // Don't forget to delete dynamically allocated objects

    return 0;
}

void verifyArguments(int argc, char* argv[]) {
    myProgram* myprogram = new myProgram();
 //   MyBooleanClass * verboseMode = myprogram->getVerboseMode();
  //  MyBooleanClass * shortMessageMode = myprogram->getShortMessageMode();

    if (myprogram->getVerboseMode()) {

        myprogram->setVerboseMode(false);
    }

    if (myprogram->getShortMessageMode()) {

        myprogram->setVerboseMode(false);
    }

    for (int count = 1; count < argc; count++) {
        if (string(argv[count]) == "-v") {
            myprogram->setVerboseMode(true);
        }

        if (string(argv[count]) == "-s") {
            myprogram->setShortMessageMode(true);
        }
    }

    if (!(myprogram->getVerboseMode())) {
         myprogram->setVerboseMode(true);; // default is false
    }

    if (!(myprogram->getShortMessageMode())) {
        myprogram->setVerboseMode(true); // default is false
    }

    // Rest of your code...

    delete myprogram; // Don't forget to delete dynamically allocated objects
}
