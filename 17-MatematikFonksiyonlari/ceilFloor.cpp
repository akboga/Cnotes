#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	// Ceil-Floor ----> ondalýklý sayýyý alta veya üste yuvarlama iþlemi
	
	double sayi,sonuc1,sonuc2;  // Double ---> lf
	printf("Degeri girin : ");
	scanf("%lf",&sayi);
	sonuc1=floor(sayi);
	printf("Sonuc : %.2f\n",sonuc1);
	sonuc2=ceil(sayi);
	printf("Sonuc : %f",sonuc2);	
	
	return 0;
}
