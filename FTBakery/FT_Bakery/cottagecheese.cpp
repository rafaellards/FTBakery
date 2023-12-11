
#include <string>
#include "a02ex03_b.hpp"
#include "cottagecheese.hpp"

using namespace std;

CottageCheese::CottageCheese(string type, float weight, double value) : Cheese(type, weight, value)
   {
   this->type = type;
   this->weight = weight;
   };
   string CottageCheese::getDescription()
   { 
      return ("Cottage Cheese " + type + " - " + to_string(weight) + " Kg."); 
   };
   