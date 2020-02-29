#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	// Sin ve Cos iþlemleri
	
	double derece,sonucSin,sonucCos;
	
	printf("Dereceyi girin : ");
	scanf("%lf",&derece);
	
	sonucSin=sin(derece);
	sonucCos=cos(derece);
	
	printf("Sin degeri : %lf\n",sonucSin);
	printf("Cos degeri : %lf",sonucCos);
	
	return 0;
}
