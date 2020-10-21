#include <stdio.h>
#include <stdlib.h>

void swap_int(int *a, int *b) //Pour plus de clarté, une fonction dédié à l'inversage d'éléments sera dédiés
{
    int c = *a;
    *a = *b;
    *b = c;
}

int algo_NetherlandsFlag(int *tab, int len) //tab = tableau, len = longueur du tableau (on la supposera connue lors de l'appel de la fonction)
{
  int indexInf3 = 0, index36 = 0, indexSup6 = len-1;
  int nb_swap = 0;

  while (index36 <= indexSup6) {
    if ((*(tab+index36) > 3) && (*(tab+index36) <= 6)) index36++;
    else if (*(tab+index36) <= 3) {
      swap_int((tab+index36),(tab+indexInf3));
      index36++;
      indexInf3++;
      nb_swap++;
    }
    else {
      swap_int((tab+index36),(tab+indexSup6));
      indexSup6--;
      nb_swap++;
    }
  }
  return nb_swap;
}


int main(int argc, char const *argv[])
{
  int tab[20] = {1,0,9,5,6,4,7,2,3,6,8,5,2,1,3,6,7,9,1,3};
  int nb_swap = 0;

  printf("Tableau non trié :\n");
  for (int i = 0; i < 20; i++) printf("%d ",*(tab+i));
  printf("\n\n");

  nb_swap = algo_NetherlandsFlag(tab,20);

  printf("Tableau trié :\n");
  for (int i = 0; i < 20; i++) printf("%d ",*(tab+i));
  printf("\n");

  printf("Nombre d'échange = %d\n\n",nb_swap);

  return 0;
}
