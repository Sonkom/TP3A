#include <stdio.h>
#include <stdlib.h>
#include "pile.h"

int calculPf(char expression[]){
	pileInt maPile = creerPile();
	int op1, op2;
	for(int i = 0; i < sizeof(expression)/sizeof(char); i++){
		switch(expression[i]){
			case('+') :
				op1 = depiler(maPile);
				op2 = depiler(maPile);
				empiler(maPile, op1 + op2);
				break;
			case('-') :
				op1 = depiler(maPile);
				op2 = depiler(maPile);
				empiler(maPile, op1 - op2);
				break;
			case('*') :
				op1 = depiler(maPile);
				op2 = depiler(maPile);
				empiler(maPile, op1 * op2);
				break;
			case('/') :
				op1 = depiler(maPile);
				op2 = depiler(maPile);
				empiler(maPile, op1 / op2);
				break;
			case('0') :
				empiler(maPile, 0);
				break;
			case('1') :
				empiler(maPile, 1);
				break;
			case('2') :
				empiler(maPile, 2);
				break;
			case('3') :
				empiler(maPile, 3);
				break;
			case('4') :
				empiler(maPile, 4);
				break;
			case('5') :
				empiler(maPile, 5);
				break;
			case('6') :
				empiler(maPile, 6);
				break;
			case('7') :
				empiler(maPile, 7);
				break;
			case('8') :
				empiler(maPile, 8);
				break;
			case('9') :
				empiler(maPile, 9);
				break;
		}
	}
	return depiler(maPile);
}

int main(void){
	char pf[5]={'1','2', '+', '3', '-'};
	printf("Résultat : %d\n", calculPf(pf));
}
	
