#include <stdio.h>

//main function
void main(){
    int n;
    printf("\nEnter the number of columns: ");
    scanf("%d", &n);
    int x = n;
    for(int i = 0; i < n; i ++){
        for(int j = 1; j <= x; j ++)
            printf("%d  ", x);
        x--;
        printf("\n");
    }
}