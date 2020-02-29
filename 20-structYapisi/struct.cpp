#include <stdio.h>
#include <stdlib.h>
#include <cstring>

// struct yapisi

struct kitapbilgi{
	char kitapadi[20];
	char yazar[20];
	int fiyat;
	float puan;
};

int main(){
	
	struct kitapbilgi kb = {"SekerPortakali","Vasconceulos",15,8.25};
	
	printf("Kitap adi : %s\n",kb.kitapadi);
	printf("Kitap yazari : %s\n",kb.yazar);
	printf("Fiyati : %d\n",kb.fiyat);
	printf("Puani : %.2f",kb.puan);
	
	
	return 0;
}
