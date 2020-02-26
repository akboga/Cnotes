#include <stdio.h>
#include <stdlib.h>

int main(){
	
	/*
	
	// KELEBEK KANADI
	
	int i,j,sayi;
	printf("Satir sayisini giriniz : ");
	scanf("%d",&sayi);
	
	for(i=0 ; i<=sayi ; i++){
		for(j=0 ; j<=i ; j++){
			printf("*");
		}
		printf("\n");
	}
	
	for(i=0 ; i<=sayi ; i++){
		for(j=sayi ; j>=i ; j--){
			printf("*");
		} 
		printf("\n");
	}
	*/
	
	
	int en,boy,i,j;
	
	printf("Karenin enini giriniz : ");
	scanf("%d",&en);
	
	printf("Karenin boyunu giriniz : ");
	scanf("%d",&boy);
	
	for(i=0 ; i<=boy ; i++){
		for(j=0 ; j<=boy ; j++){
			printf("*");
		}
		printf("\n");
	}
	
		
	return 0;
}
