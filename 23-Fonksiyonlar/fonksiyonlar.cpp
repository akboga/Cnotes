#include <stdio.h>
#include <stdlib.h>

// Fonksiyonlar kendi arasýnda 2'ye ayrýlacak. 
// Geriye deðer döndürenler ve döndürmeyenler.
// Eðer fonksiyon içerisinde yapýlan iþlemler sonucunda bi deðer elde ediyorsan bu deðer döndüren fonk.
// Döndürmeyip sadece yazdýrma iþlemi yapýyorsa geriye deðer döndürmeyen fonk.
// Geriye deðer döndürmeyen fonksiyonlar "void" ifadesiyle tanýmlanacak.

// GERÝYE DEÐER DÖNDÜRMEYEN FONKSÝYON ÖRNEÐÝ

void listele(){
	printf("Ali Yilmaz\n");
	printf("Ayþe Dogan\n");
	printf("Mert Gunduz\n");
	printf("Hakan Kaya\n");
	printf("Ahmet Sonar");
}

int main(){
	
	listele();
	
	return 0;
}
