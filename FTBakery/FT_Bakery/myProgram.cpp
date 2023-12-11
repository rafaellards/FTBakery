#include <string>
#include <vector>
#include <iostream>
#include <iomanip>
#include "a02ex00.hpp"
#include "a02ex01_a.hpp"
#include "FT_bakery.hpp"
#include "a02ex03_a.hpp"
#include "a02ex03_b.hpp"
#include "a02ex03_c.hpp"
#include "a02ex03_d.hpp"
#include "a02ex03_e.hpp"
#include "cheese.hpp"
#include "cottagecheese.hpp"
#include "ham.hpp"
#include "mortadella.hpp"
#include "milk.hpp"
#include "water.hpp"
#include "soda.hpp"
#include "beer.hpp"
#include "liquid.hpp"
#include "budweiser.hpp"
#include "heineken.hpp"
#include "skol.hpp"
#include "corona.hpp"
#include "myProgram.hpp"

myProgram::myProgram()
{

}



    void myProgram::setVerboseMode(bool verboseMode){
        
        this->verboseMode.setBooleanValue(verboseMode);
    }
    bool myProgram::getVerboseMode()
    {
        return verboseMode.getStatus();
    }
    void myProgram::setShortMessageMode(bool shortMessageMode){
        
        this->shortMessageMode.setBooleanValue(shortMessageMode);
    }
    bool myProgram::getShortMessageMode(){
        return shortMessageMode.getStatus();
    }
    void myProgram::start(char* argv[])
    {
        myMainList.clear();
        Information::wellcome("C++ Program " + string(argv[0]) + " running!", shortMessageMode.getStatus());
        process();
        Information::bye(shortMessageMode.getStatus());
        clearAll();

    }
    void myProgram::process()
    {
        vector<string> opcoes({"Exit", "List Database", "Insert Items"});
        Menu menu("Main Menu", opcoes);
        int choice = -1;

        while (choice)
        {
            choice = menu.getChoice();

            switch (choice)
            {
            case 1:
            {
                listItems();
            };
            break;
            case 2:
            {
                insertItems();
            };
            break;
            };
        };
    }

    void myProgram::clearAll()
    {
        vector<Food *>::iterator scan = myMainList.begin();

        while (scan != myMainList.end())
        {
            delete (*scan);
            *scan = NULL;
            scan++;
        }

        myMainList.clear();
        this->verboseMode.setBooleanValue(NULL);
        this->shortMessageMode.setBooleanValue(NULL);
    }

    void myProgram::listItems()
    {
        double total = 0.00;

        cout << "------------------------------\nItems in Database:\n------------------------------\n";
        vector<Food *>::iterator scan = myMainList.begin();

        while (scan != myMainList.end())
        {
            cout << "  @ " << setw(20) << (*scan)->getDescription() << "\n\tUS$ " << fixed << setprecision(2) << (*scan)->getValue() << endl;
            total += (*scan)->getValue();
            scan++;
        };
        cout << "  Total cost: US$ " << fixed << setprecision(2) << total << endl;
    };

    void myProgram::insertItems()
    {
        cout << "------------------------------\nInsert New Items:\n------------------------------\n";

        Menu menu("Insert Items", {"Exit", "Bread", "Cheese", "Cottage Cheese", "Cracker", "FilledWafer", "Ham", "Mortadella", "Milk", "Water", "Soda", "Beer"});
        int choice = -1;

        while (choice)
        {
            choice = menu.getChoice();

            switch (choice)
            {
            case 1:
            {
                insertBread();
            };
            break;
            case 2:
            {
                insertCheese();
            };
            break;
            case 3:
            {
                insertCottageCheese();
            };
            break;
            case 4:
            {
                insertCracker();
            };
            break;
            case 5:
            {
                insertFilledWafer();
            };
            break;
            case 6:
            {
                insertHam();
            };
            break;
            case 7:
            {
                insertMortadella();
            };
            break;
            case 8:
            {
                insertMilk();
            };
            break;
            case 9:
            {
                insertWater();
            };
            break;
            case 10:
            {
                insertSoda();
            };
            break;
            case 11:
            {
                insertBeer();
            };
            break;
            };
        };
    };

    void myProgram::insertBread()
    {
        Bread *bread;
        string buffer;
        string type;
        float weight;
        double cost;

        cout << "------------------------------\nInsert Bread:\n------------------------------\n";
        cout << "Type ......: ";
        getline(cin, buffer);
        type = buffer;
        cout << "Weight ....: ";
        getline(cin, buffer);
        weight = stof(buffer);
        cout << "Cost ......: ";
        getline(cin, buffer);
        cost = stod(buffer);
        cin.clear();

        bread = new Bread(type, weight, cost);
        myMainList.insert(myMainList.end(), bread);

        cout << endl
             << bread->getDescription() << " - US$ " << fixed << setprecision(2) << bread->getValue() << endl;
    };
    void myProgram::insertCheese()
    {
        Cheese *cheese;
        string buffer;
        string type;
        float weight;
        double cost;

        cout << "------------------------------\nInsert Cheese:\n------------------------------\n";
        cout << "Type ......: ";
        getline(cin, buffer);
        type = buffer;
        cout << "Weight ....: ";
        getline(cin, buffer);
        weight = stof(buffer);
        cout << "Cost ......: ";
        getline(cin, buffer);
        cost = stod(buffer);
        cin.clear();

        cheese = new Cheese(type, weight, cost);
        myMainList.insert(myMainList.end(), cheese);

        cout << endl
             << cheese->getDescription() << " - US$ " << fixed << setprecision(2) << cheese->getValue() << endl;
    };

    void myProgram::insertCottageCheese()
    {
        CottageCheese *cottagecheese;
        string buffer;
        string type;
        float weight;
        double cost;

        cout << "------------------------------\nInsert Cottage Cheese:\n------------------------------\n";
        cout << "Type ......: ";
        getline(cin, buffer);
        type = buffer;
        cout << "Weight ....: ";
        getline(cin, buffer);
        weight = stof(buffer);
        cout << "Cost ......: ";
        getline(cin, buffer);
        cost = stod(buffer);
        cin.clear();

        cottagecheese = new CottageCheese(type, weight, cost);
        myMainList.insert(myMainList.end(), cottagecheese);

        cout << endl
             << cottagecheese->getDescription() << " - US$ " << fixed << setprecision(2) << cottagecheese->getValue() << endl;
    };

    void myProgram::insertCracker()
    {
        Cracker *cracker;
        string buffer;
        string type;
        int amount;
        double cost;

        cout << "------------------------------\nInsert Cracker:\n------------------------------\n";
        cout << "Type ......: ";
        getline(cin, buffer);
        type = buffer;
        cout << "Amount ....: ";
        getline(cin, buffer);
        amount = stoi(buffer);
        cout << "Cost ......: ";
        getline(cin, buffer);
        cost = stod(buffer);
        cin.clear();

        cracker = new Cracker(type, amount, cost);
        myMainList.insert(myMainList.end(), cracker);

        cout << endl
             << cracker->getDescription() << " - US$ " << fixed << setprecision(2) << cracker->getValue() << endl;
    };

    void myProgram::insertFilledWafer()
    {
        FilledWafer *filledWafer;
        string buffer;
        string type;
        string filling;
        int amount;
        double cost;

        cout << "------------------------------\nInsert FilledWafer:\n------------------------------\n";
        cout << "Type ......: ";
        getline(cin, type);
        cout << "Filling ...: ";
        getline(cin, filling);
        cout << "Amount ....: ";
        getline(cin, buffer);
        amount = stoi(buffer);
        cout << "Cost ......: ";
        getline(cin, buffer);
        cost = stod(buffer);
        cin.clear();

        filledWafer = new FilledWafer(type, filling, amount, cost);
        myMainList.insert(myMainList.end(), filledWafer);

        cout << endl
             << filledWafer->getDescription() << " - US$ " << fixed << setprecision(2) << filledWafer->getValue() << endl;
    };
    void myProgram::insertHam()
    {
        Ham *ham;
        string buffer;
        string type;
        int amount;
        double cost;

        cout << "------------------------------\nInsert Ham:\n------------------------------\n";
        cout << "Type ......: ";
        getline(cin, type);
        cout << "Amount ....: ";
        getline(cin, buffer);
        amount = stoi(buffer);
        cout << "Cost ......: ";
        getline(cin, buffer);
        cost = stod(buffer);
        cin.clear();

        ham = new Ham(type, amount, cost);
        myMainList.insert(myMainList.end(), ham);

        cout << endl
             << ham->getDescription() << " - US$ " << fixed << setprecision(2) << ham->getValue() << endl;
    };
    void myProgram::insertMortadella()
    {
        Mortadella *mortadella;
        string buffer;
        string type;
        int amount;
        double cost;

        cout << "------------------------------\nInsert mortadella:\n------------------------------\n";
        cout << "Type ......: ";
        getline(cin, buffer);
        type = buffer;
        cout << "Amount ....: ";
        getline(cin, buffer);
        amount = stoi(buffer);
        cout << "Cost ......: ";
        getline(cin, buffer);
        cost = stod(buffer);
        cin.clear();

        mortadella = new Mortadella(type, amount, cost);
        myMainList.insert(myMainList.end(), mortadella);

        cout << endl
             << mortadella->getDescription() << " - US$ " << fixed << setprecision(2) << mortadella->getValue() << endl;
    };
    void myProgram::insertMilk()
    {
        Milk *milk;
        string buffer;
        string type;
        int liter;
        double cost;

        cout << "------------------------------\nInsert Milk:\n------------------------------\n";
        cout << "Type ......: ";
        getline(cin, buffer);
        type = buffer;
        cout << "liter .,...: ";
        getline(cin, buffer);
        liter = stoi(buffer);
        cout << "Cost ......: ";
        getline(cin, buffer);
        cost = stod(buffer);
        cin.clear();

        milk = new Milk(type, liter, cost);
        myMainList.insert(myMainList.end(), milk);

        cout << endl
             << milk->getDescription() << " - US$ " << fixed << setprecision(2) << milk->getValue() << endl;
    };
    void myProgram::insertWater()
    {
        Water *water;
        string buffer;
        string type;
        int liter;
        double cost;

        cout << "------------------------------\nInsert Water:\n------------------------------\n";
        cout << "Type ......: ";
        getline(cin, buffer);
        type = buffer;
        cout << "liter .,...: ";
        getline(cin, buffer);
        liter = stoi(buffer);
        cout << "Cost ......: ";
        getline(cin, buffer);
        cost = stod(buffer);
        cin.clear();

        water = new Water(type, liter, cost);
        myMainList.insert(myMainList.end(), water);

        cout << endl
             << water->getDescription() << " - US$ " << fixed << setprecision(2) << water->getValue() << endl;
    };
    void myProgram::insertSoda()
    {
        Soda *soda;
        string buffer;
        string type;
        int liter;
        double cost;

        cout << "------------------------------\nInsert Soda:\n------------------------------\n";
        cout << "Type ......: ";
        getline(cin, buffer);
        type = buffer;
        cout << "liter .,...: ";
        getline(cin, buffer);
        liter = stoi(buffer);
        cout << "Cost ......: ";
        getline(cin, buffer);
        cost = stod(buffer);
        cin.clear();

        soda = new Soda(type, liter, cost);
        myMainList.insert(myMainList.end(), soda);

        cout << endl
             << soda->getDescription() << " - US$ " << fixed << setprecision(2) << soda->getValue() << endl;
    };
    void myProgram::insertBeer()
    {
        Menu submenu("Choose a beer:", {"Exit","Budweiser","Heineken","Corona","Skol"});
        int choice = -1;

        while (choice)
        {
            choice = submenu.getChoice();

            switch (choice)
            {
            case 1:
            {
                insertBudweiser();
                break;
            }
            case 2:
            {
                insertHeineken();
                break;
            }
            case 3:
            {
                insertCorona();
                break;
            }
            case 4:
            {
                insertSkol();
                break;
            }
            }
        }
    }
    void myProgram::insertBudweiser()
    {
        Budweiser *budweiser;
        string buffer;
        string type;
        int liter;
        double cost;

        cout << "------------------------------\nInsert Budweiser:\n------------------------------\n";
        cout << "Type ......: ";
        getline(cin, buffer);
        type = buffer;
        cout << "liter .,...: ";
        getline(cin, buffer);
        liter = stoi(buffer);
        cout << "Cost ......: ";
        getline(cin, buffer);
        cost = stod(buffer);
        cin.clear();

        budweiser = new Budweiser(type, liter, cost);
        myMainList.insert(myMainList.end(), budweiser);

        cout << endl
             << budweiser->getDescription() << " - US$ " << fixed << setprecision(2) << budweiser->getValue() << endl;
    };
    void myProgram::insertHeineken()
    {
        Heineken *heineken;
        string buffer;
        string type;
        int liter;
        double cost;

        cout << "------------------------------\nInsert Heineken:\n------------------------------\n";
        cout << "Type ......: ";
        getline(cin, buffer);
        type = buffer;
        cout << "liter .,...: ";
        getline(cin, buffer);
        liter = stoi(buffer);
        cout << "Cost ......: ";
        getline(cin, buffer);
        cost = stod(buffer);
        cin.clear();

        heineken = new Heineken(type, liter, cost);
        myMainList.insert(myMainList.end(), heineken);

        cout << endl
             << heineken->getDescription() << " - US$ " << fixed << setprecision(2) << heineken->getValue() << endl;
    };
    void myProgram::insertCorona()
    {
        Corona *corona;
        string buffer;
        string type;
        int liter;
        double cost;

        cout << "------------------------------\nInsert Corona:\n------------------------------\n";
        cout << "Type ......: ";
        getline(cin, buffer);
        type = buffer;
        cout << "liter .,...: ";
        getline(cin, buffer);
        liter = stoi(buffer);
        cout << "Cost ......: ";
        getline(cin, buffer);
        cost = stod(buffer);
        cin.clear();

        corona = new Corona(type, liter, cost);
        myMainList.insert(myMainList.end(), corona);

        cout << endl
             << corona->getDescription() << " - US$ " << fixed << setprecision(2) << corona->getValue() << endl;
    };
    void myProgram::insertSkol()
    {
        Skol *skol;
        string buffer;
        string type;
        int liter;
        double cost;

        cout << "------------------------------\nInsert Skol:\n------------------------------\n";
        cout << "Type ......: ";
        getline(cin, buffer);
        type = buffer;
        cout << "liter .,...: ";
        getline(cin, buffer);
        liter = stoi(buffer);
        cout << "Cost ......: ";
        getline(cin, buffer);
        cost = stod(buffer);
        cin.clear();

        skol = new Skol(type, liter, cost);
        myMainList.insert(myMainList.end(), skol);

        cout << endl << skol->getDescription() << " - US$ " << fixed << setprecision(2) << skol->getValue() << endl;
    };

