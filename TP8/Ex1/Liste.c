#include "Liste.h"

liste creer_element(void) {
  liste e = (element *)malloc(sizeof(element));
  return e;
}

void afficher_liste(liste *l) {
  liste list = *l;

  printf("Affichage de la liste :\n");
  while(list != NULL) {
    printf("%d ",list->valeur);
    list = list->suivant;
  }
  printf("\n");
}

void inserer_element(int x, liste *l) {
  liste list = *l, buffer = NULL;
  liste insert = creer_element();

  while ((list != NULL) && (x > list->valeur)){
    buffer = list;
    list = list->suivant;
  }

  insert->valeur = x;
  insert->suivant = list;
  if (buffer == NULL) *l = insert;
  else buffer->suivant = insert;
}

void supprimer_element(int i, liste *l) //On supprimera le i-ème élément, et non l'élément de valeur i
{
  liste list = *l, buffer = NULL;
  int index = 1;

  while ((index < i) && (list != NULL)) {
    buffer = list;
    list = list->suivant;
    index++;
  }

  if (list != NULL) {
    if (index > 1) buffer->suivant = list->suivant;
    else *l = list->suivant;
    free(list);
  }
  else printf("Erreur : Index trop élevé\n");
}
