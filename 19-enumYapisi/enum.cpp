#include <stdio.h>
#include <stdlib.h>
#include <cstring>
	
	// enum yap�s�
	
	enum sehirler{
		adana,adiyaman,afyon,agri,amasya,ankara,antalya,aydin,artvin,balikesir
	};
	
	int main(){
		
		enum sehirler il;
		il = adiyaman;
		printf("%d",il+1);
		
	return 0;

	}
	

