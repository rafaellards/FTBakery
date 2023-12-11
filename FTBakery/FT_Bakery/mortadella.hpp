#ifndef MORTADELLA
   #define MORTADELLA

#include <string>
#include "a02ex03_b.hpp"

using namespace std;

class Mortadella : public Food
   {
   private:
      string type;
      float weight;
      
   public:
      Mortadella(string, float, double);
      virtual string getDescription();
   };
   
#endif