#include <stdio.h>
#include <stdlib.h>

int main(){
	
	/*  Bir havayolu þirketi yolcularý için bagaj sýnýrlamasý uygulamaktadýr.
		Her yolcunun el için 8, normal için 15 kg bagaj hakký bulunmaktadýr.
		Eðer yolcular el haklarýný geçerlerse kg baþýna 4 tl, eðer normak haklarýný geçerlerse
		kg baþýna 5 tl ödeyeceklerdir. Buna göre klavyeden el ve normal bagaj miktarlarýný 
		giren yolcularýn ödeyecekleri para miktarýný hesaplayan programý yazýnýz.
		>> El ve normal haklarý minimum deðerlerin altýnda girilirse ödeme tutarý negatif deðil 0
		olarak alýnacaktýr.   */
	
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
