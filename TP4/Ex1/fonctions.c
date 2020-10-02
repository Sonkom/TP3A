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
  return 1;
}
