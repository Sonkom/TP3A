#include <stdio.h>
#include "matrice.h"

int main() {
  int m1[3][3], m2[3][3], m3[3][3];
  initMatriceCons(1,3,3,m1);
  initMatriceCons(2,3,3,m2);
  SommeMatrice(3,3,m1,m2,m3);
  afficheMatrice(3,3, m3);

  return 0;
}
