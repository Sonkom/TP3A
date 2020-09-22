#include <stdio.h>


#ifndef MISEAUPOINT

int pgcd(int a, int b)
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
#endif

#ifdef MISEAUPOINT

int pgcd(int a, int b)
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
	printf("\nValeur courante de b = %d\n", buff2);
	      
        buff1 = buff1%buff2;
        if (buff1 != 0) buff2 = buff2%buff1;
      }
      if ((buff1 == 0) && (buff2 != 0)) ans = buff2;
      else ans = buff1;
    }
  }
  return ans;
}

#endif

// Valeur de tests : a = 154, b = 28 => PGCD = 14;


int main(void) {

  int entier1 = 0;
  int entier2 = 0;
  int result_pgcd = 0;

  printf("Veuillez entrez le 1er entier.\n");
  scanf("%d",&entier1);
  printf("\nVeuillez entrez le 2nd entier.\n");
  scanf("%d",&entier2);

  result_pgcd = pgcd(entier1, entier2);
  printf("\nLe rÃ©sultat est : %d\n",result_pgcd);

  return 0;
}
