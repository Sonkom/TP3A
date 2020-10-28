#define TAILLE 20

typedef struct element {
	int valeur;
	int ligne;
	int colonne;
	struct element *suivant_ligne;
	struct element *suivant_colonne;
} element;
	
typedef element* matrice;

void creerMatrice(int m[TAILLE][TAILLE], int taille_ligne, int taille_colonne, matrice *m_dynamique);
void afficherMatrice(matrice m);
void sommeMatrices(matrice m1, matrice m2, matrice *resultat);
void produitMatrices(matrice m1, matrice m2, matrice *resultat);