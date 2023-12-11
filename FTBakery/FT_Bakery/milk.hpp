#ifndef MILK
   #define MILK

#include <string>
#include "liquid.hpp"

using namespace std;

class Milk : public Liquid
   {
   private:
      string type;
      double liter;
      
   public:
      Milk(string, double, double);
      virtual string getDescription();
   };
   
#endif