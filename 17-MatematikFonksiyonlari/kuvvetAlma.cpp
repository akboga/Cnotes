#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	// Kuvvet alma.
	int x,y,sonuc;
	
	printf("Taban degerini giriniz : ");
	scanf("%d",&x);
	
	printf("Us degerini giriniz : ");	
	scanf("%d",&y);
	
	sonuc = pow(x,y);
	
	printf("Sonuc : %d",sonuc);
	
	return 0;	
	
}
