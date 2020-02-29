#include <stdio.h>
#include <stdlib.h>

int main(){
	
	/* 	Heybeliada'da bulunan yazýlým evi otelinde kýþ mevsiminde 320 kiþi kalmýþtýr.
		Ýlkbaharda, kýþ mevsiminin dörtte biri, yaz mevsiminde ilkbaharýn 8 katý ve sonbahar
		mevsiminde de yaz mevsiminin 10da 1i kadar kiþi kaldýðýna göre bu otelde 1 yýlda kaç
		kiþi kalmýþtýr?
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
	
	//Boþverin bu projeyi.
	
	return 0;
}
