#ifndef HEINEKEN
   #define HEINEKEN

#include <string>
#include "liquid.hpp"
#include "beer.hpp"

using namespace std;

class Heineken : public Beer
   {
   private:
      string type;
      double liter;
      
   public:
      Heineken(string, double, double);
      virtual string getDescription();
   };
   
#endif