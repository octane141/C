#include <stdio.h>
#include <stdlib.h>

void main(){
    int *a,n;
    printf("\nEnter the number of numbers to be compared: ");
    scanf("%d", &n);
    a = malloc(n * sizeof(int));
    printf("\nEnter the numbers to be compared:\n");
    for(int i = 0; i < n; i ++)
        scanf("%d", &a[i]);
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
    printf("\nThe 2nd minimum among the given numbers is: %d\n", a[1]);
}