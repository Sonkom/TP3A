#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "dessine.h"
#include "graphlib.h"

int main() {
  srand (time (NULL));

  gr_inits_w(800,800,"TP6 : Exercice 4");

  sierpinski(10,10,780,7);
  cliquer();

  clear_screen();
  sierpinski(10,10,780,1);

  cliquer();

  return 0;
}
