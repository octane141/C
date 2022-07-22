#include <stdio.h>

int main()

{
	
	int value,hole,i,n;
	int arr[100];
	
	printf ("Enter the  number  of elemeents of array");
	scanf ("%d",&n);
	
	printf("\n Now Enter the elememts to be sorted");
	for (i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	
	for (i=1;i<n;i++)
	{
	value=arr[i];
	hole=i;
	
	while (hole>0 && arr[hole-1]>value )
	{
		arr[hole]=arr[hole-1];
		hole= hole-1;
	}
	arr[hole]=value;
	}
	
	
	printf ("printing the sorted elements");
	
	for (i=0;i<n;i++)
	{
		printf ("%d ",arr[i]);
	}
}
