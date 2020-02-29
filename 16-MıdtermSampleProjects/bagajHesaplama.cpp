#include <stdio.h>
#include <stdlib.h>

int main(){
	
	/*  Bir havayolu �irketi yolcular� i�in bagaj s�n�rlamas� uygulamaktad�r.
		Her yolcunun el i�in 8, normal i�in 15 kg bagaj hakk� bulunmaktad�r.
		E�er yolcular el haklar�n� ge�erlerse kg ba��na 4 tl, e�er normak haklar�n� ge�erlerse
		kg ba��na 5 tl �deyeceklerdir. Buna g�re klavyeden el ve normal bagaj miktarlar�n� 
		giren yolcular�n �deyecekleri para miktar�n� hesaplayan program� yaz�n�z.
		>> El ve normal haklar� minimum de�erlerin alt�nda girilirse �deme tutar� negatif de�il 0
		olarak al�nacakt�r.   */
	
	int el,normal,toplam,kalan,kalan2;
	
	printf("\n---------- Turk Hava Yollarina Hos Geldiniz ----------\n\n");
	
	printf("Lutfen el bagaji miktarini giriniz : ");
	scanf("%d",&el);
	
	printf("Lutfen normal bagaj miktarini giriniz : ");
	scanf("%d",&normal);
	
	if(el<=8 && normal<=15){
		printf("Odemeniz yoktur. THY iyi ucuslar diler...");
	}
	
	if(el>8 && normal<=15){
		kalan = el-8;
		toplam = kalan*4;
		printf("Odenecek tutar : %d. THY iyi ucuslar diler...",toplam);
	}
	
	if(el<=8 && normal>15){
		kalan = normal-15;
		toplam = kalan*5;
		printf("Odenecek tutar : %d. THY iyi ucuslar diler...", toplam);
	}
	
	if(el>8 && normal>15){
		kalan = el-8;
		kalan2 = normal-15;
		toplam = (kalan*4)+(kalan2*5);
		printf("Odenecek tutar : %d TL. THY iyi ucuslar diler...",toplam);
	}
	
	return 0;
	
}
