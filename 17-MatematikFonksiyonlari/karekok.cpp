#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
	
	// Klavyeden girilen sayinin karekökünü bulalým.
	int sayi;
	double kok;
	printf("Sayiyi girin : ");
	scanf("%d",&sayi);
	
	kok = sqrt(sayi);
	
	printf("Sonuc : %.2f",kok);
	
	return 0;
}
