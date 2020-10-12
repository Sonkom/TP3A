/*********************************************************************/
/* Realisation d'une liste chainee dans un tableau                   */
/* ioannis.parissis@grenoble-inp.fr                                  */
/* Sep 2012                                                          */
/*********************************************************************/
#include "listeTableau.h"


int elementLibre(liste l){
  int result = 0;
  int index = 0;

  while(index != -1){
    index = l[index].suivant;
    result++;
  }
  return result;
}

void creerListeVide(liste l){
  int index = 1;
  l->suivant = 0;
  while ((l+index) != NULL) (l+index)->suivant = -1;
}
void insererElement(int x, liste l){
  //initalisation
  int next_index, prev_index;

  //Recherche d'un élément libre, ainsi que le denier élément de la liste
  next_index = elementLibre(l);
  prev_index = l->suivant;
  while (prev_index != 0) prev_index = (l+prev_index)->suivant;

  //Affectation + mise à jour de la liste
  (l+prev_index)->suivant = next_index;
  (l+next_index)->valeur = x;
  (l+next_index)->suivant = 0;
}

void supprimerElement(int x, liste l){
  //initalisation
  int next_index = 0, prev_index = 0, buffer;

  //Recherche de l'élément à supprimer, ainsi que la case suivant l'élément
  for (int index = 0; index < i; index++){
    prev_index = next_index;
    next_index = (l+next_index)->suivant;
  }

  //Mise à jour des indices
  buffer = next_index;
  next_index = (l+next_index)->suivant;
  (l+prev_index)->suivant = next_index;

  //Suppression
  (l+buffer)->suivant = -1;
  /* Nul besoin de faire des modifications pour (l+buffer)->element, quand la case sera à nouveau remplie, l'entier sera écrasé par le nouvel entier
  Seule la mise à jour (à -1) sur la case suivante pour la considérer comme vide est nécessaire*/

}

void afficherListe(liste l){
  int index = l->suivant, print_index = 1;

  do {
    printf("%dème élément de la liste : %d\n",print_index, (l+index)->valeur);
    print_index++;
    index = (l+index)->suivant;
  } while (index != 0)
}
