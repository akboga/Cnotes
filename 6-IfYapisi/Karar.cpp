#include <stdio.h>
#include <stdlib.h>

int main(){
	
	/*
	int sayi1 , sayi2 , toplam;
	printf("Birinci sayiyi giriniz : ");
	scanf("%d",&sayi1);
	printf("Ikinci sayiyi giriniz : ");
	scanf("%d",&sayi2);
	
	toplam = sayi1 + sayi2;
	
	if(toplam > 50){
		printf("\nSayilarin toplami 50'den buyuk.");
	}	
	else{
		printf("Sayilarin toplami 50den kucuk.");
	}
	*/
	
	
	
	
	
	printf("\n ----- NOT ORTALAMASI VE GECME DURUMU ----\n\n");
	
	float sinav1, sinav2, sinav3, proje, ortalama;
	
	//Sýnavlar 	30 , proje %10 , geçme þartý ortalamanýn 75 ve üzeri olmasý.
	
	printf("Birinci sinav notunuz : ");
	scanf("%f",&sinav1);
	
	printf("Ikinci sinav notunuz : ");
	scanf("%f", &sinav2);
	
	printf("Ucuncu sinav notunuz : ");
	scanf("%f",&sinav3);
	
	printf("Proje notunuz : ");
	scanf("%f", &proje);
	
	ortalama = (sinav1*30/100) + (sinav2*30/100) + (sinav3*30/100) +(proje*10/100);
	
	printf("\n\n ----- SONUC ----- \n\n");
	
	if(ortalama >= 75){
		printf("Not ortalamaniz : %f\n\n", ortalama);
		printf("Tebrikler! Sinifi gectiniz.\n");
	}
	else{
		printf("Not Ortalamaniz : %f\n\n", ortalama);
		printf("Basarisiz!\n");
	}
	
	
	
	
	
	
	/* 
	
	ve ---> &&
	 
	veya ---> ||
	
	mod alma ---> %
	
	*/
	
	
	
	
	/*
	int sayi;
	
	printf("Bir sayi giriniz : ");
	scanf("%d", &sayi);
	
	if(sayi%2 == 0 && sayi%5 == 0){
		printf("Girdiginiz sayi 10a tam bolunur.");
	}
	else{
		printf("Sayiniz 10 un kati degildir.");
	}
	*/
	
	
	
	
	/*
	printf("\n----- SUYUN HALLERI -----\n\n");
	int derece;
	
	printf("Suyunuzun sicakliginiz giriniz : ");
	scanf("%d", &derece);
	
	if(derece<0){
		printf("Suyunuz kati haldedir.");
	
	}
	if(derece>100){
		printf("Suyunuz kayniyor!!!");	
	}
	if(derece>0 && derece<100){
		printf("Suyunuz sivi haldedir.");
	}
	*/
	


	return 0;
	
}
