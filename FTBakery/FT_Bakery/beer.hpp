#ifndef BEER
   #define BEER

#include <string>
#include "liquid.hpp"

using namespace std;

class Beer : public Liquid
   {
   private:
      string type;
      double liter;
      
   public:
      Beer(string, double, double);
      virtual string getDescription();
   };
   
#endif