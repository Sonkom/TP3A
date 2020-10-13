#include <stdio.h>
#include <stdlib.h>
#include "listeTableau.h"


int main()
{
    /* Déclaration + Initialisation de la liste */
    element maListe[TAILLEMAX];
    creerListeVide(maListe);

    /* Tests d'insertion, cas testés :
        - Insertion en ordre croissant
        - Insertion d'une valeur supposée inférieur aux autres éléments du tableau
        - Insertion d'un doublon
      Objectif : Vérifier que quelque soit l'ordre à laquelle on insert les valeurs, la liste doit toujours rester trié */

    printf("Insertion :\n");
    insererElement(2,maListe);
    insererElement(9,maListe);
    insererElement(69,maListe);
    insererElement(2,maListe);
    insererElement(420,maListe);
    insererElement(480,maListe);
    insererElement(4,maListe);
    insererElement(74,maListe);
    insererElement(2048,maListe);
    insererElement(420,maListe);
    insererElement(8,maListe);

    afficherListe(maListe);
    printf("Résultat attendu : 2 -> 4 -> 8 -> 9 -> 69 -> 74 -> 420 -> 420 -> 480 -> 2048\n");


    /* Tests de suppression, cas testés :
        - Supression en tête
        - ... en queue
        - ... en milieu de liste
        - ... Suppression de doublon
        - Tentative de suppression d'objet inexistant
      Objectifs : Déterminer le bon fonctionnement des suppression d'objet, tout en maintenant un bon affichage de la liste (toujours triée)*/

    printf("\nSuppression tête :\n");
    supprimerElement(2,maListe);
    supprimerElement(4,maListe);
    afficherListe(maListe);
    printf("Résultat attendu : 8 -> 9 -> 69 -> 74 -> 420 -> 420 -> 480 -> 2048\n");

    printf("\nSuppression milieu :\n");
    supprimerElement(74,maListe);
    afficherListe(maListe);
    printf("Résultat attendu : 8 -> 9 -> 69 -> 420 -> 420 -> 480 -> 2048\n");

    printf("\nSuppression queue :\n");
    supprimerElement(2048,maListe);
    afficherListe(maListe);
    printf("Résultat attendu : 8 -> 9 -> 69 -> 420 -> 420 -> 480\n");

    printf("\nSuppression doublon :\n");
    supprimerElement(420,maListe);
    afficherListe(maListe);
    printf("Résultat attendu : 8 -> 9 -> 69 -> 420 -> 480\n");

    printf("\nSuppression élément inexistant :\n");
    supprimerElement(894,maListe);
    afficherListe(maListe);
    printf("Résultat attendu : 8 -> 9 -> 69 -> 420 -> 480\n");

    return 0;
}
