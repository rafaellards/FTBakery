#include <string>
#include "a02ex03_b.hpp"
#include "cheese.hpp"


using namespace std;

Cheese::Cheese(string type, float weight, double value) : Food(value)
   {
   this->type = type;
   this->weight = weight;
   };
   
string Cheese::getDescription()
   { 
   return ("Cheese " + type + " - " + to_string(weight) + " Kg."); 
   };
   