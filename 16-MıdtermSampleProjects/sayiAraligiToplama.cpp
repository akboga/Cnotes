#include <stdio.h>
#include <stdlib.h>

int main(){
	
	/*  Klavyeden, birbirinden farklý 2 sayý girilmesini saðlayan ve bu iki sayý arasýndaki
		(bu 2 sayý dahil) sayýlarýn toplamýný hesaplayýp ekrana yazdýran program.
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
