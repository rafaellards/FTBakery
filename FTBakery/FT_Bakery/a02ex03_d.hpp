/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef A02EX03_D_H
   #define A02EX03_D_H

#include <string>
#include "a02ex03_b.hpp"

using namespace std;

class Cracker : public Food
   {
   private:
      string type;
      int    units;
      
   public:
      Cracker(string, int, double);
      virtual string getDescription();
   };
   
#endif
   
/* fim de arquivo */