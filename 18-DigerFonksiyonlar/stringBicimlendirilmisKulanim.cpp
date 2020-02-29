#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char bilgi[40];
	printf("Mesajiniz : ");
	scanf("%s",bilgi);
	
	printf("%s",bilgi);
	
	printf("\n");
	
	printf("%10s",bilgi); // toplam kaç karakter yazdýracaðýný söylüyoruz.
	
	printf("\n");
	
	printf("%20.5s",bilgi); // 20 karakter kullan 5 tane bizim girdiðimizden al.
	
	printf("\n");
	
	printf("%-20s",bilgi);  // 20 karakter kullan fakat boþluklarý saðdan doldur yazýyý sola daya
	
	
	return 0;
}
