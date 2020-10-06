#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
  int num ; /* numérateur */
  int den ; /* dénominateur */
} Fraction ;

void addFraction(Fraction f1, Fraction f2);
void subFraction(Fraction f1, Fraction f2);
void mulFraction(Fraction f1, Fraction f2);
void divFraction(Fraction f1, Fraction f2);

/*---- Fonctions supplémentaires ----*/
void forme_reduite_fraction(int *num, int *den);

/*---- Fonctions hors TP ----*/
int pgcd(int a, int b);