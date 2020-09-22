#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "dessine.h"
#include "graphlib.h"

int main() {
    srand (time (NULL));


    gr_inits_w(500,500,"test");

    dessineCarre(100,100,100);

    dessineCarreDiagonale(200,100,100);

    cliquer();


  return 0;
}
