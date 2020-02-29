#include <stdio.h>
#include <stdlib.h>
#include <cstring>

int main(){
	
	// strcpy ve strncpy fonksiyonlarý  >> char içindeki verilerin kopyalanýp baþka yerde kullanýlmasý.
	// strncpy ek olarak kaç karakterin kopyalanacaðý parametresini de içerir.
	
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
