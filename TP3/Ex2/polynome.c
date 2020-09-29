#include <stdio.h>

float valeurPolynome(float A[], int N, float x0){
  float resultat = 0;
  for(int i=N-1; i>=1; i--){
    resultat = x0*(A[i] + resultat);
  }
  resultat += A[0];
  return resultat;
}

void affichePolynome(float A[], int N){
  for(int i=0; i<N; i++){
    if(A[i] != 0){
      if(i != 0){
        printf(" + %f * x^%d ", A[i], i);
      }else{
        printf("%f", A[i]);
      }
    }
  }
  printf("\n");
}

int main() {
  int N;
  printf("N : ");
  scanf("%d", &N);

  float x0;
  printf("\nx0 : ");
  scanf("%f", &x0);

  float A[N-1];
  printf("Tableau A :\n");
  for(int i=0; i<N; i++){
    printf("\nA[%d] : ", i);
    scanf("%f",&(A[i]));
  }
  printf("Le polynome entré est : \n");
  affichePolynome(A,N);

  printf("Résultat pour x=%f :\n%f\n", x0, valeurPolynome(A,N,x0));
}
