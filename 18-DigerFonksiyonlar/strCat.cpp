#include <stdio.h>
#include <stdlib.h>
#include <cstring>

int main(){
	
	// strcat komutu
	// G�nderilen verileri birle�tirmek i�in kullan�lan ifade
	
	char kitapad[20],yazar[20],kitapyazar[20];
	
	printf("Kitap ad� ve yazar� giriniz : ");
	scanf("%s%s",kitapad,yazar);
	
	strcat(kitapyazar,kitapad);
	strcat(kitapyazar," <---> ");
	strcat(kitapyazar, yazar);
	printf("\n-------------------------\n");
	printf("%s",kitapyazar);
	
	
	return 0;
}
