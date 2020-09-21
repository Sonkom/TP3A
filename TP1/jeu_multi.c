#include <stdio.h>


void JeuMulti(void) {

  int table = 0;
  int given_ans = 0;
  char success = 1;

  printf("Numéro de la table de multiplication ?\n");
  while ((table < 2) || (table > 9)){
    scanf("%d",&table);
    if ((table < 2) || (table > 9)) printf("Ce n'est pas un nombre entre 2 et 9 ! On réessaie...\n");
  }

  for (int i = 1; i <= 9; i++){
    printf("%d x %d = ?\n",i, table);
    scanf("%d",&given_ans);

    if (i * table != given_ans) {
      printf("Aïe, c'est dommage ! La réponse était : %d\n",i * table);
      success = 0;
    }
  }

  if (success == 1) printf("FÉLICITATIONS ! Tu as eu tout juste !\n");
  else printf("Dommage, rentraîne toi sur la table de multiplication de %d !\n",table);

}

void JeuMultiPoints(void){

  int table = 0;
  int given_ans = 0;
  char mistakes = 0;
  char success = 1;

  printf("Numéro de la table de multiplication ?\n");
  while ((table < 2) || (table > 9)){
    scanf("%d",&table);
    if ((table < 2) || (table > 9)) printf("Ce n'est pas un nombre entre 2 et 9 ! On réessaie...\n");
  }

  for (int i = 1; i <= 9; i++){
    printf("%d x %d = ?\n",i, table);
    scanf("%d",&given_ans);

    if (i * table != given_ans) {
      mistakes++;
      success = 0;
    }
  }

  if (success == 1) printf("FÉLICITATIONS ! Tu as eu tout juste !\n");
  else printf("Dommage, rentraîne toi sur la table de multiplication de %d !\nTu as eu %d fautes.\n",table, mistakes);

}

/* Pour tester ces procédures, nous avons tout simplement jouer au jeu nous mêmes, connaissant nos tables de multiplication.
Nous avons aussi tester le cas où il y aurait des erreurs faites, pour voir si le message d'encouragement s'affichait,
ainsi que le message d'erreur lors de la demande de la table. */

int main() {

  JeuMulti();
  JeuMultiPoints();

  return 0;
}
