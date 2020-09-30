#include <stdio.h>
#include "matrice.h"

//Initialise une matrice à zéro
void initMatrice(int n, int m, int matrice[n][m]){
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      matrice[i][j] = 0;
    }
  }
}

//Initialise une matrice à une constante c
void initMatriceCons(int c, int n,int m, int matrice[n][m]){
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      matrice[i][j] = c;
    }
  }
}

//Initialise une matrice aux valeurs rentrées par l'utilisateur
void initMatriceUtil(int n, int m, int matrice[n][m]){
  int u = 0;
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      printf("X[%d][%d] : ",i,j);
      scanf("%d", &u);
      matrice[i][j] = u;
    }
  }
}

//affiche une matrice de taille (n,m)
void afficheMatrice(int n, int m, int matrice[n][m]){
  for(int i=0; i<n; i++){
    printf("|");
    for(int j=0; j<m; j++){
      printf("  %d  ", matrice[i][j]);
    }
    printf("|\n");
  }
}

void SommeMatrice(int n, int m, int m1[n][m], int m2[n][m], int resultat[n][m]){
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      resultat[i][j] = m1[i][j] + m2[i][j];
    }
  }
}
