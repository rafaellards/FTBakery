/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef A02EX03_E_H
   #define A02EX03_E_H

#include <string>
#include "a02ex03_d.hpp"

using namespace std;

class FilledWafer : public Cracker
   {
   private:
      string filling;
      
   public:
      FilledWafer(string, string, int, double);
      virtual string getDescription();
   };
   
#endif
   
/* fim de arquivo */