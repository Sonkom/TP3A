#include <stdio.h>
#include <stdlib.h>
#include "fonction.h"

element *recupererElement(matrice * tete, int ligne, int colonne) {
    element *e = *tete, *ligne_actuelle;
    int i = 0;

    if (ligne != -1 && colonne != -1) { /* cas classique */
        ligne_actuelle = recupererElement(tete, ligne, -1);
        e = ligne_actuelle;

        while (e != NULL && e->colonne != colonne) {
            e = e->suivant_colonne;

            if (e->valeur == 0) e = NULL; /* après un tour complet, non trouvé */
        }

    } else if (ligne != -1) { /* headers */
        while(i <= ligne) {
            e = e->suivant_ligne;
            i++;
        }
    }

    else {
        while(i <= colonne) {
            e = e->suivant_colonne;
            i++;
        }
    }

    return e;
}

void insererElement(int valeur, int ligne, int colonne, matrice *tete) {
    element *e = *tete;
    element *nouveau = malloc(sizeof(element));
    element *ligne_actuelle, *colonne_actuelle;

    if (nouveau == NULL) {
        printf("Erreur lors de la mallocation de mémoire.\n");

    } else {
        nouveau->valeur = valeur;
        nouveau->ligne = ligne;
        nouveau->colonne = colonne;

        if (e == NULL) { /* la tête alouette */
            nouveau->suivant_ligne = nouveau;
            nouveau->suivant_colonne = nouveau;

            *tete = nouveau;

        } else if (valeur == 0) { /* header */
            if (ligne != -1) { /* ligne */
                while (e->suivant_ligne != *tete) {
                    e = e->suivant_ligne;
                }
                nouveau->suivant_ligne = *tete;
                nouveau->suivant_colonne = nouveau;

                e->suivant_ligne = nouveau;


            } else { /* colonne */
                while (e->suivant_colonne != *tete) {
                    e = e->suivant_colonne;
                }

                nouveau->suivant_ligne = nouveau;
                nouveau->suivant_colonne = *tete;

                e->suivant_colonne = nouveau;
            }

        } else { /* éléments normaux */
            ligne_actuelle = recupererElement(tete, ligne, -1);
            colonne_actuelle = recupererElement(tete, -1, colonne);

            e = ligne_actuelle; /* ligne fixée, on fait varier la colonne */

            while (e->suivant_colonne->valeur != 0) {
                e = e->suivant_colonne;
            }

            nouveau->suivant_colonne = ligne_actuelle;
            e->suivant_colonne = nouveau;

            e = colonne_actuelle; /* colonne fixée, on fait varier la ligne */
            while (e->suivant_ligne->valeur != 0) {
                e = e->suivant_ligne;
            }

            nouveau->suivant_ligne = colonne_actuelle;
            e->suivant_ligne = nouveau;
        }
    }
}


void creerMatrice(int m[TAILLE][TAILLE], int taille_ligne, int taille_colonne, matrice *m_dynamique) {
    int i, j;

    insererElement(0, taille_ligne, taille_colonne, m_dynamique);

    /*Création des headers*/
    for(i = 0 ; i < taille_ligne ; i++) {
        insererElement(0, i, -1, m_dynamique);
    }

    for(i = 0 ; i < taille_colonne ; i++) {
        insererElement(0, -1, i, m_dynamique);
    }

    /*Copie des éléments non nuls de m*/
    if(m != NULL) {
        for(i = 0 ; i < taille_ligne ; i++) {
            for( j = 0 ; j < taille_colonne ; j++) {
                if( m[i][j] != 0) {
                    insererElement(m[i][j], i, j, m_dynamique);
                }
            }
        }
    }
}

void afficherMatrice(matrice m) {
    int nb_lignes = m->ligne, nb_colonnes = m->colonne;
    int i, j;
    element *e;

    printf("----- Début -----\n");
    for (i = 0; i < nb_lignes; i++) {
        for(j = 0; j < nb_colonnes; j++) {
            e = recupererElement(&m, i, j);

            if( e != NULL ) {
                printf(" %4d ", e->valeur);

            } else {
                printf("    0 ");
            }

        }
        printf("\n");
    }
    printf("-----  Fin  -----\n\n");
}


