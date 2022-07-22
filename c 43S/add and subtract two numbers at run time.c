#include <stdio.h>

void main(){
    int x, y;
    printf("\nEnter the 2 numbers:\n");
    scanf("%d %d", &x, &y);
    printf("\nAddition: %d + %d = %d", x, y, (x+y));
    printf("\nSubtraction: %d - %d = %d", x, y, (x-y));
}