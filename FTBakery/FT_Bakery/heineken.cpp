
#include <string>
#include "liquid.hpp"
#include "beer.hpp"
#include "heineken.hpp"

using namespace std;

Heineken::Heineken(string type, double liter, double value) : Beer(type, liter, value)
   {
   this->type = type;
   this->liter = liter;
   };
   string Heineken::getDescription()
   { 
      return ("Heineken " + type + " - " + to_string(liter).substr(0, to_string(liter).find('.') + 3) + " Litros."); 
   };
   