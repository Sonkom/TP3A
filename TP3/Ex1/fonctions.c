#include "fonctions.h"

// tab = tableau de notes ; len = taille du tableau (= nombre d'éléments du tableau)

/* ----------------------------- FONCTIONS -----------------------------*/

void afficherNotes(float *tab, int len)
{
  if (tab != NULL) for (int i = 0; i < len; i++) printf("Notes n° %d = %f\n", i,tab[i]);
}

float minimumNote(float *tab, int len)
{
  float result = 0;

  if (tab == NULL) result = -1;
  else {
    result = tab[0];
    for (int i = 1; i < len; i++)
      if (result > tab[i]) result = tab[i];
  }
  return result;
}

float maximumNote(float *tab, int len)
{
  float result = 0;

  if (tab == NULL) result = -1;
  else {
    result = tab[0];
    for (int i = 1; i < len; i++)
      if (result < tab[i]) result = tab[i];
  }
  return result;
}

float calculeMoyenne(float *tab, int len)
{
  float result = 0;

  if (tab == NULL) result = -1;
  else {
    for (int i = 0; i < len; i++)
    {
      result += tab[i];
    //printf("%f\n",result);
    }
    result = (result / (float)len);
  }
//  printf("moyenne = %f\n",result);

  return result;
}

float calculeVariance(float *tab, int len)
{
  float moy;
  float buffer;
  float result = 0;

  moy = calculeMoyenne(tab, len);

  if (moy == -1) result = -1;
  else {
    for (int i = 0; i < len; i++)
    {
      buffer = tab[i] - moy;
      result += powf(buffer,2);
    }
    result = (result / len);
  }
  return result;
}

float calculeEcartType(float *tab, int len)
{
  float result;

  result = calculeVariance(tab,len);

  if (result != -1) result = sqrtf(result);
  return result;
}

int rechercherValeur(float *tab, int len, float search)
{
  int result = 0;

  if (tab == NULL) result = -1;
  else {
    while ((tab[result] != search) && (result < len)) result++;
    if (result >= len) result = -1;
  }
  return result;
}


/* ----------------------------- TESTS -----------------------------*/

int test_minimumNote(float *tab_test, int len, float min)
{
  int success = 1;
  float test;

  test = minimumNote(tab_test, len);
  if (test != min) success = 0;

  return success;
}

int test_maximumNote(float *tab_test, int len, float max)
{
  int success = 1;
  float test;

  test = maximumNote(tab_test, len);
  if (test != max) success = 0;

  return success;
}

int test_calculMoy(float *tab_test, int len, float moy)
{
  int success = 1;
  float test, verif;

  test = calculeMoyenne(tab_test, len);

/* Cette vérification est présente dû à un problème de calcul de la moyenne : le calcul ne donnera pas une valeur exacte mais ue valeur approchée.
  Le calcul de l'erreur nous donnera une approximation de cette erreur. S'il est inférieur à 0.1%, nous considérerons les valeurs égales.*/
  verif = (abs(moy - test) / moy);
  if (verif > 0.0001) success = 0;

  return success;
}

int test_calculVar(float *tab_test, int len, float var)
{
  int success = 1;
  float test, verif;

  test = calculeVariance(tab_test, len);

  /* Cette vérification est présente dû à un problème de calcul de la variance : le calcul ne donnera pas une valeur exacte mais ue valeur approchée.
    Le calcul de l'erreur nous donnera une approximation de cette erreur. S'il est inférieur à 0.1%, nous considérerons les valeurs égales.*/
    verif = (abs(var - test) / var);
    if (verif > 0.0001) success = 0;

  return success;
}

int test_calculEcT(float *tab_test, int len, float omega)
{
  int success = 1;
  float test, verif;

  test = calculeEcartType(tab_test, len);

  /* Cette vérification est présente dû à un problème de calcul de l'écart-type : le calcul ne donnera pas une valeur exacte mais ue valeur approchée.
    Le calcul de l'erreur nous donnera une approximation de cette erreur. S'il est inférieur à 0.1%, nous considérerons les valeurs égales.*/
    verif = (abs(omega - test) / omega);
    if (verif > 0.0001) success = 0;

  return success;
}

int test_rechercherVal(float *tab_test, int len, float val, int index)
{
  int success = 1;
  int test;

  test = rechercherValeur(tab_test, len, val);
  if (test != index) success = 0;

  return success;
}

/* ----------------------------- OPTIONNELLE -----------------------------*/

void histogrammeHorizontal(float *tab, int len)
{
  int histo[10] = {0,0,0,0,0,0,0,0,0,0}; //Tableau contenant le nombre d'étoiles pour un intervalle de notes.
  int index = 1;

  if (tab != NULL){
    for (int i = 0; i < len; i++)
    {
      while ((2*index <= tab[i]) && (index <= 10)) index++;
      histo[index-1]++;
      index = 1;
    }
  }

  for (int j = 0; j < 10; j++)
  {
    printf("[ %d ; %d ] :  ",2*j, 2*j+2);
    while (histo[j] != 0)
    {
      printf("*  ");
      histo[j]--;
    }
    printf("\n");
  }
  printf("\n\n");
}

void histogrammeVertical(float *tab, int len)
{
  int histo[10] = {0,0,0,0,0,0,0,0,0,0};  //Tableau contenant le nombre d'étoiles pour un intervalle de notes.
  int index = 1;
  int max_histo = 0; //Le nombre maximal d'étoiles pour un intervalle de valeurs.

  if (tab != NULL){
    for (int i = 0; i < len; i++)
    {
      while ((2*index <= tab[i]) && (index <= 10)) index++;
      histo[index-1]++;
      if (histo[index-1] > max_histo) max_histo = histo[index-1];
      index = 1;
    }
  }

  //Décrementer max_histo dés que une ligne d'étoiles a été crée.
  //
  while (max_histo > 0)
  {
    for (int j = 0; j < 5; j++)
    {
      if (histo[j] < max_histo) printf("         ");
      else printf("    *    ");
    }
    printf(" "); ///Pour aligner les étoiles sur les ";"
    for (int j = 6; j < 10; j++)
    {
      if (histo[j] < max_histo) printf("           ");
      else printf("     *     ");
    }

    max_histo--;
    printf("\n");
  }
  for (int k = 0; k < 10; k++) printf("[ %d ; %d ]",2*k, 2*k+2);
  printf("\n");
}
