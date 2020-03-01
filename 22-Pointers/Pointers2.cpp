#include <stdio.h>
#include <stdlib.h>

int main(){
	
	// deðiþkenin önünde * sembolü varsa bu onun pointer olduðunu gösterir.
	// *degisken
	
	int sayi = 20;
	int *s = &sayi;
	
	// Sayýyý ekrana yazdýrma
	printf("Deger : %d\n",sayi);
	
	// Adresi ekrana yazdýrma
	printf("Adresi : %x",s);  // & sembolünü tanýmlamada kullandýðýmýz için tekrar kullanmadýk.
	
	printf("\n\n--------------------------\n\n");
	
	char harf = 'a';
	char *h = &harf;
	
	// Harfi ekrana yazdýrma
	printf("Harf : %c\n",harf);
	
	// Adresi yazdýrma
	printf("Adres : %x",h);
		
	return 0;
}
