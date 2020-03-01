#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int sayi = 10;
	int sayi2 = 20;
	double sayi3 = 12.34;
	char harf = 'a';
	printf("%d\n%d\n%f\n%c",sayi,sayi2,sayi3,harf);
	
	printf("\n\nBellekteki yerleri :\n\n");
	
	printf("%x\n",&sayi);  // hexadecimal türde olduðu için %x ile gösteririz.
	printf("%x\n",&sayi2);  // & iþareti bellekteki adresini görmemiz için kullanýlýr.
	printf("%x\n",&sayi3);
	printf("%x",&harf);
	
	return 0;
}
