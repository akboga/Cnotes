#include <stdio.h>
#include <stdlib.h>

int main(){
	
	/* 	Heybeliada'da bulunan yaz�l�m evi otelinde k�� mevsiminde 320 ki�i kalm��t�r.
		�lkbaharda, k�� mevsiminin d�rtte biri, yaz mevsiminde ilkbahar�n 8 kat� ve sonbahar
		mevsiminde de yaz mevsiminin 10da 1i kadar ki�i kald���na g�re bu otelde 1 y�lda ka�
		ki�i kalm��t�r?
	*/
	
	printf("\n---------- YAZILIM EVI OTELI ----------\n\n");
	
	int ilkbahar,sonbahar,yaz;
	int kis = 320;
	
	ilkbahar = kis/4;
	yaz = ilkbahar*8;
	sonbahar = yaz/10;
	
	printf("Yazilim evi otelinde yazin %d kisi kalmistir.\n",yaz);
	printf("Yazilim evi otelinde kisin %d kisi kalmistir.\n",kis);
	printf("Yazilim evi otelinde sonbaharda %d kisi kalmistir.\n",sonbahar);
	printf("Yazilim evi otelinde ilkbaharda %d kisi kalmistir.",ilkbahar);
	
	//Bo�verin bu projeyi.
	
	return 0;
}
