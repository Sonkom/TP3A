#include "Fraction.h"


void addFraction(Fraction f1, Fraction f2)
{
  int num1 = f1.num;
  int num2 = f2.num;
  int den1 = f1.den;
  int den2 = f2.den;
  int num_result, den_result;

  num1 = num1 * den2;
  num2 = num2 * den1;

  num_result = num1 + num2;
  den_result = den1 * den2;

  forme_reduite_fraction(&num_result, &den_result);

  printf("Résultat de l'addition des fractions : %d / %d\n",num_result, den_result);
}


void subFraction(Fraction f1, Fraction f2)
{
  int num1 = f1.num;
  int num2 = f2.num;
  int den1 = f1.den;
  int den2 = f2.den;
  int num_result, den_result;

  num1 = num1 * den2;
  num2 = num2 * den1;

  num_result = num1 - num2;
  den_result = den1 * den2;

  forme_reduite_fraction(&num_result, &den_result);

  printf("Résultat de la soustraction des fractions : %d / %d\n",num_result, den_result);
}


void mulFraction(Fraction f1, Fraction f2)
{
  int num_result, den_result;

  num_result = f1.num * f2.num;
  den_result = f1.den * f2.den;

  forme_reduite_fraction(&num_result, &den_result);

  printf("Résultat de la multiplication des fractions : %d / %d\n",num_result, den_result);
}


void divFraction(Fraction f1, Fraction f2)
{
  int num_result, den_result;

  num_result = f1.num * f2.den;
  den_result = f1.den * f2.num;

  forme_reduite_fraction(&num_result, &den_result);

  printf("Résultat de la division des fractions : %d / %d\n",num_result, den_result);
}

void forme_reduite_fraction(int *num, int *den) //Fonction qui fournit directement les formes réduites des fractions
{
  int a = *num;
  int b = *den;
  int div;

  div = pgcd(a,b);
  a = a / div;
  b = b / div;

  *num = a;
  *den = b;
}


int pgcd(int a, int b) // Fonction PGCD crée dans le TP n°1
{
  int ans = 1; //valeur de retour
  int buff1 = 0;
  int buff2 = 0;

  if ((a == 0) && (b != 0)) ans = b;
  else if ((a != 0) && (b == 0)) ans = a;
  else
  {
    buff1 = a%b;
    if (buff1 == 0) ans = b;
    else {
      buff2 = b%buff1;
      while ((buff1 != 0) && (buff2 != 0))
      {
        buff1 = buff1%buff2;
        if (buff1 != 0) buff2 = buff2%buff1;
      }
      if ((buff1 == 0) && (buff2 != 0)) ans = buff2;
      else ans = buff1;
    }
  }
  return ans;
}
