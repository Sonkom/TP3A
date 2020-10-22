#include "stdio.h"
int fibonacci(int n){
  int resultat = 0;
  if(n == 0){
    resultat = 0;
  }else if(n == 1){
    resultat = 1;
  }else{
    resultat += fibonacci(n-1) + fibonacci(n-2);
  }
  return resultat;
}

int pgcd(int a, int b){
  int resultat = 0;
  if(b != 0){
    resultat = pgcd(b,a%b);
  }else{
    resultat = a;
  }
  return resultat;
}

int estPalindrome(char mot[], int g, int d){
  int resultat = 1;
  if((d-g)/2 == 0){
    resultat = 1;
  }else{
    if(mot[g] == mot[d]) resultat &= 1 & estPalindrome(mot, g+1, d-1);
    else resultat = 0;
  }
  return resultat;
}

int main() {
  printf("Fibonacci :\nfibo(5)=%d\n\n", fibonacci(6));
  printf("PGCD :\npgcd(16,24)=%d\n\n", pgcd(16,24));
  printf("estPalindrome :\nestPalindrome(\"kayak\")=%d\n\n", estPalindrome("kayak",0,4));
}
