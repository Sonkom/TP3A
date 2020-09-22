#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "dessine.h"
#include "graphlib.h"

int main() {
    srand (time (NULL));


    gr_inits_w(500,500,"test");

    dessineMosaiqueAvecSouris(50,8,5);

    cliquer();


  return 0;
}
