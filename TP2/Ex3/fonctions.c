#include "fonctions.h"

int quotient(int a, int b)
{
  int ans = 0;
  int reste = 0;

  if ((b <= 0) || (a < b)) ans = -1;
  else {
    reste = a;
    while (reste >= b){
      ans++;
      reste = reste - b;

    }
  }
  return ans;
}

int reste(int a, int b)
{
  unsigned int reste = 0;
  int quot = 0;
  quot = quotient(a,b);
  if (quot == -1) {
    reste = -1;
  }
  else reste = a - quot*b;

  return reste;
}

int valeurAbsolue(int n)
{
//La fonction utilisant uniquement abs() de la librairie stdlib.h, inutile de la tester.
  int result;
  result = abs(n);
  return result;
}

/* Fonction PGCD du TP n°1 utilisé ci dessous */
int pgcd(unsigned int a, unsigned int b)
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

int ppcm(int a, int b)
{
  int result = 1;
  if ((a <= 0) || (b <= 0)) result = -1;
  else result = valeurAbsolue(a*b) / pgcd(a,b);
  return result;
}

int puissanceMB(int x, int n)
{
  int n_temp = n;
  int result = 1;
  int x_temp = x;

  if ((n < 0) || ((x == 0) && (n == 0))) result = -1;
  else {
    /*do {
      n_temp = n_temp/2;
      if ((n_temp*2)%2 != 0) result = x_temp * result;
      x_temp = x_temp * x_temp;
    } while(n_temp != 0);*/
    do {
      n_temp = n_temp/2;
      if ((n_temp*2)%2 != 0) result = x_temp * result;
      x_temp = x_temp * x_temp;
    } while(n_temp != 0);
  }
  return result;
}

int sommeDesImpairs(int d, int f)
{
  int result = 0;
  int d_temp = d;

  if ((d%2 != 0) && (f%2 != 0) && (d <= f))
  {
    while(d_temp <= f)
    {
      result = result + d_temp;
      d_temp = d_temp + 2;
    }
  }
  return result;
}

int estUneDecompositionDe(int d, int f)
{
  int search = 0;
  int somme = 0;

  if ((d%2 != 0) && (f%2 != 0) && (d <= f)){
    somme = sommeDesImpairs(d,f);
    while (search*search*search < somme) search++;
    if (search*search*search != somme) search = -1;
  }
  return search;
}
