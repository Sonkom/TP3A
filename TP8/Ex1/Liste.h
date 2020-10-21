#include <stdio.h>
#include <stdlib.h>

typedef struct element element;

struct element {
  int valeur ; /* valeur de l’élément */
  element* suivant ; /* adresse du successeur */
};

typedef element* liste;

/*----- FONCTIONS -----*/

liste creer_element(void);
void afficher_liste(liste *l);
void inserer_element(int x, liste *l);
void supprimer_element(int i, liste *l);
