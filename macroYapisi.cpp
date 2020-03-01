#include <stdio.h>
#include <stdlib.h>

#define maksimum(s1,s2) (s1>s2) ? s1 : s2  //iki sayidan büyük olaný yazdýr.
								//bu kýsým olmasaydý true-false dönerdi.
int main(){
	
	printf("%d\n",maksimum(3,5));
	
	return 0;
}
