#include <stdio.h>
#include <stdlib.h>

int cube(int a){
	int sonuc;
	sonuc = a*a*a;
	return sonuc;
}

void dortgen(int kisa,int uzun){
	int i,j;
	for(i=0;i<uzun;i++){
		for(j=0;j<kisa;j++){
			printf("*");
		}
		printf("\n");
	}
}

int main(){
	
	int sayi,s;
	printf("Bir sayi giriniz : ");
	scanf("%d",&sayi);
	s=cube(sayi);
	printf("Sonuc : %d",s);
	
	printf("\n\n-----------------\n\n");
	
	dortgen(4,5);
	
	return 0;
}
