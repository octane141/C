#include <stdio.h>
#include <stdlib.h>

void main(){
    char ch1[500];
    FILE *source, *target;
    char source_file[] = "sourcefile.txt";
    char target_file[] = "targetfile.txt";
    source = fopen(source_file, "w");
    printf("\nEnter the text: ");
    gets(ch1);
    fprintf(source, "%s", ch1);
    fclose(source);
    source = fopen(source_file, "r");
    if(source == NULL){
        printf("Press any key to exit ...\n");
        fclose(source);
        exit(EXIT_FAILURE);
    }
    target = fopen(target_file, "w");
    char ch2[500];
    while(fscanf(source, "%s", ch2) != EOF)
        fprintf(target, "%s", ch2);
    fclose(target);
    target = fopen(target_file, "r");
    char ch3[500];
    rewind(source);
    printf("\nText from Source File:-\n");
    while(fscanf(source, "%s", ch3) != EOF)
        printf("%s\n", ch3);
    fclose(source);
    char ch4[500];
    if(target == NULL){
        printf("Press any key to exit ...\n");
        fclose(target);
        exit(EXIT_FAILURE);
    }
    while(fscanf(target, "%s", ch4) != EOF)
        printf("\nText from Target File:-\n%s\n", ch4);
    fclose(target);
}