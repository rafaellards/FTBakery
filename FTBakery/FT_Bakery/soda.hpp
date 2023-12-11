#ifndef SODA
   #define SODA

#include <string>
#include "liquid.hpp"

using namespace std;

class Soda : public Liquid
   {
   private:
      string type;
      double liter;
      
   public:
      Soda(string, double, double);
      virtual string getDescription();
   };
   
#endif