#ifndef BUDWEISER
   #define BUDWEISER

#include <string>
#include "liquid.hpp"
#include "beer.hpp"

using namespace std;

class Budweiser : public Beer
   {
   private:
      string type;
      double liter;
      
   public:
      Budweiser(string, double, double);
      virtual string getDescription();
   };
   
#endif