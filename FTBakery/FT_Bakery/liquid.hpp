#ifndef LIQUID
   #define LIQUID

#include <string>
#include "a02ex03_b.hpp"

using namespace std;

class Liquid : public Food
   {
   private:
      string type;
      double liter;
      
   public:
      Liquid(string, double, double);
      virtual string getDescription();
   };
   
#endif