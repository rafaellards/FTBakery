#ifndef WATER
   #define WATER

#include <string>
#include "liquid.hpp"

using namespace std;

class Water : public Liquid
   {
   private:
      string type;
      double liter;
      
   public:
      Water(string, double, double);
      virtual string getDescription();
   };
   
#endif