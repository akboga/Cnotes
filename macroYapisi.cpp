#include <stdio.h>
#include <stdlib.h>

#define maksimum(s1,s2) (s1>s2) ? s1 : s2  //iki sayidan b�y�k olan� yazd�r.
								//bu k�s�m olmasayd� true-false d�nerdi.
int main(){
	
	printf("%d\n",maksimum(3,5));
	
	return 0;
}
