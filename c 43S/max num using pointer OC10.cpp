#include <stdio.h>
int main()
{
	int a,b;
	int *ptra,*ptrb;
	
	printf ("enter the two numbers");
	scanf ("%d %d",&a,&b);
	
	ptra=&a;
	ptrb=&b;
	
	if (*ptra>*ptrb)
	{
		printf("%d is the maximum number ",*ptra);
	}
	else {
	printf ("%d is the maximum number ",*ptrb);
}
}
