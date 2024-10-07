/* -----------------------------------------------------------------------------------
Nom du fichier : main.cpp
Auteur(s)      : Kiala binga Christnovie
Date creation  : 06.10.2024
Description    : Ce programme renvoie les nombres premier en colonne dans un intervale donné par l'utilisateur
Remarque(s)    : version 1.0
Compilateur    : Mingw-w64 g++ 11.1.0
----------------------------------------------------------------------------------- */

#include <iostream>
using namespace std;

int main() {
   char restart;
   do {
      unsigned int end_intervale;

      //Introduction du programme
      cout << "Bienvenue sur le listeur des nombres premiers"  << endl
           << " ******************************************* "  << endl
           << "Ce programme vous donne les nombres premiers "
           << "dans un intervalle de choisi entre 2 et 1000 "  << endl;

      //Demande de saisis d'intervale
      do {
         cout << "Entrez une valeur entre [2 - 1000] :" ;
         cin  >> end_intervale;
      } while (end_intervale < 2 || end_intervale > 1000);

      //Calcule des nombres premier et génération d'affichage
      cout << "Voici la liste des nombres premiers  "          << endl;

      for (unsigned int i = 1; i <= end_intervale; i += 2) {
         for (unsigned int diviseur = 1; diviseur <= i; diviseur += 2) {
            if (i == diviseur || (float)diviseur > (float)i / 2) {
               cout << "\t"<< i << "\t";
               break;
            }
            if (i % diviseur == 0 && diviseur != 1) {
               break;
            }
         }
         if (i % 5 == 0) { // Faire la tablulation pour l'array
            cout << endl;
         }
      }
      cout << endl;

      //Boucle pour demander de recommencer
      do {
         cout << "Do you want to restart the program (O/N)?" << endl;
         cin >> restart;
      } while (restart != 'O' && restart != 'N');
   }while (restart == 'O');
   return EXIT_SUCCESS;
}
