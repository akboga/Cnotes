#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char bilgi[40];
	printf("Mesajiniz : ");
	scanf("%s",bilgi);
	
	printf("%s",bilgi);
	
	printf("\n");
	
	printf("%10s",bilgi); // toplam ka� karakter yazd�raca��n� s�yl�yoruz.
	
	printf("\n");
	
	printf("%20.5s",bilgi); // 20 karakter kullan 5 tane bizim girdi�imizden al.
	
	printf("\n");
	
	printf("%-20s",bilgi);  // 20 karakter kullan fakat bo�luklar� sa�dan doldur yaz�y� sola daya
	
	
	return 0;
}
