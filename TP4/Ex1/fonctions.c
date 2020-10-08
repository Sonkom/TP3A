#include "fonctions.h"

int lireDonnees(char nomFichier[], int tab[])
{
  int buff;
  int index = 0;
  FILE *fichier;
  int len = 0;

    fichier = fopen(nomFichier, "r");
    if(fichier == NULL) {
      perror("Probleme d'ouverture fichier");
      exit(1);
    }

  while(!feof(fichier))
  {
    fscanf(fichier, "%d", &buff);
    tab[index] = buff;
    index++;
    len++;
  }
  len--; /*Un problme a lieu lors de la détection de la fin du fichier (feof()) : le dernier int se lit 2 fois.
          Après discussion avec l'intervenant de TP, nous avons décidé pour cette solution : len--*/ 
  fclose(fichier);
  return len;
}

void afficherTableau (int tab[], int nb)
{
  for (int i = 0; i < nb; i++) printf("%d  ",tab[i]);
  printf("\n");
}

void swap_int(int *a, int *b) //Pour plus de clarté, une fonction dédié à l'inversage d'éléments sera dédiés
{
    int c = *a;
    *a = *b;
    *b = c;
}

void triABulles(int tab[], int nb)
{
  for(int i = 0; i < nb-1; i++)
    for (int j = 0; j < nb-1; j++)
      if (tab[j] > tab[j+1]) swap_int((tab+j), (tab+j+1));
}

void enregistrerDonnees(char nomFichier[], int tab[], int nb)
{
  FILE *fichier;

  fichier = fopen(nomFichier, "w");
  if(fichier == NULL) {
    perror("Probleme d'ouverture fichier");
    exit(1);
  }

  for (int index = 0; index < nb; index++)
    fprintf(fichier, "%d ",tab[index]);

  fclose(fichier);
}
