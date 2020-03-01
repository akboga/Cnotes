#include <stdio.h>		//Preprocessor
#include <stdlib.h>    //Preprocessor

#define puan 2.25
#define puan2 3.45

// define >>  tüm program içinde geçerli olabilecek tanýmlamayý yaptýðýmýz ifade.

// Preprocessor komutlarý (öniþlemci) 
// Program derlenmeden önce devreye giren (mainden önce) iþlemler
// eðer baþýnda # sembolü varsa öniþlemci komutudur.

int main(){
	
	int Turkce;	
	printf("Turkce netiniz : ");
	scanf("%d",&Turkce);
	
	int Matematik;
	printf("Matematik netiniz : ");
	scanf("%d",&Matematik);

	printf("\n\n");		
	float sozelPuan;
	sozelPuan = Turkce*puan+Matematik*puan2+50.25;
	printf("Toplam sozel puaniniz : %5.2f", sozelPuan);
	
	printf("\n\n");
	
	float sayisalPuan;
	sayisalPuan = Matematik*puan2+Turkce*puan+55.24;
	printf("Toplam sayisal puaniniz : %5.2f",sayisalPuan);
	
	return 0;
}
