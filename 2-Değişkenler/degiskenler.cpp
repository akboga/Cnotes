#include <stdio.h>
#include <stdlib.h>

//Degiskenler

/*
-String
-Integer
-Double
-Float
-Char
-Long
-Short
*/

int main(){
	
	/*
	char kitapadi[20] = "Mufettis";
	char kitapyazari[10] = "Gogol";
	
	printf("%s\n",kitapadi);
	printf("%s",kitapyazari);	
	*/
	
	
	/*
	char kitapturu[10] = "Tiyatro";
	printf("Kitap turu : %s", kitapturu);
	*/
	
	/*
	char isim;
	printf("Lutfen bir isim giriniz: ");
	scanf("%d",isim);
	printf("Adýnýz : %d",&isim);
	*/
	
	/*
	char kitapadi[20] = "Hayvan Ciftligi";
	char kitapyazari[20] = "George Orwel";
	
	printf("Kitabin Yazari : %s\n", kitapyazari);
	printf("Kitabin Adi : %s",kitapadi);
	*/


	char kitapyazari[20] = "Ahmet Serif Izgorem";
	char kitapturu[10] = "Hikaye";
	char kitapsayfa[5] = "124";
	char basimyili[5] = "2001"; 
	char kitapName[25] = "Avucunuzdaki Kelebek";	
	
	printf("**************KITAP TANITIMINA HOS GELDINIZ!****************\n");
	printf("Kitabin Adi : %s\n", kitapName);
	printf("Kitabin Yazari : %s\n",kitapyazari);
	printf("Kitap Turu : %s\n",kitapturu);
	printf("Kitanin Sayfa Sayisi : %s\n",kitapsayfa);
	printf("Kitap Basim Yili : %s",basimyili);
	
	
	return 0;
}



