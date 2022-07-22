#include <stdio.h>

void main(){
    int n;
    printf("\nEnter the number of rows: ");
    scanf("%d", &n);
    int k = 1;
    for(int  i = 1; i <= n; i ++){
        for(int j = 1; j <= i; j ++){
            printf("%d  ", k);
            k ++;
        }
        printf("\n");
    }
}