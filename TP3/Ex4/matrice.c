#include "matrice.h"

void initMatrice(int mat[SIZE][SIZE], int n, int m){
	if( n > SIZE || m > SIZE){
		printf("Erreur : Taille de la matrice trop élevée");
	}else{
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				mat[i][j] = 0;
			}
		}
	}
}

void initMatriceCons(int c,int mat[SIZE][SIZE], int n,int m){
	if( n > SIZE || m > SIZE){
		printf("Erreur : Taille de la matrice trop élevée");
	}else{
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				mat[i][j] = c;
			}
		}
	}
}

void initMatriceUtil(int mat[SIZE][SIZE], int n, int m){
	if( n > SIZE || m > SIZE){
		printf("Erreur : Taille de la matrice trop élevée");
	}else{
		int u = 0;
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				printf("X[%d][%d] : ",i,j);
				scanf("%d", &u);
				mat[i][j] = u;
			}
		}
	}	
}

void afficheMatrice(int mat[SIZE][SIZE], int n, int m){
	if( n > SIZE || m > SIZE){
		printf("Erreur : Taille de la matrice trop élevée");
	}else{
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
}

void sommeMatrice(int mat1[SIZE][SIZE], int n1, int m1, int mat2[SIZE][SIZE], int n2, int m2, int resultat[SIZE][SIZE], int n3, int m3){
	if(n1 != n2 || m1 != m2){
		printf("Erreur : Taille des matrices opérandes incohérantes\n");
	}else if(n1 != n3 || m1 != m3){
		printf("Erreur : Taille de la matrice résultat incohérante\n");
	}else{
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				resultat[i][j] = mat1[i][j] + mat2[i][j];
			}
		}
	}
}

void transpose(int mat1[SIZE][SIZE], int n1, int m1, int resultat[SIZE][SIZE], int n2, int m2){
	if(n1 != m2 || m1 != n2){
		printf("Erreur : Taille des matrices incohérantes\n");
	}else{
		for(int i=0; i<n1; i++){
			for(int j=0; j<m1; j++){
				resultat[j][i] = mat1[i][j];
			}
		}
	}
}

void produitMatrice(int mat1[SIZE][SIZE], int n1, int m1, int mat2[SIZE][SIZE], int n2, int m2, int resultat[SIZE][SIZE], int n3, int m3){
	if(m1 != n2){
		printf("Erreur : Taille des matrices opérandes incohérantes\n");
	else if(n1 != n3 || m2 != m3){
		printf("Erreur : Taille de la matrice résultat incohérante\n");
	}else{
		for(int i=0; i<n3; i++){
			for(int j=0; j<p3; j++){
				resultat[i][j] = 0;
				for(int k=0; k<m1; k++){
					resultat[i][j] += mat1[i][k] * mat2[k][j];
				}
			}
		}
	}
}
