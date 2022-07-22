#include <stdio.h>

void main(){
    int x, y;
    printf("\nEnter the numbers to be swapped:\n");
    scanf("%d %d", &x, &y);
    printf("\nBefore Swapping:-\nx = %d\ty = %d\n", x, y);
    x = x + y;
    y = x - y;
    x = x - y;
    printf("\nAfter Swapping:-\nx = %d\ty = %d\n", x, y);
}