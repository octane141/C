#include <stdio.h>
#include <string.h>

void main(){
    char x[100];
    char revx[100];
    printf("\nEnter the string to be reversed: ");
    gets(x);
    for(int i = 0, j = (strlen(x) - 1); i < strlen(x) && j >= 0; i ++, j --)
        revx[i] = x[j];
    printf("\nReversed String: %s\n", revx);
}