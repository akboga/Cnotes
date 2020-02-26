#include <stdio.h>
#include <stdlib.h>

int main(){
	
	// Arrays >>> Tek boyutlu ve iki boyutlu olabilir.
	// [] ile gösterecegiz.
	// Index eleman sayisi. 0'dan baslayacak.
	
	/*
	int tekRakamlar[] = {1,3,5,7,9};	
	printf("%d", tekRakamlar[1]);	
	*/
	
	
	/*
	char sehir[] = {'K','O','N','Y','A'};
	printf("%s", sehir);
	*/
	
	
	/*
	int sayilar[4];
	sayilar[0] = 22;
	sayilar[1] = 3;
	sayilar[2] = 64;
	sayilar[3] = 83;
	sayilar[4] = 36;
	printf("%d",sayilar[2]);		
	*/
	
	
	/*
	int sayilar[] = {0,1,2,3,4,5,6,7,8,9};
	int i;
	for(i=0 ; i<10 ; i++){
		
		printf("%d\n",sayilar[i]);
	}
	*/
	
	
	/*
	int sayilar[] = {0,1,2,3,4,5,6,7,8,9};
	int toplam, i;
	
	for(i = 0 ; i<10 ; i++){
		toplam = toplam + sayilar[i];
	}
	printf("%d",toplam);
	*/
	
	
	/*
	char sehir[15];
	int i;
	for(i=0 ; i<2 ; i++){
		printf("Sehri giriniz : ");
		scanf("%s",sehir);
		printf("\nGirdiginiz sehir : %s\n\n", sehir);
	}
	*/
	
	
	
	int dizi[100];
	int i, sayi;
	
	printf("Kac eleman oldugunuz giriniz : ");
	scanf("%d",&sayi);
	
	for(i=0 ; i<sayi ; i++){
		printf("Dizinin %d.elemanini giriniz : ", i+1);
		scanf("%d", &dizi[i]);		
	}
	
	printf("\n\n");
	
	for(i=0 ; i<sayi ; i++){
		printf(" %d ", dizi[i]);
	}
	
	printf("\n\n");
	
	int toplam;
	
	for(i=0 ; i<sayi ; i++){
		toplam = toplam + dizi[i];		
	}
	printf("Degerlerin toplami  : %d",toplam);
	
	
	
	return 0;
	
}
