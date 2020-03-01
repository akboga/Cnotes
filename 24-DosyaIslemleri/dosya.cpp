#include <stdio.h>
#include <stdlib.h>

int main(){
	/*
	DOSYA KISALTMALAR VE KAVRAMLAR
	Input   ---> Giriþ
	Output  ---> Çýkýþ
	File    ---> Dosya / f
	Put     ---> Yazdýrma
	Get     ---> Okuma/Alma
	Open    ---> Açma
	Close   ---> Kapatma
	Write   ---> Yazma / w
	Read    ---> Okuma / r
	Add     ---> Ekleme / a
	EndOfFile  ---> Dosya sonu
	fgets   ---> Toplu okuma
	fputs   ---> Toplu yazma 
	*/
	
	
	FILE *dosya;
	dosya = fopen("C:\\Users\\Akboga\\Desktop\\yeni.txt","w"); //Dosya oluþturduk.
	
	putc('a',dosya);  //Dosya içine veri yazdýk.
	putc('\n',dosya);
	putc('b',dosya);		

	
	fclose(dosya);  //Okuma iþlemini durdurduk.
	
	
		
	return 0;
}
