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

void transformerMinMaj(char dest[], char src[]){
  int decallage = 'A' - 'a';
  for(int i=0; i<=monStrlen(src);i++){
    if(src[i]>='a' && src[i]<='z'){
      dest[i]=src[i] + decallage;
    }else if(src[i]>='A' && src[i]<='Z'){
      dest[i]=src[i] - decallage;
    }else{
      dest[i]=src[i];
    }
  }
}

int rechercherCaractereG(char src[], char c){
  int position=-1, i=0;
  while(position == -1 && src[i] != '\0'){
    if(src[i] == c) position = i;
    i++;
  }
  return position;
}

int rechercherCaractereD(char src[], char c){
  int position=-1, i=monStrlen(src);
  while(position == -1 && i >= 0){
    if(src[i] == c) position = i;
    i--;
  }
  return position;
}

int estPalindrome(char * mot,int d, int f){
  int resultat = 1;
  for(int i=0; i<(f-d)/2; i++){
    if(mot[f-i] != mot[d+i]) resultat = 0;
  }
  return resultat;
}

int comparerChaine(char op1[], char op2[]){
  int resultat = 0, i = 0;
  while(resultat == 0 && op1[i] != '\0' && op2[i] != '\0') {
    if(op1[i] < op2[i] || (op1[i+1] == '\0' && op2[i+1] != '\0')){
      resultat = -1;
    }else if(op1[i] > op2[i] || (op1[i+1] != '\0' && op2[i+1] == '\0')){
      resultat = 1;
    }
    i++;
  }
  return resultat;
}

int valeurDecimale(char src[]){
  int puissance=1,resultat=0;
  for(int i=monStrlen(src)-1; i >= 0; i--){
    resultat += (src[i]-'0')*puissance;
    puissance *= 10;
  }
  return resultat;
}

void intVersChaine(int d, char dest[]){
  int puissance=1, c;
  for(c = 0; d > 10*puissance; c++) puissance *= 10;
  dest[c+1] = '\0';
  for(int i = 0; c-i >= 0; i++){
    dest[i] = d/puissance + '0';
    d = d % puissance;
    puissance /= 10;
  }
}
