#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/* ----------------------------- FONCTIONS -----------------------------*/
void afficherNotes(float *tab, int len);
float minimumNote(float *tab, int len);
float maximumNote(float *tab, int len);
float calculeMoyenne(float *tab, int len);
float calculeVariance(float *tab, int len);
float calculeEcartType(float *tab, int len);
int rechercherValeur(float *tab, int len, float search);

/* ----------------------------- TESTS -----------------------------*/
int test_minimumNote(float *tab_test, int len, float min);
int test_maximumNote(float *tab_test, int len, float max);
int test_calculMoy(float *tab_test, int len, float moy);
int test_calculVar(float *tab_test, int len, float var);
int test_calculEcT(float *tab_test, int len, float omega);
int test_rechercherVal(float *tab_test, int len, float val, int index);
