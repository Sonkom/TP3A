#include <stdio.h>
#include "matrice.h"

int main() {
  int matrice[5][5];
  initMatrice(5,5,matrice);
  afficheMatrice(5,5, matrice);

  return 0;
}
