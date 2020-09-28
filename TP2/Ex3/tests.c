#include "tests.h"

void test_quotient(void)
{
  int success = 1;

  //Test des valeurs arbitraires
  if (1) success = 0;

  //Test des cas particulier
  if (quotient(40,6) != quotient(6,40)) success = -1;
  if (quotient(40,-8) != -1) success = -1;
  if ((quotient(20,0) != -1) || (quotient(0,20) != -1)) success = -1;

  if (success == 1) printf("quotient() foncionnelle\n");
  if (success == 0) printf("quotient() non fonctionnelle : ne calcule pas correctement le quotient\n");
  if (success == -1) printf("quotient() non fonctionnelle : problème dans les cas particuliers\n");
}

void test_reste(void)
{
  //reste() dépendant de quotient(), cette dernière doit correctement marché spour que reste() fonctionne.
  int success = 1;

  //Test de valeurs arbitraires

  if (success == 1) printf("reste() foncionnelle\n");
  else printf("reste() non fonctionnelle\n");
}

void test_ppcm(void)
{
  //ppcm() dépend de pgcd(), codé lors du TP1. Cette dernière sera considérée comme fontionnelle.
  int success = 1;

  //Test de valeurs arbitraires

  if (success == 1) printf("ppcm() foncionnelle\n");
  else printf("ppcm() non fonctionnelle\n");

}

void test_puissanceMB(void)
{
  int success = 1;

  //Test de valeurs arbitraires (pas oublié le négatif)


  //Test des cas particuliers
  if (puissanceMB(40,-1) != -1) success = -1;
  if (puissanceMB(8,0) != 1) success = -2;
  if (puissanceMB(0,0) != 1) success = -3;


  if (success == 1) printf("puissanceMB() foncionnelle\n");
  else printf("puissanceMB() non fonctionnelle, code d'erreur : %d\n", -success);
}

void test_sommeDesImpairs(void)
{
  int success = 1;

  //Test de valeurs arbitraires
  

  if (success == 1) printf("sommeDesImpairs() foncionnelle\n");
  else printf("sommeDesImpairs() non fonctionnelle, code d'erreur : %d\n", -success);
}

int main(void) {


  return 0;
}
