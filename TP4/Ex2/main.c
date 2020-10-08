
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
}
