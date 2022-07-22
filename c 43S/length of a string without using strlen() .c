#include <stdio.h>
#include <string.h>

void main(){
    char x[100];
    printf("\nEnter the string whose length is to be calculated: ");
    gets(x);
    int size = 0;
    char y[100];
    strcpy(y, x);
    while(y[size] != '\0')
        size++;
    printf("\nSize of '%s' is: %d\n", x, size);
}