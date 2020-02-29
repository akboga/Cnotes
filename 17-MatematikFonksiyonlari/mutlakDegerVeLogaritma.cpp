#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	// Mutlak Deðer(absolute)  ve  logaritma 
	
	double sayi,sonuc,sonuc2;
	
	printf("Sayiyi girin :");
	scanf("%lf",&sayi);	
	sonuc=fabs(sayi);  // Mutlak deðerini hesaplar.
	printf("Sonuc : %.2lf\n",sonuc);
	
	sonuc2=log(sayi);  // 10 tabanýnda logaritmasýný alýr.
	printf("Sonuc : %.4lf",sonuc2);
	
	
	return 0;
}
