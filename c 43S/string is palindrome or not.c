#include <stdio.h>
#include <string.h>

void main(){
    char x[500] = "";
    char y[500] = "";
    printf("\nEnter the string: ");
    gets(x);
    printf("\nLength: %d\n", strlen(x));
    for(int i = 0; i < strlen(x); i ++)
        printf("%c\n", x[i]);
    for(int i = 0, j = (strlen(x) - 1); i < strlen(x) && j >= 0; i ++, j --)
        y[i] = x[j];
    if(strcmp(x, y) == 0)
        printf("\nThe string '%s' is a Palindrome String\n", x);
    else
        printf("\nThe string '%s' is not a Palindrome String\n", x);
}