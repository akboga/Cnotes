#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	// Mutlak De�er(absolute)  ve  logaritma 
	
	double sayi,sonuc,sonuc2;
	
	printf("Sayiyi girin :");
	scanf("%lf",&sayi);	
	sonuc=fabs(sayi);  // Mutlak de�erini hesaplar.
	printf("Sonuc : %.2lf\n",sonuc);
	
	sonuc2=log(sayi);  // 10 taban�nda logaritmas�n� al�r.
	printf("Sonuc : %.4lf",sonuc2);
	
	
	return 0;
}
