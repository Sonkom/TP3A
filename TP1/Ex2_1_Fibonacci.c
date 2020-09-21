#include <stdio.h>

int fibo(int n){
  int un2 = 0;
  int un1 = 1;
  int resultat = 0;
  for(int i = 2; i <= n; i++){
    resultat = un1 + un2;
    un2 = un1;
    un1 = resultat;
  }
  return resultat;
}

int main() {
  int entree;

  scanf("%d", &entree);
  printf("Résultat : %d\n", fibo(entree));
  return 0;
}
