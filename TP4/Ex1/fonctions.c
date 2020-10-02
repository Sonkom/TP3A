#include "fonctions.h"

int lireDonnees(char nomFichier[], int tab[])
{
  int buff = 0, index = 0;
  FILE *fichier;
  int success = 0;

    fichier = fopen(nomFichier, "r");
    if(fichier == NULL) {
      perror("Probleme ouverture fichier monFichier.txt");
      exit(1);
    }

  while(!feof(fichier))
  {
    fscanf(fichier, "%d", &buff);
    tab[index] = buff;
    index++;
    success++;
  }
  fclose(fichier);
  return success;
}

void afficherTableau (int tab[], int nb)
{
  for (int i = 0; i < nb; i++) printf("tab[%d] = %d\n",i, tab[i]);
}

void swap_int(int *a, int *b) //Pour plus de clarté, une fonction dédié à l'inversage d'éléments sera dédiés
{
    int c = *a;
    *a = *b;
    *b = c;
}

void triABulles(int tab[], int nb)
{
  for (int i = 0; i < nb; i++)
    for (int j = nb - i; j > 0; j++)
      if (tab[j] < tab[j-1]) swap((tab+j), (tab+j-1));
}

void enregistrerDonnees(char nomFichier[], int tab[], int nb)
{
  FILE *fichier;

  fichier = fopen(nomFichier, "w");
  if(fichier == NULL) {
    perror("Probleme ouverture fichier monFichier.txt");
    exit(1);
  }

  for (int index = 0; index < nb; index++)
    fprintf(fichier, "%d ",tab[index]);

  fclose(fichier);
  return 1;

}
