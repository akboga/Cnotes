#include <stdio.h>
#include <stdlib.h>

int main(){
	
	FILE *belge;
	belge = fopen("C:\\Users\\Akboga\\Desktop\\yeni2.txt","r");
	
	char karakter;
	
	do{                          //Döngü içine alýnmazsa tek karakteri okur.
		karakter=getc(belge);
		printf("%c",karakter);
	}while(karakter!=EOF);
	
	fclose(belge);
	
	return 0;
}
