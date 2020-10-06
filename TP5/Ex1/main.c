#include "Fraction.h"


int main(int argc, char* argv[])
{
  Fraction fa, fb ;
  char ope = '\0';
  printf("Entrer deux fractions :") ;
  scanf("%d/%d %d/%d", &fa.num, &fa.den, &fb.num, &fb.den) ;

  while ((ope != '+') || (ope != '-') || (ope != '*') || (ope != '/'))
  {
    printf("Entrez une opération à retournez\n");
    scanf("%c\n", &ope);
    if ((ope != '+') || (ope != '-') || (ope != '*') || (ope != '/')) printf("Erreur : Ce n'est pas le signe d'une opéation.\nVeuillez écrire l'un des 4 signes suivants pour l'opération correspondante : +, -, * ou /\n");
  }

  switch (ope)
  {
    case ('+'):
      addFraction(fa,fb);
      break;
    case ('-'):
      subFraction(fa,fb);
      break;
    case ('*'):
      mulFraction(fa,fb);
      break;
    default:
      divFraction(fa,fb);
      break;

    
  }

}
