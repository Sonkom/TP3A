#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "dessine.h"
#include "graphlib.h"

int main() {
  srand (time (NULL));
  
  gr_inits_w(500,500,"TP2 - Exercice 2");

  set_black();
  overwrite_gr(100,50,"Fonction 1 : dessineCarre(225,275,50)");
  dessineCarre(225,275,50);
  cliquer();

  clear_screen();
  set_black();
  overwrite_gr(100,50,"Fonction 2 : dessineCarreDiagonale(225,275,50)");
  dessineCarreDiagonale(225,275,50);
  cliquer();

  clear_screen();
  set_black();
  overwrite_gr(100,50,"Fonction 3 : dessineMosaique(50,225,275,8,5)   ");
  dessineMosaique(50,100,400,6,5);
  cliquer();

  clear_screen();
  set_black();
  overwrite_gr(100,50,"Fonction 4 : dessineMosaiqueAvecSouris(50,8,5)  ");
  dessineMosaiqueAvecSouris(50,8,5);
  cliquer();

  return 0;
}
