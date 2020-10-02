#include "fonctions.h"

int main(int argc, char *argv[]) {

  char *entree;
  char *sortie;
  int tab[MAX];
  int len;

  if (argc <= 2) printf("Nombre d'arguments insufisants\nVeuillez entrez d'abord le nom du fichier en entrée et ensuite en sortie (sous la forme ./Test entree sortie)\n");
  else {
    printf("Entrée = %s\n",argv[argc-2]);
    printf("Sortie = %s\n",argv[argc-1]);

    entree = argv[argc-2];
    sortie = argv[argc-1];

    len = lireDonnees(entree, tab);
    afficherTableau(tab, len);
    triABulles(tab, len);
    afficherTableau(tab, len);
    enregistrerDonnees(sortie, tab, len);

  }

  return 0;
}
