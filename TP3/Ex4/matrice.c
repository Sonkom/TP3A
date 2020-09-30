#include <stdio.h>
#include "matrice.h"

void initMatrice(int n, int m, int matrice[n][m]){
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      matrice[i][j] = 0;
    }
  }
}

void afficheMatrice(int n, int m, int matrice[n][m]){
  for(int i=0; i<n; i++){
    printf("|");
    for(int j=0; j<m; j++){
      printf("  %d  ", matrice[i][j]);
    }
    printf("|\n");
  }
}
