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
