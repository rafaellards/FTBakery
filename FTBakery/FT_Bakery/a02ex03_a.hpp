/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef A02EX03_A_H
   #define A02EX03_A_H

#include <string>
#include <vector>

using namespace std;

class Menu
   {
   private:
      string title;
      vector<string> options;

   public:
      Menu(string title, vector<string> options);
      const virtual int getChoice();
   };
   
#endif
   
/* fim de arquivo */