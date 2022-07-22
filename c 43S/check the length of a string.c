#include <stdio.h>
#include <string.h>

void main(){
    char x[500];
    printf("\nEnter the string: ");
    gets(x);
    printf("\nLength of the string '%s' is: %d\n", x, strlen(x));
}