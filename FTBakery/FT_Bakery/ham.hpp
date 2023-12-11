#ifndef HAM
   #define HAM

#include <string>
#include "a02ex03_b.hpp"

using namespace std;

class Ham : public Food
   {
   private:
      string type;
      float weight;
      
   public:
      Ham(string, float, double);
      virtual string getDescription();
   };
   
#endif