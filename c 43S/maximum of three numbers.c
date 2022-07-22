#include <stdio.h>
#include <stdlib.h>

int maxnumfinder(int *x, int size);

void main(){
    int *a, n;
    printf("\nEnter the numbers to be compared: ");
    scanf("%d", &n);
    a = malloc(n * sizeof(int));
    printf("\nEnter the numbers to be compared:\n");
    for(int i = 0; i < n; i ++)
        scanf("%d", &a[i]);
    printf("\nMaximum among of all the input numbers is: %d\n", maxnumfinder(a, n));
}

int maxnumfinder(int *x, int size){
    for(int i = 0; i < size; i ++){
        for(int j = (i + 1); j < size; j ++){
            if(x[i] > x[j]){
                int tmp = x[i];
                x[i] = x[j];
                x[j] = tmp;
            }
            else
                continue;
        }
    }
    return(x[size - 1]);
}