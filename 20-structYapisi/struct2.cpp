#include <stdio.h>
#include <stdlib.h>
#include <cstring>


struct kayit{
	char ad[20];
	int yas;
	int sinif;
	float ortalama;
};

int main(){
	
	struct kayit ogr;
	
	printf("Adiniz : ");
	scanf("%s\n",&ogr.ad);
	
	printf("Yasiniz : ");
	scanf("%d\n",&ogr.yas);
	
	printf("Sinifiniz : ");
	scanf("%d\n",&ogr.sinif);
	
	printf("Ortalamaniz : ");
	scanf("%.2f\n",&ogr.ortalama);
	
	printf("%s",ogr.ad);
	printf("%d",ogr.yas);
	printf("%d",ogr.sinif);
	printf("%f",ogr.ortalama);
	
	return 0;
}
