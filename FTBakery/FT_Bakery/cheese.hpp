#ifndef CHEESE
   #define CHEESE

#include <string>
#include "a02ex03_b.hpp"

using namespace std;

class Cheese : public Food
   {
   private:
      string type;
      float weight;
      
   public:
      Cheese(string, float, double);
      virtual string getDescription();
   };
   
#endif