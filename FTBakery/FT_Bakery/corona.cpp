
#include <string>
#include "liquid.hpp"
#include "beer.hpp"
#include "corona.hpp"

using namespace std;

Corona::Corona(string type, double liter, double value) : Beer(type, liter, value)
   {
   this->type = type;
   this->liter = liter;
   };
   string Corona::getDescription()
   { 
      return ("Corona " + type + " - " + to_string(liter).substr(0, to_string(liter).find('.') + 3) + " Litros."); 
   };
   