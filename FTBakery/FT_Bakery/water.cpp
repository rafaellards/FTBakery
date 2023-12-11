#include <string>
#include "liquid.hpp"
#include "water.hpp"

using namespace std;

Water::Water(string type, double liter, double value) : Liquid(type, liter, value)
   {
   this->type = type;
   this->liter = liter;
   }; 
   
string Water::getDescription()
   { 
   return ("<water> " + type + " - " + to_string(liter).substr(0, to_string(liter).find('.') + 3) + " Litros."); 
   };
   