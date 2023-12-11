#ifndef SKOL
   #define SKOL

#include <string>
#include "liquid.hpp" //Liquido
#include "beer.hpp"

using namespace std;

class Skol : public Beer
   {
   private:
      string type;
      double liter;
      
   public:
      Skol(string, double, double);
      virtual string getDescription();
   };
   
#endif