#include "Liste.h"

int main(int argc, char const *argv[]) {
  liste l = NULL;

  printf("Testons les fonctionnalités suivantes :\n- Insertion\n- Suppression Tête\n- Suppression Milieu\n- Suppression Queue\n- Vérification du bon tri du tableau\n\n");

  printf("Insertion :\n");
  inserer_element(1, &l);
  inserer_element(2, &l);
  inserer_element(31, &l);
  inserer_element(5, &l);
  inserer_element(128, &l);
  inserer_element(17, &l);
  inserer_element(69, &l);
  inserer_element(42, &l);
  inserer_element(3, &l);

  printf("Résultat attendu :\n1 2 3 5 17 31 42 69 128\n");
  afficher_liste(&l);

  printf("\nSuppression Tête\n");
  supprimer_element(1, &l);
  supprimer_element(1, &l);

  printf("Résultat attendu :\n3 5 17 31 42 69 128\n");
  afficher_liste(&l);

  printf("\nSuppression Queue\n");
  supprimer_element(7, &l);
  supprimer_element(6, &l);

  printf("Résultat attendu :\n3 5 17 31 42\n");
  afficher_liste(&l);

  printf("\nSuppression Milieu\n");
  supprimer_element(3, &l);
  supprimer_element(3, &l);

  printf("Résultat attendu :\n3 5 42\n");
  afficher_liste(&l);


  return 0;
}
