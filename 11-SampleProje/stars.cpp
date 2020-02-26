#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i,j,sayi;
	
	printf("Lutfen basamak sayisini giriniz : ");
	scanf("%d", &sayi);
	
	// i basamaklari saymak icin, j yýldýzlarý saymak icin
	
	for(i=1 ; i<=sayi ; i++){
		for(j=1 ; j<=i ; j++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
