
#include "chaine.h"

int main() {
  printf("%d\n", monStrlen(""));
  printf("%d\n", monStrlen("test"));

  char src[] = "test";
  char dest[monStrlen(src)+1];
  monStrcpy(dest, src);
  printf("%s et %s\n", dest , src);

  printf("La chaine %s\n",src);
  affichageEnHexa(src);
  affichageEnDecimal(src);

  char minuscule[] = "minuscule c'est cool";
  char majuscule[monStrlen(minuscule)+1];
  mettreEnMajuscule(majuscule, minuscule);
  printf("\"%s\" est transformé en \"%s\"\n",minuscule,majuscule);

  char majuscule1[] = "MAJUSCULE C'EST COOL";
  char minuscule1[monStrlen(majuscule1)+1];
  mettreEnMinuscule(minuscule1, majuscule1);
  printf("\"%s\" est transformé en \"%s\"\n",majuscule1,minuscule1);

  char majmin[] = "MAJUSCULE ET minuscule C'EST cool";
  char minmaj[monStrlen(majmin)+1];
  transformerMinMaj(minmaj, majmin);
  printf("\"%s\" est transformé en \"%s\"\n",majmin,minmaj);

  char recherche[] = "Cherche cherche, tu trouveras";
  printf("Dans : \"%s\", le premier 'r' :\nEn partant de la gauche : %d\nEn partant de la droite : %d\n",recherche, rechercherCaractereG(recherche, 'r'),rechercherCaractereD(recherche, 'r'));
  if( rechercherCaractereG(recherche, 'w') == -1){
    printf("Dans : \"%s\", il n'y a pas de 'w', code : %d\n", recherche, rechercherCaractereG(recherche, 'w'));
  }

  if(estPalindrome("kayak", 0, monStrlen("kayak")-1)) printf("\"kayak\" est un palindrome\n");
  if(!estPalindrome("blabla", 0, monStrlen("blabla")-1)) printf("\"blabla\" n'est pas un palindrome\n");
  if(estPalindrome("eluparcettecrapule", 0, monStrlen("eluparcettecrapule")-1)) printf("\"eluparcettecrapule\" est un palindrome\n");

  printf("%d  %d  %d  %d\n", comparerChaine("toto","toto"),comparerChaine("toto","titi"), comparerChaine("titi","toto"), comparerChaine("tototatitutu","toto"));

  printf("%d\n",valeurDecimale("2020"));
}
