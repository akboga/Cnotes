#include <stdio.h>
#include <stdlib.h>

int main(){
	/*
	DOSYA KISALTMALAR VE KAVRAMLAR
	Input   ---> Giri�
	Output  ---> ��k��
	File    ---> Dosya / f
	Put     ---> Yazd�rma
	Get     ---> Okuma/Alma
	Open    ---> A�ma
	Close   ---> Kapatma
	Write   ---> Yazma / w
	Read    ---> Okuma / r
	Add     ---> Ekleme / a
	EndOfFile  ---> Dosya sonu
	fgets   ---> Toplu okuma
	fputs   ---> Toplu yazma 
	*/
	
	
	FILE *dosya;
	dosya = fopen("C:\\Users\\Akboga\\Desktop\\yeni.txt","w"); //Dosya olu�turduk.
	
	putc('a',dosya);  //Dosya i�ine veri yazd�k.
	putc('\n',dosya);
	putc('b',dosya);		

	
	fclose(dosya);  //Okuma i�lemini durdurduk.
	
	
		
	return 0;
}
