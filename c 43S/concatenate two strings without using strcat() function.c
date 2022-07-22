#include <stdio.h>
#include <string.h>

void main(){
    char x[100];
    char y[100];
    char z[200] = "";
    printf("\nEnter the two strings to be concatenated:\n");
    gets(x);
    gets(y);
    int lenx = strlen(x);
    int leny = strlen(y);
    int len = lenx + leny;
    int i = 0;
    while(i < lenx){
        z[i] = x[i];
        i++;
    }
    int j = 0;
    while(i < len && j < leny){
        z[i] = y[j];
        i++;
        j++;
    }
    printf("\nFinal Concatenated String: %s", z);
}