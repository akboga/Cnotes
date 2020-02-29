#include <stdio.h>
#include <stdlib.h>
#include <cstring>

int main(){
	
	// strcat komutu
	// Gönderilen verileri birleþtirmek için kullanýlan ifade
	
	char kitapad[20],yazar[20],kitapyazar[20];
	
	printf("Kitap adý ve yazarý giriniz : ");
	scanf("%s%s",kitapad,yazar);
	
	strcat(kitapyazar,kitapad);
	strcat(kitapyazar," <---> ");
	strcat(kitapyazar, yazar);
	printf("\n-------------------------\n");
	printf("%s",kitapyazar);
	
	
	return 0;
}
