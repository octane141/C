#include <stdio.h>

void main(){
    int r, x = 65;
    printf("\nEnter the number of rows: ");
    scanf("%d", &r);
    for(int i = 1; i <= r; i ++){
        for(int j = 1; j <= i; j ++){
            printf("%c  ", x);
            x++;
        }
        printf("\n");
    }
}