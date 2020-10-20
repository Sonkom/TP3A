#include <stdio.h>
#include <stdlib.h>
#include "pile.h"

int calculPf(char expression[]){
	pileInt maPile = creerPile();
	int op1, op2;

	for(int i = 0; expression[i] != '\0'; i++){
		switch(expression[i]){
			case('+') :
				op1 = depiler(maPile);
				op2 = depiler(maPile);
				empiler(maPile, op2 + op1);
				break;
			case('-') :
				op1 = depiler(maPile);
				op2 = depiler(maPile);
				empiler(maPile, op2 - op1);
				break;
			case('*') :
				op1 = depiler(maPile);
				op2 = depiler(maPile);
				empiler(maPile, op2 * op1);
				break;
			case('/') :
				op1 = depiler(maPile);
				op2 = depiler(maPile);
				empiler(maPile, op2 / op1);
				break;
			default :
				empiler(maPile, expression[i]-'0');
		}
	}
	return depiler(maPile);
}

int main(){
	char pf[]="42+5*68-/";
	printf("Résultat : %d\n", calculPf(pf));
}
