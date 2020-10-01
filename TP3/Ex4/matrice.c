#include <stdio.h>
#include "matrice.h"

//Initialise une matrice à zéro
void initMatrice(int n, int m, int mat[n][m]){
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      mat[i][j] = 0;
    }
  }
}

//Initialise une matrice à une constante c
void initMatriceCons(int c, int n,int m, int mat[n][m]){
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      mat[i][j] = c;
    }
  }
}

//Initialise une matrice aux valeurs rentrées par l'utilisateur
void initMatriceUtil(int n, int m, int mat[n][m]){
  int u = 0;
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      printf("X[%d][%d] : ",i,j);
      scanf("%d", &u);
      mat[i][j] = u;
    }
  }
}

//affiche une matrice de taille (n,m)
void afficheMatrice(int n, int m, int matr[n][m]){
  printf("\n");
  for(int i=0; i<n; i++){
    printf("|");
    for(int j=0; j<m; j++){
      printf("  %d  ", mat[i][j]);
    }
    printf("|\n");
  }
  printf("\n");
}

void sommeMatrice(int n, int m, int mat1[n][m], int mat2[n][m], int resultat[n][m]){
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      resultat[i][j] = mat1[i][j] + mat2[i][j];
    }
  }
}

void transpose(int n, int m, int mat1[n][m], int resultat[m][n]){
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      resultat[j][i] = mat1[i][j];
    }
  }
}

void produitMatrice(int n, int m,int p, int mat1[n][m], int mat2[m][p], int resultat[n][p]){
  for(int i=0; i<n; i++){
    for(int j=0; j<p; j++){
      int resultat[i][j] = 0;

    }
  }
}
