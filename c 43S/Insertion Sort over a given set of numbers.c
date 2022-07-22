#include <stdio.h>
#include <stdlib.h>

void main(){
    int *a, n;
    printf("\nEnter the size of the array: ");
    scanf("%d", &n);
    a = malloc(n * sizeof(int));
    printf("\nEnter the array elements:\n");
    for(int i = 0; i < n; i ++)
        scanf("%d", &a[i]);
    printf("\nArray before sorting:-\n");
    for(int i = 0; i < n; i ++)
        printf("%d  ", a[i]);
    for(int i = 1; i < n; i ++){
        int x = a[i];
        int j = i - 1;
        while(j >= 0 && a[j] > x){
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = x;
    }
    printf("\n\nArray after sorting:-\n");
    for(int i = 0; i < n; i ++)
        printf("%d  ", a[i]);
}