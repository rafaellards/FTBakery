#include <string>
#include "liquid.hpp"
#include "soda.hpp"

using namespace std;

Soda::Soda(string type, double liter, double value) : Liquid(type, liter, value)
   {
   this->type = type;
   this->liter = liter;
   };
   
string Soda::getDescription()
   { 
   return ("<Soda> " + type + " - " + to_string(liter).substr(0, to_string(liter).find('.') + 3) + " Litros."); 
   };
   