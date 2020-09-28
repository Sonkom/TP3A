#include "tests.h"

void test_quotient(void)
{
  int success = 1;

  //Test des valeurs arbitraires
  if (quotient(40,8) != 5){
    success = 0;
    printf("quotient(40,8) = %d\n", quotient(40,8));
  }
  if (quotient(40,6) != 6){
    success = 0;
    printf("quotient(40,6) = %d\n", quotient(40,6));
  }
  if (quotient(167,29) != 5){
    success = 0;
    printf("quotient(167,29) = %d\n", quotient(167,29));
  }
  if (quotient(69,67) != 1){
    success = 0;
    printf("quotient(69,67) = %d\n", quotient(69,67));
  }

  if (success == 0) printf("quotient() non fonctionnelle : ne calcule pas correctement le quotient\n");


  //Test des cas particulier
  if (quotient(6,40) != -1){
    success = -1;
    printf("quotient(6,40) = %d\n", quotient(6,40));
  }
  if (quotient(40,-8) != -1){
    success = -1;
    printf("quotient(40,-8) = %d\n", quotient(40,-8));
  }
  if ((quotient(20,0) != -1) || (quotient(0,20) != -1)){
    success = -1;
    printf("quotient(20,0) = %d et quotient(0,20) = %d\n", quotient(20,0), quotient(0,20));
  }

  if (success == -1) printf("quotient() non fonctionnelle : problème dans les cas particuliers\n");


  if (success == 1) printf("quotient() foncionnelle\n");
}

void test_reste(void)
{
  //reste() dépendant de quotient(), cette dernière doit correctement marché spour que reste() fonctionne.
  int success = 1;

  //Test de valeurs arbitraires
  if (reste(40,8) != 0){
    success = 0;
    printf("reste(40,8) = %d\n", reste(40,8));
  }
  if (reste(40,6) != 4){
    success = 0;
    printf("reste(40,6) = %d\n", reste(40,6));
  }
  if (reste(167,29) != 22){
    success = 0;
    printf("reste(167,29) = %d\n", reste(167,29));
  }
  if (reste(69,67) != 2){
    success = 0;
    printf("reste(69,67) = %d\n", reste(69,67));
  }

  if (success == 1) printf("reste() foncionnelle\n");
  else printf("reste() non fonctionnelle\n");
}

void test_ppcm(void)
{
  //ppcm() dépend de pgcd(), codé lors du TP1. Cette dernière sera considérée comme fontionnelle.
  int success = 1;

  //Test de valeurs arbitraires
  if (ppcm(3,8) != 24){
    success = 0;
    printf("ppcm(3,8) = %d\n", ppcm(3,8));
  }
  if (ppcm(4,5) != 20){
    success = 0;
    printf("ppcm(4,5) = %d\n", ppcm(4,5));
  }
  if (ppcm(20,8) != 40){
    success = 0;
    printf("ppcm(20,8) = %d\n", ppcm(20,8));
  }
  if (ppcm(1,2) != 2){
    success = 0;
    printf("ppcm(1,2) = %d\n", ppcm(1,2));
  }

  if (success == 0) printf("ppcm() non fonctionnelle, ne calcule pas correctement\n");


  //Test de cas particulier
  if (ppcm(3,8) != ppcm(8,3)){
    success = -1;
    printf("ppcm(3,8) != ppcm(8,3)\n");
  }
  if (ppcm(-2,8) != -1){
    success = -1;
    printf("ppcm(3,8) = %d\n", ppcm(-2,8));
  }
  if (ppcm(-6,-4) != -1){
    success = -1;
    printf("ppcm(-6,-4) = %d\n", ppcm(-6,-4));
  }

  if (success == -1) printf("ppcm() non fonctionnelle, cas particuliers pas traités correctement\n");


  if (success == 1) printf("ppcm() foncionnelle\n");

}

void test_puissanceMB(void)
{
  int success = 1;

  //Test des valeurs arbitraires
  if (puissanceMB(8,4) != 4096){
    success = 0;
    printf("puissanceMB(8,4) = %d\n", puissanceMB(8,4));
  }
  if (puissanceMB(6,6) != 46656){
    success = 0;
    printf("puissanceMB(6,6) = %d\n", puissanceMB(6,6));
  }
  if (puissanceMB(-2,3) != -8){
    success = 0;
    printf("puissanceMB(-2,3) = %d\n", puissanceMB(-2,3));
  }
  if (puissanceMB(-8,4) != 4096){
    success = 0;
    printf("puissanceMB(-8,4) = %d\n", puissanceMB(-8,4));
  }

  if (success == 0) printf("puissanceMB() non fonctionnelle, ne calcule pas correctement\n");


  //Test des cas particuliers
  if (puissanceMB(40,-1) != -1){
    success = -1;
    printf("puissanceMB(40,-1) = %d\n",puissanceMB(40,-1));
  }
  if (puissanceMB(8,0) != 1){
    success = -1;
    printf("puissanceMB(8,0) = %d\n",puissanceMB(8,0));
  }
  if (puissanceMB(0,0) != -1){
    success = -1;
    printf("puissanceMB(0,0) = %d\n",puissanceMB(0,0));
  }

  if (success == -1) printf("puissanceMB() non fonctionnelle, cas particuliers non traités correctement\n");


  if (success == 1) printf("puissanceMB() foncionnelle\n");
}

void test_sommeDesImpairs(void)
{
  int success = 1;

  //Test de valeurs arbitraires


  //Test de cas particuliers
  if (sommeDesImpairs(2,4) != 0) success = -1;
  if (sommeDesImpairs(0,2) != 0) success = -1;
  if (sommeDesImpairs(2,0) != 0) success = -1;
  if (sommeDesImpairs(9,3) != 0) success = -1;

  if (success == 1) printf("sommeDesImpairs() foncionnelle\n");
  else printf("sommeDesImpairs() non fonctionnelle");
}

void test_estUneDecompositionDe(void)
{
  int success = 1;

  //Test de valeurs arbitraires

  if (success == 1) printf("test_estUneDecompositionDe() foncionnelle\n");
  else printf("test_estUneDecompositionDe() non fonctionnelle\n");
}

int main(void) {

  printf("%d\n",0/2);
  test_quotient();
  test_reste();
  test_ppcm();
  test_puissanceMB();
  test_sommeDesImpairs();
  test_estUneDecompositionDe();

  return 0;
}
