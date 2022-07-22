#include <stdio.h>

void main(){
    int year;
    printf("\nEnter the year to be checked: ");
    scanf("%d", &year);
    if(year % 4 == 0)
        printf("\n%d is a Leap Year\n", year);
    else
        printf("\n%d is not a Leap Year\n", year);
}