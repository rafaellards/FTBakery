/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "a02ex03_b.hpp"
#include "a02ex03_c.hpp"

using namespace std;

Bread::Bread(string type, float weight, double value) : Food(value)
   {
   this->type = type;
   this->weight = weight;
   };
   
string Bread::getDescription()
   { 
   return ("Bread " + type + " - " + to_string(weight) + " Kg."); 
   };
   
/* fim de arquivo */