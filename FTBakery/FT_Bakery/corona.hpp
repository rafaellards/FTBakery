#ifndef CORONA
   #define CORONA

#include <string>
#include "liquid.hpp"
#include "beer.hpp"

using namespace std;

class Corona : public Beer
   {
   private:
      string type;
      double liter;
      
   public:
      Corona(string, double, double);
      virtual string getDescription();
   };
   
#endif