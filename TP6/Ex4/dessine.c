#include "graphlib.h"
#include <stdlib.h>

void fill_carre(int x, int y, int taille){
  fill_triangle(x, y, x+taille, y, x+taille, y+taille);
  fill_triangle(x, y, x, y+taille, x+taille, y+taille);
}

void sierpinski(int x, int y,int taille, int n){
  if(n==0){
    fill_carre(x,y,taille);
  }else{
    sierpinski(x,y,taille/2,n-1);
    sierpinski(x,y+taille/2,taille/2,n-1);
    sierpinski(x+taille/2,y+taille/2,taille/2,n-1);
  }
}
