#include <stdio.h>
int main()
{
	
	int n,i,j,swap;
	int arr[100];
	
	printf (" enter the number of elements to be sorted");
	scanf ("%d",&n);
	
	printf ("\n Now enter the Elements to be Bubble sorted");
	
	for (i=0;i<n;i++)
	{
		scanf ("%d",&arr[i]);
		
	}
	
	
	for (i=0;i<n;i++)
	
	{
		for (j=i+1;j<n;j++)
		{
			
			if (arr[i]>arr[j])
			{
				swap=arr[i];
				arr[i]=arr[j];
				arr[j]=swap;
			}
			
		
		}
	}
	
	
	printf ("\n the sorted elements are ");
	for (i=0;i<n;i++)
	{
		printf ("%d ",arr[i]);
	}
	
	return 0;
}
