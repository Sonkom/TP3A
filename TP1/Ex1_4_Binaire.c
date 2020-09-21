#include <stdio.h>

/*
Les opérateurs utilisés ici sont les opérateurs binaires donc :
 i & j = 0b10 & 0b11 = 0b10 = 2
 i | 1 = 0b10 | 0b01 = 0b11 = 3
 k | j = 0b100 | 0b011 = 0b111 = 7
*/

int main() {
  int i = 2, j= 3, k= 4;

  printf("%d, %d, %d\n", i & j, i | 1,k | j);

  if ((i & k) || (i & j))
    printf("ok");

  return (0);
}
