#include <stdio.h>

//Fonction retournant 1 si le parametre année est bissextile et 0 sinon
int est_bissextile(int annee){
  int resultat = 0;
  if(annee%4 == 0){
    resultat = 1;
    if(annee%100 == 0 && annee%400 != 0){
      resultat = 0;
    }
  }
  return resultat;
}

int main() {
  int annee;
  printf("Annee : ");
  scanf("%d",&annee);
  if(est_bissextile(annee)){
    printf("L'année %d est bissextile\n", annee);
  }else{
    printf("L'année %d n'est pas bissextile\n", annee);
  }
}
