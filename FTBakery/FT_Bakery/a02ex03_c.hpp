/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef A02EX03_C_H
   #define A02EX03_C_H

#include <string>
#include "a02ex03_b.hpp"

using namespace std;

class Bread : public Food
   {
   private:
      string type;
      float weight;
      
   public:
      Bread(string, float, double);
      virtual string getDescription();
   };
   
#endif
   
/* fim de arquivo */