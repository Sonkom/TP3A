#include "fonctions.h"

int quotient(unsigned int a, unsigned int b){
  int ans = 0;
  int reste = a - b;

  if (b == 0) {
    printf("Diviseur = 0, calcul indéfini\n");
    ans = -1;
  } else {
    while (reste > b){
      ans++;
      reste = reste - b;
    }
  }
  return ans;
}

unsigned int reste(unsigned int a, unsigned int b){
  unsigned int reste = 0;
  unsigned int quot = 0;
  quot = quotient(a,b);
  if (quot == -1) printf("Reste indéfini : problème de quotient\n");
  else 
  }

}
