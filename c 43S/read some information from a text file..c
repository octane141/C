#include <stdio.h>
#include <stdlib.h>

void main(){
    char ch1[500];
    printf("\nEnter the text: ");
    gets(ch1);
    FILE *x;
    x = fopen("file.txt", "w");
    fprintf(x, "%s", ch1);
    fclose(x);
    x = fopen("file.txt", "r");
    char ch2[500];
    if(x == NULL){
        printf("Press any key to exit ...\n");
        fclose(x);
        exit(EXIT_FAILURE);
    }
    printf("\nThe File Contents are:-\n");
    while(fscanf(x, "%s", ch2) != EOF)
        printf("%s", ch2);
    fclose(x);
}