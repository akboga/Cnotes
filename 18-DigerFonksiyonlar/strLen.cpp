#include <stdio.h>
#include <stdlib.h>

int main(){
	
	// strLen fonksiyonu. Girilen karakter dizisinin uzunluðu.
	
	char a[20]="Program";
    char b[20]={'P','r','o','g','r','a','m','\0'};

    printf("Length of string a = %ld \n",strlen(a));
    printf("Length of string b = %ld \n",strlen(b));
	
	
	return 0;
}
