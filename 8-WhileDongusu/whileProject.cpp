#include <stdio.h>
#include <stdlib.h>

int main(){
	
	// While döngüsü 
	
	/*
	int i = 1;	
	while(i<=10){
		printf("%d\n",i);
		i++;
	}*/
	
	
	//Faktoriyel
	int faktoriyel = 1;
	int sayi;
	printf("Bir sayi giriniz : ");
	scanf("%d",&sayi);
	
	while(sayi>1){
		faktoriyel = faktoriyel * sayi;
		sayi--;
	}
	printf("Faktoriyeli : %d",faktoriyel);
	
	
	return 0;
}
