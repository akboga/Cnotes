#include <stdio.h>
#include <stdlib.h>

int main(){
	
	//integer degiskenler
	//degiskenTuru degiskenAdi
	// %d (decimal) kullanacagiz
	
	/*
	int sayi;
	sayi = 6;
	printf("Sayi : %d", sayi);
	*/
	
	
	
	/*
	int sayi1,sayi2,toplam;
	sayi1 = 40;
	sayi2= 190;
	toplam = sayi1 + sayi2;
	printf("Sayilarin Toplami : %d", toplam);
	*/
	
	
	
	
	/*
	int sayi1 , sayi2 , topla , cikar , bol , carp;
	
	sayi1 = 52;
	sayi2 = 13;
	
	topla = sayi1 + sayi2;
	cikar = sayi1 - sayi2;
	carp = sayi1 * sayi2;
	bol = sayi1 / sayi2;
	
	printf("Toplamlari : %d\n",topla);
	printf("Farklari : %d\n",cikar);
	printf("Carpimlari : %d\n",carp);
	printf("Bolumleri : %d\n",bol);
	*/
	
	
	
	
	
	
	
	/*
	// KARENÝN ALANINI VE ÇEVRESÝNÝ HESAPLAYALIM
	// ÝSTENEN DEÐER : 1 KENAR
	// ALAN = KENAR * KENAR
	// ÇEVRE = KENAR * 4
	
	int kenar, cevre , alan;
	
	printf("Karenin bir kenarini giriniz : ");
	scanf("%d", &kenar);
	
	alan = kenar*kenar;
	cevre = kenar*4;
	
	printf("\n\n----- BILGILER -----\n\n");
	
	printf("Karenin Alani : %d\n", alan);
	printf("Karenin Cevresi : %d\n\n",cevre);
	*/
	
	
	
	
	
	
	/*
	int sayi1 , sayi2 , carp , cikar , bol , topla;
	printf("Verilen Sayilarin Dort Islem Sonuclarini Yazdiralim.\n");
	printf("Birinci Sayiyi Giriniz : ");
	scanf("%d", &sayi1);
	printf("Ikinci Sayiyi giriniz : ");
	scanf("%d", &sayi2);
	
	topla = sayi1 + sayi2;
	cikar = sayi1 - sayi2;
	carp = sayi1 * sayi2;
	bol = sayi1 / sayi2;
	
	printf("\n\n----- SONUCLAR -----\n\n");
	printf("Sayilarin toplami : %d\n", topla);
	printf("Sayilarin farki : %d\n", cikar);
	printf("Sayilarin carpimi : %d\n", carp);
	printf("Sayilarin bolumu : %d", bol);
	*/
	
	
	
	
	
	/*
	int kisaKenar, uzunKenar, alan, cevre;
	printf("----- DIKDOTGENIN ALAN VE CEVRE HESAPLAMASI -----\n\n");
	printf("Dikdortgenin kisa kenarini yaziniz : ");
	scanf("%d", &kisaKenar);
	printf("Dikdortgenin uzun kenarini yaziniz : ");
	scanf("%d", &uzunKenar);
	
	alan = uzunKenar * kisaKenar;
	cevre = (uzunKenar*2)+(kisaKenar*2);
	
	printf("\n\n----- SONUCLAR -----\n\n");
	
	printf("Dikdortgenin alani : %d\n", alan);
	printf("Dikdortgenin cevresi : %d\n", cevre);
	*/
	
	
	
	
	
	
	
	/*
	// 3 SINAVI VE 1 PROJESÝ VERÝLEN ÖÐRENCÝNÝN NOT ORTALAMASINI HESAPLAYALIM.
	// SINAVLAR %30'LUK DEÐERE SAHÝP, PROJE ÝSE %10
	
	int sinav1 , sinav2 , sinav3 , proje , ortalama;
	printf("----- ORTALAMA HESAPLAMA PROGRAMI -----\n\n");
	printf("Birinci sinav notunuz : ");
	scanf("%d", &sinav1);
	printf("Ikinci sinav notunuz : ");
	scanf("%d",&sinav2);
	printf("Ucuncu sinav notunuzu giriniz : ");
	scanf("%d", &sinav3);
	printf("Proje notunuzu giriniz : ");
	scanf("%d", &proje);
	
	ortalama = (sinav1 * 30/100) + (sinav2 * 30/100) + (sinav3 * 30/100) + (proje * 10/100);
	
	printf("\n\n----- SONUC -----\n\n");
	printf("Donem Ortalamaniz : %d\n", ortalama);
	*/
	
	
	
	
	/*
	int bilet, kola, su, misir, toplamUcret;
	printf("---------- VIZYON SINEMALARINA HOS GELDINIZ ----------\n\n");
	printf("*** Ucretlerimiz ***\n\nTek Kisilik Bilet : 8 TL\nMisirr : 2 TL\nKola : 2 TL \nSu : 1TL");
	printf("\n\n*** Isteklerinizi Giriniz ***\n\n");
	printf("Bilet Sayisi : ");
	scanf("%d", &bilet);
	printf("Misir sayisi : ");
	scanf("%d", &misir);
	printf("Kola sayisi : ");
	scanf("%d", &kola);
	printf("Su da ister misiniz? >> ");
	scanf("%d", &su);
	
	toplamUcret = (bilet*8) + (misir*2) + (kola*2) + (su*1);
	
	printf("\n\nTOPLAM TUTAR : %d TL\n\n",toplamUcret);
	
	printf("----- YINE BEKLERIZ -----\n");
	*/
	
 	
	
	
	return 0;
	
}
