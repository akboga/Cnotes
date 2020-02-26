#include <stdio.h>
#include <stdlib.h>

int main(){
	
	/*
	//FLOAT DEGISKENLER   
	//%f kullanýrýz.
	
	//NOT ORTALAMASI HESAPLAYALIM 
	//3 SINAV 1 PROJE (SINAVLAR %30 PROJE %10)
	
	float sinav1,sinav2,sinav3,project,ortalama;
	
	printf("\n----- NOT HESAPLAMA UYGULAMASI -----\n\n");
	
	printf("Birinci sinav notunuz : ");
	scanf("%f", &sinav1);
	
	printf("Ikinci sinav notunuz : ");
	scanf("%f", &sinav2);
	
	printf("Ucuncu sinav notunuz : ");
	scanf("%f", &sinav3);
	
	printf("Proje notunuz : ");
	scanf("%f",&project);
	
	ortalama = (sinav1 * 30/100) + (sinav2 * 30/100) + (sinav3 * 30/100) + (project * 10/100);
	
	printf("\n\n----- SONUC -----\n\n");
	printf("Donem Ortalamaniz : %f", ortalama);
	*/
	
	
	
	
	/*
	printf("\nSirketimizde maaslara %12 zam yapilacaktir. Lütfen maasiniz belirtip yeni maasinizi ogreniniz.\n\n");
	
	int maas;
	float yeniMaas;
	
	printf("Eski maasiniz : ");
	scanf("%d", &maas);
	
	yeniMaas = maas + (maas*12/100);
	
	printf("Yeni maasiniz : %f", yeniMaas);
	*/
	
	
	
	// Çemberde alan : pi * r * r
	// Çemberde çevre : 2 * pi * r
	
	float pi = 3.14;
	float alan, cevre, r;
	
	
	printf("\n----- CEMBERDE ALAN VE CEVRE HESABI -----\n\n");
	printf("Cemberin yaricapini giriniz : ");
	scanf("%f",&r);
	printf("\n----- SONUC -----\n\n");
	
	cevre = 2 * pi * r;
	alan = pi * r * r;
	
	printf("Cemberin alani : %f\n", alan);
	printf("Cemberin cevresi : %f\n", cevre);
	
	
	return 0;
}
