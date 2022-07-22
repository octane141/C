#include <stdio.h>

void main(){
    char ch1[500];
    printf("\nEnter the text: ");
    gets(ch1);
    FILE *x;
    x = fopen("file.txt", "w");
    fprintf(x, "%s", ch1);
    fclose(x);
}