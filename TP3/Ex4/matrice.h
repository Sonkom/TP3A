#include <stdio.h>

#define SIZE 10

void initMatrice(int mat[SIZE][SIZE], int n, int m);

void initMatriceCons(int c,int mat[SIZE][SIZE], int n,int m);

void initMatriceUtil(int mat[SIZE][SIZE], int n, int m);

void afficheMatrice(int mat[SIZE][SIZE], int n, int m);

void sommeMatrice(int mat1[SIZE][SIZE], int n1, int m1, int mat2[SIZE][SIZE], int n2, int m2, int resultat[SIZE][SIZE], int n3, int m3);

void transpose(int mat1[SIZE][SIZE], int n1, int m1, int resultat[SIZE][SIZE], int n2, int m2);

void produitMatrice(int mat1[SIZE][SIZE], int n1, int m1, int mat2[SIZE][SIZE], int n2, int m2, int resultat[SIZE][SIZE], int n3, int m3);
