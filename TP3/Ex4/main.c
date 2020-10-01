#include <stdio.h>
#include "matrice.h"

int main() {
  int n=3, m=2;
  int mat1[n][m], mat2[n][m], mat3[n][m], mat4[m][n];
  initMatriceUtil(n,m,mat1);
  initMatrice(m,n,mat4);
  afficheMatrice(n,m, mat1);
  transpose(n,m,mat1, mat4);
  afficheMatrice(m,n, mat4);

  return 0;
}
