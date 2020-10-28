#include <stdio.h>
#include "fonction.h"

int main() {
	int mat1[TAILLE][TAILLE] = {{0,3,0},{0,5,6},{7,0,9}};
	int mat2[TAILLE][TAILLE] = {{3,0,1},{2,0,3},{5,1,0}};
	matrice test1 = NULL, test2 = NULL, testsomme = NULL, testproduit = NULL;
	creerMatrice(mat1, 3, 3, &test1);
	afficherMatrice(test1);

	creerMatrice(mat2, 3, 3, &test2);
	afficherMatrice(test2);


	printf("\nTest de somme des deux premières matrices :\n\n");


	sommeMatrices(test1, test2, &testsomme);
	afficherMatrice(testsomme);

	printf("\nTest du produit des deux premières matrices :\n\n");

	produitMatrices(test1, test2, &testproduit);
	afficherMatrice(testproduit);


	/*
	Avec cette nouvelle représentation, le nombre de multiplication est de m*m*n*(0.1)^2 pour une matrice (m,n).

	En utilisant des tableaux, il en faudrait m*m*n.
	*/
	return 1;
}
