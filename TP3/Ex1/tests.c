#include "fonctions.h"

int main(void)
{

/*---- INITIALISATION ----*/

  float test1[5] = {12.0, 13.5, 8.5, 14.7, 6.0};
  int rang1_1 = 1; //13.5
  int rang1_2 = -1; //10.5
  float moy1 = 10.94;
  float var1 = 10.4344;
  float ecarT1 = 3.23023219;

  float *test2 = NULL;
  int rang2_1 = -1; //random
  int rang2_2 = -1; //random
  float moy2 = -1;
  float var2 = -1;
  float ecarT2 = -1;

  float test3[1] = {5.0};
  int rang3_1 = 0; //5.0
  int rang3_2 = -1; //6.0
  float moy3 = 5.0;
  float var3 = 0;
  float ecarT3 = 0;

  float test4[6] = {9.99, 9.99, 9.99, 9.99, 9.99, 9.99};
  int rang4_1 = 0; //9.99
  int rang4_2 = 0; //9.99
  float moy4 = 9.99;
  float var4 = 0;
  float ecarT4 = 0;

/*---- DEBUT DES TESTS ----*/

  printf("Test minimumNote() :\n");
  if (test_minimumNote(test1, 5, 6.0)) printf("test 1 : succès\n");
  if (test_minimumNote(test2, 42, -1)) printf("test 2 : succès\n");
  if (test_minimumNote(test3, 1, 5.0)) printf("test 3 : succès\n");
  if (test_minimumNote(test4, 6, 9.99)) printf("test 4 : succès\n");

  printf("\nTest maximumNote()\n");
  if (test_maximumNote(test1, 5, 14.7)) printf("test 1 : succès\n");
  if (test_maximumNote(test2, 42, -1)) printf("test 2 : succès\n");
  if (test_maximumNote(test3, 1, 5.0)) printf("test 3 : succès\n");
  if (test_maximumNote(test4, 6, 9.99)) printf("test 4 : succès\n");

  printf("\nTest calculeMoyenne()\n");
  if (test_calculMoy(test1, 5, moy1)) printf("test 1 : succès\n");
  if (test_calculMoy(test2, 42, moy2)) printf("test 2 : succès\n");
  if (test_calculMoy(test3, 1, moy3)) printf("test 3 : succès\n");
  if (test_calculMoy(test4, 6, moy4)) printf("test 4 : succès\n");

  printf("\nTest calculeVariance()\n");
  if (test_calculVar(test1, 5, var1)) printf("test 1 : succès\n");
  if (test_calculVar(test2, 42, var2)) printf("test 2 : succès\n");
  if (test_calculVar(test3, 1, var3)) printf("test 3 : succès\n");
  if (test_calculVar(test4, 6, var4)) printf("test 4 : succès\n");

  printf("\nTest calculeEcartType()\n");
  if (test_calculEcT(test1, 5, ecarT1)) printf("test 1 : succès\n");
  if (test_calculEcT(test2, 42, ecarT2)) printf("test 2 : succès\n");
  if (test_calculEcT(test3, 1, ecarT3)) printf("test 3 : succès\n");
  if (test_calculEcT(test4, 6, ecarT4)) printf("test 4 : succès\n");

  printf("\nTest rechercherValeur()\n");
  if (test_rechercherVal(test1, 5, 13.5, rang1_1) && test_rechercherVal(test1, 5, 10.5, rang1_2)) printf("test 1 : succès\n");
  if (test_rechercherVal(test2, 42, 42, rang2_1) && test_rechercherVal(test2, 42, 42, rang2_2)) printf("test 2 : succès\n");
  if (test_rechercherVal(test3, 1, 5.0, rang3_1) && test_rechercherVal(test3, 5, 6.0, rang3_2)) printf("test 3 : succès\n");
  if (test_rechercherVal(test4, 6, 9.99, rang4_1) && test_rechercherVal(test4, 5, 9.99, rang4_2)) printf("test 4 : succès\n");


  return 0;
}
