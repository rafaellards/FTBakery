
#include <string>
#include "a02ex03_b.hpp"
#include "liquid.hpp"

using namespace std;

Liquid::Liquid(string type, double liter, double value) : Food(value)
   {
   this->type = type;
   this->liter = liter;
   };
   string Liquid::getDescription()
   { 
      return ("Liquid " + type + " - " + to_string(liter).substr(0, to_string(liter).find('.') + 3) + " Litros."); 
   };
   