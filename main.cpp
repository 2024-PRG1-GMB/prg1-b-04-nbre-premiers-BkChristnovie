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
   char restart;                                                        //Variable de boucle du programme
   do {
      unsigned int end_intervale;                                       //La fin de l'interval
      unsigned int col_count_array;                                     //Quantité des nombres premiers inscrits
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
      col_count_array = 0;


      for (unsigned int i = 1; i <= end_intervale; i += 2) {               // Enlever les nombres paire dans les nombres à tester
         for (unsigned int diviseur = 1; diviseur <= i; diviseur += 2) {   // Prendre que des diviseurs impaire
            if (i == diviseur || (float)diviseur > (float)i / 2) {         // Vérifier que le nombre est divisible par 1 et lui meme

               cout << "\t"<< i << " ";

               if (++col_count_array % 5 == 0)                             // Faire la tablulation pour affichage tableau
                  cout << endl;

               break;
            }
            if (i % diviseur == 0 && diviseur != 1)                        //Tester le si le dividant admet notre diseur dans ses diviseurs
               break;

         }

      }
      cout << endl;

      //Boucle pour demander de recommencer
      do {
         cout << "Voulez-vous recommencer [O/N] :" << endl;
         cin >> restart;
      } while (restart != 'O' && restart != 'N');
   }while (restart == 'O');
   return EXIT_SUCCESS;
}
