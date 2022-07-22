#include <stdio.h>
#include <stdlib.h>

void main(){
    int *a, n;
    printf("\nEnter the array size: ");
    scanf("%d", &n);
    a = malloc(n * sizeof(int));
    printf("\nEnter the array elements:\n");
    for(int i = 0; i < n; i ++)
        scanf("%d", &a[i]);
    printf("\nOriginal Array:-\n");
    for(int  i = 0; i < n; i ++)
        printf(" %d  ", a[i]);
}