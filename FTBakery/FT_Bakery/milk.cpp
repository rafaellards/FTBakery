#include <string>
#include "Liquid.hpp"
#include "milk.hpp"

using namespace std;

Milk::Milk(string type, double liter, double value) : Liquid(type, liter, value)
   {
   this->type = type;
   this->liter = liter;
   };
   
string Milk::getDescription()
   { 
   return ("<Milk> " + type + " - " + to_string(liter).substr(0, to_string(liter).find('.') + 3) + " Litros."); 
   };
   