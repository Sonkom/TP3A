#include <stdio.h>
#include "matrice.h"

int main() {
  int n=3, m=2;
  int mat1[SIZE][SIZE], mat2[SIZE][SIZE], mat3[SIZE][SIZE], mat4[SIZE][SIZE];
  printf("Initialisation d'une matrice par l'utilisateur : \n");
  initMatriceUtil(mat1, n, m);
  printf("\nL'autre matrice est une matrice (n,m) intialisé à 3.\n");
  initMatriceCons(3, mat2, n, m);

  printf("\nExemple de somme de deux matrices : \n");
  afficheMatrice(mat1, n, m);
  printf("\t+\t\n");
  afficheMatrice(mat2, n, m);
  printf("\t=\t\n");
  sommeMatrice(mat1, n, m, mat2, n, m, mat3, n , m);
  afficheMatrice(mat3, n, m);

  printf("Exemple de transposée de matrice : \n");
  printf("La transposée de : \n");
  afficheMatrice(mat1, n, m);
  printf("est :\n");
  transpose(mat1, n, m, mat3, m, n);
  afficheMatrice(mat3, m, n);

  printf("Exemple de produit de deux matrices\n");
  afficheMatrice(mat1, n, m);
  printf("\t*\t\n");
  afficheMatrice(mat3, m, n);
  printf("\t=\t\n");
  produitMatrice(mat1, n, m, mat3, m, n, mat4, n , n);
  afficheMatrice(mat4, n, n);

  return 0;
}
