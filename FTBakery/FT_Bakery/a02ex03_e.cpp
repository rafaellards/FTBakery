/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "a02ex03_d.hpp"
#include "a02ex03_e.hpp"

using namespace std;

FilledWafer::FilledWafer(string type, string filling, int units, double value) : Cracker(type, units, value)
   {
   this->filling = filling;
   };
   
string FilledWafer::getDescription()
   { 
   return ("Cracker Recheada com " + filling + " - " + Cracker::getDescription()); 
   };
   
/* fim de arquivo */