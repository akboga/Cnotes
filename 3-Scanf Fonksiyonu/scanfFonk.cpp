#include <stdio.h>
#include <stdlib.h>

int main(){
	
	/*
	char kitapadi[30];
	printf("Lutfen Kitabin Adini Giriniz : ");
	scanf("%s", kitapadi);
	printf("Kitabinizin Adi : %s", &kitapadi);
	*/
	
	char ad[10], soyad[10], yas[2], meslek[20], sehir[13];
	printf("Adinizi Giriniz : ");
	scanf("%s",ad);
	printf("Soyadinizi Giriniz: ");
	scanf("%s",soyad);
	printf("Yasinizi Giriniz : ");	
	scanf("%s", yas);
	printf("Mesleginizi Giriniz : ");
	scanf("%s", meslek);
	printf("Sehrinizi Giriniz : ");
	scanf("%s",sehir);
	
	printf("\n\n********** KULLANICI BILGILERI **********\n\n");
	
	printf("Ad Soyad : %s %s\n",ad,soyad);
	printf("Yas : %s\n",yas);
	printf("Meslek : %s\n",meslek);
	printf("Sehir : %s",sehir);
	
	return 0;
}
