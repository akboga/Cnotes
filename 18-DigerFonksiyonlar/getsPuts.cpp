#include <stdio.h>
#include <stdlib.h>

int main(){
	
	// gets ve puts ifadeleri >>> scanf sadece tek kelime al�yordu �imdi uzun veriler alabilece�iz.
	
	char bilgi[40];
	printf("Bilgiyi giriniz : ");
	gets(bilgi);
	printf("\n\n");
	puts(bilgi);
	
	return 0;
}
