#include <stdio.h>

struct length{
    int linch;
    int lfeet;
}lt[100];

void main(){
    int n;
    printf("\nEnter the number of length inputs you want to give: ");
    scanf("%d", &n);
    printf("\nEnter the lengths:\n");
    for(int i=0;i<n;i++)
	{
        printf("Length(inches) %d: ",(i+1));
        scanf("%d", &lt[i].linch);
        printf("Length(feet) %d: ",(i+1));
        scanf("%d", &lt[i].lfeet);
    }
    int suminch=0, sumfeet=0;
    for(int i=0;i<n;i++){
        suminch=suminch+lt[i].linch;
        sumfeet=sumfeet+lt[i].lfeet;
    }
    printf("\nLength sum(inches): %d\nLength sum(feet): %d\n", suminch, sumfeet);
}