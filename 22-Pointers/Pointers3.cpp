#include <stdio.h>
#include <stdlib.h>

int main(){
	
	// Göstericilerin üzerinde matematiksel iþlemler yapabiliriz.
	// Kendimizden önceki ve sonraki adresleri göstereceðiz.
	
	char harf = 'a';
	char *pt = &harf;
	
	printf("Adres : %x\n",pt);  // 22fe47
	
	pt++;
	
	printf("Adres 2 : %x\n",pt); // 22fe48
	
	pt--;
	
	printf("Adres 3 : %x\n",pt);  // 22fe47
	
	pt = pt+5;
	
	printf("Adres 4 : %x",pt);  // 22fe4c
	
	return 0;
}
