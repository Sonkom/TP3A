#include <stdio.h>

/*
  En rentrant un n négatif, le résultat donnera 0 pour la première et n pour la deuxième.
  C'est normal puisque dans le cas d'une while il n'y aura aucune itération tandis que avec le do while il y aura une itération.
  Une amélioration possible serait de gérer se cas.
*/

int somme1(int n){
  int ans=0;
  while(n>0){
    ans += n;
    n--;
  }
  return ans;
}

int somme2(int n){
  int ans=0;
  do{
    ans += n;
    n--;
  }while(n>0);
  return ans;
}

int main() {
  int n;
  printf("n : ");
  scanf("%d", &n);
  printf("Somme en utilisant un while : %d\n",somme1(n) );
  printf("Somme en utilisant un do while : %d\n",somme2(n));
}
