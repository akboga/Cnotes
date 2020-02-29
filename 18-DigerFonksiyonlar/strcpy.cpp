#include <stdio.h>
#include <stdlib.h>
#include <cstring>

int main(){
	
	// strcpy ve strncpy fonksiyonlar�  >> char i�indeki verilerin kopyalan�p ba�ka yerde kullan�lmas�.
	// strncpy ek olarak ka� karakterin kopyalanaca�� parametresini de i�erir.
	
	char kaynak[30] = "Merhaba Balikesir";	
	char kopya[30] = "";
	strcpy(kopya,kaynak); 
	printf("%s\n",kopya);
	
	char nereden[15] = "Mersin";
	char nereye[15] = "";
	strncpy(nereye,nereden,3);
	printf("%s",nereye);
	
	return 0;
}
