#include <stdio.h>
#include <stdlib.h>

int main(){
	
	/*
	
	1) Klavyeden taban sayisi girilen dik ��geni y�ld�z(*) sembol� ile �izdiren program.
	
	2) Girilen bir sayiya kadar olan sayilarin 2'�er arayla toplanmas�.
	
	3) Bir futbol tak�m�n�n 36 hafta sonunda klavyeden girilen galibiyet, ma�lubiyet ve beraberlik
	sayilarina g�re ka� puan ald���n�, e�er 30 puan�n alt�nda ise k�me d��t���n� belirten program.
	 
	*/
	
	
	/*
	int i,j,taban;
	printf("Taban sayisi : ");
	scanf("%d",&taban);
	
	for(i=0 ; i<taban ; i++){
		for(j=0 ; j<=i ; j++){
			printf("*");
		}
		printf("\n");
	}*/
	
	
	
	
	/*
	int girilen,i;
	int toplam=0;
	
	printf("2'ser aralikli toplamak istediginiz sayi : ");
	scanf("%d",&girilen);
	
	for(i=1 ; i<girilen ; i=i+2){
		toplam = toplam + i;
	}
	printf("Toplam : %d",toplam);*/
	
	
	
	printf("\n---------- SKOR VE SAMPIYONLUK HESAPLAMA ----------\n\n");
	int g,m,b,toplam;
	char t[20];
	printf("Hangi takimi destekliyorsunuz : ");
	scanf("%s",&t);
	printf("%s, bu yil kac galibiyet aldi : ",t);
	scanf("%d",&g);
	printf("Peki kac beraberligi var : ");
	scanf("%s",&b);
	printf("Kac maglubiyet gordu : ");
	scanf("%d",&m);
	toplam = (3*g)+(1*b)+(0*m);
	printf("Takiminizin toplam puani : %d\n",toplam);
	
	if(toplam<30){
		printf("Maalesef takiminiz kume dustu...");
		
	}
	if(toplam>=30){
		printf("Kumedesiniz!!!");
	}
	
	
	return 0;
}
