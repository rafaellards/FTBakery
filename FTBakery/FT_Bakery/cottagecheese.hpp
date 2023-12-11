#ifndef COTTAGECHEESE
   #define COTTAGECHEESE

#include <string>
#include "a02ex03_b.hpp"
#include "cheese.hpp"

using namespace std;

class CottageCheese : public Cheese
   {
   private:
      string type;
      float weight;
      
   public:
      CottageCheese(string, float, double);
      virtual string getDescription();
   };
   
#endif