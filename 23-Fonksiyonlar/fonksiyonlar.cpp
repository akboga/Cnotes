#include <stdio.h>
#include <stdlib.h>

// Fonksiyonlar kendi aras�nda 2'ye ayr�lacak. 
// Geriye de�er d�nd�renler ve d�nd�rmeyenler.
// E�er fonksiyon i�erisinde yap�lan i�lemler sonucunda bi de�er elde ediyorsan bu de�er d�nd�ren fonk.
// D�nd�rmeyip sadece yazd�rma i�lemi yap�yorsa geriye de�er d�nd�rmeyen fonk.
// Geriye de�er d�nd�rmeyen fonksiyonlar "void" ifadesiyle tan�mlanacak.

// GER�YE DE�ER D�ND�RMEYEN FONKS�YON �RNE��

void listele(){
	printf("Ali Yilmaz\n");
	printf("Ay�e Dogan\n");
	printf("Mert Gunduz\n");
	printf("Hakan Kaya\n");
	printf("Ahmet Sonar");
}

int main(){
	
	listele();
	
	return 0;
}
