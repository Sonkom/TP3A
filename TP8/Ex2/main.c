#include <stdio.h>
#include "fonction.h"

int main() {
	int mat1[TAILLE][TAILLE] = {{1,0,0},{4,0,6},{0,0,9}};
	int mat2[TAILLE][TAILLE] = {{9,0,0},{0,5,0},{0,2,0}};
	matrice test1 = NULL, test2 = NULL, testsomme = NULL, testproduit = NULL;
	creerMatrice(mat1, 3, 3, &test1);
	afficherMatrice(test1);

	creerMatrice(mat2, 3, 3, &test2);
	afficherMatrice(test2);


	printf("\nVLA LA SOMME\n\n");


	sommeMatrices(test1, test2, &testsomme);
	afficherMatrice(testsomme);

	printf("\nVLA L'PRODUIT\n\n");

	produitMatrices(test1, test2, &testproduit);
	afficherMatrice(testproduit);


	/*
	Avec la représentation dynamique, on effectue juste le nombre d'opérations nécessaires,
	c'est à dire n*n*m*(0.1)^2 donc n*n*m*0.01 opérations

	Représentation classique : nécessite n*n*m opérations, avec n la largeur de la 1ère matrice et m la hauteur.
	*/
	return 1;
}
