#include <stdio.h>

int factorielle(int n){

  int ans = 1;
  while (n > 0)
  {
    ans = n * ans;
    n--;
  }
  return ans;
}

int factorielleBis(int m){
  int ans = 1;
  int buff = 1;

  while (m >= buff) {
    ans++;
    buff = buff * ans;
  }
  return ans;
}

/* Pour tester la fonction factorielle, j'ai calculé (à l'aide d'une calculatrice) la valeur 5! (prise au hasard).
J'ai ensuite vérifié si la fonction me retournait bien 120.
En ce qui concerne factorielleBis, j'ai de même pris la valeur 5! = 120 en référence. En mettant 110 en entrée, la fonction devrait
normalement me retourner la valeur 5 puisqu'il s'agit du plus petit entier n tel que n! >= 110 */

int main(void) {

  int n, result, result_bis;
  printf("Entrez la valeur de n.\n");
  scanf("%d",&n);

  result = factorielle(n);
  result_bis = factorielleBis(n);
  printf("factorielle(%d) = %d\nfactorielleBis(%d) = %d\n",n, result, n, result_bis);

  return 0;
}
