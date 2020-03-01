#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	printf("\n---------- MATEMATIK MENUSU -----------\n\n");
		
	printf("1-Toplama Islemi\n");
	printf("2-Cikarma Islemi\n");
	printf("3-Carpma Islemi\n");
	printf("4-Bolme Islemi\n");
	printf("5-Karekok Alma\n");
	printf("6-Denklem Cozumu (5x^2+4x+3)");
	printf("\n\n---------------------------------------\n\n");
	
	int s1,s2,sonuc,islem;
	printf("Lutfen islem seciniz : ");
	scanf("%d",&islem);
	
	switch(islem){
		case 1:
			printf("Toplanacak sayilari giriniz : "); 
			scanf("%d %d",&s1,&s2);
			sonuc = s1+s2;
			printf("Sonucunuz : %d",sonuc);
		break;
		
		case 2:
			printf("Cikartilacak sayilari giriniz : ");
 			scanf("%d %d",&s1,&s2);
 			sonuc = s1-s2;
 			printf("Sonucunuz : %d",sonuc);
 		break;
		
		case 3:
			printf("Carpmak istediginiz sayilari giriniz : ");	 
			scanf("%d %d",&s1,&s2);
			sonuc = s1-s2;
			printf("Sonucunuz : %d",sonuc);
		break;
		
		case 4:
			printf("Bolmek istediginiz sayilari giriniz : ");
			scanf("%d %d",&s1,&s2);
			sonuc = s1/s2;
			printf("Sonucunuz : %d",sonuc);
		break;
		
		case 5:
			printf("Karekokunu almak istediginiz sayi : ");
			scanf("%d", &s1);
			sonuc = sqrt(s1);
			printf("Sonucunuz : %d",sonuc);
		break;
		
		case 6:
			printf("Denklemin x degerini giriniz : ");
			scanf("%d",&s1);
			sonuc = 5*(s1^2)+(4*s1)+3;
			printf("Sonucunuz : %d",sonuc);
		break;
		
		default:
		 printf("Hatali islem girdiniz!!!");
	}
	
	return 0;
}
