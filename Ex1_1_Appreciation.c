#include <stdio.h>

/*
  Pour générer les autres lettres, on peut soit vérifier la valeur donnée par l'utilisateur et lui redemander tant qu'elle n'est pas valide.
  Sinon nous pouvons traiter ces cas dans les fonctions comme étant des cas d'erreurs grace au else, à une condition particulière ou au default.
  Nous avons choisi la deuxième option
*/

void appr1(char note){
  if(note == 'A'){
    printf("Très bien\n");
  }else if(note == 'B'){
    printf("Bien\n");
  }else if(note == 'C'){
    printf("Assez bien\n");
  }else if(note == 'D'){
    printf("Passable\n");
  }else if(note == 'E'){
    printf("Insuffisant\n");
  }else{
    printf("Erreur : Entree non valide\n");
  }
}

void appr2(char note){
  if(note == 'A') printf("Très bien\n");

  if(note == 'B') printf("Bien\n");

  if(note == 'C') printf("Assez bien\n");

  if(note == 'D') printf("Passable\n");

  if(note == 'E') printf("Insuffisant\n");

  if(note != 'A' && note != 'B' && note != 'C' && note != 'D' && note != 'E') printf("Erreur : Entree non valide\n");
}

void appr3(char note){
  switch (note) {
    case 'A':
      printf("Très bien\n");
      break;
    case 'B':
      printf("Bien\n");
      break;
    case 'C':
      printf("Assez bien\n");
      break;
    case 'D':
      printf("Passable\n");
      break;
    case 'E':
      printf("Insuffisant\n");
      break;
    default :
      printf("Erreur : Entree non valide\n");
  }
}

int main() {
  char note;
  printf("Note : ");
  scanf("%c",&note);
  printf("Version avec les instructions if imbriquées :\n");
  appr1(note);
  printf("Version avec les instructions if en séquence :\n");
  appr2(note);
  printf("Version avec l'instruction switch :\n");
  appr3(note);
}
