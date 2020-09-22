#include "graphlib.h"
#include <stdlib.h>

//set la couleur de façon aléatoire
void setCouleurAleatoire(){
  switch (rand()%4) {
    case 0 : set_black(); break;
    case 1 : set_blue(); break;
    case 2 : set_red(); break;
    case 3 : set_green(); break;
  }
}

void dessineCarre(int x, int y, int taille){
  setCouleurAleatoire();
  int l = taille/2;

  line(x,y,x-l,y-l);
  line(x-l,y-l,x,y-taille);
  line(x,y,x+l,y-l);
  line(x+l,y-l,x,y-taille);
}

void dessineCarreDiagonale(int x, int y, int taille){
  dessineCarre(x,y,taille);
  int l = taille/2;

  line(x,y,x,y-taille);
  line(x-l,y-l,x+l,y-l);
}

void dessineMosaique(int taille, int x, int y, int largeur, int hauteur){
  for(int i=0; i < hauteur*2-1; i++){
    for(int j=0; j < largeur-i%2; j++){
      dessineCarre(x+taille/2*(i%2+1)+j*taille,y-i*taille/2,taille);
    }
  }
}

void dessineMosaiqueAvecSouris(int taille,int largeur, int hauteur){
  int x,y;
  cliquer_xy(&x, &y);
  dessineMosaique(taille, x, y, largeur, hauteur);
}
