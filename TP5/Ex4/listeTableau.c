/*********************************************************************/
/* Realisation d'une liste chainee dans un tableau                   */
/* ioannis.parissis@grenoble-inp.fr                                  */
/* Sep 2012                                                          */
/*********************************************************************/
#include "listeTableau.h"


int elementLibre(liste l){
  int result = 0;
  int index = 0;

  do{
    result++;
    index = (l+result)->suivant;
  }while(index != -1);

  return result;
}

void creerListeVide(liste l){
  int index = 1;
  l->suivant = 0;
  for (int i = 1; i < TAILLEMAX; i++)
  {
    (l+index)->suivant = -1;
    index++;
  }
}
void insererElement(int x, liste l){
  //initalisation
  int next_index, prev_index;

  //Recherche d'un élément libre, ainsi que le denier élément de la liste
  next_index = elementLibre(l);
  prev_index = l->suivant;
  while (((l+prev_index)->suivant != 0) && ((l+(l+prev_index)->suivant)->valeur <= x)) prev_index = (l+prev_index)->suivant;

  //Affectation + mise à jour de la liste
  (l+next_index)->suivant = (l+prev_index)->suivant;
  (l+prev_index)->suivant = next_index;
  (l+next_index)->valeur = x;
}

void supprimerElement(int x, liste l){
  //initalisation
  int prev_index = 0, index = l->suivant;

  //Recherche de l'élément à supprimer, ainsi que la case suivant l'élément
  while (((l+index)->valeur != x) && (index != 0))
  {
    prev_index = index;
    index = (l+index)->suivant;
  }

  if (index == 0) printf("Erreur : Valeur x = %d introuvable\n",x);
  else {
    //Mise à jour des indices
    (l+prev_index)->suivant = (l+index)->suivant;
    (l+index)->suivant = -1;

    /* Nul besoin de faire des modifications pour (l+index)->element, quand la case sera à nouveau remplie, l'entier sera écrasé par le nouvel entier
    Seule la mise à jour (à -1) sur la case suivante pour la considérer comme vide est nécessaire*/

  }
}

void afficherListe(liste l){
  int index = l->suivant, print_index = 1;

  if (index == 0) printf("Liste vide\n");
  else {
    do {
      printf("Élément n°%d de la liste : %d\n",print_index, (l+index)->valeur);
      print_index++;
      index = (l+index)->suivant;
    } while (index != 0);
  }
}
