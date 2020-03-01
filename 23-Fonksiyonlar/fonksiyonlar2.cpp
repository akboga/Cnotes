#include <stdio.h>
#include <stdlib.h>

// GERÝYE DEÐER DÖNDÜREN FONKSÝYON ÖRNEÐÝ

int toplam(int s1,int s2){
	int s3;
	s3=(s1+s2)*5-10;
	return s3;
}

int main(){

	int t;
	/*
	t = toplam(3,7);
	printf("%d\n",t);
	
	t= toplam(10,4);
	printf("%d",t); */
	
	int a,b;
 	printf("birinci sayiyi giriniz: ");
	scanf("%d",&a);
 	printf("\nikinci sayiyi giriniz: ");
	scanf("%d",&b);
  
 	t=toplam(a,b);
 	printf("toplam deger: %d",t);
	
	return 0;
}
