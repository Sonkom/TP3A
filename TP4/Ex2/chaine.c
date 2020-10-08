#include "chaine.h"

int monStrlen(char str[]){
  int i=0;
  for(i=0; str[i] != '\0';i++);
  return i;
}

void monStrcpy(char dest[], char src[]){
  for(int i=0; i<=monStrlen(src);i++){
    dest[i] = src[i];
  }
}

void affichageEnHexa(char src[]){
  for(int i=0; i<monStrlen(src);i++){
    printf("%x ", src[i]);
  }
  printf("\n");
}

void affichageEnDecimal(char src[]){
  for(int i=0; i<monStrlen(src);i++){
    printf("%d ", src[i]);
  }
  printf("\n");
}

void mettreEnMajuscule(char dest[], char src[]){
  int decallage = 'A' - 'a';
  for(int i=0; i<=monStrlen(src);i++){
    if(src[i]>='a' && src[i]<='z'){
      dest[i]=src[i] + decallage;
    }else{
      dest[i]=src[i];
    }
  }
}

void mettreEnMinuscule(char dest[], char src[]){
  int decallage = 'a' - 'A';
  for(int i=0; i<=monStrlen(src);i++){
    if(src[i]>='A' && src[i]<='z'){
      dest[i]=src[i] + decallage;
    }else{
      dest[i]=src[i];
    }
  }
}
