#include <stdio.h>
#include <stdlib.h>

int main(){
	
	FILE *belge;
	belge = fopen("C:\\Users\\Akboga\\Desktop\\yeni2.txt","r");
	
	char karakter;
	
	do{                          //D�ng� i�ine al�nmazsa tek karakteri okur.
		karakter=getc(belge);
		printf("%c",karakter);
	}while(karakter!=EOF);
	
	fclose(belge);
	
	return 0;
}
