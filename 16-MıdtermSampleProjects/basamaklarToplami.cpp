#include <stdio.h>
#include <stdlib.h>

int main(){
	
	//Klavyeden girilen 3 basamaklý sayýnýn rakamlarý toplamýný yazdýran program.
	
	int sayi,birlerBasamagi,onlarBasamagi,yuzlerBasamagi,toplam;
	
	printf("Uc basamakli bir sayi giriniz : ");
	scanf("%d",&sayi);
	
	birlerBasamagi = sayi%10;
	
	yuzlerBasamagi = sayi/100;
	
	onlarBasamagi = ((sayi%100)-birlerBasamagi)/10;
	
	toplam = birlerBasamagi + onlarBasamagi + yuzlerBasamagi;
	
	printf("Basamaklariniz : %d | %d | %d \n",yuzlerBasamagi,onlarBasamagi,birlerBasamagi);
	
	printf("Toplamlari : %d",toplam);
	
	
	return 0;
}
