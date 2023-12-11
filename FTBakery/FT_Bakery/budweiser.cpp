
#include <string>
#include "liquid.hpp" //Liquido
#include "beer.hpp"
#include "budweiser.hpp"

using namespace std;

Budweiser::Budweiser(string type, double liter, double value) : Beer(type, liter, value)
   {
   this->type = type;
   this->liter = liter;
   };
   string Budweiser::getDescription()
   { 
      return ("Budweiser " + type + " - " +  to_string(liter).substr(0, to_string(liter).find('.') + 3) + " Litros."); 
   };
   