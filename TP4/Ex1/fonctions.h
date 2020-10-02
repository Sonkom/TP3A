#include <stdio.h>
#include <stdlib.h>

#define MAX 1024

/*---- FONCTIONS ----*/
int lireDonnees(char nomFichier[], int tab[]);
void afficherTableau (int tab[], int nb);
void triABulles(int tab[], int nb);
void enregistrerDonnees(char nomFichier[], int tab[], int nb);
void swap_int(int *a, int *b); //Fonction supplémentaire

/*---- TESTS ----*/
