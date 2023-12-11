
#include <string>
#include "a02ex03_b.hpp"
#include "ham.hpp"

using namespace std;

Ham::Ham(string type, float weight, double value) : Food(value)
   {
   this->type = type;
   this->weight = weight;
   };
   string Ham::getDescription()
   { 
      return ("Ham " + type + " - " + to_string(weight) + " Kg."); 
   };
   
/* fim de arquivo */