#include <stdio.h>

//main function
void main(){
    int n;
    printf("\nEnter the number of columns: ");
    scanf("%d", &n);
    int x = n;
    for(int i = 0; i < n; i ++){
        int a = n;
        for(int j = 1; j <= x; j ++){
            printf("%d  ", a);
            a--;
        }
        x--;
        printf("\n");
    }
}