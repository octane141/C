#include <stdio.h>

void main(){
    int r;
    printf("\nEnter the number of rows: ");
    scanf("%d", &r);
    int x = r;
    for(int i = 1; i <= r; i ++){
        for(int j = 1; j <= i; j ++)
            printf("%d  ", x);
        x--;
        printf("\n");
    }
}