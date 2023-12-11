#include <string>
#include "liquid.hpp"
#include "beer.hpp"

using namespace std;

Beer::Beer(string type, double liter, double value) : Liquid(type, liter, value)
   {
   this->type = type;
   this->liter = liter;
   };
   
string Beer::getDescription()
   { 
   return ("<Beer> " + type + " - " + to_string(liter) + " Litros."); 
   };
   