
#include <string>
#include "liquid.hpp" //Liquido
#include "beer.hpp"
#include "skol.hpp"

using namespace std;

Skol::Skol(string type, double liter, double value) : Beer(type, liter, value)
   {
   this->type = type;
   this->liter = liter;
   };
   string Skol::getDescription()
   { 
      return ("Skol " + type + " - " + to_string(liter).substr(0, to_string(liter).find('.') + 3) + " Litros."); 
   };
   