/*Version classique*/
/*void sommeMatrices(matrice m1, matrice m2, matrice *resultat) {
    int nb_lignes = m1->ligne, nb_colonnes = m1->colonne;
    int i, j, valeur;
    element *e1, *e2;

    if (nb_lignes != m2->ligne || nb_colonnes != m2->colonne) {
        printf("Erreur : les matrices n'ont pas les mêmes dimensions.\n");
    } else {
        creerMatrice(NULL, nb_lignes, nb_colonnes, resultat); /* matrice vide *//*

        for (i = 0; i < nb_lignes; i++) {
            for(j = 0; j < nb_colonnes; j++) {
                e1 = recupererElement(&m1, i, j);
                e2 = recupererElement(&m2, i, j);
                valeur = 0;

                if( e1 != NULL ) {
                    valeur += e1->valeur;
                }

                if ( e2 != NULL ) {
                    valeur += e2->valeur;
                }

                if (valeur != 0) {
                    insererElement(valeur, i, j, resultat);
                }
            }
        }
    }
}*/

/*Version économie de comparaisons*/
void sommeMatrices(matrice m1, matrice m2, matrice *resultat) {
    int nb_lignes = m1->ligne, nb_colonnes = m1->colonne;
    int i, j;
    element *e1, *e2, *ligne_actuelle;

    if (nb_lignes != m2->ligne || nb_colonnes != m2->colonne) {
        printf("Erreur : les matrices n'ont pas les mêmes dimensions.\n");
    } else {
        creerMatrice(NULL, nb_lignes, nb_colonnes, resultat); /* matrice vide */

        for(i = 0 ; i < nb_lignes ; i++) {
            ligne_actuelle = recupererElement(&m1, i, -1);
            e1 = ligne_actuelle;

            while (e1 != NULL) {

                e1 = e1->suivant_colonne;

                if (e1->valeur == 0) e1 = NULL; /* après un tour complet, fini */
                else {
                    j = e1->colonne;
                    insererElement(e1->valeur , i, j, resultat);
                }
            }
        }

        for(i = 0 ; i < nb_lignes ; i++) {
            ligne_actuelle = recupererElement(&m2, i, -1);
            e2 = ligne_actuelle;

            while (e2 != NULL) {

                e2 = e2->suivant_colonne;

                if (e2->valeur == 0) e2 = NULL; /* après un tour complet, fini */
                else {
                    j = e2->colonne;

                    if(recupererElement(resultat, i,j) != NULL) {
                        recupererElement(resultat, i,j)->valeur += e2->valeur;
                    } else{
                        insererElement(e2->valeur , i, j, resultat);
                    }
                }
            }
        }
    }
}

void produitMatrices(matrice m1, matrice m2, matrice *resultat) {
    int nb_lignes1 = m1->ligne, nb_colonnes1 = m1->colonne;
    int nb_lignes2 = m2->ligne, nb_colonnes2 = m2->colonne;
    int i, j, k, valeur;
    element *e1, *e2, *ligne_actuelle;

    if (nb_colonnes1 != nb_lignes2) {
        printf("Erreur : les matrices n'ont pas les bonnes dimensions.\n");

    } else {
        creerMatrice(NULL, nb_lignes1, nb_colonnes2, resultat); /* matrice vide */

        for(i = 0 ; i < nb_lignes1 ; i++) {
            ligne_actuelle = recupererElement(&m1, i, -1);
            e1 = ligne_actuelle;

            while (e1 != NULL) {

                e1 = e1->suivant_colonne;

                if (e1->valeur == 0) e1 = NULL; /* après un tour complet, fini */
                else {
                    j = e1->colonne;

                    for(k = 0 ; k < nb_colonnes2 ; k++){
                        e2 = recupererElement(&m2, j, k);
                        if(e2 != NULL) {
                            valeur = e1->valeur * e2->valeur;
                            if(recupererElement(resultat, i,k) != NULL) {
                                recupererElement(resultat, i,k)->valeur += valeur;
                            } else{
                                insererElement(valeur , i,k, resultat);
                            }
                        }

                    }
                }
            }
        }
    }
}
