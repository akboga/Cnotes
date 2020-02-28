#include <stdio.h>
#include <stdlib.h>

int main(){
	
	/*	
	1) Bir bakteri türü her saat baþý kendini ikiye bölerek çoðaltmaktadýr. Kullanýcý baþlangýçta
	kaç bakteri olduðunu ve kaç saat laboratuvarda kaldýðýný girmeli. Sonucu hesaplayýnýz.
	
	2) Kaç sayý girilecegi ve klavyeden alýnan sayýlarýn toplamý.
	
	3) Klavyeden 0 girilene kadar, girilen sayýlarýn toplamý.
	
	4) Bir otoparkta ücretlendirme þu þekildedir:
		0-4 saat 10 TL
		5-8 saat 12 TL
		9-12 saat 15 TL
		13++ saat 20 TL
	   Klavyeden otoparkta kaç saat kaldýðýný giren birisinin ödeyeceði ücreti hesaplayýn.	
	   			
	*/
	
	

	/*
	// BÝRÝNCÝ PROJE
	int bakteriSayisi,saat,sonBakteri;
	printf("Baslangictaki bakteri sayisini giriniz : ");
	scanf("%d",&bakteriSayisi);
	
	printf("Laboratuvarda kac saat gectigini yaziniz : ");
	scanf("%d",&saat);
	
	for(int i=0 ; i<saat ; i++){
		sonBakteri = bakteriSayisi*2;
		bakteriSayisi = sonBakteri;
	}
	printf("Son bakteri sayisi : %d", sonBakteri);
	*/
	
	
	
	/*
	// ÝKÝNCÝ PROJE
	
	int kacSayi,sayi,toplam;	
	printf("Kac sayi toplamak istersiniz : ");
	scanf("%d", &kacSayi);	
	for(int i=0 ; i<kacSayi ; i++){
		printf("Lutfen %d. sayiyi giriniz : ",i+1);
		scanf("%d", &sayi);
		toplam = toplam + sayi;
	}	
	printf("\nGirdiginiz sayilarin toplami : %d", toplam);
	*/
		
	
	
	/*
	// ÜÇÜNCÜ PROJE
	int sayi;
	int toplam = 0;
	
	while(sayi!=0){
		
		printf("Bir sayi giriniz : ");
		scanf("%d",&sayi);
		
		toplam = toplam+sayi;
		
	}
	printf("Sayilarin toplami : %d",toplam);
	*/
	
	
	// DÖRDÜNCÜ PROJE
	int saat;
		// 0-4 saat 10 TL
		// 5-8 saat 12 TL
		// 9-12 saat 15 TL
		// 13++ saat 20 TL
	printf("\n-------- OTOPARKA HOS GELDINIZ! ---------\n\n");		
	printf("Kac saat kalacaginizi giriniz : ");
	scanf("%d",&saat);
	
	if(saat>0 && saat<5){
		printf("Park ucretiniz 10 TL. Yine bekleriz...");
	
	}
	if(saat>5 && saat<9){
		printf("Park ucretiniz 12 TL. Yine bekleriz...");
	
	}
	if(saat>9 && saat<13){
		printf("Park ucretiniz 15 TL. Yine bekleriz...");
	
	}
	if(saat>13){
		printf("Park ucretiniz 20 TL. Yine bekleriz...");
		
	}
	
	return 0;
}
