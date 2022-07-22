#include <stdio.h>
#include <stdlib.h>
int main ()
{
	float a,b,avg;
	float *ptra,*ptrb;
	
	printf ("enter the numbers to calculate average");
	scanf ("%d %d",&a,&b);
	
	ptra=&a;
	ptrb=&b;
	
	avg=(*ptra+*ptrb)/2 ;
	
	printf ("the average is %d",avg);
	return 0;
}

