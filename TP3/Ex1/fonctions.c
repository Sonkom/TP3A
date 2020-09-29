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
  float result = tab[0];

  if (tab == NULL) result = -1;
  else {
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
    for (int i = 0; i < len; i++) result += tab[i];
    result = (result / len);
  }

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
  float test;

  test = calculeMoyenne(tab_test, len);
  if (test != moy) success = 0;

  return success;
}

int test_calculVar(float *tab_test, int len, float var)
{
  int success = 1;
  float test;

  test = calculeVariance(tab_test, len);
  if (test != var) success = 0;

  return success;
}

int test_calculEcT(float *tab_test, int len, float omega)
{
  int success = 1;
  float test;

  test = calculeEcartType(tab_test, len);
  if (test != omega) success = 0;

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
