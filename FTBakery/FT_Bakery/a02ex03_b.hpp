/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef A02EX03_B_H
   #define A02EX03_B_H

#include <string>

using namespace std;

class Food
   {
   protected:
      double value;
      
   public:
      Food(double);
      virtual double getValue();

      virtual string getDescription() = 0;
   };
   
#endif
   
/* fim de arquivo */