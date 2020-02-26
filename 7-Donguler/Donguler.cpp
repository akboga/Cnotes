#include <stdio.h>
#include <stdlib.h>

int main(){
	
	// For döngüsü
	
	/*
	for(int i = 0 ; i<100 ; i++){
		printf("Hello world!!!\n");
	}*/
	
	/*
	for(int i=1 ; i<=100 ; i++){
		printf("%d - Merhaba Dunya!\n", i);
	}
	*/
	
	
	
	
	/*
 	//COUNTER (GENELDE 0 DAN BAÞLAR.)
	
	
	int counter = 0;
	int i;
	
	for(i = 0 ; i<=10 ; i++){
		counter = counter + i;
	}
	printf("TOPLAM : %d" , counter);
	*/
	
	
	
	
	//FAKTORÝYEL
	/*
	int i;
	int faktoriyel = 1;
	
	for (i=1 ; i<=5 ; i++){
		
		faktoriyel = faktoriyel*i;
	}
	printf("Faktoriyel degeri : %d",faktoriyel);*/
	
	
	
	
	
	/*
	int i, sayi;
	int faktoriyel = 1;
	
	printf("Hesaplanacak sayiyi giriniz: ");
	scanf("%d", &sayi);
	
	for(i=1 ; i<=sayi ; i++){
		faktoriyel = faktoriyel * i;
	}
	printf("Sonuc : %d", faktoriyel);
	*/
	
	
	
	
	
	
	/*
	//FÝBONACCÝ SERÝSÝ
	int a = 1;
	int b = 1;
	int c, i, sayi;
	
	printf("Bir sayi giriniz : ");
	scanf("%d",&sayi);
	printf("%d\n%d\n",a,b);
	
	for(i = 1 ; i<=(sayi-2) ; i++){
		
		c=a+b;
		a=b;
		b=c;
		printf("%d\n", c);
	}*/
	
	
	
	
	
	
	/*	
	int i, sayi;
	printf("Bir sayi giriniz : ");
	scanf("%d",&sayi);
	
	for(i=1 ; i<=sayi ; i++){
		if(i%5==0){
			printf("%d\n",i);
		}
	}
	*/
	
	
	
	//3 basamaklý sayýyý ayýrma.
	
	int birler,onlar,yuzler,sayi;
	
	printf("Uc basamakli bir sayi giriniz : ");
	scanf("%d\n",&sayi);

	
	yuzler = sayi/100;
	printf("Yuzler basamagi : %d\n",yuzler);
	/*
	onlar = sayi/10;
	onlar = onlar%10;
	printf("Onlar basamagi : %d\d",onlar);
	
	birler = sayi%10;
	printf("Birler basamagi : %d",birler);
	*/
	
	return 0;
}
