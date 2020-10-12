
#include "chaine.h"

int main() {
  printf("Taille de la chaine vide : %d\n", monStrlen(""));
  printf("Taille de \"test\" : %d\n\n", monStrlen("test"));

  char src[] = "test";
  char dest[monStrlen(src)+1];
  monStrcpy(dest, src);
  printf("\"%s\" est bien une copie de \"%s\"\n\n", dest , src);

  printf("La chaine \"%s\" en hexadécimal et décimal :\n",src);
  affichageEnHexa(src);
  affichageEnDecimal(src);
  printf("\n");

  char minuscule[] = "minuscule c'est cool";
  char majuscule[monStrlen(minuscule)+1];
  mettreEnMajuscule(majuscule, minuscule);
  printf("\"%s\" est transformé en \"%s\"\n\n",minuscule,majuscule);

  char majuscule1[] = "MAJUSCULE C'EST COOL";
  char minuscule1[monStrlen(majuscule1)+1];
  mettreEnMinuscule(minuscule1, majuscule1);
  printf("\"%s\" est transformé en \"%s\"\n\n",majuscule1,minuscule1);

  char majmin[] = "MAJUSCULE ET minuscule C'EST cool";
  char minmaj[monStrlen(majmin)+1];
  transformerMinMaj(minmaj, majmin);
  printf("\"%s\" est transformé en \"%s\"\n\n",majmin,minmaj);

  char recherche[] = "Cherche cherche, tu trouveras";
  printf("Dans : \"%s\", le premier 'r' :\nDe gauche à droite : %d\nDe droite à gauche : %d\n",recherche, rechercherCaractereG(recherche, 'r'),rechercherCaractereD(recherche, 'r'));
  if( rechercherCaractereG(recherche, 'w') == -1){
    printf("Dans : \"%s\", il n'y a pas de 'w', code : %d\n\n", recherche, rechercherCaractereG(recherche, 'w'));
  }

  if(estPalindrome("kayak", 0, monStrlen("kayak")-1)) printf("\"kayak\" est un palindrome\n");
  if(!estPalindrome("blabla", 0, monStrlen("blabla")-1)) printf("\"blabla\" n'est pas un palindrome\n");
  if(estPalindrome("eluparcettecrapule", 0, monStrlen("eluparcettecrapule")-1)) printf("\"eluparcettecrapule\" est un palindrome\n\n");

  char chaine1[] = "toto", chaine2[] = "toto", chaine3[] = "titi", chaine4[] = "tototatitutu";
  if(comparerChaine(chaine1,chaine2) == 0) printf("\"%s\" et \"%s\" sont égales : code %d\n", chaine1, chaine2, comparerChaine(chaine1,chaine2));
  if(comparerChaine(chaine1, chaine3) == 1) printf("\"%s\" est supérieure à \"%s\" : code %d\n", chaine1, chaine3, comparerChaine(chaine1,chaine3));
  if(comparerChaine(chaine1, chaine4) == -1) printf("\"%s\" est supérieure à \"%s\" : code %d\n\n", chaine1, chaine4, comparerChaine(chaine1,chaine4));

  printf("La chaine \"2020\" est transformé en l'entier : %d\n\n",valeurDecimale("2020"));

  char chaineEntier[5];
  intVersChaine(4096,chaineEntier);
  printf("L'entier 4096 est transformé en la chaine : \"%s\"\n", chaineEntier);
}
