#include <stdio.h>

void main(){
    int r, x;
    printf("\nEnter the number of rows: ");
    scanf("%d", &r);    
    for(int i = 1; i <= r; i ++){
        x = r;
        for(int j = 1; j <= i; j ++){
            printf("%d  ", x);
            x--;
        }
        printf("\n");
    }
}