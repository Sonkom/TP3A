#include <stdio.h>

#define NBMAX 100

typedef struct {
	float coeff ; /* coefficient du terme */
	int degre ; /* degré du terme */
} Terme ;

typedef Terme Polynome[NBMAX] ;

void addPolynomes(Polynome p1, Polynome p2, Polynome res){
	int i=0, j=0, k=0;
	while(p1[i].degre >= 0 && p2[j].degre >= 0){
		if(p1[i].degre > p2[j].degre){
			res[k].degre = p1[i].degre;
			res[k].coeff = p1[i].coeff;
			i++;
		}else if(p1[i].degre < p2[j].degre){
			res[k].degre = p2[j].degre;
			res[k].coeff = p2[j].coeff;
			j++;
		}else{
			res[k].degre = p1[i].degre;
			res[k].coeff = p1[i].coeff + p2[j].coeff;
			i++;
			j++;
		}
		k++;
		res[k].degre = -1;
	}
}

void affichePolynome(Polynome p1){
	for(int i=0; p1[i].degre >= 0; i++){
		if(p1[i].degre != 0){
			printf("%f * x^%d + ", p1[i].coeff, p1[i].degre);
		}else{
			printf("%f\n", p1[i].coeff);
		}
	}
}

int main(){
	Polynome p1, p2, res;
	p1[0].degre = 2;
	p1[0].coeff = 1;
	p1[1].degre = 1;
	p1[1].coeff = 2;
	p1[2].degre = 0;
	p1[2].coeff = 3;
	p1[3].degre = -1;

	p2[0].degre = 4;
	p2[0].coeff = 1;
	p2[1].degre = 1;
	p2[1].coeff = 2;
	p2[2].degre = 0;
	p2[2].coeff = 3;
	p2[3].degre = -1;

	addPolynomes(p1, p2, res);
	affichePolynome(res);
}
