#include <stdio.h>
#include <stdlib.h>

int main(){
	
	// de�i�kenin �n�nde * sembol� varsa bu onun pointer oldu�unu g�sterir.
	// *degisken
	
	int sayi = 20;
	int *s = &sayi;
	
	// Say�y� ekrana yazd�rma
	printf("Deger : %d\n",sayi);
	
	// Adresi ekrana yazd�rma
	printf("Adresi : %x",s);  // & sembol�n� tan�mlamada kulland���m�z i�in tekrar kullanmad�k.
	
	printf("\n\n--------------------------\n\n");
	
	char harf = 'a';
	char *h = &harf;
	
	// Harfi ekrana yazd�rma
	printf("Harf : %c\n",harf);
	
	// Adresi yazd�rma
	printf("Adres : %x",h);
		
	return 0;
}
