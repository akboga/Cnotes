#include <stdio.h>
#include <stdlib.h>

int main(){
	
	//Switch-Case
	
	/*
	switch(degisken){
	
	case 1:...
	case 2:...
	
	}
	*/
	
	
	
	
	
	/*
	int sayi;
	printf("Istediginiz ayin sayisini giriniz : ");
	scanf("%d",&sayi);
	
	switch(sayi){
		case 1: printf("Ocak ayindasiniz."); 
		break;
		case 2: printf("Subat ayindasiniz.");
		break;
		case 3: printf("Mart ayindasiniz.");
		break;
		case 4: printf("Nisan ayindasiniz.");
		break;
		case 5: printf("Mayis ayindasiniz.");
		break;
		case 6: printf("Haziran ayindasiniz."); 
		break;
		case 7: printf("Temmuz ayindasiniz.");
		break;
		case 8: printf("Agustos ayindasiniz.");
		break;
		case 9: printf("Eylul ayindasiniz.");
		break;
		case 10: printf("Ekim ayindasiniz.");
		break;
		case 11: printf("Kasim ayindasiniz.");
		break;
		case 12: printf("Aralik ayindasiniz.");
		break;
		
		default: printf("Hatali sayi girdiniz!!!");
	}
	*/
	
	
	/*
	char dersKodu;
	printf("Ders Kodu : ");
	scanf("%s",&dersKodu);
	
	switch(dersKodu){
		case 't' : printf("Turkce Dersi");
		break;
		case 's' : printf("Sosyal Bilgiler Dersi");
		break;
		case 'm' : printf("Matematik Dersi");
		break;
		case 'f' : printf("Fen Bilgisi Dersi");
		break;
		
		default : printf("Gecersiz Ders Kodu!!!");
	}
	*/
	
	
	
	
	/*
	printf("\n---------- BILGI YARISMASINA HOS GELDINIZ ---------- \n\n");
	
	char cevap;
	char name, soyad, meslek;
	int yas;
	
	printf("Adiniz : ");
	scanf("%s",&name);
	printf("Soyadiniz : ");
	scanf("%s",&soyad);
	printf("Yasiniz : ");
	scanf("%d",&yas);
	printf("Mesleginiz : ");
	scanf("%s",&meslek);
	
	printf("\nHosgeldiniz %s ! Yarismamiza katildiginiz icin tesekkur eder ve basarilar dileriz.\n\n", name);
	
	printf("Ilk sorumuzla baslayalim.\n\n");
	
	printf("1)TBMM ifadesinin acilimi nedir?\nA)Turkiye Buyuk Millet Meclisi\nB)FASFAGA\nC)FAGFAGAG\nD)fasdgafg\n\n");
	
	printf("Cevabiniz : ");
	scanf("%s", &cevap);
	
	switch(cevap){
		case 'a' : printf("Tebrikler cevabiniz dogru! Ikinci soruya gecebiliriz.");
		break;
		case 'b' : printf("Maalesef yanlis cevap! Tesekkurler.");
		break;
		case 'c' : printf("Maalesef yanlis cevap! Tesekkurler.");
		break;
		case 'd' : printf("Maalesef yanlis cevap! Tesekkurler.");
		break;
		default : printf("Lutfen gecerli bir cevap giriniz!!!");
	}
	*/
	
	
	int sayi1, sayi2, sonuc, islem;
	
	
	printf("\n-------- HESAP MAKÝNESÝNE HOS GELDINIZ --------\n\n");
	
	printf("Birinci sayiyi giriniz : ");
	scanf("%d",&sayi1);
	
	printf("Ikinci sayiyi giriniz : ");
	scanf("%d", &sayi2);
	
	printf("\n\n--------------- ISLEM MENUSU ---------------------\n\n");
	
	printf("Toplamak icin >>> 1\n");
	printf("Cikarmak icin >>> 2\n");
	printf("Carpmak icin >>> 3\n");
	printf("Bolmek icin >>> 4\n");
	
	printf("\nYapmak istediginiz islemi seciniz : ");
	scanf("%d", &islem);
	
	
	
	switch(islem){
		
		case 1 : sonuc = sayi1 + sayi2;
		break;
		case 2 : sonuc = sayi1 - sayi2;
		break;
		case 3 : sonuc = sayi1 * sayi2;
		break;
		case 4 : sonuc = sayi1 / sayi2;
		break;
		
		default: printf("Gecersiz Islem!!!");
	}
	
	printf("\nIsleminizin sonucu : %d", sonuc);
	
	return 0;
	
}
