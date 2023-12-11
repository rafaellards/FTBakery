
#include <string>
#include "a02ex03_b.hpp"
#include "mortadella.hpp"

using namespace std;

Mortadella::Mortadella(string type, float weight, double value) : Food(value)
   {
   this->type = type;
   this->weight = weight;
   };
   string Mortadella::getDescription()
   { 
      return ("Mortadella " + type + " - " + to_string(weight) + " Kg."); 
   };
   
/* fim de arquivo */