#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
	
	// Klavyeden girilen sayinin karek�k�n� bulal�m.
	int sayi;
	double kok;
	printf("Sayiyi girin : ");
	scanf("%d",&sayi);
	
	kok = sqrt(sayi);
	
	printf("Sonuc : %.2f",kok);
	
	return 0;
}
