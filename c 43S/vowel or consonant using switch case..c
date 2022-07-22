#include <stdio.h>
#include <string.h>

int vowelcheck(char X);

void main(){
    char x;
    printf("\nEnter the character to be checked: ");
    scanf("%c", &x);
    if(vowelcheck(x) == 1)
        printf("\n%c is a Vowel\n", x);
    else
        printf("\n%c is a Consonent\n", x);
}

int vowelcheck(char X){
    int y = X;
    if(y == 65 || y == 69 || y == 73 || y == 79 || y == 85)
        return(1);
    else if(y == 97 || y == 101 || y == 105 || y == 111 || y == 117)
        return(1);
    else
        return(0);
}