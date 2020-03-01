#include <stdio.h>
#include <stdlib.h>

int main(){
	
	FILE *belge;
	
	// FGETS KULLANIMI
	
	/*
	char karakter[50];
	belge=fopen("C:\\Users\\Akboga\\Desktop\\yeni3.txt","r");
	
	fgets(karakter,15,belge);  // 3 parametre var!
	puts(karakter);*/
	
	
	//FPUTS KULLANIMI
	
	char veri1[20] = "Bilgisayar ";
	char veri2[20] = "Muhendisligi ";
	char veri3[20] = "AnaBilimDali";
	
	belge=fopen("C:\\Users\\Akboga\\Desktop\\yeni4.txt","w");
	fputs(veri1,belge);
	fputs(veri2,belge);
	fputs(veri3,belge);
	
	fclose(belge);
	
	return 0;
}
