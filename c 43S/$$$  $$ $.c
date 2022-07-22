#include <stdio.h>

void main(){
    int n;
    printf("\nEnter the number of rows: ");
    scanf("%d", &n);
    int x = n;
    for(int i = 1; i <= n; i ++){
        for(int j = 1; j <= x; j ++)
            printf("%c  ", 36);
        x--;
        printf("\n");
    }
}