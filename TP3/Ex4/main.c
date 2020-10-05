#include <stdio.h>
#include "matrice.h"

int main() {
  int n=11, m=2;
  int mat1[SIZE][SIZE], mat2[SIZE][SIZE], mat3[SIZE][SIZE], mat4[SIZE][SIZE];
  initMatriceUtil(mat1, n, m);
  initMatrice(mat4,m , n);
  afficheMatrice(mat1, n,m);
  transpose(mat1,n,m, mat4, m, n);
  afficheMatrice(mat4, m,n);

  return 0;
}
