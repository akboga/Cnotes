#include <stdio.h>
#include <stdlib.h>

int main(){
	
	/*  Klavyeden, birbirinden farkl� 2 say� girilmesini sa�layan ve bu iki say� aras�ndaki
		(bu 2 say� dahil) say�lar�n toplam�n� hesaplay�p ekrana yazd�ran program.
	*/	
	
	int sayi1,sayi2,i;
	int toplam = 0;
	
	printf("Birinci sayiyi giriniz : ");
	scanf("%d",&sayi1);
	
	printf("Ikinci sayiyi giriniz : ");
	scanf("%d",&sayi2);
	
	for(i=sayi1 ; i<=sayi2 ; i++){
		toplam = toplam+i;  // 3 4 5 
	}
	
	printf("Girilen sayilarin aralik toplami : %d",toplam);
	
	return 0;
}
