/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "a02ex03_b.hpp"
#include "a02ex03_d.hpp"

using namespace std;

Cracker::Cracker(string type, int units, double value) : Food(value)
   {
   this->type     = type;
   this->units = units;
   };
   
string Cracker::getDescription()
   { 
   return ("Cracker " + type + " - " + to_string(units) + " un/package."); 
   };
   
/* fim de arquivo */