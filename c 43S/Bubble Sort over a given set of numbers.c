#include <stdio.h>
#include <stdlib.h>

void main(){
    int *a, n;
    printf("\nEnter the number of numbers to be sorted: ");
    scanf("%d", &n);
    a = malloc(n * sizeof(int));
    printf("\nEnter the numbers:\n");
    for(int i = 0; i < n; i ++)
        scanf("%d", &a[i]);
    printf("\nArray before sorting:-\n");
    for(int i = 0; i < n; i ++)
        printf("%d  ", a[i]);
    for(int i = 0; i < n; i ++){
        for(int j = (i + 1); j < n; j ++){
            if(a[i] > a[j]){
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
            else
                continue;
        }
    }
}