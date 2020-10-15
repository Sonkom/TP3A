#include <stdio.h>
#include <string.h>

void hanoi(int n, char** towername)
{
  char* begin_pt = towername[0];
  char* inter = towername[1];
  char* arrival_pt = towername[2];
  char* towername_buff[3];

  if (n > 1)
  {
    towername_buff[0] = begin_pt;
    towername_buff[1] = arrival_pt;
    towername_buff[2] = inter;
    hanoi(n-1, towername_buff);
  }
  printf("%s -> %s\n",begin_pt, arrival_pt);

  if (n > 1)
  {
    towername_buff[0] = inter;
    towername_buff[1] = begin_pt;
    towername_buff[2] = arrival_pt;
    hanoi(n-1, towername_buff);
  }
}

int main(int argc, char const *argv[]) {
  char* tower[3] = {"Beg","Int","Arr"};
  hanoi(3, tower);
  return 0;
}
